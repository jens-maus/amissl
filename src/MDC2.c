#include <clib/mdc2_protos.h>

__asm __saveds int MDC2_Init_AmiSSL(register __a0 MDC2_CTX *c)
{
	return(MDC2_Init(c));
}

__asm __saveds int MDC2_Update_AmiSSL(register __a0 MDC2_CTX *c, register __a1 const unsigned char *data, register __d0 unsigned long len)
{
	return(MDC2_Update(c, data, len));
}

__asm __saveds int MDC2_Final_AmiSSL(register __a0 unsigned char *md, register __a1 MDC2_CTX *c)
{
	return(MDC2_Final(md, c));
}

__asm __saveds unsigned char *MDC2_AmiSSL(register __a0 const unsigned char *d, register __d0 unsigned long n, register __a1 unsigned char *md)
{
	return(MDC2(d, n, md));
}
