/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2024 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#include <openssl/crypto.h>
#include <openssl/lhash.h>
#include "internal/rcu.h"
#include "rcu_internal.h"

#if defined(OPENSSL_THREADS) && !defined(CRYPTO_TDEBUG) && defined(OPENSSL_SYS_AMIGA)

# include <proto/exec.h>

# if defined(__amigaos4__)

#  define ALLOC_LOCK(mutex, noop) mutex = AllocSysObject(ASOT_MUTEX, NULL)
#  define FREE_LOCK(mutex) if (mutex != NULL) FreeSysObject(ASOT_MUTEX, mutex)
#  define OBTAIN_LOCK(mutex) MutexObtain(mutex)
#  define OBTAIN_SHARED_LOCK(mutex) OBTAIN_LOCK(mutex)
#  define RELEASE_LOCK(mutex) MutexRelease(mutex)

static APTR RunOnceLock = NULL;

# else

#  define ALLOC_LOCK(sem, type) if ((sem = OPENSSL_zalloc(sizeof(type))) != NULL) InitSemaphore((struct SignalSemaphore *)sem)
#  define FREE_LOCK(sem) if (sem != NULL) OPENSSL_free(sem)
#  define OBTAIN_LOCK(sem) ObtainSemaphore((struct SignalSemaphore *)sem)
#  define OBTAIN_SHARED_LOCK(sem) ObtainSemaphoreShared((struct SignalSemaphore *)sem)
#  define RELEASE_LOCK(sem) ReleaseSemaphore((struct SignalSemaphore *)sem)

static struct SignalSemaphore *RunOnceLock = NULL;

# endif

struct rcu_lock_st {
    CRYPTO_RWLOCK *lock;
    struct rcu_cb_item *cb_items;
};

CRYPTO_RCU_LOCK *ossl_rcu_lock_new(int num_writers)
{
    struct rcu_lock_st *lock;

    if((lock = OPENSSL_zalloc(sizeof(*lock))))
    {
        if((lock->lock = CRYPTO_THREAD_lock_new()))
	{
	    return lock;
	}
	OPENSSL_free(lock);
    }

    return NULL;
}

void ossl_rcu_lock_free(CRYPTO_RCU_LOCK *lock)
{
    CRYPTO_THREAD_lock_free(lock->lock);
    OPENSSL_free(lock);
}

void ossl_rcu_read_lock(CRYPTO_RCU_LOCK *lock)
{
    CRYPTO_THREAD_read_lock(lock->lock);
}

void ossl_rcu_write_lock(CRYPTO_RCU_LOCK *lock)
{
    CRYPTO_THREAD_write_lock(lock->lock);
}

void ossl_rcu_write_unlock(CRYPTO_RCU_LOCK *lock)
{
    CRYPTO_THREAD_unlock(lock->lock);
}

void ossl_rcu_read_unlock(CRYPTO_RCU_LOCK *lock)
{
    CRYPTO_THREAD_unlock(lock->lock);
}

void ossl_synchronize_rcu(CRYPTO_RCU_LOCK *lock)
{
    struct rcu_cb_item *items;
    struct rcu_cb_item *tmp;

    CRYPTO_THREAD_write_lock(lock->lock);

    items = lock->cb_items;
    lock->cb_items = NULL;

    while (items != NULL) {
        tmp = items->next;
        items->fn(items->data);
        OPENSSL_free(items);
        items = tmp;
    }

    CRYPTO_THREAD_unlock(lock->lock);
}

int ossl_rcu_call(CRYPTO_RCU_LOCK *lock, rcu_cb_fn cb, void *data)
{
    struct rcu_cb_item *new = OPENSSL_zalloc(sizeof(*new));

    if (new == NULL)
        return 0;

    CRYPTO_THREAD_write_lock(lock->lock);

    new->fn = cb;
    new->data = data;
    new->next = lock->cb_items;
    lock->cb_items = new;

    CRYPTO_THREAD_unlock(lock->lock);

    return 1;
}

void *ossl_rcu_uptr_deref(void **p)
{
    return (void *)*p;
}

void ossl_rcu_assign_uptr(void **p, void **v)
{
    *(void **)p = *(void **)v;
}

int CRYPTO_THREAD_setup(void)
{
    ALLOC_LOCK(RunOnceLock, struct SignalSemaphore);
    return (RunOnceLock != NULL) ? 1 : 0;
}

