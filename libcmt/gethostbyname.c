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

struct hostent *
gethostbyname(
	      const char *name)
{
#ifdef __amigaos4__
  GETISOCKET_NOERRNO(); // h_errno isn't used by openssl
  if(ISocket) return ISocket->gethostbyname((char *)name);
  else return NULL;
#else
	GETSTATE();
	switch(state->TCPIPStackType)
	{
		case TCPIP_MLink:{
			struct hostent *res;
			ObtainSemaphore(&state->MLinkLock->Semaphore);
			res=amitcp_GetHostByName(name);
			ReleaseSemaphore(&state->MLinkLock->Semaphore);
			return res;
			break;}
		case TCPIP_Miami:
		case TCPIP_AmiTCP:
			return amitcp_GetHostByName(name);
			break;
		case TCPIP_IN225:
			return in225_gethostbyname(name);
			break;
		case TCPIP_Termite:
			return termite_gethostbyname(name);
			break;
	}
#endif
}
