#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>
#include <time.h>
#include <libraries/amissl.h>

LONG GMTOffset=0xffff0000L;

time_t time(time_t *ptr)
{
	struct DosLibrary *DOSBase;
	struct DateStamp ds;
	time_t ret = 252460800; /* 1. 1. 1970. - 1. 1. 1978. */
	if(DOSBase = (struct DosLibrary *)OpenLibrary("dos.library",36L))
	{
		if(GMTOffset == 0xffff0000L)
		{
			struct Library *LocaleBase;
			struct Locale *Loc;

			GMTOffset=0; /* In case we fail down below */
			if (LocaleBase = OpenLibrary("locale.library", 38))
			{
				if (Loc = OpenLocale(NULL))
				{
					GMTOffset = Loc->loc_GMTOffset;
					CloseLocale(Loc);
				}
				CloseLibrary(LocaleBase);
			}
		}

		ret += GMTOffset;
		DateStamp(&ds);

		ret += ds.ds_Days * 86400;
		ret += ds.ds_Minute * 60;
		ret += ds.ds_Tick / TICKS_PER_SECOND;

		if (ptr)
			*ptr = ret;
		CloseLibrary((struct Library *)DOSBase);
	}

	return(ret);
}
