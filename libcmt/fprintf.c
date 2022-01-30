#include <proto/intuition.h>
#include <intuition/intuition.h>
#include <internal/amissl.h>

#include <stdio.h>
#include <string.h>

#include "libcmt.h"

#if 0
struct iob ** __iob = NULL;
FILE **__sF = NULL;
#endif

int fprintf(UNUSED FILE *stream, const char *format, ...)
{
  va_list ap;
  char error[512];

  va_start(ap, format);
  vsnprintf(error, sizeof(error), format, ap);
  va_end(ap);

  ShowRequester(SR_ERROR,NULL,error,NULL);

  return strlen(error);
}
