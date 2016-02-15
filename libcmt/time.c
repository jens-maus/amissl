#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>
#include <time.h>
#include <internal/amissl.h>

extern LONG __gmt_offset;

time_t time(time_t *ptr)
{
	struct DateStamp ds;
	time_t ret = 252460800; /* 1. 1. 1970. - 1. 1. 1978. */

	ret += __gmt_offset;
	DateStamp(&ds);

	ret += ds.ds_Days * 86400;
	ret += ds.ds_Minute * 60;
	ret += ds.ds_Tick / TICKS_PER_SECOND;

	if (ptr)
		*ptr = ret;

	return(ret);
}
