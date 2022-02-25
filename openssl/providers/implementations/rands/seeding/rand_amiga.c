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

/* Maximum number of attempts to get a delay of 1 microsecond that is not equal to 0 */
#define MAX_ATTEMPTS 1000

#ifdef __amigaos4__

#ifdef CreateMsgPort
#undef CreateMsgPort
#endif
#define CreateMsgPort() AllocSysObject(ASOT_PORT,NULL)
#ifdef DeleteMsgPort
#undef DeleteMsgPort
#endif
#define DeleteMsgPort(msgPort) FreeSysObject(ASOT_PORT,msgPort)
#ifdef CreateIORequest
#undef CreateIORequest
#endif
#define CreateIORequest(ioReplyPort,size) AllocSysObjectTags(ASOT_IOREQUEST,ASOIOR_ReplyPort,ioReplyPort,ASOIOR_Size,size,TAG_DONE)
#ifdef DeleteIORequest
#undef DeleteIORequest
#endif
#define DeleteIORequest(ioReq) FreeSysObject(ASOT_IOREQUEST,ioReq)

#define DECL_TIMER_INTERFACE() struct TimerIFace *ITimer = GlobalTimer.ITimer

#else

#define GetInterface(a, b, c, d) 1
#define DropInterface(x)

#define DECL_TIMER_INTERFACE() struct Device *TimerBase = GlobalTimer.TimerBase

#endif /* !__amigaos4__ */

/* Global timer, for use only by rand_pool_add_nonce_data() and
** rand_pool_add_additional_data() - timer.device function calls
** only (request must not be used in a messaging context!)
*/
static struct {
	struct TimeRequest *time_request;
	#if defined(__amigaos4__)
	struct TimerIFace *ITimer;
	#else
	struct Device *TimerBase;
	#endif
} GlobalTimer;

#if defined(__amigaos4__)
static void read_entropy(RAND_POOL *pool, size_t bytes_needed, struct MsgPort *port)
{
	unsigned char temp_buffer[SHA256_DIGEST_LENGTH], data_buffer[SHA256_DIGEST_LENGTH];
	struct IOStdReq *entropy_request;

	if ((entropy_request = (struct IOStdReq *)CreateIORequest(port, sizeof(*entropy_request))))
	{
		if (OpenDevice(TIMERNAME, UNIT_ENTROPY, (struct IORequest *)entropy_request, 0) == 0)
		{
			while(bytes_needed > 0)
			{
				entropy_request->io_Command = TR_READENTROPY;
				entropy_request->io_Data = &temp_buffer[0];
				entropy_request->io_Length = sizeof(temp_buffer);

				if (DoIO((struct IORequest *)entropy_request) == 0)
				{
					size_t bytes_read = entropy_request->io_Actual;
					SHA256(&temp_buffer[0], bytes_read, &data_buffer[0]);
					if (bytes_read > bytes_needed) bytes_read = bytes_needed;
					ossl_rand_pool_add(pool, &data_buffer[0], bytes_read, 8 * bytes_read);
					bytes_needed -= bytes_read;
				}
				else
				{
					break;
				}
			}
			CloseDevice((struct IORequest *)entropy_request);
		}
		DeleteIORequest((struct IORequest *)entropy_request);
	}
}
#endif /* __amigaos4__ */

