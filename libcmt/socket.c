#include <sys/types.h>
#include <netinet/in.h>

#ifdef __amigaos4__
#undef __USE_INLINE__
#include <proto/bsdsocket.h>
#else
#define AMITCP_NEW_NAMES
#include <errno.h>
#include "multitcp.h"
#endif

#include <bsdsocket/socketbasetags.h> /* <amitcp/socketbasetags.h> for AmiTCP includes */
#include <internal/amissl.h>

#include "libcmt.h"

long
socket(
       long domain,
       long type,
       long protocol)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->socket(domain,type,protocol);
  else return -1;
#else
	GETSTATE();
	int s;

	if (state->SocketBase)
	{
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
	}

	return(-1);
#endif
}

#include <dos/dos.h>

void initialize_socket_errno(void)
{
	GETSTATE();
	struct TagItem tags[] =
	{
		{ SBTM_SETVAL(SBTC_ERRNOLONGPTR), (ULONG)state->errno_ptr },
		#if defined(__amigaos4__)
		{ SBTM_SETVAL(SBTC_BREAKMASK),    SIGBREAKF_CTRL_C        },
		#endif
		{ TAG_DONE,                       0                       }
	};

#if defined(__amigaos4__)
	if (!state->socket_errno_initialized)
	{
		/* Done this early to prevent infinite recursion with the following GETISOCKET() */
		state->socket_errno_initialized = 1;

		{
			GETISOCKET();

			if (ISocket)
				ISocket->SocketBaseTagList(tags);
		}
	}
#else
	if (!state->socket_errno_initialized)
	{
		if (state->SocketBase)
		{
			switch(state->TCPIPStackType)
			{
				case TCPIP_Miami:
				case TCPIP_AmiTCP:
					amitcp_SocketBaseTagList(tags);
					break;

				case TCPIP_MLink:
					ObtainSemaphore(&state->MLinkLock->Semaphore);
					amitcp_SocketBaseTagList(tags);
					ReleaseSemaphore(&state->MLinkLock->Semaphore);
					break;

				case TCPIP_IN225:
					/* Unfortunately, nothing can be done here since it sets errno in setup_sockets */
					break;

				case TCPIP_Termite:
					termite_SocketBaseTagList(tags);
					break;
			}
		}

		state->socket_errno_initialized = 1;
	}
#endif
}
