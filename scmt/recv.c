#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

ssize_t
recv(
     int s,
     void *buf,
     size_t len,
     int flags)
{
  ssize_t r;

  r = MTCP_Recv((struct Socket *)s, buf, len, flags);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}

