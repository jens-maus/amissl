#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

int
shutdown(
	 int s,
	 int how)
{
  int r;

  r = MTCP_Shutdown((struct Socket *)s, how);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}
