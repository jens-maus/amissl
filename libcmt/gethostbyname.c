#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#include "libcmt.h"
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

struct hostent *
gethostbyname(
	      const char *name)
{
#ifdef __amigaos4__
  GETISOCKET_NOERRNO(); // h_errno isn't used by openssl
  if(ISocket) return ISocket->gethostbyname(name);
  else return -1;
#else
  SETUPSTATE();
  struct hostent *r;

  r = MTCP_GetHostByName(state->stack, (char *)name);
  if (r == 0) {
    state->errno = MTCP_ErrNo(state->stack);
  }
  return r;
#endif
}
