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

ssize_t
recv(
     int s,
     void *buf,
     size_t len,
     int flags)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->recv(s,buf,len,flags);
  else return -1;
#else
  ssize_t r;

  r = MTCP_Recv((struct Socket *)s, buf, len, flags);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
#endif
}
