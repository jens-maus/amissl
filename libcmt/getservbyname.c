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

struct servent *
getservbyname(
	      const unsigned char *name,
	      const unsigned char *proto)
{
#ifdef __amigaos4__
  GETISOCKET_NOERRNO(); // openssl does not care about the error code for getservbyname
  if(ISocket) return ISocket->getservbyname((char *)name,(char *)proto);
  else return NULL;
#else
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_MLink:{
				struct servent *res;
				ObtainSemaphore(&state->MLinkLock->Semaphore);
				res=amitcp_GetServByName(name, proto);
				ReleaseSemaphore(&state->MLinkLock->Semaphore);
				return res;
				break;}
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
				return amitcp_GetServByName(name, proto);
				break;
			case TCPIP_IN225:
				return in225_getservbyname((char *)name, (char *)proto);
				break;
			case TCPIP_Termite:
				return termite_getservbyname((char *)name, (char *)proto);
				break;
		}
	}

	return(NULL);
#endif
}
