#include <stdlib.h>

int memcmp(const void *s1,const void *s2,size_t n)
{
  const unsigned char *p1=s1,*p2=s2;
  unsigned long r,c;

  if((r=n))
  {
    c=0;
    do
    {
      r=*p1++;
      ((unsigned char)c)=*p2++;
    } while (!(r-=c) && --n);
  }
  return r;
}
