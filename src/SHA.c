#include <clib/sha_protos.h>

__asm __saveds void SHA_Init_AmiSSL(register __a0 SHA_CTX *c)
{
	SHA_Init(c);
}

__asm __saveds void SHA_Update_AmiSSL(register __a0 SHA_CTX *c, register __a1 const void *data, register __d0 unsigned long len)
{
	SHA_Update(c, data, len);
}

__asm __saveds void SHA_Final_AmiSSL(register __a0 unsigned char *md, register __a1 SHA_CTX *c)
{
	SHA_Final(md, c);
}

__asm __saveds unsigned char *SHA_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(SHA(d, n, md));
}

__asm __saveds void SHA_Transform_AmiSSL(register __a0 SHA_CTX *c, register __a1 const unsigned char *data)
{
	SHA_Transform(c, data);
}

__asm __saveds void SHA1_Init_AmiSSL(register __a0 SHA_CTX *c)
{
	SHA1_Init(c);
}

__asm __saveds void SHA1_Update_AmiSSL(register __a0 SHA_CTX *c, register __a1 const void *data, register __d0 unsigned long len)
{
	SHA1_Update(c, data, len);
}

__asm __saveds void SHA1_Final_AmiSSL(register __a0 unsigned char *md, register __a1 SHA_CTX *c)
{
	SHA1_Final(md, c);
}

__asm __saveds unsigned char *SHA1_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(SHA1(d, n, md));
}

__asm __saveds void SHA1_Transform_AmiSSL(register __a0 SHA_CTX *c, register __a1 const unsigned char *data)
{
	SHA1_Transform(c, data);
}

