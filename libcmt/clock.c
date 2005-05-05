#include <time.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <exec/semaphores.h>
#include <devices/timer.h>
#include <dos/dos.h>

#if 0

struct MsgPort *clockPort;
struct timerequest *clockReq;
struct SignalSemaphore ClockSemaphore;
ULONG base;

void _STD_150_clock_term(void)
{
	if(clockReq) CloseDevice((struct IORequest *)clockReq);
	if(clockReq) DeleteExtIO((struct IORequest *)clockReq);
	if(clockPort) DeleteMsgPort(clockPort);
	clockReq = NULL;
	clockPort = NULL;
}

int _STI_150_clock_init(void)
{
	InitSemaphore(&ClockSemaphore);
	if(clockPort = CreateMsgPort())
	{
		if(clockReq = (struct timerequest *)CreateExtIO(clockPort,sizeof(struct timerequest)))
		{
			if(!OpenDevice( TIMERNAME,UNIT_MICROHZ,(struct IORequest *)clockReq,0))
			{
				if(!DoIO((struct IORequest *)clockReq))
				{
					base =  clockReq->tr_time.tv_micro / (1000000/CLOCKS_PER_SEC);
					base += clockReq->tr_time.tv_secs * (1000000/CLOCKS_PER_SEC);
				}
				return 0;
			}
		}
	}
	_STD_150_clock_term();
	return 1;
}

clock_t clock(void)
{
	ObtainSemaphore(&ClockSemaphore);
	if(!DoIO((struct IORequest *)clockReq))
	{
		ULONG tics;
		tics =  clockReq->tr_time.tv_micro / (1000000/CLOCKS_PER_SEC);
		tics += clockReq->tr_time.tv_secs * (1000000/CLOCKS_PER_SEC);
		return tics-base;
	}
	ReleaseSemaphore(&ClockSemaphore);
	return (clock_t)-1;
}

#else
#if 0
ULONG base;

int _STI_150_clock_init(void)
{
	struct DateStamp ds;
	DateStamp(&ds);
	base = ds.ds_Minute + ds.ds_Days * 60*24;
	return 1;
}

clock_t clock(void)
{
	struct DateStamp ds;
	ULONG tics;
	DateStamp(&ds);
	tics = ds.ds_Minute + ds.ds_Days * 60*24;
	return (tics-base)*CLOCKS_PER_SEC;
}
#endif
#endif
