#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

ssize_t
recv(
     int s,
     void *buf,
     size_t len,
     int flags)
{
  ssize_t r;

  r = IbNet_Recv((struct Socket *)s, buf, len, flags);
  if (r == -1) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return r;
}

