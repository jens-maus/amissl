#ifndef MULTITCP_H
#define MULTITCP_H

#include <exec/types.h>

#include "asm.h"

#define TCPIP_AmiTCP  0x01
#define TCPIP_IN225   0x02
#define TCPIP_Miami   0x03
#define TCPIP_Termite 0x04
#define TCPIP_MLink   0x05

#ifndef __SASC
/* SAS-C bug... it doesn't deal with implicit declaration of
   structures correctly (ANSI requires that the parameter list of a
   function declaration forms a scope), SAS breaks that most likely
   because the C= includes are fubar'd */

struct Socket;
struct TCPIPStack;
struct sockaddr;
struct sockaddr_in;
struct Library;
#endif

ASM SAVEDS APTR MTCP_InitTCPIP(ASMARG(LONG *StackInfo, a0));
ASM SAVEDS void MTCP_DoneTCPIP(ASMARG(struct TCPIPStack *tcpip, a0));
ASM SAVEDS LONG MTCP_GetStackType(ASMARG(struct TCPIPStack *stack, a0));
ASM SAVEDS ULONG MTCP_SetupLib(ASMARG(struct Library *LibBase, a0),
				ASMARG(ULONG BreakMask, d0));
ASM SAVEDS int MTCP_SetSockOpt(ASMARG(struct Socket *s, a0),
				ASMARG(LONG level, d0),
				ASMARG(LONG optname, d1),
				ASMARG(APTR optval, a1),
				ASMARG(LONG optlen, d2));
ASM SAVEDS LONG MTCP_Recv(ASMARG(struct Socket *s, a0),
			   ASMARG(UBYTE *buf, a1),
			   ASMARG(LONG len, d0),
			   ASMARG(LONG flags, d1));
ASM SAVEDS LONG MTCP_Send(ASMARG(struct Socket *s, a0),
			   ASMARG(UBYTE *msg, a1),
			   ASMARG(LONG len, d0),
			   ASMARG(LONG flags, d1));
ASM SAVEDS struct hostent *MTCP_GetHostByName(ASMARG(struct TCPIPStack *stack, a0),
					       ASMARG(char *Host, a1));
ASM SAVEDS struct servent  *MTCP_GetServByName(ASMARG(struct TCPIPStack *stack, a0),
						ASMARG(char *Name, a1),
						ASMARG(char *Proto, a2));
ASM SAVEDS void MTCP_SetupSockAddr(ASMARG(struct TCPIPStack *stack, a0),
				    ASMARG(struct sockaddr_in *Address, a1),
				    ASMARG(int DefaultPort, d0));
ASM SAVEDS int MTCP_CloseSocket(ASMARG(struct Socket *s, a0));
ASM SAVEDS int MTCP_Connect(ASMARG(struct Socket *s, a0),
			     ASMARG(struct sockaddr *Address, a1));
ASM SAVEDS APTR MTCP_Socket(ASMARG(struct TCPIPStack *tcpip, a0),
			     ASMARG(LONG UseTTCP, d0));
ASM SAVEDS int MTCP_GetLowLevelSocket(ASMARG(struct Socket *s, a0));

#define MTCP_ErrNo(tcpip) (((ULONG *)tcpip)[1]) /* This needs to be coherent with ht_multitcp.c */
#define MTCP_SockErrNo(sock) (((ULONG **)sock)[1][1]) /* This needs to be coherent with ht_multitcp.c */

ASM SAVEDS LONG MTCP_GetHostName(ASMARG(struct TCPIPStack *tcpip, a0),
				  ASMARG(char *Buffer, a1),
				  ASMARG(LONG BufSize, d0));
ASM SAVEDS ULONG MTCP_Inet_Addr(ASMARG(struct TCPIPStack *stack, a0),
				 ASMARG(char *Host, a1));
ASM SAVEDS int MTCP_TimeOut(ASMARG(struct Socket *s, a0),
			     ASMARG(int secs, d0));
ASM SAVEDS int MTCP_GetSockName(ASMARG(struct Socket *s, a0),
				 ASMARG(struct sockaddr *name, a1),
				 ASMARG(int *namelen, a2));
ASM SAVEDS int MTCP_Bind(ASMARG(struct Socket *s, a0),
			  ASMARG(struct sockaddr *name, a1),
			  ASMARG(long namelen, a2));
ASM SAVEDS int MTCP_Listen(ASMARG(struct Socket *s, a0),
			    ASMARG(int backlog, d0));
ASM SAVEDS struct Socket *MTCP_Accept(ASMARG(struct Socket *s, a0),
				       ASMARG(struct sockaddr *name, a1),
				       ASMARG(int *namelen, a2));
ASM SAVEDS int MTCP_Shutdown(ASMARG(struct Socket *s, a0),
			      ASMARG(int secs, d0));
ASM SAVEDS int MTCP_GetSockOpt(ASMARG(struct Socket *s, a0),
				ASMARG(int optname, d0),
				ASMARG(void *optval, a1),
				ASMARG(int *optlen, a2));
ASM SAVEDS int MTCP_IoctlSocket(ASMARG(struct Socket *s, a0),
				 ASMARG(ULONG request, d0),
				 ASMARG(char *argp, a1));
#endif /* MULTITCP */
