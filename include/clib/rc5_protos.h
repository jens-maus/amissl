#ifndef CLIB_RC5_PROTOS_H
#define CLIB_RC5_PROTOS_H

#include <amissl/rc5.h>

void RC5_32_set_key(RC5_32_KEY *key, int len, const unsigned char *data, int rounds);
void RC5_32_ecb_encrypt(const unsigned char *in, unsigned char *out, RC5_32_KEY *key, int enc);
void RC5_32_encrypt(unsigned long *data, RC5_32_KEY *key);
void RC5_32_decrypt(unsigned long *data, RC5_32_KEY *key);
void RC5_32_cbc_encrypt(const unsigned char *in, unsigned char *out, long length, RC5_32_KEY *ks, unsigned char *iv, int enc);
void RC5_32_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, RC5_32_KEY *schedule, unsigned char *ivec, int *num, int enc);
void RC5_32_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, RC5_32_KEY *schedule, unsigned char *ivec, int *num);

#endif /* CLIB_RC5_PROTOS_H */