int CRYPTO_THREAD_cleanup(void)
{
    FREE_LOCK(RunOnceLock);
    return 1;
}

CRYPTO_RWLOCK *CRYPTO_THREAD_lock_new(void)
{
    CRYPTO_RWLOCK *lock;
    ALLOC_LOCK(lock, struct SignalSemaphore);
    return lock;
}

__owur int CRYPTO_THREAD_read_lock(CRYPTO_RWLOCK *lock)
{
    OBTAIN_SHARED_LOCK(lock);
    return 1;
}

__owur int CRYPTO_THREAD_write_lock(CRYPTO_RWLOCK *lock)
{
    OBTAIN_LOCK(lock);
    return 1;
}

int CRYPTO_THREAD_unlock(CRYPTO_RWLOCK *lock)
{
    RELEASE_LOCK(lock);
    return 1;
}

void CRYPTO_THREAD_lock_free(CRYPTO_RWLOCK *lock)
{
    FREE_LOCK(lock);
}

int CRYPTO_THREAD_run_once(CRYPTO_ONCE *once, void (*init)(void))
{
    OBTAIN_LOCK(RunOnceLock);

    if (*once == CRYPTO_ONCE_STATIC_INIT) {
        init();
        *once = 1;
    }

    RELEASE_LOCK(RunOnceLock);

    return 1;
}

typedef struct thread_entry_st
{
	struct Task *task;
	void *data;
} THREAD_ENTRY;

# if defined(__amigaos4__)

#  define ALLOC_THREAD_KEY(key) \
  if ((key = OPENSSL_malloc(sizeof(THREAD_KEY)))) { \
    if ((ALLOC_LOCK(key->lock, 0)) == NULL) {	    \
      OPENSSL_free(key); \
      key = NULL; \
    } \
  }
#  define FREE_THREAD_KEY(key) if (key != NULL) { FREE_LOCK(key->lock); OPENSSL_free(key); } 
#  define LOCK_THREAD_KEY(key) OBTAIN_LOCK(key->lock)
#  define LOCK_SHARED_THREAD_KEY(key) OBTAIN_LOCK(key->lock)
#  define UNLOCK_THREAD_KEY(key) RELEASE_LOCK(key->lock)

typedef struct thread_key_st
{
    APTR lock;
    LHASH_OF(THREAD_ENTRY) *hashtable;
} THREAD_KEY;

# else

#  define ALLOC_THREAD_KEY(key) ALLOC_LOCK(key, THREAD_KEY)
#  define FREE_THREAD_KEY(key) FREE_LOCK(&(key->lock))
#  define LOCK_THREAD_KEY(key) OBTAIN_LOCK(&(key->lock))
#  define LOCK_SHARED_THREAD_KEY(key) OBTAIN_SHARED_LOCK(&(key->lock))
#  define UNLOCK_THREAD_KEY(key) RELEASE_LOCK(&(key->lock))

typedef struct thread_key_st
{
    struct SignalSemaphore lock;
    LHASH_OF(THREAD_ENTRY) *hashtable;
} THREAD_KEY;

# endif

DEFINE_LHASH_OF_EX(THREAD_ENTRY);

static unsigned long task_hash(const THREAD_ENTRY *e)
{
    return ((unsigned long)e->task) * 13;
}

static int task_cmp(const THREAD_ENTRY *a, const THREAD_ENTRY *b)
{
    return ((int)(a->task - b->task));
}

int CRYPTO_THREAD_init_local(CRYPTO_THREAD_LOCAL *key, void (*cleanup)(void *))
{
    THREAD_KEY *keydata;
    ALLOC_THREAD_KEY(keydata);

    if (keydata != NULL) {
        keydata->hashtable = NULL;
        *key = (CRYPTO_THREAD_LOCAL)keydata;
        return 1;
    }

    return 0;
}

void *CRYPTO_THREAD_get_local(CRYPTO_THREAD_LOCAL *key)
{
    THREAD_KEY *keydata = (THREAD_KEY *)*key;
    THREAD_ENTRY tmp, *entry = NULL;

    if (keydata != NULL) {
        
        LOCK_SHARED_THREAD_KEY(keydata);

        if (keydata->hashtable != NULL) {
            tmp.task = FindTask(NULL);
            entry = lh_THREAD_ENTRY_retrieve(keydata->hashtable, &tmp);
        }

        UNLOCK_THREAD_KEY(keydata);
    }

    return entry ? entry->data : NULL;
}

