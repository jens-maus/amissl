#ifndef _INLINE_AMISSLMASTER_H
#define _INLINE_AMISSLMASTER_H

#ifndef CLIB_AMISSLMASTER_PROTOS_H
#define CLIB_AMISSLMASTER_PROTOS_H
#endif

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif

#ifndef AMISSLMASTER_BASE_NAME
#define AMISSLMASTER_BASE_NAME AmiSSLMasterBase
#endif

#define InitAmiSSLMaster(APIVersion, UsesOpenSSLStructs) ({ \
  LONG _InitAmiSSLMaster_APIVersion = (APIVersion); \
  LONG _InitAmiSSLMaster_UsesOpenSSLStructs = (UsesOpenSSLStructs); \
  ({ \
  register char * _InitAmiSSLMaster__bn __asm("a6") = (char *) (AMISSLMASTER_BASE_NAME);\
  ((LONG (*)(char * __asm("a6"), LONG __asm("d0"), LONG __asm("d1"))) \
  (_InitAmiSSLMaster__bn - 30))(_InitAmiSSLMaster__bn, _InitAmiSSLMaster_APIVersion, _InitAmiSSLMaster_UsesOpenSSLStructs); \
});})

#define OpenAmiSSL() ({ \
  register char * _OpenAmiSSL__bn __asm("a6") = (char *) (AMISSLMASTER_BASE_NAME);\
  ((struct Library * (*)(char * __asm("a6"))) \
  (_OpenAmiSSL__bn - 36))(_OpenAmiSSL__bn); \
})

#define CloseAmiSSL() ({ \
  register char * _CloseAmiSSL__bn __asm("a6") = (char *) (AMISSLMASTER_BASE_NAME);\
  ((void (*)(char * __asm("a6"))) \
  (_CloseAmiSSL__bn - 42))(_CloseAmiSSL__bn); \
})

#define OpenAmiSSLCipher(Cipher) ({ \
  LONG _OpenAmiSSLCipher_Cipher = (Cipher); \
  ({ \
  register char * _OpenAmiSSLCipher__bn __asm("a6") = (char *) (AMISSLMASTER_BASE_NAME);\
  ((struct Library * (*)(char * __asm("a6"), LONG __asm("d0"))) \
  (_OpenAmiSSLCipher__bn - 48))(_OpenAmiSSLCipher__bn, _OpenAmiSSLCipher_Cipher); \
});})

#define CloseAmiSSLCipher(CipherBase) ({ \
  struct Library * _CloseAmiSSLCipher_CipherBase = (CipherBase); \
  ({ \
  register char * _CloseAmiSSLCipher__bn __asm("a6") = (char *) (AMISSLMASTER_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct Library * __asm("a0"))) \
  (_CloseAmiSSLCipher__bn - 54))(_CloseAmiSSLCipher__bn, _CloseAmiSSLCipher_CipherBase); \
});})

#endif /*  _INLINE_AMISSLMASTER_H  */
