#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#include "libcmt.h"
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

int
getsockopt(
	   int s,
	   int level,
	   int optname,
	   void *optval,
	   int *optlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->getsockopt(s,level,optname,optval,optlen);
  else return -1;
#else
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
#endif
}
