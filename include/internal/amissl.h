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
	APTR a4;
	struct tm localtime_var;
	struct Library *SocketBase;
	LONG TCPIPStackType;
	struct MLinkLock *MLinkLock; // This is really ancient, but ib still supports it so...
	int socket_base_owns_errno;
	int *errno_ptr;		// If the app supplied an errno ptr
	int local_errno;	// If no errno and we generated the error ourselves
#ifdef __amigaos4__
	struct SocketIFace *ISocket;
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
#ifndef __amigaos4__
#define SETUPSTATEDS() AMISSL_STATE *state = GetAmiSSLState(); putreg(REG_A4,(long)state->a4)
#else
#define SETUPSTATEDS() AMISSL_STATE *state = GetAmiSSLState(); // FIXME: setup r2
#endif

#endif /* !INTERNAL_AMISSL_H */
