#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <libraries/amissl.h>

int
accept(
       int s,
       struct sockaddr *addr,
       int *addrlen)
{
  struct Socket *r;

  r = MTCP_Accept((struct Socket *)s, addr, addrlen);
  if (r == 0) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return (int)r;
}

