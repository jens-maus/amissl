#ifndef INTERNAL_AMISSL_H
#define INTERNAL_AMISSL_H

#include <exec/types.h>
#include <dos.h>
#include <time.h>

typedef struct {
	unsigned long pid;
	int errno;
	char *getenv_var;
	APTR stack;
	struct tm localtime_var;
	struct Library *SocketBase;
	LONG TCPIPStackType;
	struct MLinkLock *MLinkLock; // This is really ancient, but ib still supports it so...
	int socket_base_owns_errno;
	int *errno_ptr;		// If the app supplied an errno ptr
	int local_errno;	// If no errno and we generated the error ourselves
#ifdef __amigaos4__
	struct SocketIFace *ISocket;
	struct AmiSSLIFace *IAmiSSL;
#else
	struct Library *AmiSSLBase;
#endif
} AMISSL_STATE;

#ifndef __amigaos4__
__stdargs
#endif
AMISSL_STATE *GetAmiSSLState(void);
#ifndef __amigaos4__
__stdargs
#endif
void SetAmiSSLerrno(int errno);
#ifndef __amigaos4__
__stdargs
#endif
int GetAmiSSLerrno(void);

#define SETUPSTATE() AMISSL_STATE *state = GetAmiSSLState()
#endif

#endif /* !INTERNAL_AMISSL_H */
