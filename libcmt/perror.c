#include "libcmt.h"

void perror(const char * s)
{
  if(s != NULL)
    ShowRequester(SR_ERROR,NULL,s,NULL);
}
