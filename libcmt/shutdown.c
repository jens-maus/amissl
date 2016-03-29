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

int shutdown(int sockfd, int how)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->shutdown(sockfd, how);
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
				return amitcp_Shutdown(sockfd, how);
				break;
			case TCPIP_IN225:
				return in225_shutdown(sockfd, how);
				break;
			case TCPIP_Termite:
				return termite_shutdown(sockfd, how);
				break;
		}
	}

	return(-1);
#endif
}
