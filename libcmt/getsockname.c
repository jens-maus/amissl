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
int (getsockname)(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
#else
LONG (getsockname)(LONG sockfd, struct sockaddr *addr, LONG *addrlen)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->getsockname(sockfd, addr, addrlen);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return getsockname(sockfd, addr, addrlen);
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
				return amitcp_GetSockName(sockfd, addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_getsockname(sockfd, addr, addrlen);
				break;
			case TCPIP_Termite:
        return termite_getsockname(sockfd, addr, addrlen);
				break;
		}
	}

	return(-1);
#endif
}
