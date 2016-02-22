#include <proto/exec.h>
#include "amisslmaster_lib_protos.h"

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

#endif

/***********************************************************************/

ULONG freeBase(UNUSED struct LibraryHeader *lib)
{
  SHOWPOINTER(DBF_STARTUP, SysBase);

  return TRUE;
}

/***********************************************************************/

ULONG initBase(UNUSED struct LibraryHeader *lib)
{
  SHOWPOINTER(DBF_STARTUP, SysBase);

  return TRUE;
}

/***********************************************************************/

ULONG closeBase(UNUSED struct LibraryHeader *lib)
{
  SHOWPOINTER(DBF_STARTUP, SysBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IExec);
  #endif

  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IDOS);
  #endif

  return TRUE;
}

/***********************************************************************/

ULONG openBase(UNUSED struct LibraryHeader *lib)
{
  SHOWPOINTER(DBF_STARTUP, SysBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IExec);
  #endif

  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IDOS);
  #endif

  return TRUE;
}
