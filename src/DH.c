#include <clib/dh_protos.h>

__asm __saveds const DH_METHOD *DH_OpenSSL_AmiSSL(void)
{
	return(DH_OpenSSL());
}

__asm __saveds void DH_set_default_method_AmiSSL(register __a0 const DH_METHOD *meth)
{
	DH_set_default_method(meth);
}

__asm __saveds const DH_METHOD *DH_get_default_method_AmiSSL(void)
{
	return(DH_get_default_method());
}

__asm __saveds int DH_set_method_AmiSSL(register __a0 DH *dh, register __a1 const DH_METHOD *meth)
{
	return(DH_set_method(dh, meth));
}

__asm __saveds DH *DH_new_method_AmiSSL(register __a0 ENGINE *engine)
{
	return(DH_new_method(engine));
}

__asm __saveds DH *DH_new_AmiSSL(void)
{
	return(DH_new());
}

__asm __saveds void DH_free_AmiSSL(register __a0 DH *dh)
{
	DH_free(dh);
}

__asm __saveds int DH_up_ref_AmiSSL(register __a0 DH *dh)
{
	return(DH_up_ref(dh));
}

__asm __saveds int DH_size_AmiSSL(register __a0 const DH *dh)
{
	return(DH_size(dh));
}

__asm __saveds int DH_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(DH_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int DH_set_ex_data_AmiSSL(register __a0 DH *d, register __d0 int idx, register __a1 void *arg)
{
	return(DH_set_ex_data(d, idx, arg));
}

__asm __saveds void *DH_get_ex_data_AmiSSL(register __a0 DH *d, register __d0 int idx)
{
	return(DH_get_ex_data(d, idx));
}

__asm __saveds DH *DH_generate_parameters_AmiSSL(register __d0 int prime_len, register __d1 int generator, register __a0 void (*callback)(int, int, void *), register __a1 void *cb_arg)
{
	return(DH_generate_parameters(prime_len, generator, callback, cb_arg));
}

__asm __saveds int DH_check_AmiSSL(register __a0 const DH *dh, register __a1 int *codes)
{
	return(DH_check(dh, codes));
}

__asm __saveds int DH_generate_key_AmiSSL(register __a0 DH *dh)
{
	return(DH_generate_key(dh));
}

__asm __saveds int DH_compute_key_AmiSSL(register __a0 unsigned char *key, register __a1 const BIGNUM *pub_key, register __a2 DH *dh)
{
	return(DH_compute_key(key, pub_key, dh));
}

__asm __saveds DH *d2i_DHparams_AmiSSL(register __a0 DH **a, register __a1 const unsigned char **pp, register __d0 long length)
{
	return(d2i_DHparams(a, pp, length));
}

__asm __saveds int i2d_DHparams_AmiSSL(register __a0 const DH *a, register __a1 unsigned char **pp)
{
	return(i2d_DHparams(a, pp));
}

__asm __saveds int DHparams_print_AmiSSL(register __a0 BIO *bp, register __a1 const DH *x)
{
	return(DHparams_print(bp, x));
}

__asm __saveds void ERR_load_DH_strings_AmiSSL(void)
{
	ERR_load_DH_strings();
}
