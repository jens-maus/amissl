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
#endif

/***********************************************************************/

ULONG freeBase(UNUSED struct LibraryHeader *lib)
{
  if(DOSBase)
  {
    DROPINTERFACE(IDOS);
    CloseLibrary((struct Library *)DOSBase);
    DOSBase = NULL;
  }

  return TRUE;
}

/***********************************************************************/

ULONG initBase(struct LibraryHeader *lib)
{
  if((DOSBase = (APTR)OpenLibrary("dos.library", 37)) &&
     GETINTERFACE(IDOS, DOSBase))
  {
    return TRUE;
  }

  freeBase(lib);

  return FALSE;
}

/***********************************************************************/
