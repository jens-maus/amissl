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

#include <proto/timer.h>
#include <proto/exec.h>
#include <timeval.h>

#include <sys/time.h>

#include "libcmt.h"

#define UNIX_TIME_OFFSET 252460800

extern LONG __gmt_offset;

int gettimeofday(struct timeval *tp, struct timezone *tzp)
{
  int result = -1;
  ULONG seconds;
  ULONG microseconds;
  struct TimeVal tv;

  GETSTATE();

  if(OpenTimer(state))
  {
    GETTIMERSTATE(state);

    GetSysTime(TIMEVAL(&tv));

    seconds = tv.Seconds;
    microseconds = tv.Microseconds;
      
    /* Convert the number of seconds so that they match the Unix epoch, which
       starts (January 1st, 1970) eight years before the AmigaOS epoch. */
    seconds += UNIX_TIME_OFFSET;

    /* If possible, adjust for the local time zone. We do this because the
       AmigaOS system time is returned in local time and we want to return
       it in UTC. */
    seconds += 60 * __gmt_offset;

    if(tp != NULL)
    {
      tp->tv_sec  = (long)seconds;
      tp->tv_usec = (long)microseconds;
    }

    if(tzp != NULL)
    {
      tzp->tz_minuteswest = __gmt_offset;

      /* The -1 means "we do not know if the time given is in
         daylight savings time". */
      tzp->tz_dsttime = -1;
    }

    result = 0;
  }

  return result;
}
