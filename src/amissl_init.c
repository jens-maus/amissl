/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

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

#define SB_AllocVec(s,t)    AllocVecTags(s, AVT_Type, MEMF_SHARED, AVT_Lock, FALSE, TAG_DONE)
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
  ENTER();

  SHOWPOINTER(DBF_STARTUP, SysBase);

  SHOWPOINTER(DBF_STARTUP, &lib->thread_hash);
  SHOWPOINTER(DBF_STARTUP, lib->thread_hash);
  h_free(lib->thread_hash);

  RETURN(TRUE);
  return TRUE;
}

/***********************************************************************/

ULONG initBase(UNUSED struct LibraryHeader *lib)
{
  ENTER();

  SHOWPOINTER(DBF_STARTUP, SysBase);

  D(DBF_STARTUP, "Global parentBase variable INIT:");
  D(DBF_STARTUP, "-------------------------------");

  // initialize the global variables of the parent libbase
  SHOWPOINTER(DBF_STARTUP, &lib->openssl_cs);
  InitSemaphore(&lib->openssl_cs);

  lib->thread_hash = h_new(7, h_allocfunc, h_freefunc);
  SHOWPOINTER(DBF_STARTUP, &lib->thread_hash);
  SHOWPOINTER(DBF_STARTUP, lib->thread_hash);

  lib->LastThreadGroupID = 0;
  SHOWPOINTER(DBF_STARTUP, &lib->LastThreadGroupID);
  SHOWVALUE(DBF_STARTUP, lib->LastThreadGroupID);

  D(DBF_STARTUP, "-------------------------------");

  RETURN(TRUE);
  return TRUE;
}

/***********************************************************************/

ULONG closeBase(UNUSED struct LibraryHeader *lib)
{
#if 0
  SETUPSTATE();
#if defined(__amigaos4__)
  struct AmiSSLIFace *IAmiSSL=state->IAmiSSL;
#else
  struct Library *AmiSSLBase=state->AmiSSLBase;
#endif
#endif

  ENTER();

  SHOWPOINTER(DBF_STARTUP, SysBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IExec);
  #endif

  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IDOS);
  #endif

  RETURN(TRUE);
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
  ENTER();

  SHOWPOINTER(DBF_STARTUP, lib);

  SHOWPOINTER(DBF_STARTUP, SysBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IExec);
  #endif

  SHOWPOINTER(DBF_STARTUP, DOSBase);
  #if defined(__amigaos4__)
  SHOWPOINTER(DBF_STARTUP, IDOS);
  #endif


  #if defined(DEBUG)
  {
    int i;
    ULONG checksum;
    D(DBF_STARTUP, "CAST TABLE CHECKSUMS in openBase()");
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table0[i];
    }
    D(DBF_STARTUP, "CHECKSUM table0: %08lx (addr: %08lx)", checksum, &CAST_S_table0[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table1[i];
    }
    D(DBF_STARTUP, "CHECKSUM table1: %08lx (addr: %08lx)", checksum, &CAST_S_table1[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table2[i];
    }
    D(DBF_STARTUP, "CHECKSUM table2: %08lx (addr: %08lx)", checksum, &CAST_S_table2[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table3[i];
    }
    D(DBF_STARTUP, "CHECKSUM table3: %08lx (addr: %08lx)", checksum, &CAST_S_table3[0]);
 
    for(i=0,checksum=0; i < 256; i++)
    {
//     D(DBF_STARTUP, "CAST_S_table4[%ld] = %08lx", i, CAST_S_table4[i]);
      checksum = checksum + CAST_S_table4[i];
    }
    D(DBF_STARTUP, "CHECKSUM table4: %08lx (addr: %08lx)", checksum, &CAST_S_table4[0]);

    for(i=0,checksum=0; i < 256; i++)
    {
//      D(DBF_STARTUP, "CAST_S_table5[%ld] = %08lx", i, CAST_S_table5[i]);
      checksum = checksum + CAST_S_table5[i];
    }
    D(DBF_STARTUP, "CHECKSUM table5: %08lx (addr: %08lx)", checksum, &CAST_S_table5[0]);

    for(i=0,checksum=0; i < 256; i++)
    {
//      D(DBF_STARTUP, "CAST_S_table6[%ld] = %08lx", i, CAST_S_table6[i]);
      checksum = checksum + CAST_S_table6[i];
    }
    D(DBF_STARTUP, "CHECKSUM table6: %08lx (addr: %08lx)", checksum, &CAST_S_table6[0]);

    for(i=0,checksum=0; i < 256; i++)
    {
//      D(DBF_STARTUP, "CAST_S_table7[%ld] = %08lx", i, CAST_S_table7[i]);
      checksum = checksum + CAST_S_table7[i];
    }
    D(DBF_STARTUP, "CHECKSUM table7: %08lx (addr: %08lx)", checksum, &CAST_S_table7[0]);
  }
  #endif
 
  RETURN(TRUE);
  return TRUE;
}
