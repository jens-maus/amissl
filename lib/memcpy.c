#include <stdlib.h>

void *memcpy(void *s1,const void *s2,size_t n)
{
  unsigned char *p1=s1;
  const unsigned char *p2=s2;

  while(n--)
  {
    *p1++=*p2++;
  }
  return s1;
}
