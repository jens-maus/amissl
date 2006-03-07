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
bind(
     long s,
     const struct sockaddr *name,
     long namelen)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->bind(s,(struct sockaddr *)name,namelen);
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
				return amitcp_Bind(s,name,namelen);
				break;
			case TCPIP_IN225:
				return in225_bind(s,(struct sockaddr *)name,namelen);
				break;
			case TCPIP_Termite:
				return termite_bind(s,(char *)name,namelen);
				break;
		}
	}

	return(-1);
#endif
}
