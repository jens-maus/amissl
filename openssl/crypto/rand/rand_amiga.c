#include <openssl/rand.h>
#include <openssl/sha.h>
#include "rand_lcl.h"

#ifdef AMIGA

#error Work in progress

#include <proto/exec.h>
#include <proto/timer.h>
#include <devices/timer.h>
		  
int RAND_poll(void)
{
	unsigned char temp_buffer[SHA_DIGEST_LENGTH], data_buffer[SHA_DIGEST_LENGTH];
	struct MsgPort *port = NULL;
	double entropy_added = 0;
	struct timerequest *time_request = NULL;
#ifdef __amigaos4__
	struct IOStdReq *request = NULL;

	if ((port = CreateMsgPort())
	    && (request = (struct IOStdReq *)CreateIORequest(port, sizeof(*request))))
	{
		if (OpenDevice(TIMERNAME, UNIT_ENTROPY, (struct IORequest *)request, 0) == 0)
		{
			while(entropy_added < ENTROPY_NEEDED)
			{
				request->io_Command = TR_READENTROPY;
				request->io_Data = &temp_buffer[0];
				request->io_Length = sizeof(temp_buffer);
	
				if (DoIO((struct IORequest *)request) == 0)
				{
					SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);
					RAND_add(&data_buffer[0], sizeof(data_buffer), sizeof(data_buffer));
					entropy_added += sizeof(data_buffer);
				}
				else
					break;
			}

			CloseDevice((struct IORequest *)request);
		}
	}

	DeleteIORequest((struct IORequest *)request);
#endif /* __amigaos4__ */

	if (entropy_added < ENTROPY_NEEDED
	    && (port || (port = CreateMsgPort()))
	    && (time_request = (struct timerequest *)CreateIORequest(port, sizeof(*time_request))))
	{
		if (OpenDevice(TIMERNAME, UNIT_!?!, (struct IORequest *)time_request, 0) == 0)
		{
			while(entropy_added < ENTROPY_NEEDED)
			{
				time_request->io_Command = !?!;
				!?!
	
				if (DoIO((struct IORequest *)time_request) == 0)
				{
					!?!
					SHA1(&temp_buffer[0], sizeof(temp_buffer), &data_buffer[0]);

					RAND_add(&data_buffer[0], sizeof(data_buffer), !?!);
					entropy_added += !?!;
				}
				else
					break;
			}

			CloseDevice((struct IORequest *)time_request);
		}
	}

	DeleteIORequest((struct IORequest *)time_request);

	DeleteMsgPort(port);

	return(entropy_added >= ENTROPY_NEEDED);
}

#endif /* AMIGA */
