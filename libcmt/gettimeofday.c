#include <proto/timer.h>
#include <proto/exec.h>

#include <sys/time.h>

#define UNIX_TIME_OFFSET 252460800

#if !defined(__amigaos4__) || !defined(__NEW_TIMEVAL_DEFINITION_USED__)
#include <exec/io.h>
struct TimeVal
{
  ULONG Seconds;
  ULONG Microseconds;
};

struct TimeRequest
{
  struct IORequest Request;
  struct TimeVal   Time;
};
#define TIMEVAL(x)  (APTR)(x)
#else
#define TIMEVAL(x)  (x)
#endif

extern LONG GMTOffset;

int gettimeofday(struct timeval *tp, struct timezone *tzp)
{
  int result = -1;
  ULONG seconds;
  ULONG microseconds;
  struct TimeVal tv;
  struct MsgPort *port = NULL;
  double entropy_added = 0;
  struct TimeRequest *tr = NULL;

  if((port = CreateMsgPort()) &&
     (tr = (struct IOStdReq *)CreateIORequest(port, sizeof(*tr))))
  {
    if(OpenDevice(TIMERNAME, UNIT_ENTROPY, (struct IORequest *)tr, 0) == 0)
    {
      struct TimerIFace *ITimer = NULL;
      struct Device *TimerBase;

      if((TimerBase = tr->Request.io_Device) &&
         (ITimer = (struct TimerIFace *)GetInterface((struct Library *)TimerBase, "main", 1, NULL)))
      {
        GetSysTime(TIMEVAL(&tv));

        seconds = tv.Seconds;
        microseconds = tv.Microseconds;
      
        /* Convert the number of seconds so that they match the Unix epoch, which
           starts (January 1st, 1970) eight years before the AmigaOS epoch. */
        seconds += UNIX_TIME_OFFSET;
      
        /* If possible, adjust for the local time zone. We do this because the
           AmigaOS system time is returned in local time and we want to return
           it in UTC. */
        seconds += 60 * GMTOffset;
      
        if(tp != NULL)
        {
          tp->tv_sec  = (long)seconds;
          tp->tv_usec = (long)microseconds;
        }
      
        if(tzp != NULL)
        {
          tzp->tz_minuteswest = GMTOffset;
      
          /* The -1 means "we do not know if the time given is in
             daylight savings time". */
          tzp->tz_dsttime = -1;
        }

        result = 0;
      }

      DropInterface((struct Interface *)ITimer);
      CloseDevice((struct IORequest *)tr);
    }

    DeleteIORequest((struct IORequest *)tr);
    DeleteMsgPort(port);
  }

  return(result);
}
