#include <clib/md2_protos.h>

__asm __saveds const char *MD2_options_AmiSSL(void)
{
	return(MD2_options());
}

__asm __saveds int MD2_Init_AmiSSL(register __a0 MD2_CTX *c)
{
	return(MD2_Init(c));
}

__asm __saveds int MD2_Update_AmiSSL(register __a0 MD2_CTX *c, register __a1 const unsigned char *data, register __d0 unsigned long len)
{
	return(MD2_Update(c, data, len));
}

__asm __saveds int MD2_Final_AmiSSL(register __a0 unsigned char *md, register __a1 MD2_CTX *c)
{
	return(MD2_Final(md, c));
}

__asm __saveds unsigned char *MD2_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(MD2(d, n, md));
}
