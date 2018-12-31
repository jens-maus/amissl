#include <openssl/rand.h>
#include <openssl/sha.h>
#include "rand_lcl.h"
#include "internal/rand_int.h"

#ifdef OPENSSL_SYS_AMIGA

#include <proto/exec.h>
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

#else

#define GetInterface(a, b, c, d) 1
#define DropInterface(x)

#endif /* !__amigaos4__ */

static struct MsgPort *port;
static struct TimeRequest *time_request;

#if defined(__amigaos4__)
static struct IOStdReq *entropy_request;
struct TimerIFace *ITimer;
#else
struct Device *TimerBase;
#endif

size_t rand_pool_acquire_entropy(RAND_POOL *pool)
{
	unsigned char temp_buffer[SHA_DIGEST_LENGTH], data_buffer[SHA_DIGEST_LENGTH];
	size_t bytes_needed = rand_pool_bytes_needed(pool, 1 /*entropy_factor*/);

#if defined(__amigaos4__)
	while(bytes_needed > 0)
	{
		entropy_request->io_Command = TR_READENTROPY;
		entropy_request->io_Data = &temp_buffer[0];
		entropy_request->io_Length = sizeof(temp_buffer);

		if (DoIO((struct IORequest *)entropy_request) == 0)
		{
			size_t bytes_read = entropy_request->io_Actual;
			if (bytes_read > bytes_needed) bytes_read = bytes_needed;
			SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
			rand_pool_add(pool, &data_buffer[0], bytes_read, 8 * bytes_read);
			bytes_needed -= bytes_read;
		}
		else
		{
			break;
		}
	}
#endif /* __amigaos4__ */

	/* The following block will be used on "classic" machines. It does not generate
	 * a high degree of randomness, but it does the job since RAND_poll is
	 * called only once by OpenSSL to generate a 32 byte seed.
	 */
	if (bytes_needed > 0)
	{
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
				size_t bytes_read = sizeof(data_buffer) / 4;
				if (bytes_read > bytes_needed) bytes_read = bytes_needed;
				SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
				rand_pool_add(pool, &data_buffer[0], bytes_read, 8 * bytes_read);
				bytes_needed -= bytes_read;
			}
		}
	}

	return rand_pool_entropy_available(pool);
}

int rand_pool_add_nonce_data(RAND_POOL *pool)
{
	struct {
		struct Task *pid;
		CRYPTO_THREAD_ID tid;
		struct TimeVal tv;
	} data = { 0 };

	/*
	 * Add process id, thread id, and a high resolution timestamp to
	 * ensure that the nonce is unique whith high probability for
	 * different process instances.
	 */
	data.pid = FindTask(NULL);
	data.tid = CRYPTO_THREAD_get_current_id();
	GetSysTime(TIMEVAL(&data.tv));

	return rand_pool_add(pool, (unsigned char *)&data, sizeof(data), 0);
}

int rand_pool_add_additional_data(RAND_POOL *pool)
{
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

	return rand_pool_add(pool, (unsigned char *)&data, sizeof(data), 0);
}

int rand_pool_init(void)
{
	if ((port = CreateMsgPort()))
	{
		if ((time_request = (struct TimeRequest *)CreateIORequest(port, sizeof(*time_request))))
		{
			if (OpenDevice(TIMERNAME, UNIT_VBLANK, (struct IORequest *)time_request, 0) == 0)
			{
#if defined(__amigaos4__)
				if (time_request->Request.io_Device)
				{
					if ((ITimer = (struct TimerIFace *)GetInterface(&time_request->Request.io_Device->dd_Library, "main", 1, NULL)))
					{
						if ((entropy_request = (struct IOStdReq *)CreateIORequest(port, sizeof(*entropy_request))))
						{
							if (OpenDevice(TIMERNAME, UNIT_ENTROPY, (struct IORequest *)entropy_request, 0) == 0)
							{
								return 1;
							}
							DeleteIORequest((struct IORequest *)entropy_request);
						}
						DropInterface((struct Interface *)ITimer);
					}
				}
#else
				if ((TimerBase = time_request->Request.io_Device))
				{
					return 1;
				}
#endif
				CloseDevice(&time_request->Request);
			}
			DeleteIORequest(&time_request->Request);
		}
		DeleteMsgPort(port);
	}
	return 0;
}

void rand_pool_cleanup(void)
{
#if defined(__amigaos4__)
	CloseDevice((struct IORequest *)entropy_request);
	DeleteIORequest((struct IORequest *)entropy_request);
	DropInterface((struct Interface *)ITimer);
#endif
	CloseDevice(&time_request->Request);
	DeleteIORequest(&time_request->Request);
	DeleteMsgPort(port);
}

void rand_pool_keep_random_devices_open(int keep)
{
}

#endif /* OPENSSL_SYS_AMIGA */
