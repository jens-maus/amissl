/*
 * Copyright 2019-2023 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <internal/thread_arch.h>

#if defined(OPENSSL_THREADS_AMISSL)

# include <proto/exec.h>

# if defined(__amigaos4__)

#  define ALLOC_LOCK(mutex) mutex = AllocSysObject(ASOT_MUTEX, NULL)
#  define FREE_LOCK(mutex) if (mutex != NULL) FreeSysObject(ASOT_MUTEX, mutex)
#  define OBTAIN_LOCK(mutex) MutexObtain(mutex)
#  define ATTEMPT_LOCK(mutex) MutexAttempt(mutex)
#  define RELEASE_LOCK(mutex) MutexRelease(mutex)

# else

#  define ALLOC_LOCK(sem) if ((sem = OPENSSL_zalloc(sizeof(struct SignalSemaphore))) != NULL) InitSemaphore((struct SignalSemaphore *)sem)
#  define FREE_LOCK(sem) if (sem != NULL) OPENSSL_free(sem)
#  define OBTAIN_LOCK(sem) ObtainSemaphore((struct SignalSemaphore *)sem)
#  define ATTEMPT_LOCK(sem) AttemptSemaphore((struct SignalSemaphore *)sem)
#  define RELEASE_LOCK(sem) ReleaseSemaphore((struct SignalSemaphore *)sem)

# endif

CRYPTO_MUTEX *ossl_crypto_mutex_new(void)
{
    CRYPTO_MUTEX *mutex;
    ALLOC_LOCK(mutex);
    return mutex;
}

void ossl_crypto_mutex_lock(CRYPTO_MUTEX *mutex)
{
    OBTAIN_LOCK(mutex);
}

int ossl_crypto_mutex_try_lock(CRYPTO_MUTEX *mutex)
{
    return ATTEMPT_LOCK(mutex);
}

void ossl_crypto_mutex_unlock(CRYPTO_MUTEX *mutex)
{
    RELEASE_LOCK(mutex);
}

void ossl_crypto_mutex_free(CRYPTO_MUTEX **mutex)
{
    FREE_LOCK(*mutex);
    *mutex = NULL;
}

CRYPTO_CONDVAR *ossl_crypto_condvar_new(void)
{
    return NULL;
}

void ossl_crypto_condvar_wait(CRYPTO_CONDVAR *cv, CRYPTO_MUTEX *mutex)
{
}

void ossl_crypto_condvar_wait_timeout(CRYPTO_CONDVAR *cv, CRYPTO_MUTEX *mutex,
                                      OSSL_TIME deadline)
{
}

void ossl_crypto_condvar_broadcast(CRYPTO_CONDVAR *cv)
{
}

void ossl_crypto_condvar_signal(CRYPTO_CONDVAR *cv)
{
}

void ossl_crypto_condvar_free(CRYPTO_CONDVAR **cv)
{
}

#endif
