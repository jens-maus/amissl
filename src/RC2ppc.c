#include <clib/rc2_protos.h>

long RC2_IsReal(void)
{
	return(1);
}

__near void *_PPC_RC2_IsReal = (void *)RC2_IsReal;
__near void *_PPC_RC2_set_key = (void *)RC2_set_key;
__near void *_PPC_RC2_ecb_encrypt = (void *)RC2_ecb_encrypt;
__near void *_PPC_RC2_encrypt = (void *)RC2_encrypt;
__near void *_PPC_RC2_decrypt = (void *)RC2_decrypt;
__near void *_PPC_RC2_cbc_encrypt = (void *)RC2_cbc_encrypt;
__near void *_PPC_RC2_cfb64_encrypt = (void *)RC2_cfb64_encrypt;
__near void *_PPC_RC2_ofb64_encrypt = (void *)RC2_ofb64_encrypt;
