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
ioctlsocket(
	    int s,
	    unsigned long request,
	    char *argp)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->IoctlSocket(s,request,argp);
  else return -1;
#else
  int r;

  r = MTCP_IoctlSocket((struct Socket *)s, request, argp);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
#endif
}
