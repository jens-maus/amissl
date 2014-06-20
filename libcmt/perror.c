#include <stdio.h>

void perror(const char * s)
{
  if(s != NULL)
    fprintf(stderr,"%s\n",s);
}
