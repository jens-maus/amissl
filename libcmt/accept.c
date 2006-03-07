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
accept(
       long s,
       struct sockaddr *addr,
       long *addrlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->accept(s,addr,(LONG *)addrlen);
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
				return amitcp_Accept(s,addr,(LONG *)addrlen);
				break;
			case TCPIP_IN225:
				return in225_accept(s,addr,(int *)addrlen);
				break;
			case TCPIP_Termite:
				return termite_accept(s,addr,(int *)addrlen);
				break;
		}
	}

	return(-1);
#endif
}
