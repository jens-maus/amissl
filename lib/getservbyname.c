#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

struct servent *
getservbyname(
	      const char *name,
	      const char *proto)
{
  struct servent *r = 0;
  LIBEAY_STATE *p;

  p = GetLIBeayState();
  if (!p) {
    errno = ENOMEM;
  }
  else {
    r = IbNet_GetServByName(p->stack, (char *)name, (char *)proto);
    if (r == 0) {
      errno = IbNet_ErrNo(p->stack);
    }
  }
  return r;
}

