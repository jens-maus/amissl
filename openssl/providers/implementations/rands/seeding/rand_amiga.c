/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
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

#include <openssl/rand.h>
#include <openssl/sha.h>
#include "crypto/rand_pool.h"
#include "crypto/rand.h"

#ifdef OPENSSL_SYS_AMIGA

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/timer.h>
#include <devices/timer.h>
#include <timeval.h>

#include "libcmt.h"

/*
** This must be re-entrant as may be called by multiple tasks hence must
** always allocate our own port and requests
*/

size_t ossl_pool_acquire_entropy(RAND_POOL *pool)
{
    struct TimeRequest *time_request;
    size_t bytes_needed, bytes_read;
    unsigned char *buffer;

    GETSTATE();

    #if defined(__amigaos4__)
    struct IOStdReq *entropy_request;

    bytes_needed = ossl_rand_pool_bytes_needed(pool, 1 /*entropy_factor*/);

    if (bytes_needed > 0 && (entropy_request = OpenEntropy(state)))
    {
        do
        {
	    buffer = ossl_rand_pool_add_begin(pool, bytes_needed);
            entropy_request->io_Command = TR_READENTROPY;
            entropy_request->io_Data = buffer;
            entropy_request->io_Length = bytes_needed;

            if (buffer && DoIO((struct IORequest *)entropy_request) == 0)
            {
	        bytes_read = entropy_request->io_Actual;
	        if (bytes_read > bytes_needed) bytes_read = bytes_needed;
                ossl_rand_pool_add_end(pool, bytes_read, 8 * bytes_read);
                bytes_needed -= bytes_read;
            }
            else
            {
	        break; /* abort */
            }
        } while (bytes_needed > 0);
    }
    #endif

    /* The following block will be used on "classic" machines. It does not generate
     * a high degree of randomness, but it does the job since rand_pool_acquire_entropy
     * is usually called infrequently by OpenSSL to generate a 32 byte seed.
     */
    bytes_needed = ossl_rand_pool_bytes_needed(pool, 4 /*entropy_factor*/);

    if (bytes_needed > 0 && (buffer = ossl_rand_pool_add_begin(pool, bytes_needed)) && (time_request = OpenTimer(state)))
    {
        struct EClockVal curr_eclock;

        GETTIMERSTATE(state);

        bytes_read = 0;

        do
        {
            /* Ask for a one microsecond delay and measure the time
             * the delay actually took.
             */
            time_request->Request.io_Command = TR_ADDREQUEST;
            time_request->Time.Seconds = 0;
            time_request->Time.Microseconds = 1;

            if (DoIO((struct IORequest *)time_request) != 0)
            {
	        break; /* abort */
            }

            ReadEClock(&curr_eclock);

            /* Since we are going for randomness, ev_hi is irrelevant */
            *buffer++ = (unsigned char)(curr_eclock.ev_lo & 0xff);

        } while (++bytes_read < bytes_needed);

        /* Only add a quarter of the bits to the entropy */
        ossl_rand_pool_add_end(pool, bytes_read, 2 * bytes_read);
    }

    return ossl_rand_pool_entropy_available(pool);
}

/*
** As getpid() and CRYPTO_THREAD_get_current_id() both result in
** FindTask(NULL), we need to get something different if possible.
*/
static uint32_t amiga_get_process_id(void)
{
    struct Task *task = FindTask(NULL);
    uint32_t ret;

    if (task->tc_Node.ln_Type == NT_PROCESS)
    {
#if defined(__amigaos4__)
        ret = (uint32_t)((struct Process *)task)->pr_ProcessID;
#else
        ret = (uint32_t)((struct Process *)task)->pr_SegList;
        if (!ret)
        {
            ret = (uint32_t)task;
        }
#endif
    }
    else
    {
        ret = (uint32_t)task;
    }

    return ret;
}

int ossl_pool_add_nonce_data(RAND_POOL *pool)
{
    GETTIMER();

    struct {
        uint32_t pid;
        CRYPTO_THREAD_ID tid;
        struct TimeVal tv;
    } data = { 0 };

    /*
     * Add process id, thread id, and a high resolution timestamp to
     * ensure that the nonce is unique whith high probability for
     * different process instances.
     */
    data.pid = amiga_get_process_id();
    data.tid = CRYPTO_THREAD_get_current_id();
    GetSysTime(TIMEVAL(&data.tv));

    return ossl_rand_pool_add(pool, (unsigned char *)&data, sizeof(data), 0);
}

/*
** Frequently called, so must have low overhead
*/
int ossl_rand_pool_add_additional_data(RAND_POOL *pool)
{
    GETTIMER();

    struct {
        CRYPTO_THREAD_ID tid;
        struct EClockVal curr_eclock;
    } data = { 0 };

    /*
     * Add some noise from the thread id and a high resolution timer.
     * The thread id adds a little randomness if the drbg is accessed
     * concurrently (which is the case for the <master> drbg).
     */
    data.tid = CRYPTO_THREAD_get_current_id();
    ReadEClock(&data.curr_eclock);

    return ossl_rand_pool_add(pool, (unsigned char *)&data, sizeof(data), 0);
}

int ossl_rand_pool_init(void)
{
    GETSTATE();
    return OpenTimer(state) ? 1 : 0;
}

void ossl_rand_pool_cleanup(void)
{
    /* timer resources are freed by CleanupAmiSSL() */
}

void ossl_rand_pool_keep_random_devices_open(int keep)
{
}

#endif /* OPENSSL_SYS_AMIGA */
