#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#include "scmt.h"
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

int
setsockopt(
     int s,
     int level,
     int optname,
     char *optval,
     int optlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->setsockopt(s,level,optname,optval,optlen);
  else return -1;
#else
  int r;

  r = MTCP_SetSockOpt((struct Socket *)s, level, optname, optval, optlen);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
#endif
}

