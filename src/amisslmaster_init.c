#include "amisslmaster_lib.h"

#define __NOLIBBASE__
#include <proto/amisslmaster.h>

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
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);

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
  kprintf("%s/%ld\n", __FUNCTION__, __LINE__);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  if((DOSBase = (APTR)OpenLibrary("dos.library", 37)) &&
     GETINTERFACE(IDOS, DOSBase))
  {
    kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
    return TRUE;
  }

  closeBase(lib);

  return FALSE;
}
