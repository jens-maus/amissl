#include <clib/idea_protos.h>

__asm __saveds const char *idea_options_AmiSSL(void)
{
	return(idea_options());
}

__asm __saveds void idea_ecb_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __a2 IDEA_KEY_SCHEDULE *ks)
{
	idea_ecb_encrypt(in, out, ks);
}

__asm __saveds void idea_set_encrypt_key_AmiSSL(register __a0 const unsigned char *key, register __a1 IDEA_KEY_SCHEDULE *ks)
{
	idea_set_encrypt_key(key, ks);
}

__asm __saveds void idea_set_decrypt_key_AmiSSL(register __a0 IDEA_KEY_SCHEDULE *ek, register __a1 IDEA_KEY_SCHEDULE *dk)
{
	idea_set_decrypt_key(ek, dk);
}

__asm __saveds void idea_cbc_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 IDEA_KEY_SCHEDULE *ks, register __a3 unsigned char *iv, register __d1 int enc)
{
	idea_cbc_encrypt(in, out, length, ks, iv, enc);
}

__asm __saveds void idea_cfb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 IDEA_KEY_SCHEDULE *ks, register __a3 unsigned char *iv, register __d1 int *num, register __d2 int enc)
{
	idea_cfb64_encrypt(in, out, length, ks, iv, num, enc);
}

__asm __saveds void idea_ofb64_encrypt_AmiSSL(register __a0 const unsigned char *in, register __a1 unsigned char *out, register __d0 long length, register __a2 IDEA_KEY_SCHEDULE *ks, register __a3 unsigned char *iv, register __d1 int *num)
{
	idea_ofb64_encrypt(in, out, length, ks, iv, num);
}

__asm __saveds void idea_encrypt_AmiSSL(register __a0 unsigned long *in, register __a1 IDEA_KEY_SCHEDULE *ks)
{
	idea_encrypt(in, ks);
}

