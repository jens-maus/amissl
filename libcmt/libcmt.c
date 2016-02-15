#include <proto/exec.h>

#include "libcmt.h"

struct MinList __filelist; /* list of open files (fflush() needs also access) */
struct SignalSemaphore __filelist_cs;
struct SignalSemaphore __mem_cs;
void *__mem_pool = NULL;

void __init_libcmt(void)
{
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);

  // initialize memory stuff
  kprintf("__mem_cs addr: %08lx\n", &__mem_cs);
  kprintf("__mem_pool addr: %08lx\n", &__mem_pool);
  InitSemaphore(&__mem_cs);

#ifdef __amigaos4__
  __mem_pool = AllocSysObjectTags(ASOT_MEMPOOL, ASOPOOL_MFlags, MEMF_PRIVATE, ASOPOOL_Puddle, 8192, ASOPOOL_Threshold, 4096, ASOPOOL_Name, "AmiSSL", TAG_DONE);
#else
  __mem_pool = CreatePool(MEMF_ANY, 8192, 4096);
#endif

  // initialize file i/o stuff
  kprintf("__filelist addr: %08lx\n", &__filelist);
  kprintf("__filelist_cs addr: %08lx\n", &__filelist_cs);
	NewList((struct List *)&__filelist);
	InitSemaphore(&__filelist_cs);
}

void __free_libcmt(void)
{
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);

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
