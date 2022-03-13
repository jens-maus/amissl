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
