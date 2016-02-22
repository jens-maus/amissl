#include <stdlib.h>
#include <exec/semaphores.h>
#include <proto/exec.h>

#include "libcmt.h"

extern struct SignalSemaphore __mem_cs;
extern void *__mem_pool;

void free(void *p)
{
  #if 0
  ENTER();
  #endif

  if(p != NULL)
  {
    #if 0
    SHOWPOINTER(DBF_STARTUP, &__mem_cs);
    SHOWPOINTER(DBF_STARTUP, &__mem_pool);
    #endif

    ObtainSemaphore(&__mem_cs);
    p = &((ULONG *)p)[-1];
    FreePooled(__mem_pool, p, *(ULONG *)p);
    ReleaseSemaphore(&__mem_cs);
  }

  #if 0
  LEAVE();
  #endif
}