/*
** This must be re-entrant as may be called by multiple tasks hence must
** always allocate our own port and requests and not use the global timer
*/
size_t ossl_pool_acquire_entropy(RAND_POOL *pool)
{
	struct TimeRequest *time_request;
	struct MsgPort *port = NULL;
	size_t bytes_needed;

	#if defined(__amigaos4__)
	bytes_needed = ossl_rand_pool_bytes_needed(pool, 1 /*entropy_factor*/);

	if ((bytes_needed > 0) && (port = CreateMsgPort()))
	{
		read_entropy(pool,bytes_needed,port);
	}
	#endif

	/* The following block will be used on "classic" machines. It does not generate
	 * a high degree of randomness, but it does the job since rand_pool_acquire_entropy
	 * is usually called infrequently by OpenSSL to generate a 32 byte seed.
	 */
	bytes_needed = ossl_rand_pool_bytes_needed(pool, 4 /*entropy_factor*/);

	if ((bytes_needed > 0) &&
	    (port || (port = CreateMsgPort())) &&
	    (time_request = (struct TimeRequest *)CreateIORequest(port, sizeof(*time_request))))
	{
		if (OpenDevice(TIMERNAME, UNIT_MICROHZ, &time_request->Request, 0) == 0)
		{
			#if defined(__amigaos4__)
			struct TimerIFace *ITimer;
			if (time_request->Request.io_Device &&
			    (ITimer = (struct TimerIFace *)GetInterface(&time_request->Request.io_Device->dd_Library, "main", 1, NULL)))
			#else
			struct Device *TimerBase;
			if ((TimerBase = time_request->Request.io_Device))
			#endif
			{
				unsigned char temp_buffer[SHA256_DIGEST_LENGTH], data_buffer[SHA256_DIGEST_LENGTH];
				struct EClockVal curr_eclock;
				ULONG prev_ev_lo = 0;
				struct TimeVal tv;
				int i, attempt;
				BOOL aborted;

				ReadEClock(&curr_eclock);
				aborted = FALSE;

				while(!aborted && bytes_needed > 0)
				{
					for(i = 0;
					    !aborted && i < (int)sizeof(temp_buffer) - (int)sizeof(ULONG);
					    i++)
					{
						attempt = 0;

						/* Ask for a one microsecond delay and measure the time
						 * the delay actually took.
						 */
						do
						{
							time_request->Request.io_Command = TR_ADDREQUEST;
							time_request->Time.Seconds = 0;
							time_request->Time.Microseconds = 1;

							if (DoIO((struct IORequest *)time_request) == 0)
							{
								prev_ev_lo = curr_eclock.ev_lo;
								ReadEClock(&curr_eclock);

								attempt++;
							}
							else
								aborted = TRUE;
						} while(!aborted && prev_ev_lo == 0 && attempt < MAX_ATTEMPTS);

						if (attempt >= MAX_ATTEMPTS)
							aborted = TRUE;

						/* Since we are going for randomness, ev_hi is irrelevant */
						temp_buffer[i] = (unsigned char)(curr_eclock.ev_lo - prev_ev_lo);
					}

					GetSysTime(TIMEVAL(&tv));

					if (sizeof(temp_buffer) > sizeof(ULONG))
						*(ULONG *)&temp_buffer[sizeof(temp_buffer) - sizeof(ULONG)]
						    = tv.Microseconds;

					/* Shuffle the bits around and specify that about
					 * one fourth of it adds to the entropy.
					 */
					if (!aborted)
					{
						size_t bytes_read = (bytes_needed < sizeof(data_buffer)) ? bytes_needed : sizeof(data_buffer);
						SHA256(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
						ossl_rand_pool_add(pool, &data_buffer[0], bytes_read, 2 * bytes_read);
						bytes_needed -= bytes_read;
					}
				}
				#if defined(__amigaos4__)
				DropInterface((struct Interface *)ITimer);
				#endif
			}
			CloseDevice(&time_request->Request);
		}
		DeleteIORequest(&time_request->Request);
	}

	DeleteMsgPort(port);

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
	DECL_TIMER_INTERFACE();

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
	DECL_TIMER_INTERFACE();

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
	struct MsgPort *port;
	if ((port = CreateMsgPort()))
	{
		if ((GlobalTimer.time_request = (struct TimeRequest *)CreateIORequest(port, sizeof(*GlobalTimer.time_request))))
		{
			if (OpenDevice(TIMERNAME, UNIT_MICROHZ, &GlobalTimer.time_request->Request, 0) == 0)
			{
#if defined(__amigaos4__)
				if (GlobalTimer.time_request->Request.io_Device)
				{
					if ((GlobalTimer.ITimer = (struct TimerIFace *)GetInterface(&GlobalTimer.time_request->Request.io_Device->dd_Library, "main", 1, NULL)))
					{
						return 1;
					}
				}
#else
				if ((GlobalTimer.TimerBase = GlobalTimer.time_request->Request.io_Device))
				{
					return 1;
				}
#endif
				CloseDevice(&GlobalTimer.time_request->Request);
			}
			DeleteIORequest(&GlobalTimer.time_request->Request);
		}
		DeleteMsgPort(port);
	}
	return 0;
}

void ossl_rand_pool_cleanup(void)
{
        struct MsgPort *port = GlobalTimer.time_request->Request.io_Message.mn_ReplyPort;
#if defined(__amigaos4__)
	DropInterface((struct Interface *)GlobalTimer.ITimer);
#endif
	CloseDevice(&GlobalTimer.time_request->Request);
	DeleteIORequest(&GlobalTimer.time_request->Request);
	DeleteMsgPort(port);
}

void ossl_rand_pool_keep_random_devices_open(int keep)
{
}

#endif /* OPENSSL_SYS_AMIGA */
