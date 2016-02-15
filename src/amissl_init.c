#include <proto/exec.h>

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

/***********************************************************************/

ULONG freeBase(UNUSED struct LibraryHeader *lib)
{
//kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
//kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  return TRUE;
}

/***********************************************************************/

ULONG initBase(UNUSED struct LibraryHeader *lib)
{
//kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
//kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

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

extern struct SignalSemaphore AMISSL_COMMON_DATA openssl_cs;

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

	kprintf("parent addr: %08lx\n", lib->parent);
  kprintf("openssl_cs addr: %08lx\n", &openssl_cs);

  return TRUE;
}
