#ifndef _PPCINLINE_AMISSLMASTER_H
#define _PPCINLINE_AMISSLMASTER_H

#ifndef CLIB_AMISSLMASTER_PROTOS_H
#define CLIB_AMISSLMASTER_PROTOS_H
#endif

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif

#ifndef AMISSLMASTER_BASE_NAME
#define AMISSLMASTER_BASE_NAME AmiSSLMasterBase
#endif

#define InitAmiSSLMaster(APIVersion, AllowUserStructs) \
	LP2(0x1e, LONG, InitAmiSSLMaster, LONG, APIVersion, d0, LONG, AllowUserStructs, d1, \
	, AMISSLMASTER_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define OpenAmiSSL() \
	LP0(0x24, struct Library *, OpenAmiSSL, \
	, AMISSLMASTER_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define CloseAmiSSL() \
	LP0NR(0x2a, CloseAmiSSL, \
	, AMISSLMASTER_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define OpenAmiSSLCipher(Cipher) \
	LP1(0x30, struct Library *, OpenAmiSSLCipher, LONG, Cipher, d0, \
	, AMISSLMASTER_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#define CloseAmiSSLCipher(CipherBase) \
	LP1NR(0x36, CloseAmiSSLCipher, struct Library *, CipherBase, a0, \
	, AMISSLMASTER_BASE_NAME, IF_CACHEFLUSHALL, NULL, 0, IF_CACHEFLUSHALL, NULL, 0)

#endif /*  _PPCINLINE_AMISSLMASTER_H  */
