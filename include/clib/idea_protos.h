#ifndef CLIB_IDEA_PROTOS_H
#define CLIB_IDEA_PROTOS_H

#include <amissl/idea.h>

const char *idea_options(void);
void idea_ecb_encrypt(const unsigned char *in, unsigned char *out, IDEA_KEY_SCHEDULE *ks);
void idea_set_encrypt_key(const unsigned char *key, IDEA_KEY_SCHEDULE *ks);
void idea_set_decrypt_key(IDEA_KEY_SCHEDULE *ek, IDEA_KEY_SCHEDULE *dk);
void idea_cbc_encrypt(const unsigned char *in, unsigned char *out, long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv, int enc);
void idea_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv, int *num, int enc);
void idea_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, IDEA_KEY_SCHEDULE *ks, unsigned char *iv, int *num);
void idea_encrypt(unsigned long *in, IDEA_KEY_SCHEDULE *ks);

#endif /* CLIB_IDEA_PROTOS_H */
