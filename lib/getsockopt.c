#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
getsockopt(
	   int s,
	   int level,
	   int optname,
	   void *optval,
	   int *optlen)
{
  int r = -1;

  if (level != SOL_SOCKET) {
    errno = EINVAL;
  }
  else {
    r = IbNet_GetSockOpt((struct Socket *)s, optname, optval, optlen);
    if (r == -1) {
      errno = IbNet_SockErrNo((struct Socket *)s);
    }
  }
  return r;
}
