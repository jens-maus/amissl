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

#include <stdlib.h>
#include <exec/semaphores.h>
#include <proto/exec.h>

#include "libcmt.h"

extern struct SignalSemaphore __mem_cs;
extern void *__mem_pool;

void free(void *p)
{
  #if 0
  ENTER();
  #endif

  if(p != NULL)
  {
    #if 0
    SHOWPOINTER(DBF_STARTUP, &__mem_cs);
    SHOWPOINTER(DBF_STARTUP, &__mem_pool);
    #endif

    ObtainSemaphore(&__mem_cs);
    p = &((ULONG *)p)[-1];
    FreePooled(__mem_pool, p, *(ULONG *)p);
    ReleaseSemaphore(&__mem_cs);
  }

  #if 0
  LEAVE();
  #endif
}
