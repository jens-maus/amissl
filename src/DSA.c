#include <clib/dsa_protos.h>

__asm __saveds DSA_SIG *DSA_SIG_new_AmiSSL(void)
{
	return(DSA_SIG_new());
}

__asm __saveds void DSA_SIG_free_AmiSSL(register __a0 DSA_SIG *a)
{
	DSA_SIG_free(a);
}

__asm __saveds int i2d_DSA_SIG_AmiSSL(register __a0 DSA_SIG *a, register __a1 unsigned char **pp)
{
	return(i2d_DSA_SIG(a, pp));
}

__asm __saveds DSA_SIG *d2i_DSA_SIG_AmiSSL(register __a0 DSA_SIG **v, register __a1 unsigned char **pp, register __d0 long length)
{
	return(d2i_DSA_SIG(v, pp, length));
}

__asm __saveds DSA_SIG *DSA_do_sign_AmiSSL(register __a0 const unsigned char *dgst, register __d0 int dlen, register __a1 DSA *dsa)
{
	return(DSA_do_sign(dgst, dlen, dsa));
}

__asm __saveds int DSA_do_verify_AmiSSL(register __a0 const unsigned char *dgst, register __d0 int dgst_len, register __a1 DSA_SIG *sig, register __a2 DSA *dsa)
{
	return(DSA_do_verify(dgst, dgst_len, sig, dsa));
}

__asm __saveds DSA_METHOD *DSA_OpenSSL_AmiSSL(void)
{
	return(DSA_OpenSSL());
}

__asm __saveds void DSA_set_default_method_AmiSSL(register __a0 DSA_METHOD *a)
{
	DSA_set_default_method(a);
}

__asm __saveds DSA_METHOD *DSA_get_default_method_AmiSSL(void)
{
	return(DSA_get_default_method());
}

__asm __saveds DSA_METHOD *DSA_set_method_AmiSSL(register __a0 DSA *dsa, register __a1 DSA_METHOD *a)
{
	return(DSA_set_method(dsa, a));
}

__asm __saveds DSA *DSA_new_AmiSSL(void)
{
	return(DSA_new());
}

__asm __saveds DSA *DSA_new_method_AmiSSL(register __a0 DSA_METHOD *meth)
{
	return(DSA_new_method(meth));
}

__asm __saveds int DSA_size_AmiSSL(register __a0 DSA *a)
{
	return(DSA_size(a));
}

__asm __saveds int DSA_sign_setup_AmiSSL(register __a0 DSA *dsa, register __a1 BN_CTX *ctx_in, register __a2 BIGNUM **kinvp, register __a3 BIGNUM **rp)
{
	return(DSA_sign_setup(dsa, ctx_in, kinvp, rp));
}

__asm __saveds int DSA_sign_AmiSSL(register __d0 int type, register __a0 const unsigned char *dgst, register __d1 int dlen, register __a1 unsigned char *sig, register __a2 unsigned int *siglen, register __a3 DSA *dsa)
{
	return(DSA_sign(type, dgst, dlen, sig, siglen, dsa));
}

__asm __saveds int DSA_verify_AmiSSL(register __d0 int type, register __a0 const unsigned char *dgst, register __d1 int dgst_len, register __a1 unsigned char *sigbuf, register __d2 int siglen, register __a2 DSA *dsa)
{
	return(DSA_verify(type, dgst, dgst_len, sigbuf, siglen, dsa));
}

__asm __saveds void DSA_free_AmiSSL(register __a0 DSA *r)
{
	DSA_free(r);
}

__asm __saveds int DSA_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(DSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int DSA_set_ex_data_AmiSSL(register __a0 DSA *d, register __d0 int idx, register __a1 void *arg)
{
	return(DSA_set_ex_data(d, idx, arg));
}

__asm __saveds void *DSA_get_ex_data_AmiSSL(register __a0 DSA *d, register __d0 int idx)
{
	return(DSA_get_ex_data(d, idx));
}

__asm __saveds DSA *DSA_generate_parameters_AmiSSL(register __d0 int bits, register __a0 unsigned char *seed, register __d1 int seed_len, register __a1 int *counter_ret, register __a2 unsigned long *h_ret, register __a3 void (*callback)(int, int, void *), register __d2 void *cb_arg)
{
	return(DSA_generate_parameters(bits, seed, seed_len, counter_ret, h_ret, callback, cb_arg));
}

__asm __saveds int DSA_generate_key_AmiSSL(register __a0 DSA *a)
{
	return(DSA_generate_key(a));
}

__asm __saveds void ERR_load_DSA_strings_AmiSSL(void)
{
	ERR_load_DSA_strings();
}

