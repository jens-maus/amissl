#include <proto/dos.h>

#include "libcmt.h"

extern ULONG __clock_base;

clock_t clock(void)
{
  struct DateStamp ds;
  ULONG clock_curr;

  DateStamp(&ds);
  clock_curr = ((ULONG)ds.ds_Tick + TICKS_PER_SECOND * 60 * ((ULONG)ds.ds_Minute + 24 * 60 * (ULONG)ds.ds_Days))
             * CLOCKS_PER_SEC / TICKS_PER_SECOND;

  return(clock_curr - __clock_base);
}
