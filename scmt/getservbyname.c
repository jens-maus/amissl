#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>

struct servent *
getservbyname(
	      const char *name,
	      const char *proto)
{
  SETUPSTATE();
  struct servent *r;

  r = MTCP_GetServByName(state->stack, (char *)name, (char *)proto);
  if (r == 0) {
    state->errno = MTCP_ErrNo(state->stack);
  }
  return r;
}

