#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
shutdown(
	 int s,
	 int how)
{
  int r;

  r = IbNet_Shutdown((struct Socket *)s, how);
  if (r == -1) {
    errno = IbNet_SockErrNo((struct Socket *)s);
  }
  return r;
}
