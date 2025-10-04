/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2025 AmiSSL Open Source Team.
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

/* An amiga-centric snprintf(), which uses RawDoFmt(), so the usual
** differences in format specifiers apply. Will never get used on
** AmigaOS 4.x, where utility.library already has these functions
*/

#include "libcmt.h"

struct StrInfo
{
  char *buf;
  int len;
};

static ASM void PutChN(REG(d0, char c), REG(a3, struct StrInfo *si))
{
  if (!c)
  {
    *si->buf = c;
  }
  else if(si->len)
  {
    *si->buf++ = c;
    si->len--;
  }
}

int VSNPrintf(char *buffer, long buffer_len, const char *format, APTR args)
{
  struct StrInfo si;
  si.buf = buffer;
  si.len = buffer_len - 1;
  RawDoFmt(format, args, (void (*)())PutChN, &si);
  return buffer_len - 1 - si.len;
}

VARARGS68K int SNPrintf(char *buffer, int buffer_len, const char *format, ...)
{
  int len;
  VA_LIST va;

  VA_START(va, format);
  len = VSNPrintf(buffer, buffer_len, format, VA_ARG(va, APTR));
  VA_END(va);

  return len;
}
