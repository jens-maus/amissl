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

#ifndef BASE_H
#define BASE_H 1

#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif

#ifndef EXEC_SEMAPHORES_H
#include <exec/semaphores.h>
#endif

#ifndef DOS_DOS_H
#include <dos/dos.h>
#endif

#if defined(__amigaos4__)
#include <proto/elf.h>
#endif

struct LibraryHeader
{
  struct Library          libBase;
  UWORD                   pad1;

  #if defined(MULTIBASE)
  APTR                    dataSeg; // Don't change the position of this. The offset must stay
                                   // at 36 for MorphOS, or __restore_r13 must be adjusted.
  ULONG                   dataSize;
  struct LibraryHeader    *parent;
  #if defined(__amigaos4__)
  struct ElfIFace         *IElf;
  Elf32_Handle            elfHandle;
  uint8                   *baserelData;
  #endif /* __amigaos4__ */
  #endif /* MULTIBASE */

  BPTR                    segList;
  struct Library          *sysBase;
  struct SignalSemaphore  libSem;
};

#endif /* BASE_H */
