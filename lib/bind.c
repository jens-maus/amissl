#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
bind(
     int s,
     const struct sockaddr *name,
     int namelen)
{
  int r;

  r = IbNet_Bind((struct Socket *)s, (struct sockaddr *)name, namelen);
  if (r == -1) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return r;
}

