#include <clib/rc4_protos.h>

__asm __saveds const char *RC4_options_AmiSSL(void)
{
	return(RC4_options());
}

__asm __saveds void RC4_set_key_AmiSSL(register __a0 RC4_KEY *key, register __d0 int len, register __a1 const unsigned char *data)
{
	RC4_set_key(key, len, data);
}

__asm __saveds void RC4_AmiSSL(register __a0 RC4_KEY *key, register __d0 unsigned long len, register __a1 const unsigned char *indata, register __a2 unsigned char *outdata)
{
	RC4(key, len, indata, outdata);
}

