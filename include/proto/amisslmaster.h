#ifndef PROTO_AMISSLMASTER_H
#define PROTO_AMISSLMASTER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
extern struct Library *AmiSSLMasterBase;
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
  #ifndef __PPC__
   #include <inline/amisslmaster.h>
  #else
   #include <ppcinline/amisslmaster.h>
  #endif /* __PPC__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/amisslmaster_protos.h>
  #endif /* __PPC__ */
 #else
  #include <pragmas/amisslmaster_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_AMISSLMASTER_H */
