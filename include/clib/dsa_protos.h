#ifndef CLIB_DSA_PROTOS_H
#define CLIB_DSA_PROTOS_H

#include <amissl/dsa.h>
#include <amissl/bn.h>

long InitDSA(struct Library *AmiSSLBase, struct Library *SHABase);
long CleanupDSA(void);
DSA_SIG *DSA_SIG_new(void);
void DSA_SIG_free(DSA_SIG *a);
int i2d_DSA_SIG(DSA_SIG *a, unsigned char **pp);
DSA_SIG *d2i_DSA_SIG(DSA_SIG **v, unsigned char **pp, long length);
DSA_SIG *DSA_do_sign(const unsigned char *dgst, int dlen, DSA *dsa);
int DSA_do_verify(const unsigned char *dgst, int dgst_len, DSA_SIG *sig, DSA *dsa);
DSA_METHOD *DSA_OpenSSL(void);
void DSA_set_default_method(DSA_METHOD *a);
DSA_METHOD *DSA_get_default_method(void);
DSA_METHOD *DSA_set_method(DSA *dsa, DSA_METHOD *a);
DSA *DSA_new(void);
DSA *DSA_new_method(DSA_METHOD *meth);
int DSA_size(DSA *a);
int DSA_sign_setup(DSA *dsa, BN_CTX *ctx_in, BIGNUM **kinvp, BIGNUM **rp);
int DSA_sign(int type, const unsigned char *dgst, int dlen, unsigned char *sig, unsigned int *siglen, DSA *dsa);
int DSA_verify(int type, const unsigned char *dgst, int dgst_len, unsigned char *sigbuf, int siglen, DSA *dsa);
void DSA_free(DSA *r);
int DSA_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func, CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int DSA_set_ex_data(DSA *d, int idx, void *arg);
void *DSA_get_ex_data(DSA *d, int idx);
DSA *DSA_generate_parameters(int bits, unsigned char *seed, int seed_len, int *counter_ret, unsigned long *h_ret, void (*callback)(int, int, void *), void *cb_arg);
int DSA_generate_key(DSA *a);
void ERR_load_DSA_strings(void);

#endif /* CLIB_DSA_PROTOS_H */
