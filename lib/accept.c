#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
accept(
       int s,
       struct sockaddr *addr,
       int *addrlen)
{
  struct Socket *r;

  r = IbNet_Accept((struct Socket *)s, addr, addrlen);
  if (r == 0) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return (int)r;
}

