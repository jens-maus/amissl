#include <clib/aes_protos.h>

__asm __saveds const char *AES_options_AmiSSL(void)
{
	return(AES_options());
}

__asm __saveds int AES_set_encrypt_key_AmiSSL(register __a0 const unsigned char *userKey, register __d0 const int bits, register __a1 AES_KEY *key)
{
	return(AES_set_encrypt_key(userKey, bits, key));
}

__asm __saveds int AES_set_decrypt_key_AmiSSL(register __a0 const unsigned char *userKey, register __d0 const int bits, register __a1 AES_KEY *key)
{
	return(AES_set_decrypt_key(userKey, bits, key));
}

__asm __saveds void AES_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 const AES_KEY *key)
{
	AES_encrypt(in, out, key);
}

__asm __saveds void AES_decrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 const AES_KEY *key)
{
	AES_decrypt(in, out, key);
}

__asm __saveds void AES_ecb_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 const AES_KEY *key, register __d0 const int enc)
{
	AES_ecb_encrypt(in, out, key, enc);
}

__asm __saveds void AES_cbc_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 const unsigned long length, register __a2 const AES_KEY *key, register __a3 unsigned char *ivec, register __d1 const int enc)
{
	AES_cbc_encrypt(in, out, length, key, ivec, enc);
}

__asm __saveds void AES_cfb128_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 const unsigned long length, register __a2 const AES_KEY *key, register __a3 unsigned char *ivec, register __d1 int *num, register __d2 const int enc)
{
	AES_cfb128_encrypt(in, out, length, key, ivec, num, enc);
}

__asm __saveds void AES_ofb128_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 const unsigned long length, register __a2 const AES_KEY *key, register __a3 unsigned char *ivec, register __d1 int *num)
{
	AES_ofb128_encrypt(in, out, length, key, ivec, num);
}

__asm __saveds void AES_ctr128_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 const unsigned long length, register __a2 const AES_KEY *key, register __d1 unsigned char counter[AES_BLOCK_SIZE], register __d2 unsigned char ecount_buf[AES_BLOCK_SIZE], register __a3 unsigned int *num)
{
	AES_ctr128_encrypt(in, out, length, key, counter, ecount_buf, num);
}
