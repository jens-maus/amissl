#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

int
closesocket(
	    int s)
{
  int r;

  r = MTCP_CloseSocket((struct Socket *)s);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}

