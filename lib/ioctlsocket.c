#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
ioctlsocket(
	    int s,
	    unsigned long request,
	    char *argp)
{
  int r;

  r = IbNet_IoctlSocket((struct Socket *)s, request, argp);
  if (r == -1) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return r;
}
