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

ssize_t
recv(
     int s,
     void *buf,
     size_t len,
     int flags)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->recv(s,buf,len,flags);
  else return -1;
#else
	GETSTATE();
	switch(state->TCPIPStackType)
	{
		case TCPIP_Miami:
		case TCPIP_AmiTCP:
		case TCPIP_MLink:
			return amitcp_Recv(s,buf,len,flags);
			break;
		case TCPIP_IN225:
			return in225_recv(s,buf,len,flags);
			break;
		case TCPIP_Termite:
			return termite_recv(s,buf,len,flags);
			break;
	}
#endif
}
