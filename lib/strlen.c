#include <stdlib.h>

size_t strlen(const char *string)
{
  const char *s=string;

  while(*s++)
    ;
  return ~(string-s);
}
