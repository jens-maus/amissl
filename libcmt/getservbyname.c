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

struct servent *
getservbyname(
	      const char *name,
	      const char *proto)
{
#ifdef __amigaos4__
  GETISOCKET_NOERRNO(); // openssl does not care about the error code for getservbyname
  if(ISocket) return ISocket->getservbyname(name,proto);
  else return -1;
#else
  SETUPSTATE();
  struct servent *r;

  r = MTCP_GetServByName(state->stack, (char *)name, (char *)proto);
  if (r == 0) {
    state->errno = MTCP_ErrNo(state->stack);
  }
  return r;
#endif
}

