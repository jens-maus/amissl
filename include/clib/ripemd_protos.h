#ifndef CLIB_RIPEMD_PROTOS_H
#define CLIB_RIPEMD_PROTOS_H

#include <amissl/ripemd.h>

void RIPEMD160_Init(RIPEMD160_CTX *c);
void RIPEMD160_Update(RIPEMD160_CTX *c, const void *data, unsigned long len);
void RIPEMD160_Final(unsigned char *md, RIPEMD160_CTX *c);
unsigned char *RIPEMD160(const unsigned char *d, unsigned long n, unsigned char *md);
void RIPEMD160_Transform(RIPEMD160_CTX *c, const unsigned char *b);

#endif /* CLIB_RIPEMD_PROTOS_H */
