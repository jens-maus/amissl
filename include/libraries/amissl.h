#include <exec/types.h>
#include <dos.h>

typedef struct {
	unsigned long pid;
	int errno;
	char *getenv_var;
	APTR stack;
	APTR a4;
} AMISSL_STATE;

__stdargs AMISSL_STATE *GetAmiSSLState(void);
__stdargs void SetAmiSSLerrno(int errno);
__stdargs int GetAmiSSLerrno(void);

#define SETUPSTATE() AMISSL_STATE *state = GetAmiSSLState()
#define SETUPSTATEDS() AMISSL_STATE *state = GetAmiSSLState(); putreg(REG_A4,(long)state->a4)
