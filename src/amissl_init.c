#include <proto/exec.h>

#include "../libcmt/libcmt.h"

#include "amissl_lib_protos.h"
#include "amissl_base.h"

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)   (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)        (DropInterface((struct Interface *)iface), iface = NULL)

extern struct Library * AMISSL_COMMON_DATA SysBase;
extern struct ExecIFace * AMISSL_COMMON_DATA IExec;
extern struct Library * AMISSL_COMMON_DATA DOSBase;
extern struct DOSIFace * AMISSL_COMMON_DATA IDOS;
#else
#define GETINTERFACE(iface, base)    TRUE
#define DROPINTERFACE(iface)

extern struct DosLibrary *DOSBase;

void kprintf(const char *,...);
#endif

#ifdef __amigaos4__

#define SB_AllocVec(s,t)    AllocVecTags(s, AVT_Type, MEMF_SHARED, TAG_DONE)
#define SB_FreeVec          FreeVec

#else

#define SB_AllocVec(s,t)    AllocVec(s, t)
#define SB_FreeVec          FreeVec

#endif

static void *h_allocfunc(long size)
{
  return SB_AllocVec(size, MEMF_ANY);
}

static void h_freefunc(void *mem)
{
  SB_FreeVec(mem);
}


/***********************************************************************/

ULONG freeBase(UNUSED struct LibraryHeader *lib)
{
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  kprintf("thread_hash addr: %08lx (%08lx)\n", &lib->thread_hash, lib->thread_hash);
  h_free(lib->thread_hash);

  return TRUE;
}

/***********************************************************************/

ULONG initBase(UNUSED struct LibraryHeader *lib)
{
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  kprintf("Global parentBase variable INIT:\n");
  kprintf("-------------------------------\n");

  // initialize the global variables of the parent libbase
  kprintf("openssl_cs addr: %08lx\n", &lib->openssl_cs);
  InitSemaphore(&lib->openssl_cs);

  lib->thread_hash = h_new(7, h_allocfunc, h_freefunc);
  kprintf("thread_hash addr: %08lx (%08lx)\n", &lib->thread_hash, lib->thread_hash);

  lib->LastThreadGroupID = 0;
  kprintf("LastThreadGroupID addr: %08lx (%08lx)\n", &lib->LastThreadGroupID, lib->LastThreadGroupID);

  kprintf("-------------------------------\n");

  return TRUE;
}

/***********************************************************************/

ULONG closeBase(UNUSED struct LibraryHeader *lib)
{
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  #if defined(__amigaos4__)
  kprintf("%s/%ld iexec %08lx\n", __FUNCTION__, __LINE__, IExec);
  #endif

  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  #if defined(__amigaos4__)
  kprintf("%s/%ld idos %08lx\n", __FUNCTION__, __LINE__, IDOS);
  #endif

  return TRUE;
}

/***********************************************************************/

ULONG openBase(struct LibraryHeader *lib)
{
  kprintf("Calling openBase(%08lx)\n", lib);

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  #if defined(__amigaos4__)
  kprintf("%s/%ld iexec %08lx\n", __FUNCTION__, __LINE__, IExec);
  #endif

  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  #if defined(__amigaos4__)
  kprintf("%s/%ld idos %08lx\n", __FUNCTION__, __LINE__, IDOS);
  #endif

  return TRUE;
}
