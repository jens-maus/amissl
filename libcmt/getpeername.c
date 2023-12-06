#include <sys/types.h>
#include <netinet/in.h>

#include "libcmt.h"

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

#if !defined(__MORPHOS__)
int (getpeername)(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
#else
LONG (getpeername)(LONG sockfd, struct sockaddr *addr, LONG *addrlen)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->getpeername(sockfd, addr, addrlen);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return getpeername(sockfd, addr, addrlen);
  else return -1;
#else
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_Roadshow:
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
			case TCPIP_MLink:
				return amitcp_GetPeerName(sockfd, addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_getpeername(sockfd, addr, addrlen);
				break;
			case TCPIP_Termite:
				/* NOT SUPPORTED */
				break;
		}
	}

	return(-1);
#endif
}
