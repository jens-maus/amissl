/* Automatically generated header (sfdc 1.11)! Do not edit! */

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

LONG __InitAmiSSLMaster(__reg("a6") struct Library * , __reg("d0") LONG APIVersion , __reg("d1") LONG UsesOpenSSLStructs ) = "\tjsr\t-30(a6)";
#define InitAmiSSLMaster(APIVersion, UsesOpenSSLStructs) __InitAmiSSLMaster(AmiSSLMasterBase, (APIVersion), (UsesOpenSSLStructs))

struct Library * __OpenAmiSSL(__reg("a6") struct Library * ) = "\tjsr\t-36(a6)";
#define OpenAmiSSL() __OpenAmiSSL(AmiSSLMasterBase)

void __CloseAmiSSL(__reg("a6") struct Library * ) = "\tjsr\t-42(a6)";
#define CloseAmiSSL() __CloseAmiSSL(AmiSSLMasterBase)

struct Library * __OpenAmiSSLCipher(__reg("a6") struct Library * , __reg("d0") LONG Cipher ) = "\tjsr\t-48(a6)";
#define OpenAmiSSLCipher(Cipher) __OpenAmiSSLCipher(AmiSSLMasterBase, (Cipher))

void __CloseAmiSSLCipher(__reg("a6") struct Library * , __reg("a0") struct Library * CipherBase ) = "\tjsr\t-54(a6)";
#define CloseAmiSSLCipher(CipherBase) __CloseAmiSSLCipher(AmiSSLMasterBase, (CipherBase))

#endif /* !_INLINE_AMISSLMASTER_H */
