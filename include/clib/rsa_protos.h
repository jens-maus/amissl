#ifndef CLIB_RSA_PROTOS_H
#define CLIB_RSA_PROTOS_H

#include <amissl/rsa.h>
#include <amissl/bio.h>

long InitRSA(struct Library *AmiSSLBase, struct Library *SHABase, struct Library *MD5Base);
long CleanupRSA(void);
RSA *RSA_new(void);
RSA *RSA_new_method(RSA_METHOD *method);
int RSA_size(RSA *a);
RSA *RSA_generate_key(int bits, unsigned long e, void (*callback)(int, int, void *), void *cb_arg);
int RSA_check_key(RSA *rsa);
int RSA_public_encrypt(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
int RSA_private_encrypt(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
int RSA_public_decrypt(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
int RSA_private_decrypt(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding);
void RSA_free(RSA *r);
int RSA_flags(RSA *r);
void RSA_set_default_method(RSA_METHOD *meth);
RSA_METHOD *RSA_get_default_method(void);
RSA_METHOD *RSA_get_method(RSA *rsa);
RSA_METHOD *RSA_set_method(RSA *rsa, RSA_METHOD *meth);
int RSA_memory_lock(RSA *r);
RSA_METHOD *RSA_PKCS1_SSLeay(void);
RSA_METHOD *RSA_null_method(void);
int RSA_sign(int type, unsigned char *m, unsigned int m_len, unsigned char *sigret, unsigned int *siglen, RSA *rsa);
int RSA_verify(int type, unsigned char *m, unsigned int m_len, unsigned char *sigbuf, unsigned int siglen, RSA *rsa);
int RSA_sign_ASN1_OCTET_STRING(int type, unsigned char *m, unsigned int m_len, unsigned char *sigret, unsigned int *siglen, RSA *rsa);
int RSA_verify_ASN1_OCTET_STRING(int type, unsigned char *m, unsigned int m_len, unsigned char *sigbuf, unsigned int siglen, RSA *rsa);
int RSA_blinding_on(RSA *rsa, BN_CTX *ctx);
void RSA_blinding_off(RSA *rsa);
int RSA_padding_add_PKCS1_type_1(unsigned char *to, int tlen, unsigned char *f, int fl);
int RSA_padding_check_PKCS1_type_1(unsigned char *to, int tlen, unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_PKCS1_type_2(unsigned char *to, int tlen, unsigned char *f, int fl);
int RSA_padding_check_PKCS1_type_2(unsigned char *to, int tlen, unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_PKCS1_OAEP(unsigned char *to, int tlen, unsigned char *f, int fl, unsigned char *p, int pl);
int RSA_padding_check_PKCS1_OAEP(unsigned char *to, int tlen, unsigned char *f, int fl, int rsa_len, unsigned char *p, int pl);
int RSA_padding_add_SSLv23(unsigned char *to, int tlen, unsigned char *f, int fl);
int RSA_padding_check_SSLv23(unsigned char *to, int tlen, unsigned char *f, int fl, int rsa_len);
int RSA_padding_add_none(unsigned char *to, int tlen, unsigned char *f, int fl);
int RSA_padding_check_none(unsigned char *to, int tlen, unsigned char *f, int fl, int rsa_len);
int RSA_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func, CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int RSA_set_ex_data(RSA *r, int idx, void *arg);
void *RSA_get_ex_data(RSA *r, int idx);
void ERR_load_RSA_strings(void);

#endif /* CLIB_RSA_PROTOS_H */
