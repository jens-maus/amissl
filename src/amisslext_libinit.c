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

#include <exec/execbase.h>
#include <exec/semaphores.h>
#include <exec/resident.h>
#include <proto/exec.h>

//

#include "amissl_lib_protos.h"

//

#include "amissl_base.h"
#include "amisslext_glue.h"

#if defined(__MORPHOS__)
#include "amissl_stubs_mos.h"
#endif

//

#include <internal/amissl.h>

#if defined(__amigaos3__)
#if defined(__GNUC__) && __GNUC__ < 3
#define FORCED_CONST const __attribute__ ((section (".text")))
#endif // __GNUC__
#endif // __amigaos3__

#ifndef FORCED_CONST
#define FORCED_CONST const FAR
#endif // FORCED_CONST

/****************************************************************************/

#if defined(__amigaos4__)

extern struct ExecIFace * AMISSL_COMMON_DATA IExec;

/* ------------------- OS4 Manager Interface ------------------------ */

STATIC CONST_APTR lib_manager_vectors[] =
{
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)-1
};

STATIC CONST struct TagItem lib_managerTags[] =
{
  { MIT_Name,         (Tag)"__library" },
  { MIT_VectorTable,  (Tag)lib_manager_vectors },
  { MIT_Version,      1 },
  { TAG_DONE,         0 }
};

/* ------------------- Library Interface(s) ------------------------ */

STATIC CONST_APTR libInterfaces[] =
{
  (CONST_APTR)lib_managerTags,
  (CONST_APTR)NULL
};

// Our libraries always have to carry a 68k jump table with it, so
// lets define it here as extern, as we are going to link it to
// our binary here.
extern CONST APTR ext_VecTable68K[];

STATIC CONST struct TagItem libCreateTags[] =
{
  { CLT_DataSize,      sizeof(struct LibraryHeader) },
  { CLT_Interfaces,    (Tag)libInterfaces },
  { CLT_Vector68K,     (Tag)ext_VecTable68K },
  { CLT_NoLegacyIFace, TRUE },
  { TAG_DONE,          0 }
};

#else

extern struct ExecBase *SysBase;

STATIC FORCED_CONST APTR LibVectors[] =
{
  #ifdef __MORPHOS__
  (APTR)FUNCARRAY_32BIT_NATIVE,
  #endif
  (APTR)NULL,
  (APTR)NULL,
  (APTR)NULL,
  (APTR)NULL,
  SDI_LIBVECTOR_EXT,
  (APTR)-1
};

#endif

/****************************************************************************/

struct LibraryHeader *CreateExtLibrary(struct LibraryHeader *main)
{
  struct LibraryHeader *base;

  #if defined(__amigaos4__)
  base = (struct LibraryHeader *)CreateLibrary((struct TagItem *)libCreateTags);
  if(base != NULL)
  {
    struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);
    struct ExtendedLibrary *extmain = (struct ExtendedLibrary *)((ULONG)main + main->libBase.lib_PosSize);
    extlib->MainIFace = extmain->MainIFace;
    extlib->MainIFace->Obtain();
  }
  #elif defined(__amigaos3__)
  base = (struct LibraryHeader *)MakeLibrary((APTR)&LibVectors[0], NULL, NULL, sizeof(*base), 0);
  if(base != NULL)
  {
    base->dataSeg = main->dataSeg;
  }
  #else
    #error PLATFORM not supported
  #endif

  return base;
}
