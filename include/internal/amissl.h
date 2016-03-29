#ifndef INTERNAL_AMISSL_H
#define INTERNAL_AMISSL_H

#include <exec/types.h>
#include <time.h>
#include <internal/amissl_compiler.h>

// default stack size for applications
#define MIN_STACKSIZE 65536

typedef struct {
	struct Library *AmiSSLBase;
#ifdef __amigaos4__
	struct AmiSSLIFace *IAmiSSL;
#endif
	unsigned long pid;
	int errno;
	int *errno_ptr;		// If the app supplied an errno ptr
	int socket_errno_initialized;
	char *getenv_var;
	APTR stack;
	struct tm localtime_var;
	struct Library *SocketBase;
	LONG TCPIPStackType;
	struct MLinkLock *MLinkLock; // This is really ancient, but ib still supports it so...
#ifdef __amigaos4__
	struct SocketIFace *ISocket;
	struct SocketIFace **ISocketPtr;
#endif
	ULONG ThreadGroupID; // All states for a specific library base have the same ID
} AMISSL_STATE;

STDARGS AMISSL_STATE *GetAmiSSLState(void);
STDARGS void SetAmiSSLerrno(int);
STDARGS int GetAmiSSLerrno(void);

#define SETUPSTATE() AMISSL_STATE *state = GetAmiSSLState()

enum SRType {SR_INFO, SR_WARNING, SR_ERROR, SR_QUESTION};
LONG ShowRequester(enum SRType type, const char *title, const char *body,
                   const char *gadgets);

#endif /* !INTERNAL_AMISSL_H */
