#include <stdio.h>
#include <stdarg.h>

int sscanf(const char *s,const char *format,...)
{ int retval;
  va_list args;
  va_start(args,format);
  retval=vsscanf(s,format,args);
  va_end(args);
  return retval;
}
