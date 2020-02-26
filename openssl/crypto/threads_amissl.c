/*
 * Copyright 2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/crypto.h>
#include <openssl/lhash.h>

#if defined(OPENSSL_THREADS) && !defined(CRYPTO_TDEBUG) && defined(OPENSSL_SYS_AMIGA)

#include <proto/exec.h>

#if defined(__amigaos4__)
#define ALLOCSEMAPHORE(sem, type) sem = (type *)AllocSysObjectTags(ASOT_SEMAPHORE, ASOSEM_Size, sizeof(type), TAG_DONE)
#define FREESEMAPHORE(sem) if (sem != NULL) FreeSysObject(ASOT_SEMAPHORE, sem)
#else
#define ALLOCSEMAPHORE(sem, type) if ((sem = (type *)OPENSSL_malloc(sizeof(type))) != NULL) InitSemaphore((struct SignalSemaphore *)sem)
#define FREESEMAPHORE(sem) if (sem != NULL) OPENSSL_free(sem)
#endif

static struct SignalSemaphore *RunOnceLock = NULL;

int CRYPTO_THREAD_setup(void)
{
    ALLOCSEMAPHORE(RunOnceLock, struct SignalSemaphore);
    return (RunOnceLock != NULL) ? 1 : 0;
}

int CRYPTO_THREAD_cleanup(void)
{
    FREESEMAPHORE(RunOnceLock);
    return 1;
}

CRYPTO_RWLOCK *CRYPTO_THREAD_lock_new(void)
{
    CRYPTO_RWLOCK *lock;
    ALLOCSEMAPHORE(lock, struct SignalSemaphore);
    return lock;
}

int CRYPTO_THREAD_read_lock(CRYPTO_RWLOCK *lock)
{
    ObtainSemaphoreShared((struct SignalSemaphore *)lock);
    return 1;
}

int CRYPTO_THREAD_write_lock(CRYPTO_RWLOCK *lock)
{
    ObtainSemaphore((struct SignalSemaphore *)lock);
    return 1;
}

int CRYPTO_THREAD_unlock(CRYPTO_RWLOCK *lock)
{
    ReleaseSemaphore((struct SignalSemaphore *)lock);
    return 1;
}

void CRYPTO_THREAD_lock_free(CRYPTO_RWLOCK *lock)
{
    FREESEMAPHORE(lock);
}

int CRYPTO_THREAD_run_once(CRYPTO_ONCE *once, void (*init)(void))
{
    ObtainSemaphore(RunOnceLock);

    if (*once == CRYPTO_ONCE_STATIC_INIT) {
        init();
        *once = 1;
    }

    ReleaseSemaphore(RunOnceLock);

    return 1;
}

typedef struct thread_key_st
{
	struct SignalSemaphore lock;
	OPENSSL_LHASH *hash;
} THREAD_KEY;

typedef struct thread_task_value_st
{
	struct Task *task;
	void *data;
} THREAD_TASK_VALUE;

static unsigned long task_hash(const void *a_void)
{
    return(((unsigned long)((THREAD_TASK_VALUE *)a_void)->task)*13);
}

static int task_cmp(const void *a_void, const void *b_void)
{
    return((int)((long)((THREAD_TASK_VALUE *)a_void)->task -
                 (long)((THREAD_TASK_VALUE *)b_void)->task));
}

int CRYPTO_THREAD_init_local(CRYPTO_THREAD_LOCAL *key, void (*cleanup)(void *))
{
    THREAD_KEY *keydata;
    ALLOCSEMAPHORE(keydata, THREAD_KEY);

    if (keydata != NULL) {
        keydata->hash = NULL;
        *key = (CRYPTO_THREAD_LOCAL)keydata;
        return 1;
    }

    return 0;
}

void *CRYPTO_THREAD_get_local(CRYPTO_THREAD_LOCAL *key)
{
    THREAD_KEY *keydata = (THREAD_KEY *)*key;
    THREAD_TASK_VALUE tmp, *value = NULL;

    if (keydata != NULL) {
        ObtainSemaphoreShared(&keydata->lock);

        if (keydata->hash != NULL) {
            tmp.task = FindTask(NULL);
            value = OPENSSL_LH_retrieve(keydata->hash, &tmp);
        }

        ReleaseSemaphore(&keydata->lock);
    }

    return value ? value->data : NULL;
}

int CRYPTO_THREAD_set_local(CRYPTO_THREAD_LOCAL *key, void *val)
{
    THREAD_KEY *keydata = (THREAD_KEY *)*key;
    THREAD_TASK_VALUE tmp, *value = NULL;

    if (keydata != NULL) {
        tmp.task = FindTask(NULL);

        ObtainSemaphore(&keydata->lock);

        if (val == NULL) {
            /* DELETE */
            if (keydata->hash != NULL)
                value = OPENSSL_LH_retrieve(keydata->hash, &tmp);

            if (value != NULL) {
                OPENSSL_LH_delete(keydata->hash, value);
                OPENSSL_free(value);
                /* make sure we don't leak memory */
                if (OPENSSL_LH_num_items(keydata->hash) == 0) {
                    OPENSSL_LH_free(keydata->hash);
                    keydata->hash = NULL;
                }
            }
        }
        else {
            /* SET */
            if (keydata->hash == NULL)
                keydata->hash = OPENSSL_LH_new(task_hash, task_cmp);
            else
                value = OPENSSL_LH_retrieve(keydata->hash, &tmp);

            if (keydata->hash != NULL) {
                if (value == NULL)
                    value = OPENSSL_malloc(sizeof(THREAD_TASK_VALUE));

                if (value != NULL) {
                    value->task = tmp.task;
                    value->data = val;
                    OPENSSL_LH_insert(keydata->hash, value);
                }
            }
        }

        ReleaseSemaphore(&keydata->lock);
    }

    return value ? 1 : 0;
}

static void free_task_value(void *value)
{
    OPENSSL_free(value);
}

int CRYPTO_THREAD_cleanup_local(CRYPTO_THREAD_LOCAL *key)
{
    THREAD_KEY *keydata;

    if ((keydata = (THREAD_KEY *)*key)) {
	if (keydata->hash) {
            OPENSSL_LH_doall(keydata->hash, free_task_value);
            OPENSSL_LH_free(keydata->hash);
        }
        FREESEMAPHORE(keydata);
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
    CRYPTO_THREAD_write_lock(lock);

    *val += amount;
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
