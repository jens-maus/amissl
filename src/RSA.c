#include <clib/rsa_protos.h>

__asm __saveds RSA *RSA_new_AmiSSL(void)
{
	return(RSA_new());
}

__asm __saveds RSA *RSA_new_method_AmiSSL(register __a0 ENGINE *engine)
{
	return(RSA_new_method(engine));
}

__asm __saveds int RSA_size_AmiSSL(register __a0 const RSA *a)
{
	return(RSA_size(a));
}

__asm __saveds RSA *RSA_generate_key_AmiSSL(register __d0 int bits, register __d1 unsigned long e, register __a0 void (*callback)(int, int, void *), register __a1 void *cb_arg)
{
	return(RSA_generate_key(bits, e, callback, cb_arg));
}

__asm __saveds int RSA_check_key_AmiSSL(register __a0 const RSA *a)
{
	return(RSA_check_key(a));
}

__asm __saveds int RSA_public_encrypt_AmiSSL(register __d0 int flen, register __a0 const unsigned char *from, register __a1 unsigned char *to, register __a2 RSA *rsa, register __d1 int padding)
{
	return(RSA_public_encrypt(flen, from, to, rsa, padding));
}

__asm __saveds int RSA_private_encrypt_AmiSSL(register __d0 int flen, register __a0 const unsigned char *from, register __a1 unsigned char *to, register __a2 RSA *rsa, register __d1 int padding)
{
	return(RSA_private_encrypt(flen, from, to, rsa, padding));
}

__asm __saveds int RSA_public_decrypt_AmiSSL(register __d0 int flen, register __a0 const unsigned char *from, register __a1 unsigned char *to, register __a2 RSA *rsa, register __d1 int padding)
{
	return(RSA_public_decrypt(flen, from, to, rsa, padding));
}

__asm __saveds int RSA_private_decrypt_AmiSSL(register __d0 int flen, register __a0 const unsigned char *from, register __a1 unsigned char *to, register __a2 RSA *rsa, register __d1 int padding)
{
	return(RSA_private_decrypt(flen, from, to, rsa, padding));
}

__asm __saveds void RSA_free_AmiSSL(register __a0 RSA *r)
{
	RSA_free(r);
}

__asm __saveds int RSA_up_ref_AmiSSL(register __a0 RSA *r)
{
	return(RSA_up_ref(r));
}

__asm __saveds int RSA_flags_AmiSSL(register __a0 const RSA *r)
{
	return(RSA_flags(r));
}

__asm __saveds void RSA_set_default_method_AmiSSL(register __a0 const RSA_METHOD *meth)
{
	RSA_set_default_method(meth);
}

__asm __saveds const RSA_METHOD *RSA_get_default_method_AmiSSL(void)
{
	return(RSA_get_default_method());
}

__asm __saveds const RSA_METHOD *RSA_get_method_AmiSSL(register __a0 const RSA *rsa)
{
	return(RSA_get_method(rsa));
}

__asm __saveds int RSA_set_method_AmiSSL(register __a0 RSA *rsa, register __a1 const RSA_METHOD *meth)
{
	return(RSA_set_method(rsa, meth));
}

__asm __saveds int RSA_memory_lock_AmiSSL(register __a0 RSA *r)
{
	return(RSA_memory_lock(r));
}

__asm __saveds const RSA_METHOD *RSA_PKCS1_SSLeay_AmiSSL(void)
{
	return(RSA_PKCS1_SSLeay());
}

__asm __saveds const RSA_METHOD *RSA_null_method_AmiSSL(void)
{
	return(RSA_null_method());
}

__asm __saveds RSA *d2i_RSAPublicKey_AmiSSL(register __a0 RSA **a, register __a1 const unsigned char **in, register __d0 long len)
{
	return(d2i_RSAPublicKey(a, in, len));
}

__asm __saveds int i2d_RSAPublicKey_AmiSSL(register __a0 const RSA *a, register __a1 unsigned char **out)
{
	return(i2d_RSAPublicKey(a, out));
}

__asm __saveds const ASN1_ITEM *RSAPublicKey_it_AmiSSL(void)
{
	return(RSAPublicKey_it());
}

__asm __saveds RSA *d2i_RSAPrivateKey_AmiSSL(register __a0 RSA **a, register __a1 const unsigned char **in, register __d0 long len)
{
	return(d2i_RSAPrivateKey(a, in, len));
}

__asm __saveds int i2d_RSAPrivateKey_AmiSSL(register __a0 const RSA *a, register __a1 unsigned char **out)
{
	return(i2d_RSAPrivateKey(a, out));
}

__asm __saveds const ASN1_ITEM *RSAPrivateKey_it_AmiSSL(void)
{
	return(RSAPrivateKey_it());
}

__asm __saveds int RSA_print_AmiSSL(register __a0 BIO *bp, register __a1 const RSA *r, register __d0 int offset)
{
	return(RSA_print(bp, r, offset));
}

__asm __saveds int i2d_RSA_NET_AmiSSL(register __a0 const RSA *a, register __a1 unsigned char **pp, register __a2 int (*cb)(), register __d0 int sgckey)
{
	return(i2d_RSA_NET(a, pp, cb, sgckey));
}

__asm __saveds RSA *d2i_RSA_NET_AmiSSL(register __a0 RSA **a, register __a1 const unsigned char **pp, register __d0 long length, register __a2 int (*cb)(), register __d1 int sgckey)
{
	return(d2i_RSA_NET(a, pp, length, cb, sgckey));
}

__asm __saveds int i2d_Netscape_RSA_AmiSSL(register __a0 const RSA *a, register __a1 unsigned char **pp, register __a2 int (*cb)())
{
	return(i2d_Netscape_RSA(a, pp, cb));
}

