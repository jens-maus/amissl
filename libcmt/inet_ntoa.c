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

char *(inet_ntoa)(struct in_addr in)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->Inet_NtoA(in.s_addr);
  else return NULL;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return inet_ntoa(in);
  else return NULL;
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
				return amitcp_Inet_NtoA(in.s_addr);
				break;
			case TCPIP_IN225:
				return in225_inet_ntoa(in);
				break;
			case TCPIP_Termite:
        return termite_inet_ntoa(in.s_addr);
				break;
		}
	}

	return(NULL);
#endif
}
