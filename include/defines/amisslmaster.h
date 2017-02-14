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

#ifndef AROS_LIBCALL_H
#include <aros/libcall.h>
#endif /* !AROS_LIBCALL_H */

#ifndef AMISSLMASTER_BASE_NAME
#define AMISSLMASTER_BASE_NAME AmiSSLMasterBase
#endif /* !AMISSLMASTER_BASE_NAME */

#define InitAmiSSLMaster(___APIVersion, ___UsesOpenSSLStructs) \
      AROS_LC2(LONG, InitAmiSSLMaster, \
 AROS_LCA(LONG, (___APIVersion), D0), \
 AROS_LCA(LONG, (___UsesOpenSSLStructs), D1), \
     struct Library *, AMISSLMASTER_BASE_NAME, 5, Amisslmaster)

#define OpenAmiSSL() \
      AROS_LC0(struct Library *, OpenAmiSSL, \
     struct Library *, AMISSLMASTER_BASE_NAME, 6, Amisslmaster)

#define CloseAmiSSL() \
      AROS_LC0(void, CloseAmiSSL, \
     struct Library *, AMISSLMASTER_BASE_NAME, 7, Amisslmaster)

#define OpenAmiSSLCipher(___Cipher) \
      AROS_LC1(struct Library *, OpenAmiSSLCipher, \
 AROS_LCA(LONG, (___Cipher), D0), \
     struct Library *, AMISSLMASTER_BASE_NAME, 8, Amisslmaster)

#define CloseAmiSSLCipher(___CipherBase) \
      AROS_LC1(void, CloseAmiSSLCipher, \
 AROS_LCA(struct Library *, (___CipherBase), A0), \
     struct Library *, AMISSLMASTER_BASE_NAME, 9, Amisslmaster)

#endif /* !_INLINE_AMISSLMASTER_H */
