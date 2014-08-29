#include <openssl/rand.h>
#include <openssl/sha.h>
#include "rand_lcl.h"

#ifdef AMIGA

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

int RAND_poll(void)
{
	unsigned char temp_buffer[SHA_DIGEST_LENGTH], data_buffer[SHA_DIGEST_LENGTH];
	struct MsgPort *port = NULL;
	double entropy_added = 0;
	struct TimeRequest *time_request = NULL;
#ifdef __amigaos4__
	struct IOStdReq *entropy_request = NULL;

	if ((port = CreateMsgPort())
	    && (entropy_request = (struct IOStdReq *)CreateIORequest(port, sizeof(*entropy_request))))
	{
		if (OpenDevice(TIMERNAME, UNIT_ENTROPY, (struct IORequest *)entropy_request, 0) == 0)
		{
			while(entropy_added < ENTROPY_NEEDED)
			{
				entropy_request->io_Command = TR_READENTROPY;
				entropy_request->io_Data = &temp_buffer[0];
				entropy_request->io_Length = sizeof(temp_buffer);

				if (DoIO((struct IORequest *)entropy_request) == 0)
				{
					SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
					RAND_add(&data_buffer[0], sizeof(data_buffer), sizeof(data_buffer));
					entropy_added += sizeof(data_buffer);
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
	if (entropy_added < ENTROPY_NEEDED
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

				while(!aborted && entropy_added < ENTROPY_NEEDED)
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
						SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
						RAND_add(&data_buffer[0], sizeof(data_buffer), (double)sizeof(data_buffer) / 4);
						entropy_added += sizeof(data_buffer) / 4;
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

	return(entropy_added >= ENTROPY_NEEDED);
}

#endif /* AMIGA */
