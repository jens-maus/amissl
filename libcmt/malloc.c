#include <stdlib.h>
#include <exec/semaphores.h>
#include <proto/exec.h>

extern struct SignalSemaphore __mem_cs;
extern void *__pool;

void *
malloc(
       size_t n)
{
  ULONG *p;

  ObtainSemaphore(&__mem_cs);
  n += sizeof(*p);
  p = AllocPooled(__pool, n);
  if (p)
    *p++ = n;
  ReleaseSemaphore(&__mem_cs);
  return p;
}

/* Only used by the (currently) unsupported FD interface */

void open(void)
{}

void close(void)
{}

void lseek(void)
{}

void read(void)
{}

void write(void)
{}

