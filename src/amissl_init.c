#include <proto/exec.h>
#include "amissl_lib_protos.h"

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)   (iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)        (DropInterface((struct Interface *)iface), iface = NULL)

extern struct Library * AMISSL_COMMON_DATA DOSBase;
extern struct DOSIFace * AMISSL_COMMON_DATA IDOS;
#else
#define GETINTERFACE(iface, base)    TRUE
#define DROPINTERFACE(iface)

extern struct DosLibrary *DOSBase;

void kprintf(const char *,...);
#endif

void __init_libcmt_file(void);

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
  #if defined(__amigaos4__)
  kprintf("%s/%ld iexec %08lx\n", __FUNCTION__, __LINE__, IExec);
  #else
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  #endif

  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  #if defined(__amigaos4__)
  kprintf("%s/%ld idos %08lx\n", __FUNCTION__, __LINE__, IDOS);
  #endif

  if(DOSBase != NULL)
  {
    #if defined(__amigaos4__)
    if(IDOS != NULL)
      DROPINTERFACE(IDOS);
    #endif

    CloseLibrary((struct Library *)DOSBase);
    DOSBase = NULL;
  }

  return TRUE;
}

/***********************************************************************/

ULONG openBase(struct LibraryHeader *lib)
{
  #if defined(__amigaos4__)
  kprintf("%s/%ld iexec %08lx\n", __FUNCTION__, __LINE__, IExec);
  #else
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  #endif

  DOSBase = (APTR)OpenLibrary("dos.library", 37L);
  if(DOSBase && GETINTERFACE(IDOS, DOSBase))
  {
    kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
    #if defined(__amigaos4__)
    kprintf("%s/%ld idos %08lx\n", __FUNCTION__, __LINE__, IDOS);
    #endif

    // initialze the libcmt file i/o stuff
    __init_libcmt_file();

    return TRUE;
  }
  else
    kprintf("ERROR: couldn't open dos.library\n");

  closeBase(lib);

  return FALSE;
}
