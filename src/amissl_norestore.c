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

#include "amissl_lib_protos.h"
#include "amissl_base.h"

/*
 * All functions in here will be compiled without any restore-a4
 * functionality because they are directly called by internal
 * openssl routines and thus would have an incorrect a6 address which
 * would end up in an incorrect a4 address if the restore-a4 functionality
 * would be used with these functions. Thus, only put functions in this
 * file if you don't want them to be affected by restore-a4 functionality.
*/

extern struct LibraryHeader *ownBase;
extern struct LibraryHeader *parentBase;

STDARGS AMISSL_STATE *GetAmiSSLState(void)
{
  AMISSL_STATE *ret;
  kprintf("ownBase addr: %08lx (%08lx)\n", &ownBase, ownBase);
  kprintf("parentBase addr: %08lx (%08lx)\n", &parentBase, parentBase);
  kprintf("%s SysBase: %08lx openssl_cs addr: %08lx\n", __FUNCTION__, SysBase, &parentBase->openssl_cs);
  ObtainSemaphore(&parentBase->openssl_cs);
  kprintf("h_find(parentBase->thread_hash=%08lx)\n", parentBase->thread_hash);
  ret = (AMISSL_STATE *)h_find(parentBase->thread_hash, (long)FindTask(NULL));
  ReleaseSemaphore(&parentBase->openssl_cs);
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
