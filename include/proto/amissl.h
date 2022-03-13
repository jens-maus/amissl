#ifndef PROTO_AMISSL_H
#define PROTO_AMISSL_H

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

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef DOS_DOS_H
#include <dos/dos.h>
#endif
#ifndef AMISSL_AMISSL_H
#include <amissl/amissl.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
extern struct Library * AmiSSLBase, *AmiSSLExtBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/amissl.h>
 #ifdef __USE_INLINE__
  #include <inline4/amissl.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_AMISSL_PROTOS_H
  #define CLIB_AMISSL_PROTOS_H 1
 #endif /* CLIB_AMISSL_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  extern struct AmiSSLIFace *IAmiSSL;
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_AMISSL_PROTOS_H
  #include <clib/amissl_protos.h>
 #endif /* CLIB_AMISSL_PROTOS_H */
 #if defined(__GNUC__)
  #ifdef __AROS__
   #include <defines/amissl.h>
   #include <defines/amisslext.h>
  #else
   #ifndef __PPC__
    #include <inline/amissl.h>
    #include <inline/amisslext.h>
   #else /* __PPC__ */
    #include <ppcinline/amissl.h>
    #include <ppcinline/amisslext.h>
   #endif /* __PPC__ */
  #endif /* __AROS__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/amissl_protos.h>
   #include <inline/amisslext_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/amissl_pragmas.h>
  #include <pragmas/amisslext_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#ifndef AMISSL_INLINE_H
#include <amissl/inline.h>
#endif

#endif /* PROTO_AMISSL_H */
