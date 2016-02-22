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

extern const unsigned int CAST_S_table0[256];
extern const unsigned int CAST_S_table1[256];
extern const unsigned int CAST_S_table2[256];
extern const unsigned int CAST_S_table3[256];
extern const unsigned int CAST_S_table4[256];
extern const unsigned int CAST_S_table5[256];
extern const unsigned int CAST_S_table6[256];
extern const unsigned int CAST_S_table7[256];

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
  {
    int i;
    ULONG checksum;
      kprintf("CAST TABLE CHECKSUMS in openBase()\n");
      for(i=0,checksum=0; i < 256; i++)
      {
//       kprintf("CAST_S_table4[%ld] = %08lx\n", i, CAST_S_table4[i]);
        checksum = checksum + CAST_S_table0[i];
      }
      kprintf("CHECKSUM table0: %08lx (addr: %08lx)\n", checksum, &CAST_S_table0[0]);
 
      for(i=0,checksum=0; i < 256; i++)
      {
//       kprintf("CAST_S_table4[%ld] = %08lx\n", i, CAST_S_table4[i]);
        checksum = checksum + CAST_S_table1[i];
      }
      kprintf("CHECKSUM table1: %08lx (addr: %08lx)\n", checksum, &CAST_S_table1[0]);
 
      for(i=0,checksum=0; i < 256; i++)
      {
//       kprintf("CAST_S_table4[%ld] = %08lx\n", i, CAST_S_table4[i]);
        checksum = checksum + CAST_S_table2[i];
      }
      kprintf("CHECKSUM table2: %08lx (addr: %08lx)\n", checksum, &CAST_S_table2[0]);
 
      for(i=0,checksum=0; i < 256; i++)
      {
//       kprintf("CAST_S_table4[%ld] = %08lx\n", i, CAST_S_table4[i]);
        checksum = checksum + CAST_S_table3[i];
      }
      kprintf("CHECKSUM table3: %08lx (addr: %08lx)\n", checksum, &CAST_S_table3[0]);
 
      for(i=0,checksum=0; i < 256; i++)
      {
//       kprintf("CAST_S_table4[%ld] = %08lx\n", i, CAST_S_table4[i]);
        checksum = checksum + CAST_S_table4[i];
      }
      kprintf("CHECKSUM table4: %08lx (addr: %08lx)\n", checksum, &CAST_S_table4[0]);

      for(i=0,checksum=0; i < 256; i++)
      {
//        kprintf("CAST_S_table5[%ld] = %08lx\n", i, CAST_S_table5[i]);
        checksum = checksum + CAST_S_table5[i];
      }
      kprintf("CHECKSUM table5: %08lx (addr: %08lx)\n", checksum, &CAST_S_table5[0]);

      for(i=0,checksum=0; i < 256; i++)
      {
//        kprintf("CAST_S_table6[%ld] = %08lx\n", i, CAST_S_table6[i]);
        checksum = checksum + CAST_S_table6[i];
      }
      kprintf("CHECKSUM table6: %08lx (addr: %08lx)\n", checksum, &CAST_S_table6[0]);

      for(i=0,checksum=0; i < 256; i++)
      {
//        kprintf("CAST_S_table7[%ld] = %08lx\n", i, CAST_S_table7[i]);
        checksum = checksum + CAST_S_table7[i];
      }
      kprintf("CHECKSUM table7: %08lx (addr: %08lx)\n", checksum, &CAST_S_table7[0]);
    }
 
  return TRUE;
}
