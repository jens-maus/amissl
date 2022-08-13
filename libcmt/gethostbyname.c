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
struct hostent *(gethostbyname)(const char *name)
#else
struct hostent *(gethostbyname)(const UBYTE *name)
#endif
{
#ifdef __amigaos4__
  GETISOCKET_NOERRNO(); // h_errno isn't used by openssl
  if(ISocket) return ISocket->gethostbyname((char *)name);
  else return NULL;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return gethostbyname(name);
  else return NULL;
#else
	GETSTATE();

	if (state->SocketBase)
	{
		switch(state->TCPIPStackType)
		{
			case TCPIP_MLink:{
				struct hostent *res;
				ObtainSemaphore(&state->MLinkLock->Semaphore);
				res=amitcp_GetHostByName(name);
				ReleaseSemaphore(&state->MLinkLock->Semaphore);
				return res;
				break;}
			case TCPIP_Roadshow:
			case TCPIP_Miami:
			case TCPIP_AmiTCP:
				return amitcp_GetHostByName(name);
				break;
			case TCPIP_IN225:
				return in225_gethostbyname(name);
				break;
			case TCPIP_Termite:
				return termite_gethostbyname((char *)name);
				break;
		}
	}

	return(NULL);
#endif
}
