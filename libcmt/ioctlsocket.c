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
ioctlsocket(
	    int s,
	    unsigned long request,
	    char *argp)
{
#ifdef __amigaos4__
  GETISOCKET();
  if(ISocket) return ISocket->IoctlSocket(s,request,argp);
  else return -1;
#else
	GETSTATE();
	switch(state->TCPIPStackType)
	{
		case TCPIP_Miami:
		case TCPIP_AmiTCP:
		case TCPIP_MLink:
			return amitcp_IoctlSocket(s, request, argp);
			break;
		case TCPIP_IN225:
			switch (request)
			{
				case SIOCADDRT	     : request = ('r'<<8)|1; break;
				case SIOCDELRT	     : request = ('r'<<8)|2; break;
				case SIOCSIFADDR     : request = ('i'<<8)|3; break;
				case SIOCGIFADDR     : request = ('i'<<8)|4; break;
				case SIOCSIFDSTADDR  : request = ('i'<<8)|5; break;
				case SIOCGIFDSTADDR  : request = ('i'<<8)|6; break;
				case SIOCSIFFLAGS    : request = ('i'<<8)|7; break;
				case SIOCGIFFLAGS    : request = ('i'<<8)|8; break;
				case SIOCGIFCONF     : request = ('i'<<8)|9; break;
/*				case SIOCSIFMTU      : request = ('i'<<8)|10; break; */
/*				case SIOCGIFMTU      : request = ('i'<<8)|11; break; */
				case SIOCGIFBRDADDR  : request = ('i'<<8)|12; break;
				case SIOCSIFBRDADDR  : request = ('i'<<8)|13; break;
				case SIOCGIFNETMASK  : request = ('i'<<8)|14; break;
				case SIOCSIFNETMASK  : request = ('i'<<8)|15; break;
				case SIOCGIFMETRIC   : request = ('i'<<8)|16; break;
				case SIOCSIFMETRIC   : request = ('i'<<8)|17; break;
				case SIOCSARP	     : request = ('i'<<8)|18; break;
				case SIOCGARP	     : request = ('i'<<8)|19; break;
				case SIOCDARP	     : request = ('i'<<8)|20; break;
				case SIOCATMARK      : request = ('i'<<8)|21; break;
				case FIONBIO	     : request = ('m'<<8)|22; break;
				case FIONREAD	     : request = ('m'<<8)|23; break;
				case FIOASYNC	     : request = ('m'<<8)|24; break;
				case SIOCSPGRP	     : request = ('m'<<8)|25; break;
				case SIOCGPGRP	     : request = ('m'<<8)|26; break;
			}
			return in225_s_ioctl(s, request, argp);
			break;
		case TCPIP_Termite:
			return termite_IoctlSocket(s, request, argp);
			break;
	}
#endif
}
