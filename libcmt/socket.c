#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#include "scmt.h"
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

int
socket(
       int domain,
       int type,
       int protocol)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->socket(domain,type,protocol);
  else return -1;
#else
  SETUPSTATE();
  struct Socket *r = 0;

  if (domain != AF_INET || type != SOCK_STREAM || 
      (protocol != IPPROTO_IP && protocol != IPPROTO_TCP)) {
    state->errno = EINVAL;
  }
  else {
    r = MTCP_Socket(state->stack, 1);
    if (r == 0) {
      state->errno = MTCP_ErrNo(state->stack);
    }
  }
  return (int)r;
#endif
}

