#ifndef CLIB_BLOWFISH_PROTOS_H
#define CLIB_BLOWFISH_PROTOS_H

#include <amissl/blowfish.h>

void BF_set_key(BF_KEY *key, int len, const unsigned char *data);
void BF_encrypt(BF_LONG *data, const BF_KEY *key);
void BF_decrypt(BF_LONG *data, const BF_KEY *key);
void BF_ecb_encrypt(const unsigned char *in, unsigned char *out, const BF_KEY *key, int enc);
void BF_cbc_encrypt(const unsigned char *in, unsigned char *out, long length, const BF_KEY *schedule, unsigned char *ivec, int enc);
void BF_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, const BF_KEY *schedule, unsigned char *ivec, int *num, int enc);
void BF_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, const BF_KEY *schedule, unsigned char *ivec, int *num);
const char *BF_options(void);

#endif /* CLIB_BLOWFISH_PROTOS_H */
