#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "ibnet.h"
#include "ibsslbase.h"

int
socket(
       int domain,
       int type,
       int protocol)
{
  struct Socket *r = 0;
  LIBEAY_STATE *p;

  if (domain != AF_INET || type != SOCK_STREAM || 
      (protocol != IPPROTO_IP && protocol != IPPROTO_TCP)) {
    errno = EINVAL;
  }
  else {
    p = GetLIBeayState();
    if (!p) {
      errno = ENOMEM;
    }
    else {
      r = IbNet_Socket(p->stack, 1);
      if (r == 0) {
	errno = IbNet_ErrNo(p->stack);
      }
    }
  }
  return (int)r;
}

