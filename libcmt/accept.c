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
accept(
       int s,
       struct sockaddr *addr,
       int *addrlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->accept(s,addr,addrlen);
  else return -1;
#else
  struct Socket *r;

  r = MTCP_Accept((struct Socket *)s, addr, addrlen);
  if (r == 0) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return (int)r;
#endif
}

