#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

struct hostent *
gethostbyname(
	      const char *name)
{
  struct hostent *r = 0;
  LIBEAY_STATE *p;

  p = GetLIBeayState();
  if (!p) {
    errno = ENOMEM;
  }
  else {
    r = IbNet_GetHostByName(p->stack, (char *)name);
    if (r == 0) {
      errno = IbNet_ErrNo(p->stack);
    }
  }
  return r;
}
