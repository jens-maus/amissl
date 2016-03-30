#include "libcmt.h"

#if !defined(__MORPHOS__)
void syslog(int priority UNUSED, const char *format UNUSED, ...)
{
  // do nothing
}
#endif
