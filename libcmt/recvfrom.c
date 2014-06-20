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
recvfrom(
     long s,
     void *buf,
     long len,
     long flags,
     struct sockaddr *from,
     long *fromlen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->recvfrom(s,buf,len,flags,from,fromlen);
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
				return amitcp_Recv(s,buf,len,flags,from,fromlen);
				break;
			case TCPIP_IN225:
				return in225_recv(s,buf,len,flags,from,fromlen);
				break;
			case TCPIP_Termite:
				return termite_recv(s,buf,len,flags,from,fromlen);
				break;
		}
	}

	return(-1);
#endif
}
