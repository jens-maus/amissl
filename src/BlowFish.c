#include <clib/blowfish_protos.h>

__asm __saveds void BF_set_key_AmiSSL(register __a0 BF_KEY *key, register __d0 int len, register __a1 const unsigned char *data)
{
	BF_set_key(key, len, data);
}

__asm __saveds void BF_encrypt_AmiSSL(register __a0 BF_LONG *data, register __a1 const BF_KEY *key)
{
	BF_encrypt(data, key);
}

__asm __saveds void BF_decrypt_AmiSSL(register __a0 BF_LONG *data, register __a1 const BF_KEY *key)
{
	BF_decrypt(data, key);
}

__asm __saveds void BF_ecb_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 const BF_KEY *key, register __d0 int enc)
{
	BF_ecb_encrypt(in, out, key, enc);
}

__asm __saveds void BF_cbc_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 const BF_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int enc)
{
	BF_cbc_encrypt(in, out, length, schedule, ivec, enc);
}

__asm __saveds void BF_cfb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 const BF_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num, register __d2 int enc)
{
	BF_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

__asm __saveds void BF_ofb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 const BF_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num)
{
	BF_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

__asm __saveds const char *BF_options_AmiSSL(void)
{
	return(BF_options());
}

