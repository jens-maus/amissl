#include <clib/cast_protos.h>

__asm __saveds void CAST_set_key_AmiSSL(register __a0 CAST_KEY *key, register __d0 int len, register __a1 const unsigned char *data)
{
	CAST_set_key(key, len, data);
}

__asm __saveds void CAST_ecb_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 CAST_KEY *key, register __d0 int enc)
{
	CAST_ecb_encrypt(in, out, key, enc);
}

__asm __saveds void CAST_encrypt_AmiSSL(register __a0 CAST_LONG *data, register __a1 CAST_KEY *key)
{
	CAST_encrypt(data, key);
}

__asm __saveds void CAST_decrypt_AmiSSL(register __a0 CAST_LONG *data, register __a1 CAST_KEY *key)
{
	CAST_decrypt(data, key);
}

__asm __saveds void CAST_cbc_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 CAST_KEY *ks, register __a3 unsigned char *iv, register __d1 int enc)
{
	CAST_cbc_encrypt(in, out, length, ks, iv, enc);
}

__asm __saveds void CAST_cfb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 CAST_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num, register __d2 int enc)
{
	CAST_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

__asm __saveds void CAST_ofb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 CAST_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num)
{
	CAST_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

