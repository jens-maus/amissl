#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

int
connect(
	int s,
	const struct sockaddr *name,
	int namelen)
{
  int r;

  r = MTCP_Connect((struct Socket *)s, (struct sockaddr *)name);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}

