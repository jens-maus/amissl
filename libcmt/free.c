#include <stdlib.h>
#include <exec/semaphores.h>
#include <proto/exec.h>

extern struct SignalSemaphore __mem_cs;
extern void *__pool;

void
free(
     void *p)
{
  ObtainSemaphore(&__mem_cs);
  p = &((ULONG *)p)[-1];
  FreePooled(__pool, p, *(ULONG *)p);
  ReleaseSemaphore(&__mem_cs);
}
