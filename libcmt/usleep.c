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
#include <proto/timer.h>
#include <timeval.h>

#include "libcmt.h"

int usleep(unsigned int usec)
{
  struct TimeRequest *tr;

  GETSTATE();

  if((tr = OpenTimer(state)))
  {
    tr->Request.io_Command = TR_ADDREQUEST;
    tr->Time.Seconds = usec / 1000000;
    tr->Time.Microseconds = usec % 1000000;
    DoIO(&tr->Request);

    return 0;
  }

  return -1;
}