int CRYPTO_THREAD_set_local(CRYPTO_THREAD_LOCAL *key, void *val)
{
    THREAD_KEY *keydata = (THREAD_KEY *)*key;
    THREAD_ENTRY tmp, *entry = NULL;

    if (keydata != NULL) {
        tmp.task = FindTask(NULL);

        LOCK_THREAD_KEY(keydata);

        if (val == NULL) {
            /* DELETE */
            if (keydata->hashtable != NULL)
                entry = lh_THREAD_ENTRY_retrieve(keydata->hashtable, &tmp);

            if (entry != NULL) {
                lh_THREAD_ENTRY_delete(keydata->hashtable, entry);
                OPENSSL_free(entry);
                /* make sure we don't leak memory */
                if (lh_THREAD_ENTRY_num_items(keydata->hashtable) == 0) {
                    lh_THREAD_ENTRY_free(keydata->hashtable);
                    keydata->hashtable = NULL;
                }
            }
        }
        else {
            /* SET */
            if (keydata->hashtable == NULL)
                keydata->hashtable = lh_THREAD_ENTRY_new(task_hash, task_cmp);
            else
                entry = lh_THREAD_ENTRY_retrieve(keydata->hashtable, &tmp);

            if (keydata->hashtable != NULL) {
                if (entry == NULL)
                    entry = OPENSSL_malloc(sizeof(THREAD_ENTRY));

                if (entry != NULL) {
                    entry->task = tmp.task;
                    entry->data = val;
                    lh_THREAD_ENTRY_insert(keydata->hashtable, entry);
                }
            }
        }

        UNLOCK_THREAD_KEY(keydata);
    }

    return entry ? 1 : 0;
}

static void free_task_entry(THREAD_ENTRY *entry)
{
    OPENSSL_free(entry);
}

int CRYPTO_THREAD_cleanup_local(CRYPTO_THREAD_LOCAL *key)
{
    THREAD_KEY *keydata;

    if ((keydata = (THREAD_KEY *)*key)) {
        if (keydata->hashtable) {
            lh_THREAD_ENTRY_doall(keydata->hashtable, free_task_entry);
            lh_THREAD_ENTRY_free(keydata->hashtable);
        }
        FREE_THREAD_KEY(keydata);
        *key = 0;
        return 1;
    }

    return 0;
}

CRYPTO_THREAD_ID CRYPTO_THREAD_get_current_id(void)
{
    return ((CRYPTO_THREAD_ID)FindTask(NULL));
}

int CRYPTO_THREAD_compare_id(CRYPTO_THREAD_ID a, CRYPTO_THREAD_ID b)
{
    return (a == b);
}

int CRYPTO_atomic_add(int *val, int amount, int *ret, CRYPTO_RWLOCK *lock)
{
    if (lock == NULL)
	return 0;

    CRYPTO_THREAD_write_lock(lock);

    *val += amount;
    *ret  = *val;

    CRYPTO_THREAD_unlock(lock);

    return 1;
}

int CRYPTO_atomic_or(uint64_t *val, uint64_t op, uint64_t *ret,
                     CRYPTO_RWLOCK *lock)
{
    if (lock == NULL)
	return 0;

    CRYPTO_THREAD_write_lock(lock);

    *val |= op;
    *ret  = *val;

    CRYPTO_THREAD_unlock(lock);

    return 1;
}

int CRYPTO_atomic_load(uint64_t *val, uint64_t *ret, CRYPTO_RWLOCK *lock)
{
    if (lock == NULL)
	return 0;

    CRYPTO_THREAD_read_lock(lock);

    *ret  = *val;

    CRYPTO_THREAD_unlock(lock);

    return 1;
}

int CRYPTO_atomic_load_int(int *val, int *ret, CRYPTO_RWLOCK *lock)
{
    if (lock == NULL)
	return 0;

    CRYPTO_THREAD_read_lock(lock);

    *ret  = *val;

    CRYPTO_THREAD_unlock(lock);

    return 1;
}

int openssl_init_fork_handlers(void)
{
    return 0;
}

int openssl_get_fork_id(void)
{
    return 0;
}
#endif
