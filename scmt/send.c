#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <libraries/amissl.h>

ssize_t
send(
     int s,
     const void *buf,
     size_t len,
     int flags)
{
  ssize_t r;

  r = MTCP_Send((struct Socket *)s, (void *)buf, len, flags);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}

