#include <clib/rc2_protos.h>

__asm __saveds void RC2_set_key_AmiSSL(register __a0 RC2_KEY *key, register __d0 int len, register __a1 const unsigned char *data, register __d1 int bits)
{
	RC2_set_key(key, len, data, bits);
}

__asm __saveds void RC2_ecb_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 RC2_KEY *key, register __d0 int enc)
{
	RC2_ecb_encrypt(in, out, key, enc);
}

__asm __saveds void RC2_encrypt_AmiSSL(register __a0 unsigned long *data, register __a1 RC2_KEY *key)
{
	RC2_encrypt(data, key);
}

__asm __saveds void RC2_decrypt_AmiSSL(register __a0 unsigned long *data, register __a1 RC2_KEY *key)
{
	RC2_decrypt(data, key);
}

__asm __saveds void RC2_cbc_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 RC2_KEY *ks, register __a3 unsigned char *iv, register __d1 int enc)
{
	RC2_cbc_encrypt(in, out, length, ks, iv, enc);
}

__asm __saveds void RC2_cfb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 RC2_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num, register __d2 int enc)
{
	RC2_cfb64_encrypt(in, out, length, schedule, ivec, num, enc);
}

__asm __saveds void RC2_ofb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 RC2_KEY *schedule, register __a3 unsigned char *ivec, register __d1 int *num)
{
	RC2_ofb64_encrypt(in, out, length, schedule, ivec, num);
}

