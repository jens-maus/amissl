#include <proto/intuition.h>
#include <intuition/intuition.h>
#include <internal/amissl.h>

#include <stdio.h>
#include <string.h>

struct iob ** __iob = NULL;
FILE **__sF = NULL;

int fprintf(UNUSED FILE *stream, const char *format, ...)
{
  va_list ap;
  struct EasyStruct ErrReq;
  char error[512];

  va_start(ap, format);
  vsnprintf(error, sizeof(error), format, ap);
  va_end(ap);

  ErrReq.es_StructSize   = sizeof(struct EasyStruct);
  ErrReq.es_Flags        = 0;
  ErrReq.es_Title        = (STRPTR)"AmiSSL/OpenSSL internal error";
  ErrReq.es_TextFormat   = error;
  ErrReq.es_GadgetFormat = (STRPTR)"Ok";

  // Open an Easy Requester
  EasyRequestArgs(NULL, &ErrReq, NULL, NULL);

  return strlen(error);
}
