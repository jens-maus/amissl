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
int (accept)(int sockfd, struct sockaddr *addr, socklen_t *addrlen)
#else
LONG (accept)(LONG sockfd, struct sockaddr *addr, LONG *addrlen)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->accept(sockfd, addr, addrlen);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return accept(sockfd, addr, addrlen);
  else return -1;
#else
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_Miami:
			case TCPIP_MLink:
			case TCPIP_AmiTCP:
				return amitcp_Accept(sockfd, addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_accept(sockfd, addr, addrlen);
				break;
			case TCPIP_Termite:
				return termite_accept(sockfd, addr, addrlen);
				break;
		}
	}

	return(-1);
#endif
}
