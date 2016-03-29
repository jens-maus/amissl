#include <sys/types.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#include <internal/amissl.h>
#endif

#include "libcmt.h"

ssize_t send(int sockfd, const void *buf, size_t len, int flags)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->send(sockfd, (void *)buf, len, flags);
  else return -1;
#else
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
			case TCPIP_MLink:
				return amitcp_Send(sockfd, buf, len, flags);
				break;
			case TCPIP_IN225:
				return in225_send(sockfd, buf, len, flags);
				break;
			case TCPIP_Termite:
				return termite_send(sockfd, (void *)buf, len, flags);
				break;
		}
	}

	return(-1);
#endif
}
