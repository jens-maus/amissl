#include <stdlib.h>

void bzero(void *s, size_t n)
{
  unsigned char* p=s;

  while(n--)
    *p++ = 0;

  return s;
}
