#include <proto/exec.h>
#include "amisslmaster_lib_protos.h"

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)   (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)        (DropInterface((struct Interface *)iface), iface = NULL)

struct Library *DOSBase = NULL;
struct DOSIFace *IDOS = NULL;
#else
#define GETINTERFACE(iface, base)    TRUE
#define DROPINTERFACE(iface)

struct DosLibrary *DOSBase = NULL;

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
  #if defined(__amigaos3__)
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  #endif

  if(DOSBase)
  {
    DROPINTERFACE(IDOS);
    CloseLibrary((struct Library *)DOSBase);
    DOSBase = NULL;
  }

  return TRUE;
}

/***********************************************************************/

ULONG openBase(struct LibraryHeader *lib)
{
  #if defined(__amigaos3__)
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  #endif

  DOSBase = (APTR)OpenLibrary("dos.library", 37L);
  if(DOSBase && GETINTERFACE(IDOS, DOSBase))
  {
    #if defined(__amigaos3__)
    kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
    #endif
    return TRUE;
  }

  closeBase(lib);

  return FALSE;
}
