#ifndef TIMEVAL_H
#define TIMEVAL_H 1

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

// since the Amiga's timeval structure was renamed to
// "struct TimeVal" in OS4 (to prevent clashes with the POSIX one)
// we require to define that slightly compatible structure on our
// own in case we compile YAM for something else than OS4 or in case
// an older SDK is used.
#if !defined(__amigaos4__) || !defined(__NEW_TIMEVAL_DEFINITION_USED__)
#include <exec/io.h>


struct TimeVal
{
  ULONG Seconds;
  ULONG Microseconds;
};

struct TimeRequest
{
  struct IORequest Request;
  struct TimeVal   Time;
};

#define TIMEVAL(x)  (APTR)(x)

#else

#define TIMEVAL(x)  (x)

#endif

#endif /* TIMEVAL_H */
