#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

int
socket(
       int domain,
       int type,
       int protocol)
{
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
}

