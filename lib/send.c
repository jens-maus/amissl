#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

ssize_t
send(
     int s,
     const void *buf,
     size_t len,
     int flags)
{
  ssize_t r;

  r = IbNet_Send((struct Socket *)s, (void *)buf, len, flags);
  if (r == -1) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return r;
}

