#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

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
    SetAmiSSLerrno(EINVAL);
  }
  else {
    r = MTCP_GetSockOpt((struct Socket *)s, optname, optval, optlen);
    if (r == -1) {
      SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
    }
  }
  return r;
}
