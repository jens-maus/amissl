/* Automatically generated header (sfdc 1.8)! Do not edit! */

#ifndef _GATEPROTO_AMISSLMASTER_H
#define _GATEPROTO_AMISSLMASTER_H

#include <exec/types.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <emul/emulregs.h>

LONG
LIBSTUB_InitAmiSSLMaster(void);

struct Library *
LIBSTUB_OpenAmiSSL(void);

void
LIBSTUB_CloseAmiSSL(void);

struct Library *
LIBSTUB_OpenAmiSSLCipher(void);

void
LIBSTUB_CloseAmiSSLCipher(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _GATEPROTO_AMISSLMASTER_H */
