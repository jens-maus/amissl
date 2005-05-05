#include <stdlib.h>
#include <proto/exec.h>

void *
realloc(
	void *p,
	size_t size)
{
  void *a;
  unsigned long l;
  if(size)
    a=malloc(size);
  else
    a=NULL;
  if(p!=NULL)
  { if(a!=NULL)
    { l=((ULONG *)p)[-1] - sizeof(ULONG);
      l=l<size?l:size;
      CopyMem(p,a,l);
    }
    if(size==0||a!=NULL)
      free(p);
  }
  return a;
}
