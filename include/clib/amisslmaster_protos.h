/* Automatically generated header (sfdc 1.6)! Do not edit! */

#ifndef CLIB_AMISSLMASTER_PROTOS_H
#define CLIB_AMISSLMASTER_PROTOS_H

/*
**	$VER: amisslmaster_protos.h $Id$ $Id$
**
**	C prototypes. For use with 32 bit integers only.
**
**	Copyright © 2001 Amiga, Inc.
**	    All Rights Reserved
*/

#include <exec/types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

LONG InitAmiSSLMaster(LONG APIVersion, LONG UsesOpenSSLStructs);
struct Library * OpenAmiSSL(void);
void CloseAmiSSL(void);
struct Library * OpenAmiSSLCipher(LONG Cipher);
void CloseAmiSSLCipher(struct Library * CipherBase);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_AMISSLMASTER_PROTOS_H */
