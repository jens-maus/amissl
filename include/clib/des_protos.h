#ifndef CLIB_DES_PROTOS_H
#define CLIB_DES_PROTOS_H

#include <amissl/des.h>

long InitDES(struct Library *AmiSSLBase);
long CleanupDES(void);
const char *des_options(void);
void des_ecb3_encrypt(const_des_cblock *input, des_cblock *output, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3, int enc);
DES_LONG des_cbc_cksum(const unsigned char *input, des_cblock *output, long length, des_key_schedule schedule, const_des_cblock *ivec);
void des_cbc_encrypt(const unsigned char *input, unsigned char *output, long length, des_key_schedule schedule, des_cblock *ivec, int enc);
void des_ncbc_encrypt(const unsigned char *input, unsigned char *output, long length, des_key_schedule schedule, des_cblock *ivec, int enc);
void des_xcbc_encrypt(const unsigned char *input, unsigned char *output, long length, des_key_schedule schedule, des_cblock *ivec, const_des_cblock *inw, const_des_cblock *outw, int enc);
void des_cfb_encrypt(const unsigned char *in, unsigned char *out, int numbits, long length, des_key_schedule schedule, des_cblock *ivec, int enc);
void des_ecb_encrypt(const_des_cblock *input, des_cblock *output, des_key_schedule ks, int enc);
void des_encrypt1(DES_LONG *data, des_key_schedule ks, int enc);
void des_encrypt2(DES_LONG *data, des_key_schedule ks, int enc);
void des_encrypt3(DES_LONG *data, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3);
void des_decrypt3(DES_LONG *data, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3);
void des_ede3_cbc_encrypt(const unsigned char *input, unsigned char *output, long length, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3, des_cblock *ivec, int enc);
void des_ede3_cbcm_encrypt(const unsigned char *in, unsigned char *out, long length, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3, des_cblock *ivec1, des_cblock *ivec2, int enc);
void des_ede3_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3, des_cblock *ivec, int *num, int enc);
void des_ede3_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, des_key_schedule ks1, des_key_schedule ks2, des_key_schedule ks3, des_cblock *ivec, int *num);
void des_xwhite_in2out(const_des_cblock *des_key, const_des_cblock *in_white, des_cblock *out_white);
char *des_fcrypt(const char *buf, const char *salt, char *ret);
char *des_crypt(const char *buf, const char *salt);
void des_ofb_encrypt(const unsigned char *in, unsigned char *out, int numbits, long length, des_key_schedule schedule, des_cblock *ivec);
void des_pcbc_encrypt(const unsigned char *input, unsigned char *output, long length, des_key_schedule schedule, des_cblock *ivec, int enc);
DES_LONG des_quad_cksum(const unsigned char *input, des_cblock *output, long length, int out_count, des_cblock *seed);
void des_random_seed(des_cblock *key);
int des_random_key(des_cblock *ret);
int des_read_password(des_cblock *key, const char *prompt, int verify);
int des_read_2passwords(des_cblock *key1, des_cblock *key2, const char *prompt, int verify);
int des_read_pw_string(char *buf, int length, const char *prompt, int verify);
void des_set_odd_parity(des_cblock *key);
int des_check_key_parity(const_des_cblock *key);
int des_is_weak_key(const_des_cblock *key);
int des_set_key(const_des_cblock *key, des_key_schedule schedule);
int des_key_sched(const_des_cblock *key, des_key_schedule schedule);
int des_set_key_checked(const_des_cblock *key, des_key_schedule schedule);
void des_set_key_unchecked(const_des_cblock *key, des_key_schedule schedule);
void des_string_to_key(const char *str, des_cblock *key);
void des_string_to_2keys(const char *str, des_cblock *key1, des_cblock *key2);
void des_cfb64_encrypt(const unsigned char *in, unsigned char *out, long length, des_key_schedule schedule, des_cblock *ivec, int *num, int enc);
void des_ofb64_encrypt(const unsigned char *in, unsigned char *out, long length, des_key_schedule schedule, des_cblock *ivec, int *num);
int des_read_pw(char *buf, char *buff, int size, const char *prompt, int verify);

#endif /* CLIB_DES_PROTOS_H */
