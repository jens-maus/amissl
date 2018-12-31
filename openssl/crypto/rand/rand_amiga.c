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

size_t rand_pool_acquire_entropy(RAND_POOL *pool)
{
	unsigned char temp_buffer[SHA_DIGEST_LENGTH], data_buffer[SHA_DIGEST_LENGTH];
	struct MsgPort *port = NULL;
	size_t bytes_needed = rand_pool_bytes_needed(pool, 1 /*entropy_factor*/);
	struct TimeRequest *time_request = NULL;
#ifdef __amigaos4__
	struct IOStdReq *entropy_request = NULL;

	if ((port = CreateMsgPort())
	    && (entropy_request = (struct IOStdReq *)CreateIORequest(port, sizeof(*entropy_request))))
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
					if (bytes_read > bytes_needed) bytes_read = bytes_needed;
					SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
					rand_pool_add(pool, &data_buffer[0], bytes_read, 8 * bytes_read);
					bytes_needed -= bytes_read;
				}
				else
					break;
			}

			CloseDevice((struct IORequest *)entropy_request);
		}
	}

	DeleteIORequest((struct IORequest *)entropy_request);
#endif /* __amigaos4__ */

	/* The following block will be used on "classic" machines. It does not generate
	 * a high degree of randomness, but it does the job since RAND_poll is
	 * called only once by OpenSSL to generate a 32 byte seed.
	 */
	if (bytes_needed > 0
	    && (port || (port = CreateMsgPort()))
	    && (time_request = (struct TimeRequest *)CreateIORequest(port, sizeof(*time_request))))
	{
		if (OpenDevice(TIMERNAME, UNIT_VBLANK, (struct IORequest *)time_request, 0) == 0)
		{
			#if defined(__amigaos4__)
			struct TimerIFace *ITimer = NULL;
			#endif
			struct Device *TimerBase;

			if ((TimerBase = time_request->Request.io_Device)
			#if defined(__amigaos4__)
			    && (ITimer = (struct TimerIFace *)GetInterface((struct Library *)TimerBase, "main", 1, NULL))
			#endif
			)
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

			#if defined(__amigaos4__)
			DropInterface((struct Interface *)ITimer);
			#endif
			CloseDevice((struct IORequest *)time_request);
		}
	}

	DeleteIORequest((struct IORequest *)time_request);

	DeleteMsgPort(port);

	return rand_pool_entropy_available(pool);
}

#endif /* OPENSSL_SYS_AMIGA */
