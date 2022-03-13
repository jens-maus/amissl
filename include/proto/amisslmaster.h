#ifndef PROTO_AMISSLMASTER_H
#define PROTO_AMISSLMASTER_H

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

/****************************************************************************/

#ifndef __NOLIBBASE__
 #ifndef __USE_BASETYPE__
  extern struct Library * AmiSSLMasterBase;
 #else
  extern struct Library * AmiSSLMasterBase;
 #endif /* __USE_BASETYPE__ */
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/amisslmaster.h>
 #ifdef __USE_INLINE__
  #include <inline4/amisslmaster.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_AMISSLMASTER_PROTOS_H
  #define CLIB_AMISSLMASTER_PROTOS_H 1
 #endif /* CLIB_AMISSLMASTER_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  extern struct AmiSSLMasterIFace *IAmiSSLMaster;
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_AMISSLMASTER_PROTOS_H
  #include <clib/amisslmaster_protos.h>
 #endif /* CLIB_AMISSLMASTER_PROTOS_H */
 #if defined(__GNUC__)
  #ifdef __AROS__
   #include <defines/amisslmaster.h>
  #else
   #ifndef __PPC__
    #include <inline/amisslmaster.h>
   #else /* __PPC__ */
    #include <ppcinline/amisslmaster.h>
   #endif /* __PPC__ */
  #endif /* __AROS__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/amisslmaster_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/amisslmaster_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_AMISSLMASTER_H */
