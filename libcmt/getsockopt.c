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

long
getsockopt(
	   long s,
	   long level,
	   long optname,
	   void *optval,
	   long *optlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->getsockopt(s,level,optname,optval,(long *)optlen);
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
				return amitcp_GetSockOpt(s, level, optname, optval, (int *)optlen);
				break;
			case TCPIP_IN225:
				return in225_getsockopt(s, level, optname, optval, (int *)optlen);
				break;
			case TCPIP_Termite:
				if (optname == SO_ERROR)
				{
					*(int *)optval = 0;
					return 0;
				}
				if(state->errno_ptr)
				{
					*state->errno_ptr = EINVAL;
				}
				else
				{
					state->local_errno = EINVAL;
					state->socket_base_owns_errno = 0;
				}
				return -1;
				break;
		}
	}

	return(-1);
#endif
}
