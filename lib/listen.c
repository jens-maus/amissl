#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
listen(
       int s,
       int backlog)
{
  int r;

  r = IbNet_Listen((struct Socket *)s, backlog);
  if (r == -1) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return r;
}

