#include <sys/types.h>
//#include <sys/socket.h>
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
socket(
       int domain,
       int type,
       int protocol)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->socket(domain,type,protocol);
  else return -1;
#else
	GETSTATE();
	int s;
	switch(state->TCPIPStackType)
	{
		case TCPIP_Miami:
		case TCPIP_AmiTCP:
			return amitcp_Socket(domain, type, protocol);
			break;
		case TCPIP_MLink:
			ObtainSemaphore(&state->MLinkLock->Semaphore);
			s = amitcp_Socket(domain, type, protocol);
			ReleaseSemaphore(&state->MLinkLock->Semaphore);
			return s;
			break;
		case TCPIP_IN225:
			return in225_socket(domain, type, protocol);
			break;
		case TCPIP_Termite:
			return termite_socket(domain, type, protocol);
			break;
	}
#endif
}

