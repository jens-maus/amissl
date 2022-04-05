/* Automatically generated header (sfdc 1.12)! Do not edit! */

#ifndef _PPCINLINE_AMISSLMASTER_H
#define _PPCINLINE_AMISSLMASTER_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif /* !__PPCINLINE_MACROS_H */

#ifndef AMISSLMASTER_BASE_NAME
#define AMISSLMASTER_BASE_NAME AmiSSLMasterBase
#endif /* !AMISSLMASTER_BASE_NAME */

#define InitAmiSSLMaster(___APIVersion, ___UsesOpenSSLStructs) \
      LP2(0x1e, LONG, InitAmiSSLMaster , LONG, ___APIVersion, d0, LONG, ___UsesOpenSSLStructs, d1,\
      , AMISSLMASTER_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OpenAmiSSL() \
      LP0(0x24, struct Library *, OpenAmiSSL ,\
      , AMISSLMASTER_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CloseAmiSSL() \
      LP0NR(0x2a, CloseAmiSSL ,\
      , AMISSLMASTER_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OpenAmiSSLCipher(___Cipher) \
      LP1(0x30, struct Library *, OpenAmiSSLCipher , LONG, ___Cipher, d0,\
      , AMISSLMASTER_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CloseAmiSSLCipher(___CipherBase) \
      LP1NR(0x36, CloseAmiSSLCipher , struct Library *, ___CipherBase, a0,\
      , AMISSLMASTER_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OpenAmiSSLTagList(___APIVersion, ___tagList) \
      LP2(0x3c, LONG, OpenAmiSSLTagList , LONG, ___APIVersion, d0, struct TagItem *, ___tagList, a0,\
      , AMISSLMASTER_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_STDARG
#define OpenAmiSSLTags(___APIVersion, ___tag, ...) \
    ({_sfdc_vararg _tags[] = { ___tag, __VA_ARGS__ }; OpenAmiSSLTagList((___APIVersion), (struct TagItem *) _tags); })
#endif /* !NO_INLINE_STDARG */

#endif /* !_PPCINLINE_AMISSLMASTER_H */
