#include <clib/md5_protos.h>

__asm __saveds void MD5_Init_AmiSSL(register __a0 MD5_CTX *c)
{
	MD5_Init(c);
}

__asm __saveds void MD5_Update_AmiSSL(register __a0 MD5_CTX *c, register __a1 const void *data, register __d0 unsigned long len)
{
	MD5_Update(c, data, len);
}

__asm __saveds void MD5_Final_AmiSSL(register __a0 unsigned char *md, register __a1 MD5_CTX *c)
{
	MD5_Final(md, c);
}

__asm __saveds unsigned char *MD5_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(MD5(d, n, md));
}

__asm __saveds void MD5_Transform_AmiSSL(register __a0 MD5_CTX *c, register __a1 const unsigned char *b)
{
	MD5_Transform(c, b);
}

