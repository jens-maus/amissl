#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/locale.h>

#include "libcmt.h"

#ifdef __amigaos4__
struct Library *LocaleBase = NULL;
struct LocaleIFace *ILocale = NULL;
#elif !defined(__MORPHOS__)
struct LocaleBase *LocaleBase = NULL;
#else
struct Library *LocaleBase = NULL;
#endif

// global variables throughout libcmt
struct MinList __filelist; /* list of open files (fflush() needs also access) */
struct SignalSemaphore __filelist_cs;
struct SignalSemaphore __mem_cs;
void *__mem_pool = NULL;
ULONG __clock_base = 0;
LONG __gmt_offset = 0;

void __init_libcmt(void)
{
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);

  // initialize memory stuff
  kprintf("__mem_cs addr: %08lx\n", &__mem_cs);
  kprintf("__mem_pool addr: %08lx\n", &__mem_pool);
  InitSemaphore(&__mem_cs);

#if defined(__amigaos4__)
  __mem_pool = AllocSysObjectTags(ASOT_MEMPOOL, ASOPOOL_MFlags, MEMF_PRIVATE, ASOPOOL_Puddle, 8192, ASOPOOL_Threshold, 4096, ASOPOOL_Name, "AmiSSL", TAG_DONE);
#else
  __mem_pool = CreatePool(MEMF_ANY, 8192, 4096);
#endif

  // initialize file i/o stuff
  kprintf("__filelist addr: %08lx\n", &__filelist);
  kprintf("__filelist_cs addr: %08lx\n", &__filelist_cs);
	NewList((struct List *)&__filelist);
	InitSemaphore(&__filelist_cs);

  // initialize clock/locale stuff
  kprintf("__clock_base addr: %08lx\n", &__clock_base);
  kprintf("__gmt_offset addr: %08lx\n", &__gmt_offset);
#if defined(__amigaos4__)
  if((DOSBase = OpenLibrary("dos.library", 50)) &&
     (LocaleBase = OpenLibrary("locale.library", 50)) &&
     (IDOS = (struct DOSIFace *)GetInterface(DOSBase,"main",1,NULL)) &&
     (ILocale = (struct LocaleIFace *)GetInterface(LocaleBase,"main",1,NULL)))
#else
  if(((DOSBase = (struct DosLibrary *)OpenLibrary("dos.library", 37)) &&
      (LocaleBase = (struct LocaleBase *)OpenLibrary("locale.library", 38))))
#endif
  {
    struct Locale *locale;
    struct DateStamp ds;

    if((locale = OpenLocale(NULL)) != NULL)
    {
      __gmt_offset = locale->loc_GMTOffset;
      kprintf("__gmt_offset: %ld\n", __gmt_offset);
      CloseLocale(locale);
    }
    else
      kprintf("ERROR on OpenLocale()\n");

    DateStamp(&ds);

    __clock_base = ((ULONG)ds.ds_Tick + TICKS_PER_SECOND * 60 * ((ULONG)ds.ds_Minute + 24 * 60 * (ULONG)ds.ds_Days))
                   * CLOCKS_PER_SEC / TICKS_PER_SECOND;
  }
  else
    kprintf("ERROR on OpenLibrary calls\n");
}

void __free_libcmt(void)
{
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);

  // close helper libs
  kprintf("__clock_base addr: %08lx\n", &__clock_base);
  kprintf("__gmt_offset addr: %08lx\n", &__gmt_offset);
#if defined(__amigaos4__)
  DropInterface((struct Interface *)ILocale);
  ILocale = NULL;
  DropInterface((struct Interface *)IDOS);
  IDOS = NULL;
#endif
  CloseLibrary((struct Library *)LocaleBase);
  LocaleBase = NULL;
  CloseLibrary((struct Library *)DOSBase);
  DOSBase = NULL;

  kprintf("__mem_pool addr: %08lx\n", &__mem_pool);
  // free memory related stuff
#ifdef __amigaos4__
  if(__mem_pool)
    FreeSysObject(ASOT_MEMPOOL, __mem_pool);
#else
  if(__mem_pool)
    DeletePool(__mem_pool);
#endif
}
