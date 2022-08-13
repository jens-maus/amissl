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

#if !defined(__MORPHOS__)
struct servent *(getservbyname)(const char *name, const char *proto)
#else
struct servent *(getservbyname)(const UBYTE *name, const UBYTE *proto)
#endif
{
#ifdef __amigaos4__
  GETISOCKET_NOERRNO(); // openssl does not care about the error code for getservbyname
  if(ISocket) return ISocket->getservbyname((char *)name, (char *)proto);
  else return NULL;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return getservbyname(name, proto);
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
			case TCPIP_Roadshow:
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
				return amitcp_GetServByName(name, proto);
				break;
			case TCPIP_IN225:
				return in225_getservbyname(name, proto);
				break;
			case TCPIP_Termite:
				return termite_getservbyname((char *)name, (char *)proto);
				break;
		}
	}

	return(NULL);
#endif
}
