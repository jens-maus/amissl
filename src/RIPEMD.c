#include <clib/ripemd_protos.h>

__asm __saveds void RIPEMD160_Init_AmiSSL(register __a0 RIPEMD160_CTX *c)
{
	RIPEMD160_Init(c);
}

__asm __saveds void RIPEMD160_Update_AmiSSL(register __a0 RIPEMD160_CTX *c, register __a1 const void *data, register __d0 unsigned long len)
{
	RIPEMD160_Update(c, data, len);
}

__asm __saveds void RIPEMD160_Final_AmiSSL(register __a0 unsigned char *md, register __a1 RIPEMD160_CTX *c)
{
	RIPEMD160_Final(md, c);
}

__asm __saveds unsigned char *RIPEMD160_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(RIPEMD160(d, n, md));
}

__asm __saveds void RIPEMD160_Transform_AmiSSL(register __a0 RIPEMD160_CTX *c, register __a1 const unsigned char *b)
{
	RIPEMD160_Transform(c, b);
}

