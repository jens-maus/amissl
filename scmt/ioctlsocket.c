#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <libraries/amissl.h>

int
ioctlsocket(
	    int s,
	    unsigned long request,
	    char *argp)
{
  int r;

  r = MTCP_IoctlSocket((struct Socket *)s, request, argp);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}
