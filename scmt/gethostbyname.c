#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

struct hostent *
gethostbyname(
	      const char *name)
{
  SETUPSTATE();
  struct hostent *r;

  r = MTCP_GetHostByName(state->stack, (char *)name);
  if (r == 0) {
    state->errno = MTCP_ErrNo(state->stack);
  }
  return r;
}
