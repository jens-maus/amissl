#include <stdlib.h>
#include <exec/semaphores.h>
#include <proto/exec.h>

#include "libcmt.h"

extern struct SignalSemaphore __mem_cs;
extern void *__mem_pool;

void free(void *p)
{
  #if 0
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);
  #endif

  if(p != NULL)
  {
    #if 0
    kprintf("__mem_cs addr: %08lx\n", &__mem_cs);
    kprintf("__mem_pool addr: %08lx\n", &__mem_pool);
    #endif

    ObtainSemaphore(&__mem_cs);
    p = &((ULONG *)p)[-1];
    FreePooled(__mem_pool, p, *(ULONG *)p);
    ReleaseSemaphore(&__mem_cs);
  }
}
