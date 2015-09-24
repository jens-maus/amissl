#include <internal/amissl.h>
#include <internal/debug.h>

#define NO_MTCP_PROTOS
#ifdef __GNUC__
#include "../libcmt/libcmt.h"
#include "../libcmt/multitcp.h"
#else
#include "/libcmt/libcmt.h"
#include "/libcmt/multitcp.h"
#endif

/*
 * All functions in here will be compiled without any restore-a4
 * functionality because they are directly called by internal
 * openssl routines and thus would have an incorrect a6 address which
 * would end up in an incorrect a4 address if the restore-a4 functionality
 * would be used with these functions. Thus, only put functions in this
 * file if you don't want them to be affected by restore-a4 functionality.
*/

#ifdef __amigaos4__

#define SB_ObtainSemaphore  ObtainSemaphore
#define SB_ReleaseSemaphore ReleaseSemaphore
#define SB_FindTask         FindTask
#define SB_AllocVec(s,t)    AllocVecTags(s, AVT_Type, MEMF_SHARED, TAG_DONE)
#define SB_FreeVec          FreeVec

#else

#define SB_ObtainSemaphore  ObtainSemaphore
#define SB_ReleaseSemaphore ReleaseSemaphore
#define SB_FindTask         FindTask
#define SB_AllocVec(s,t)    AllocVec(s, t)
#define SB_FreeVec          FreeVec

#endif

extern struct SignalSemaphore * AMISSL_COMMON_DATA lock_cs;
extern struct SignalSemaphore AMISSL_COMMON_DATA openssl_cs;
extern struct HashTable * AMISSL_COMMON_DATA thread_hash;

STDARGS AMISSL_STATE *GetAmiSSLState(void)
{
	AMISSL_STATE *ret;
	kprintf("%s SysBase: %08lx\n", __FUNCTION__, SysBase);
	SB_ObtainSemaphore(&openssl_cs);
	kprintf("h_find(thread_hash=%08lx)\n", thread_hash);
	ret = (AMISSL_STATE *)h_find(thread_hash, (long)SB_FindTask(NULL));
	SB_ReleaseSemaphore(&openssl_cs);
	kprintf("%s done\n", __FUNCTION__);

	return ret;
}

STDARGS void SetAmiSSLerrno(int err)
{
	AMISSL_STATE *p = GetAmiSSLState();
	*p->errno_ptr = err;
}

STDARGS int GetAmiSSLerrno(void)
{
	AMISSL_STATE *p = GetAmiSSLState();
	return *p->errno_ptr;
}
