#ifndef CLIB_SHA_PROTOS_H
#define CLIB_SHA_PROTOS_H

#include <amissl/sha.h>

void SHA_Init(SHA_CTX *c);
void SHA_Update(SHA_CTX *c, const void *data, unsigned long len);
void SHA_Final(unsigned char *md, SHA_CTX *c);
unsigned char *SHA(const unsigned char *d, unsigned long n, unsigned char *md);
void SHA_Transform(SHA_CTX *c, const unsigned char *data);
void SHA1_Init(SHA_CTX *c);
void SHA1_Update(SHA_CTX *c, const void *data, unsigned long len);
void SHA1_Final(unsigned char *md, SHA_CTX *c);
unsigned char *SHA1(const unsigned char *d, unsigned long n, unsigned char *md);
void SHA1_Transform(SHA_CTX *c, const unsigned char *data);

#endif /* CLIB_SHA_PROTOS_H */
