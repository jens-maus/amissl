#include <clib/md4_protos.h>

__asm __saveds void MD4_Init_AmiSSL(register __a0 MD4_CTX *c)
{
	MD4_Init(c);
}

__asm __saveds void MD4_Update_AmiSSL(register __a0 MD4_CTX *c, register __a1 const void *data, register __d0 unsigned long len)
{
	MD4_Update(c, data, len);
}

__asm __saveds void MD4_Final_AmiSSL(register __a0 unsigned char *md, register __a1 MD4_CTX *c)
{
	MD4_Final(md, c);
}

__asm __saveds unsigned char *MD4_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(MD4(d, n, md));
}

__asm __saveds void MD4_Transform_AmiSSL(register __a0 MD4_CTX *c, register __a1 const unsigned char *b)
{
	MD4_Transform(c, b);
}

