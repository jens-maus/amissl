#ifndef CLIB_MD2_PROTOS_H
#define CLIB_MD2_PROTOS_H

#include <amissl/md2.h>

const char *MD2_options(void);
void MD2_Init(MD2_CTX *c);
void MD2_Update(MD2_CTX *c, const unsigned char *data, unsigned long len);
void MD2_Final(unsigned char *md, MD2_CTX *c);
unsigned char *MD2(const unsigned char *d, unsigned long n, unsigned char *md);

#endif /* CLIB_MD2_PROTOS_H */
