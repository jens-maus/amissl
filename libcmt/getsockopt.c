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

int
getsockopt(
	   int s,
	   int level,
	   int optname,
	   void *optval,
	   int *optlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->getsockopt(s,level,optname,optval,(long *)optlen);
  else return -1;
#else
	GETSTATE();
	switch(s->TCPIPStackType)
	{
		case TCPIP_Miami:
		case TCPIP_AmiTCP:
		case TCPIP_MLink:
			return amitcp_GetSockOpt(s, level, optname, optval, optlen);
			break;
		case TCPIP_IN225:
			return in225_getsockopt(s, level, optname, optval, optlen);
			break;
		case TCPIP_Termite:
			if (optname == SO_ERROR)
			{
				*(int *)optval = 0;
				return 0;
			}
			state->TCPIPStack->ErrNo = EINVAL;
			return -1;
			break;
	}
#endif
}
