#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <strsup.h>

int vsscanf(const char *s,const char *format,va_list args)
{
  FILE buffer;
  buffer.p=(char *)s;
  buffer.flags=0x204;
  buffer.incount=strlen(s);
  buffer.outcount=0;
  buffer.tmpp=NULL;
  return vfscanf(&buffer,format,args);
}
