#include <stdlib.h>
#include <exec/semaphores.h>
#include <proto/exec.h>

#include "libcmt.h"

extern struct SignalSemaphore __mem_cs;
extern void *__mem_pool;

void *
malloc(
       size_t n)
{
  ULONG *p;

  #if 0
  kprintf("%s:%ld\n", __FUNCTION__, __LINE__);

  kprintf("__mem_cs addr: %08lx\n", &__mem_cs);
  kprintf("__mem_pool addr: %08lx\n", &__mem_pool);
  #endif
 
  ObtainSemaphore(&__mem_cs);
  n += sizeof(*p);
  p = AllocPooled(__mem_pool, n);
  if (p)
    *p++ = n;
  ReleaseSemaphore(&__mem_cs);
  return p;
}
