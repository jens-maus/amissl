#ifndef CLIB_RC2_PROTOS_H
#define CLIB_RC2_PROTOS_H

#include <amissl/rc2.h>

void RC2_set_key(RC2_KEY *key, int len, const unsigned char *data, int bits);
void RC2_ecb_encrypt(const unsigned char *in, unsigned char *out, RC2_KEY *key, int enc);
void RC2_encrypt(unsigned long *data, RC2_KEY *key);
void RC2_decrypt(unsigned long *data, RC2_KEY *key);
void RC2_cbc_encrypt(const unsigned char *in, unsigned char *out, long length, RC2_KEY *ks, unsigned char *iv, int enc);
void RC2_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, RC2_KEY *schedule, unsigned char *ivec, int *num, int enc);
void RC2_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, RC2_KEY *schedule, unsigned char *ivec, int *num);

#endif /* CLIB_RC2_PROTOS_H */
