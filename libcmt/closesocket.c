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

int
closesocket(
	    int s)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->CloseSocket(s);
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
				return amitcp_CloseSocket(s);
				break;
			case TCPIP_IN225:
				return in225_s_close(s);
				break;
			case TCPIP_Termite:
				return termite_CloseSocket(s);
				break;
		}
	}

	return(-1);
#endif
}
