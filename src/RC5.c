#include <clib/rc5_protos.h>

__asm __saveds void RC5_32_set_key_AmiSSL(register __a0 RC5_32_KEY *key, register __d0 int len, register __a1 const unsigned char *data, register __d1 int rounds)
{
	RC5_32_set_key(key, len, data, rounds);
}

__asm __saveds void RC5_32_ecb_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 RC5_32_KEY *key, register __d0 int enc)
{
	RC5_32_ecb_encrypt(in, out, key, enc);
}

__asm __saveds void RC5_32_encrypt_AmiSSL(register __a0 unsigned long *data, register __a1 RC5_32_KEY *key)
{
	RC5_32_encrypt(data, key);
}

__asm __saveds void RC5_32_decrypt_AmiSSL(register __a0 unsigned long *data, register __a1 RC5_32_KEY *key)
{
	RC5_32_decrypt(data, key);
}

__asm __saveds void RC5_32_cbc_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 RC5_32_KEY *ks, register __a3 unsigned char *iv, register __d1 int enc)
{
	RC5_32_cbc_encrypt(in, out, length, ks, iv, enc);
}

__asm __saveds void RC5_32_cfb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 RC5_32_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num, register __d2 int enc)
{
	RC5_32_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

__asm __saveds void RC5_32_ofb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 RC5_32_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num)
{
	RC5_32_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

