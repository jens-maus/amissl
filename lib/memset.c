#include <stdlib.h>

void *memset(void *s,int c,size_t n)
{ 
  if (n != 0)
  {
    unsigned char *p=s;
    do
    {
      *p++=c;
    }while(--n != 0);
  }
  return s;
}
