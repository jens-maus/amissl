#include <time.h>

#include <proto/dos.h>

/* Greenwich mean time offset and daylight savings time flag 
 */

long __gmtoffset=0;
int  __dstflag=0;

time_t time(time_t *tloc)
{ struct DateStamp t;
  time_t ti;
  DateStamp(&t); /* Get timestamp */
  ti=((t.ds_Days+2922)*1440+t.ds_Minute+__gmtoffset)*60+
     t.ds_Tick/TICKS_PER_SECOND;
  if(tloc!=NULL)
    *tloc=ti;
  return ti;
}
