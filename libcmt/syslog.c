#include "libcmt.h"

#if defined(__MORPHOS__)
  #warning "Evaluate direct use of MorphOS own syslog"
#endif

void syslog(int priority UNUSED, const char *format UNUSED, ...)
{
  // do nothing
}
