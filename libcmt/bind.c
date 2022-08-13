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
int (bind)(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
#else
LONG (bind)(LONG sockfd, const struct sockaddr *addr, LONG addrlen)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->bind(sockfd, (struct sockaddr *)addr, addrlen);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return bind(sockfd, addr, addrlen);
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
				return amitcp_Bind(sockfd, addr, addrlen);
				break;
			case TCPIP_IN225:
				return in225_bind(sockfd, (struct sockaddr *)addr, addrlen);
				break;
			case TCPIP_Termite:
				return termite_bind(sockfd, (char *)addr, addrlen);
				break;
		}
	}

	return(-1);
#endif
}