__asm __saveds RSA *d2i_Netscape_RSA_AmiSSL(register __a0 RSA **a, register __a1 const unsigned char **pp, register __d0 long length, register __a2 int (*cb)())
{
	return(d2i_Netscape_RSA(a, pp, length, cb));
}

__asm __saveds int RSA_sign_AmiSSL(register __d0 int type, register __a0 const unsigned char *m, register __d1 unsigned int m_length, register __a1 unsigned char *sigret, register __a2 unsigned int *siglen, register __a3 RSA *rsa)
{
	return(RSA_sign(type, m, m_length, sigret, siglen, rsa));
}

__asm __saveds int RSA_verify_AmiSSL(register __d0 int type, register __a0 const unsigned char *m, register __d1 unsigned int m_length, register __a1 unsigned char *sigbuf, register __d2 unsigned int siglen, register __a2 RSA *rsa)
{
	return(RSA_verify(type, m, m_length, sigbuf, siglen, rsa));
}

__asm __saveds int RSA_sign_ASN1_OCTET_STRING_AmiSSL(register __d0 int type, register __a0 const unsigned char *m, register __d1 unsigned int m_length, register __a1 unsigned char *sigret, register __a2 unsigned int *siglen, register __a3 RSA *rsa)
{
	return(RSA_sign_ASN1_OCTET_STRING(type, m, m_length, sigret, siglen, rsa));
}

__asm __saveds int RSA_verify_ASN1_OCTET_STRING_AmiSSL(register __d0 int type, register __a0 const unsigned char *m, register __d1 unsigned int m_length, register __a1 unsigned char *sigbuf, register __d2 unsigned int siglen, register __a2 RSA *rsa)
{
	return(RSA_verify_ASN1_OCTET_STRING(type, m, m_length, sigbuf, siglen, rsa));
}

__asm __saveds int RSA_blinding_on_AmiSSL(register __a0 RSA *rsa, register __a1 BN_CTX *ctx)
{
	return(RSA_blinding_on(rsa, ctx));
}

__asm __saveds void RSA_blinding_off_AmiSSL(register __a0 RSA *rsa)
{
	RSA_blinding_off(rsa);
}

__asm __saveds int RSA_padding_add_PKCS1_type_1_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl)
{
	return(RSA_padding_add_PKCS1_type_1(to, tlen, f, fl));
}

__asm __saveds int RSA_padding_check_PKCS1_type_1_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl, register __d2 int rsa_len)
{
	return(RSA_padding_check_PKCS1_type_1(to, tlen, f, fl, rsa_len));
}

__asm __saveds int RSA_padding_add_PKCS1_type_2_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl)
{
	return(RSA_padding_add_PKCS1_type_2(to, tlen, f, fl));
}

__asm __saveds int RSA_padding_check_PKCS1_type_2_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl, register __d2 int rsa_len)
{
	return(RSA_padding_check_PKCS1_type_2(to, tlen, f, fl, rsa_len));
}

__asm __saveds int RSA_padding_add_PKCS1_OAEP_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl, register __a2 const unsigned char *p, register __d2 int pl)
{
	return(RSA_padding_add_PKCS1_OAEP(to, tlen, f, fl, p, pl));
}

__asm __saveds int RSA_padding_check_PKCS1_OAEP_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl, register __d2 int rsa_len, register __a2 const unsigned char *p, register __d3 int pl)
{
	return(RSA_padding_check_PKCS1_OAEP(to, tlen, f, fl, rsa_len, p, pl));
}

__asm __saveds int RSA_padding_add_SSLv23_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl)
{
	return(RSA_padding_add_SSLv23(to, tlen, f, fl));
}

__asm __saveds int RSA_padding_check_SSLv23_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl, register __d2 int rsa_len)
{
	return(RSA_padding_check_SSLv23(to, tlen, f, fl, rsa_len));
}

__asm __saveds int RSA_padding_add_none_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl)
{
	return(RSA_padding_add_none(to, tlen, f, fl));
}

__asm __saveds int RSA_padding_check_none_AmiSSL(register __a0 unsigned char *to, register __d0 int tlen, register __a1 const unsigned char *f, register __d1 int fl, register __d2 int rsa_len)
{
	return(RSA_padding_check_none(to, tlen, f, fl, rsa_len));
}

__asm __saveds int RSA_get_ex_new_index_AmiSSL(register __d0 long argl, register __a0 void *argp, register __a1 CRYPTO_EX_new *new_func, register __a2 CRYPTO_EX_dup *dup_func, register __a3 CRYPTO_EX_free *free_func)
{
	return(RSA_get_ex_new_index(argl, argp, new_func, dup_func, free_func));
}

__asm __saveds int RSA_set_ex_data_AmiSSL(register __a0 RSA *r, register __d0 int idx, register __a1 void *arg)
{
	return(RSA_set_ex_data(r, idx, arg));
}

__asm __saveds void *RSA_get_ex_data_AmiSSL(register __a0 const RSA *r, register __d0 int idx)
{
	return(RSA_get_ex_data(r, idx));
}

__asm __saveds RSA *RSAPublicKey_dup_AmiSSL(register __a0 RSA *rsa)
{
	return(RSAPublicKey_dup(rsa));
}

__asm __saveds RSA *RSAPrivateKey_dup_AmiSSL(register __a0 RSA *rsa)
{
	return(RSAPrivateKey_dup(rsa));
}

__asm __saveds void ERR_load_RSA_strings_AmiSSL(void)
{
	ERR_load_RSA_strings();
}
