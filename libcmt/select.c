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
int (select)(int numsocks, fd_set *readsocks, fd_set *writesocks, fd_set *exceptsocks, struct timeval *timeout)
#else
LONG (select)(LONG numsocks, fd_set *readsocks, fd_set *writesocks, fd_set *exceptsocks, struct timeval *timeout)
#endif
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->WaitSelect(numsocks, readsocks, writesocks, exceptsocks, timeout, NULL);
  else return -1;
#elif __MORPHOS__
  GETSOCKET();
  if(SocketBase) return WaitSelect(numsocks, readsocks, writesocks, exceptsocks, timeout, NULL);
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
				return amitcp_WaitSelect(numsocks, readsocks, writesocks, exceptsocks, timeout, NULL);
				break;
			case TCPIP_IN225:
				return in225_select(numsocks, readsocks, writesocks, exceptsocks, timeout);
				break;
			case TCPIP_Termite:
				return termite_WaitSelect(numsocks, readsocks, writesocks, exceptsocks, timeout, NULL);
				break;
		}
	}

	return(-1);
#endif
}
