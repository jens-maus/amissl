#ifndef CLIB_CAST_PROTOS_H
#define CLIB_CAST_PROTOS_H

#include <amissl/cast.h>

void CAST_set_key(CAST_KEY *key, int len, const unsigned char *data);
void CAST_ecb_encrypt(const unsigned char *in, unsigned char *out, CAST_KEY *key, int enc);
void CAST_encrypt(CAST_LONG *data, CAST_KEY *key);
void CAST_decrypt(CAST_LONG *data, CAST_KEY *key);
void CAST_cbc_encrypt(const unsigned char *in, unsigned char *out, long length, CAST_KEY *ks, unsigned char *iv, int enc);
void CAST_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, CAST_KEY *schedule, unsigned char *ivec, int *num, int enc);
void CAST_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, CAST_KEY *schedule, unsigned char *ivec, int *num);

#endif /* CLIB_CAST_PROTOS_H */
