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
int (getsockopt)(int sockfd, int level, int optname, void *optval, socklen_t *optlen)
#else
LONG (getsockopt)(LONG sockfd, LONG level, LONG optname, void *optval, LONG *optlen)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->getsockopt(sockfd, level, optname, optval, optlen);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return getsockopt(sockfd, level, optname, optval, optlen);
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
				return amitcp_GetSockOpt(sockfd, level, optname, optval, optlen);
				break;
			case TCPIP_IN225:
				return in225_getsockopt(sockfd, level, optname, optval, optlen);
				break;
			case TCPIP_Termite:
				if (optname == SO_ERROR)
				{
					*(int *)optval = 0;
					return 0;
				}
				else
				{
					SetAmiSSLerrno(EINVAL);
					return -1;
				}
				break;
		}
	}

	return(-1);
#endif
}
