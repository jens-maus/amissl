#ifndef CLIB_MD5_PROTOS_H
#define CLIB_MD5_PROTOS_H

#include <amissl/md5.h>

void MD5_Init(MD5_CTX *c);
void MD5_Update(MD5_CTX *c, const void *data, unsigned long len);
void MD5_Final(unsigned char *md, MD5_CTX *c);
unsigned char *MD5(const unsigned char *d, unsigned long n, unsigned char *md);
void MD5_Transform(MD5_CTX *c, const unsigned char *b);

#endif /* CLIB_MD5_PROTOS_H */
