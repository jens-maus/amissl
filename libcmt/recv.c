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
ssize_t (recv)(int sockfd, void *buf, size_t len, int flags)
#else
LONG (recv)(LONG sockfd, UBYTE *buf, LONG len, LONG flags)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->recv(sockfd, buf, len, flags);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return recv(sockfd, buf, len, flags);
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
				return amitcp_Recv(sockfd, buf, len, flags);
				break;
			case TCPIP_IN225:
				return in225_recv(sockfd, buf, len, flags);
				break;
			case TCPIP_Termite:
				return termite_recv(sockfd, buf, len, flags);
				break;
		}
	}

	return(-1);
#endif
}
