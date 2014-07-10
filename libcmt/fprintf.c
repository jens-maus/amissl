#include <proto/intuition.h>
#include <intuition/intuition.h>

#include <stdio.h>
#include <string.h>

int BIO_vsnprintf(char *buf, size_t n, const char *format, va_list args);

struct iob ** __iob = NULL;

int fprintf(FILE *stream, const char *format, ...)
{
  va_list ap;
  struct EasyStruct ErrReq;
  char error[512];

  va_start(ap, format);
  BIO_vsnprintf(error, sizeof(error), format, ap);
  va_end(ap);

  ErrReq.es_StructSize   = sizeof(struct EasyStruct);
  ErrReq.es_Flags        = 0;
  ErrReq.es_Title        = "AmiSSL/OpenSSL internal error";
  ErrReq.es_TextFormat   = error;
  ErrReq.es_GadgetFormat = "Ok";

  // Open an Easy Requester
  EasyRequestArgs(NULL, &ErrReq, NULL, NULL);

  return strlen(error);
}
