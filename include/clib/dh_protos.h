#ifndef CLIB_DH_PROTOS_H
#define CLIB_DH_PROTOS_H

#include <amissl/dh.h>
#include <amissl/bn.h>

long InitDH(struct Library *AmiSSLBase, struct Library *SHABase);
long CleanupDH(void);
DH_METHOD *DH_OpenSSL(void);
void DH_set_default_method(DH_METHOD *meth);
DH_METHOD *DH_get_default_method(void);
DH_METHOD *DH_set_method(DH *dh, DH_METHOD *meth);
DH *DH_new_method(DH_METHOD *meth);
DH *DH_new(void);
void DH_free(DH *dh);
int DH_size(DH *dh);
int DH_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new *new_func, CRYPTO_EX_dup *dup_func, CRYPTO_EX_free *free_func);
int DH_set_ex_data(DH *d, int idx, void *arg);
void *DH_get_ex_data(DH *d, int idx);
DH *DH_generate_parameters(int prime_len, int generator, void (*callback)(int, int, void *), void *cb_arg);
int DH_check(DH *dh, int *codes);
int DH_generate_key(DH *dh);
int DH_compute_key(unsigned char *key, BIGNUM *pub_key, DH *dh);
void ERR_load_DH_strings(void);

#endif /* CLIB_DH_PROTOS_H */
