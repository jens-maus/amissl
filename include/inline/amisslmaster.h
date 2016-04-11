/* Automatically generated header (sfdc 1.10)! Do not edit! */

#ifndef _INLINE_AMISSLMASTER_H
#define _INLINE_AMISSLMASTER_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __INLINE_MACROS_H
#include <inline/macros.h>
#endif /* !__INLINE_MACROS_H */

#ifndef AMISSLMASTER_BASE_NAME
#define AMISSLMASTER_BASE_NAME AmiSSLMasterBase
#endif /* !AMISSLMASTER_BASE_NAME */

#define InitAmiSSLMaster(___APIVersion, ___UsesOpenSSLStructs) \
      LP2(0x1e, LONG, InitAmiSSLMaster , LONG, ___APIVersion, d0, LONG, ___UsesOpenSSLStructs, d1,\
      , AMISSLMASTER_BASE_NAME)

#define OpenAmiSSL() \
      LP0(0x24, struct Library *, OpenAmiSSL ,\
      , AMISSLMASTER_BASE_NAME)

#define CloseAmiSSL() \
      LP0NR(0x2a, CloseAmiSSL ,\
      , AMISSLMASTER_BASE_NAME)

#define OpenAmiSSLCipher(___Cipher) \
      LP1(0x30, struct Library *, OpenAmiSSLCipher , LONG, ___Cipher, d0,\
      , AMISSLMASTER_BASE_NAME)

#define CloseAmiSSLCipher(___CipherBase) \
      LP1NR(0x36, CloseAmiSSLCipher , struct Library *, ___CipherBase, a0,\
      , AMISSLMASTER_BASE_NAME)

#endif /* !_INLINE_AMISSLMASTER_H */
