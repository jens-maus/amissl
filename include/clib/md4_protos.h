#ifndef CLIB_MD4_PROTOS_H
#define CLIB_MD4_PROTOS_H

#include <amissl/md4.h>

void MD4_Init(MD4_CTX *c);
void MD4_Update(MD4_CTX *c, const void *data, unsigned long len);
void MD4_Final(unsigned char *md, MD4_CTX *c);
unsigned char *MD4(const unsigned char *d, unsigned long n, unsigned char *md);
void MD4_Transform(MD4_CTX *c, const unsigned char *b);

#endif /* CLIB_MD4_PROTOS_H */
