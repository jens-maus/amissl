#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <libraries/amissl.h>

int
setsockopt(
     int s,
     int level,
     int optname,
     char *optval,
     int optlen)
{
  int r;

  r = MTCP_SetSockOpt((struct Socket *)s, level, optname, optval, optlen);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}

