#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>
#include <time.h>
#include <libraries/amissl.h>

extern LONG GMTOffset;

time_t time(time_t *ptr)
{
	struct DateStamp ds;
	time_t ret = 252460800; /* 1. 1. 1970. - 1. 1. 1978. */

	ret += GMTOffset;
	DateStamp(&ds);

	ret += ds.ds_Days * 86400;
	ret += ds.ds_Minute * 60;
	ret += ds.ds_Tick / TICKS_PER_SECOND;

	if (ptr)
		*ptr = ret;

	return(ret);
}
