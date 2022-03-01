/* Automatically generated header (sfdc 1.11)! Do not edit! */

#ifndef _PPCINLINE_AMISSLEXT_H
#define _PPCINLINE_AMISSLEXT_H

#ifndef _SFDC_VARARG_DEFINED
#define _SFDC_VARARG_DEFINED
#ifdef __HAVE_IPTR_ATTR__
typedef APTR _sfdc_vararg __attribute__((iptr));
#else
typedef ULONG _sfdc_vararg;
#endif /* __HAVE_IPTR_ATTR__ */
#endif /* _SFDC_VARARG_DEFINED */

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif /* !__PPCINLINE_MACROS_H */

#ifndef AMISSLEXT_BASE_NAME
#define AMISSLEXT_BASE_NAME AmiSSLExtBase
#endif /* !AMISSLEXT_BASE_NAME */

#define SSL_CTX_set_async_callback(___ctx, ___callback) \
      LP2(0x1e, int, SSL_CTX_set_async_callback , SSL_CTX *, ___ctx, a0, SSL_async_callback_fn, ___callback, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_async_callback_arg(___ctx, ___arg) \
      LP2(0x24, int, SSL_CTX_set_async_callback_arg , SSL_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_async_callback(___s, ___callback) \
      LP2(0x2a, int, SSL_set_async_callback , SSL *, ___s, a0, SSL_async_callback_fn, ___callback, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set_async_callback_arg(___s, ___arg) \
      LP2(0x30, int, SSL_set_async_callback_arg , SSL *, ___s, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get_async_status(___s, ___status) \
      LP2(0x36, int, SSL_get_async_status , SSL *, ___s, a0, int *, ___status, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_sendfile(___s, ___fd, ___offset, ___size, ___flags) \
      LP5(0x3c, int, SSL_sendfile , SSL *, ___s, a0, int, ___fd, d0, off_t, ___offset, d1, size_t, ___size, d2, int, ___flags, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_default_cipher_list() \
      LP0(0x42, const char *, OSSL_default_cipher_list ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_default_ciphersuites() \
      LP0(0x48, const char *, OSSL_default_ciphersuites ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_add_store_cert_subjects_to_stack(___stackCAs, ___uri) \
      LP2(0x4e, int, SSL_add_store_cert_subjects_to_stack , struct stack_st_X509_NAME *, ___stackCAs, a0, const char *, ___uri, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_default_verify_store(___ctx) \
      LP1(0x54, int, SSL_CTX_set_default_verify_store , SSL_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_load_verify_file(___ctx, ___CAfile) \
      LP2(0x5a, int, SSL_CTX_load_verify_file , SSL_CTX *, ___ctx, a0, const char *, ___CAfile, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_load_verify_dir(___ctx, ___CApath) \
      LP2(0x60, int, SSL_CTX_load_verify_dir , SSL_CTX *, ___ctx, a0, const char *, ___CApath, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_load_verify_store(___ctx, ___CAstore) \
      LP2(0x66, int, SSL_CTX_load_verify_store , SSL_CTX *, ___ctx, a0, const char *, ___CAstore, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set_tlsext_ticket_key_evp_cb(___ctx, ___fp) \
      LP2FP(0x6c, int, SSL_CTX_set_tlsext_ticket_key_evp_cb , SSL_CTX *, ___ctx, a0, __fpt, ___fp, a1,\
      , AMISSLEXT_BASE_NAME, int (*__fpt)(SSL *,unsigned char *,unsigned char *,EVP_CIPHER_CTX *,EVP_MAC_CTX *,int), 0, 0, 0, 0, 0, 0)

#define SSL_CTX_new_ex(___libctx, ___propq, ___meth) \
      LP3(0x72, SSL_CTX *, SSL_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, const SSL_METHOD *, ___meth, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_new_session_ticket(___s) \
      LP1(0x78, int, SSL_new_session_ticket , SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get0_peer_certificate(___s) \
      LP1(0x7e, X509 *, SSL_get0_peer_certificate , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_get1_peer_certificate(___s) \
      LP1(0x84, X509 *, SSL_get1_peer_certificate , const SSL *, ___s, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_load_client_CA_file_ex(___file, ___libctx, ___propq) \
      LP3(0x8a, struct stack_st_X509_NAME *, SSL_load_client_CA_file_ex , const char *, ___file, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_set0_tmp_dh_pkey(___s, ___dhpkey) \
      LP2(0x90, int, SSL_set0_tmp_dh_pkey , SSL *, ___s, a0, EVP_PKEY *, ___dhpkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_CTX_set0_tmp_dh_pkey(___ctx, ___dhpkey) \
      LP2(0x96, int, SSL_CTX_set0_tmp_dh_pkey , SSL_CTX *, ___ctx, a0, EVP_PKEY *, ___dhpkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SSL_group_to_name(___s, ___id) \
      LP2(0x9c, const char *, SSL_group_to_name , SSL *, ___s, a0, int, ___id, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_free(___rctx) \
      LP1NR(0xa2, OSSL_HTTP_REQ_CTX_free , OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get_type(___md) \
      LP1(0xa8, int, EVP_MD_get_type , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_key_length(___ctx) \
      LP1(0xae, int, EVP_CIPHER_CTX_get_key_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_flags(___cipher) \
      LP1(0xb4, unsigned long, EVP_CIPHER_get_flags , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_load_http(___url, ___bio, ___rbio, ___timeout) \
      LP4(0xba, X509_CRL *, X509_CRL_load_http , const char *, ___url, a0, BIO *, ___bio, a1, BIO *, ___rbio, a2, int, ___timeout, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_parse_url(___url, ___pssl, ___puser, ___phost, ___pport, ___pport_num, ___ppath, ___pquery, ___pfrag) \
      LP9(0xc0, int, OSSL_HTTP_parse_url , const char *, ___url, a0, int *, ___pssl, a1, char **, ___puser, a2, char **, ___phost, a3, char **, ___pport, d0, int *, ___pport_num, d1, char **, ___ppath, d2, char **, ___pquery, d3, char **, ___pfrag, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_block_size(___cipher) \
      LP1(0xc6, int, EVP_CIPHER_get_block_size , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_exchange(___rctx) \
      LP1(0xcc, BIO *, OSSL_HTTP_REQ_CTX_exchange , OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get_pkey_type(___md) \
      LP1(0xd2, int, EVP_MD_get_pkey_type , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_security_bits(___pkey) \
      LP1(0xd8, int, EVP_PKEY_get_security_bits , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_VERIFY_CTX_set_certs(___ctx, ___certs) \
      LP2(0xde, struct stack_st_X509 *, TS_VERIFY_CTX_set_certs , TS_VERIFY_CTX *, ___ctx, a0, struct stack_st_X509 *, ___certs, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_new(___wbio, ___rbio, ___buf_size) \
      LP3(0xe4, OSSL_HTTP_REQ_CTX *, OSSL_HTTP_REQ_CTX_new , BIO *, ___wbio, a0, BIO *, ___rbio, a1, int, ___buf_size, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_load_http(___url, ___bio, ___rbio, ___timeout) \
      LP4(0xea, X509 *, X509_load_http , const char *, ___url, a0, BIO *, ___bio, a1, BIO *, ___rbio, a2, int, ___timeout, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_NAME_hash_ex(___x, ___libctx, ___propq, ___ok) \
      LP4(0xf0, unsigned long, X509_NAME_hash_ex , const X509_NAME *, ___x, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, int *, ___ok, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_set_request_line(___rctx, ___method_POST, ___server, ___port, ___path) \
      LP5(0xf6, int, OSSL_HTTP_REQ_CTX_set_request_line , OSSL_HTTP_REQ_CTX *, ___rctx, a0, int, ___method_POST, d0, const char *, ___server, a1, const char *, ___port, a2, const char *, ___path, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_key_length(___cipher) \
      LP1(0xfc, int, EVP_CIPHER_get_key_length , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_block_size(___ctx) \
      LP1(0x102, int, EVP_CIPHER_CTX_get_block_size , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_nid(___ctx) \
      LP1(0x108, int, EVP_CIPHER_CTX_get_nid , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_set1_req(___rctx, ___content_type, ___it, ___req) \
      LP4(0x10e, int, OSSL_HTTP_REQ_CTX_set1_req , OSSL_HTTP_REQ_CTX *, ___rctx, a0, const char *, ___content_type, a1, const ASN1_ITEM *, ___it, a2, const ASN1_VALUE *, ___req, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_set_max_response_length(___rctx, ___len) \
      LP2NR(0x114, OSSL_HTTP_REQ_CTX_set_max_response_length , OSSL_HTTP_REQ_CTX *, ___rctx, a0, unsigned long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_nbio(___rctx) \
      LP1(0x11a, int, OSSL_HTTP_REQ_CTX_nbio , OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_base_id(___pkey) \
      LP1(0x120, int, EVP_PKEY_get_base_id , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get_flags(___md) \
      LP1(0x126, unsigned long, EVP_MD_get_flags , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get_size(___md) \
      LP1(0x12c, int, EVP_MD_get_size , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_get_pkey_ctx(___ctx) \
      LP1(0x132, EVP_PKEY_CTX *, EVP_MD_CTX_get_pkey_ctx , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_bits(___pkey) \
      LP1(0x138, int, EVP_PKEY_get_bits , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_get0_md_data(___ctx) \
      LP1(0x13e, void *, EVP_MD_CTX_get0_md_data , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_add1_header(___rctx, ___name, ___value) \
      LP3(0x144, int, OSSL_HTTP_REQ_CTX_add1_header , OSSL_HTTP_REQ_CTX *, ___rctx, a0, const char *, ___name, a1, const char *, ___value, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_type(___cipher) \
      LP1(0x14a, int, EVP_CIPHER_get_type , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_iv_length(___ctx) \
      LP1(0x150, int, EVP_CIPHER_CTX_get_iv_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_id(___pkey) \
      LP1(0x156, int, EVP_PKEY_get_id , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_size(___pkey) \
      LP1(0x15c, int, EVP_PKEY_get_size , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get_block_size(___md) \
      LP1(0x162, int, EVP_MD_get_block_size , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_is_encrypting(___ctx) \
      LP1(0x168, int, EVP_CIPHER_CTX_is_encrypting , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_nbio_d2i(___rctx, ___pval, ___it) \
      LP3(0x16e, int, OSSL_HTTP_REQ_CTX_nbio_d2i , OSSL_HTTP_REQ_CTX *, ___rctx, a0, ASN1_VALUE **, ___pval, a1, const ASN1_ITEM *, ___it, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_nid(___cipher) \
      LP1(0x174, int, EVP_CIPHER_get_nid , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_iv_length(___cipher) \
      LP1(0x17a, int, EVP_CIPHER_get_iv_length , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_get0_mem_bio(___rctx) \
      LP1(0x180, BIO *, OSSL_HTTP_REQ_CTX_get0_mem_bio , const OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_num(___ctx) \
      LP1(0x186, int, EVP_CIPHER_CTX_get_num , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_new(___mac) \
      LP1(0x18c, EVP_MAC_CTX *, EVP_MAC_CTX_new , EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_free(___ctx) \
      LP1NR(0x192, EVP_MAC_CTX_free , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_dup(___src) \
      LP1(0x198, EVP_MAC_CTX *, EVP_MAC_CTX_dup , const EVP_MAC_CTX *, ___src, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_get0_mac(___ctx) \
      LP1(0x19e, EVP_MAC *, EVP_MAC_CTX_get0_mac , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_get_mac_size(___ctx) \
      LP1(0x1a4, size_t, EVP_MAC_CTX_get_mac_size , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_Q_mac(___libctx, ___name, ___propq, ___subalg, ___params, ___key, ___keylen, ___data, ___datalen, ___out, ___outsize, ___outlen) \
      LP12(0x1aa, unsigned char *, EVP_Q_mac , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___propq, a2, const char *, ___subalg, a3, const OSSL_PARAM *, ___params, d0, const void *, ___key, d1, size_t, ___keylen, d2, const unsigned char *, ___data, d3, size_t, ___datalen, d4, unsigned char *, ___out, d5, size_t, ___outsize, d6, size_t *, ___outlen, d7,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_init(___ctx, ___key, ___keylen, ___params) \
      LP4(0x1b0, int, EVP_MAC_init , EVP_MAC_CTX *, ___ctx, a0, const unsigned char *, ___key, a1, size_t, ___keylen, d0, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_update(___ctx, ___data, ___datalen) \
      LP3(0x1b6, int, EVP_MAC_update , EVP_MAC_CTX *, ___ctx, a0, const unsigned char *, ___data, a1, size_t, ___datalen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_final(___ctx, ___out, ___outl, ___outsize) \
      LP4(0x1bc, int, EVP_MAC_final , EVP_MAC_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t *, ___outl, a2, size_t, ___outsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_finalXOF(___ctx, ___out, ___outsize) \
      LP3(0x1c2, int, EVP_MAC_finalXOF , EVP_MAC_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t, ___outsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_EC_curve_nid2name(___nid) \
      LP1(0x1c8, const char *, OSSL_EC_curve_nid2name , int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_digestsign_supports_digest(___pkey, ___libctx, ___name, ___propq) \
      LP4(0x1ce, int, EVP_PKEY_digestsign_supports_digest , EVP_PKEY *, ___pkey, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___name, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_version_major() \
      LP0(0x1d4, unsigned int, OPENSSL_version_major ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_version_minor() \
      LP0(0x1da, unsigned int, OPENSSL_version_minor ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_version_patch() \
      LP0(0x1e0, unsigned int, OPENSSL_version_patch ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_version_pre_release() \
      LP0(0x1e6, const char *, OPENSSL_version_pre_release ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_version_build_metadata() \
      LP0(0x1ec, const char *, OPENSSL_version_build_metadata ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_get_callback(___ctx, ___callback, ___callback_arg) \
      LP3(0x1f2, int, ASYNC_WAIT_CTX_get_callback , ASYNC_WAIT_CTX *, ___ctx, a0, ASYNC_callback_fn *, ___callback, a1, void **, ___callback_arg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_set_callback(___ctx, ___callback, ___callback_arg) \
      LP3(0x1f8, int, ASYNC_WAIT_CTX_set_callback , ASYNC_WAIT_CTX *, ___ctx, a0, ASYNC_callback_fn, ___callback, a1, void *, ___callback_arg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_set_status(___ctx, ___status) \
      LP2(0x1fe, int, ASYNC_WAIT_CTX_set_status , ASYNC_WAIT_CTX *, ___ctx, a0, int, ___status, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASYNC_WAIT_CTX_get_status(___ctx) \
      LP1(0x204, int, ASYNC_WAIT_CTX_get_status , ASYNC_WAIT_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_free(___ctx) \
      LP1NR(0x20a, EVP_KDF_CTX_free , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_reset(___ctx) \
      LP1NR(0x210, EVP_KDF_CTX_reset , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_get_kdf_size(___ctx) \
      LP1(0x216, size_t, EVP_KDF_CTX_get_kdf_size , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_derive(___ctx, ___key, ___keylen, ___params) \
      LP4(0x21c, int, EVP_KDF_derive , EVP_KDF_CTX *, ___ctx, a0, unsigned char *, ___key, a1, size_t, ___keylen, d0, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_get0_name(___kdf) \
      LP1(0x222, const char *, EVP_KDF_get0_name , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get0_field(___group) \
      LP1(0x228, const BIGNUM *, EC_GROUP_get0_field , const EC_GROUP *, ___group, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_alloc_ex_data(___class_index, ___obj, ___ad, ___idx) \
      LP4(0x22e, int, CRYPTO_alloc_ex_data , int, ___class_index, d0, void *, ___obj, a0, CRYPTO_EX_DATA *, ___ad, a1, int, ___idx, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_new() \
      LP0(0x234, OSSL_LIB_CTX *, OSSL_LIB_CTX_new ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_free(___a) \
      LP1NR(0x23a, OSSL_LIB_CTX_free , OSSL_LIB_CTX *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_LH_flush(___lh) \
      LP1NR(0x240, OPENSSL_LH_flush , OPENSSL_LHASH *, ___lh, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_native2bn(___s, ___len, ___ret) \
      LP3(0x246, BIGNUM *, BN_native2bn , const unsigned char *, ___s, a0, int, ___len, d0, BIGNUM *, ___ret, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_bn2nativepad(___a, ___to, ___tolen) \
      LP3(0x24c, int, BN_bn2nativepad , const BIGNUM *, ___a, a0, unsigned char *, ___to, a1, int, ___tolen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_get_category_num(___name) \
      LP1(0x252, int, OSSL_trace_get_category_num , const char *, ___name, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_get_category_name(___num) \
      LP1(0x258, const char *, OSSL_trace_get_category_name , int, ___num, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_set_channel(___category, ___channel) \
      LP2(0x25e, int, OSSL_trace_set_channel , int, ___category, d0, BIO*, ___channel, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_set_prefix(___category, ___prefix) \
      LP2(0x264, int, OSSL_trace_set_prefix , int, ___category, d0, const char *, ___prefix, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_set_suffix(___category, ___suffix) \
      LP2(0x26a, int, OSSL_trace_set_suffix , int, ___category, d0, const char *, ___suffix, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_set_callback(___category, ___callback, ___data) \
      LP3(0x270, int, OSSL_trace_set_callback , int, ___category, d0, OSSL_trace_cb, ___callback, a0, void *, ___data, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_enabled(___category) \
      LP1(0x276, int, OSSL_trace_enabled , int, ___category, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_begin(___category) \
      LP1(0x27c, BIO *, OSSL_trace_begin , int, ___category, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_trace_end(___category, ___channel) \
      LP2NR(0x282, OSSL_trace_end , int, ___category, d0, BIO *, ___channel, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_load(___a, ___name) \
      LP2(0x288, OSSL_PROVIDER *, OSSL_PROVIDER_load , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_try_load(___a, ___name, ___retain_fallbacks) \
      LP3(0x28e, OSSL_PROVIDER *, OSSL_PROVIDER_try_load , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1, int, ___retain_fallbacks, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_unload(___prov) \
      LP1(0x294, int, OSSL_PROVIDER_unload , OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_add_builtin(___a, ___name, ___init_fn) \
      LP3(0x29a, int, OSSL_PROVIDER_add_builtin , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1, OSSL_provider_init_fn *, ___init_fn, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_gettable_params(___prov) \
      LP1(0x2a0, const OSSL_PARAM *, OSSL_PROVIDER_gettable_params , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_get_params(___prov, ___params) \
      LP2(0x2a6, int, OSSL_PROVIDER_get_params , const OSSL_PROVIDER *, ___prov, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_ENCRYPTEDVALUE(___a, ___in, ___len) \
      LP3(0x2ac, OSSL_CRMF_ENCRYPTEDVALUE *, d2i_OSSL_CRMF_ENCRYPTEDVALUE , OSSL_CRMF_ENCRYPTEDVALUE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_ENCRYPTEDVALUE(___a, ___out) \
      LP2(0x2b2, int, i2d_OSSL_CRMF_ENCRYPTEDVALUE , const OSSL_CRMF_ENCRYPTEDVALUE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_ENCRYPTEDVALUE_it() \
      LP0(0x2b8, const ASN1_ITEM *, OSSL_CRMF_ENCRYPTEDVALUE_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_MSG(___a, ___in, ___len) \
      LP3(0x2be, OSSL_CRMF_MSG *, d2i_OSSL_CRMF_MSG , OSSL_CRMF_MSG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_MSG(___a, ___out) \
      LP2(0x2c4, int, i2d_OSSL_CRMF_MSG , const OSSL_CRMF_MSG *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_dup(___a) \
      LP1(0x2ca, OSSL_CRMF_MSG *, OSSL_CRMF_MSG_dup , const OSSL_CRMF_MSG *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_it() \
      LP0(0x2d0, const ASN1_ITEM *, OSSL_CRMF_MSG_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_PBMPARAMETER(___a, ___in, ___len) \
      LP3(0x2d6, OSSL_CRMF_PBMPARAMETER *, d2i_OSSL_CRMF_PBMPARAMETER , OSSL_CRMF_PBMPARAMETER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_PBMPARAMETER(___a, ___out) \
      LP2(0x2dc, int, i2d_OSSL_CRMF_PBMPARAMETER , const OSSL_CRMF_PBMPARAMETER *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_PBMPARAMETER_it() \
      LP0(0x2e2, const ASN1_ITEM *, OSSL_CRMF_PBMPARAMETER_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_CERTID(___a, ___in, ___len) \
      LP3(0x2e8, OSSL_CRMF_CERTID *, d2i_OSSL_CRMF_CERTID , OSSL_CRMF_CERTID **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_CERTID(___a, ___out) \
      LP2(0x2ee, int, i2d_OSSL_CRMF_CERTID , const OSSL_CRMF_CERTID *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTID_dup(___a) \
      LP1(0x2f4, OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_dup , const OSSL_CRMF_CERTID *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTID_it() \
      LP0(0x2fa, const ASN1_ITEM *, OSSL_CRMF_CERTID_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_PKIPUBLICATIONINFO(___a, ___in, ___len) \
      LP3(0x300, OSSL_CRMF_PKIPUBLICATIONINFO *, d2i_OSSL_CRMF_PKIPUBLICATIONINFO , OSSL_CRMF_PKIPUBLICATIONINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_PKIPUBLICATIONINFO(___a, ___out) \
      LP2(0x306, int, i2d_OSSL_CRMF_PKIPUBLICATIONINFO , const OSSL_CRMF_PKIPUBLICATIONINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_PKIPUBLICATIONINFO_it() \
      LP0(0x30c, const ASN1_ITEM *, OSSL_CRMF_PKIPUBLICATIONINFO_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_SINGLEPUBINFO(___a, ___in, ___len) \
      LP3(0x312, OSSL_CRMF_SINGLEPUBINFO *, d2i_OSSL_CRMF_SINGLEPUBINFO , OSSL_CRMF_SINGLEPUBINFO **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_SINGLEPUBINFO(___a, ___out) \
      LP2(0x318, int, i2d_OSSL_CRMF_SINGLEPUBINFO , const OSSL_CRMF_SINGLEPUBINFO *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_SINGLEPUBINFO_it() \
      LP0(0x31e, const ASN1_ITEM *, OSSL_CRMF_SINGLEPUBINFO_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_CERTTEMPLATE(___a, ___in, ___len) \
      LP3(0x324, OSSL_CRMF_CERTTEMPLATE *, d2i_OSSL_CRMF_CERTTEMPLATE , OSSL_CRMF_CERTTEMPLATE **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_CERTTEMPLATE(___a, ___out) \
      LP2(0x32a, int, i2d_OSSL_CRMF_CERTTEMPLATE , const OSSL_CRMF_CERTTEMPLATE *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTTEMPLATE_it() \
      LP0(0x330, const ASN1_ITEM *, OSSL_CRMF_CERTTEMPLATE_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CRMF_MSGS(___a, ___in, ___len) \
      LP3(0x336, OSSL_CRMF_MSGS *, d2i_OSSL_CRMF_MSGS , OSSL_CRMF_MSGS **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CRMF_MSGS(___a, ___out) \
      LP2(0x33c, int, i2d_OSSL_CRMF_MSGS , const OSSL_CRMF_MSGS *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSGS_it() \
      LP0(0x342, const ASN1_ITEM *, OSSL_CRMF_MSGS_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_pbmp_new(___libctx, ___slen, ___owfnid, ___itercnt, ___macnid) \
      LP5(0x348, OSSL_CRMF_PBMPARAMETER *, OSSL_CRMF_pbmp_new , OSSL_LIB_CTX *, ___libctx, a0, size_t, ___slen, d0, int, ___owfnid, d1, size_t, ___itercnt, d2, int, ___macnid, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_pbm_new(___libctx, ___propq, ___pbmp, ___msg, ___msglen, ___sec, ___seclen, ___mac, ___maclen) \
      LP9(0x34e, int, OSSL_CRMF_pbm_new , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, const OSSL_CRMF_PBMPARAMETER *, ___pbmp, a2, const unsigned char *, ___msg, a3, size_t, ___msglen, d0, const unsigned char *, ___sec, d1, size_t, ___seclen, d2, unsigned char **, ___mac, d3, size_t *, ___maclen, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regCtrl_regToken(___msg) \
      LP1(0x354, ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regCtrl_regToken , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regCtrl_regToken(___msg, ___tok) \
      LP2(0x35a, int, OSSL_CRMF_MSG_set1_regCtrl_regToken , OSSL_CRMF_MSG *, ___msg, a0, const ASN1_UTF8STRING *, ___tok, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regCtrl_authenticator(___msg) \
      LP1(0x360, ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regCtrl_authenticator , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regCtrl_authenticator(___msg, ___auth) \
      LP2(0x366, int, OSSL_CRMF_MSG_set1_regCtrl_authenticator , OSSL_CRMF_MSG *, ___msg, a0, const ASN1_UTF8STRING *, ___auth, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo(___pi, ___spi) \
      LP2(0x36c, int, OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo , OSSL_CRMF_PKIPUBLICATIONINFO *, ___pi, a0, OSSL_CRMF_SINGLEPUBINFO *, ___spi, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set0_SinglePubInfo(___spi, ___method, ___nm) \
      LP3(0x372, int, OSSL_CRMF_MSG_set0_SinglePubInfo , OSSL_CRMF_SINGLEPUBINFO *, ___spi, a0, int, ___method, d0, GENERAL_NAME *, ___nm, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo(___msg) \
      LP1(0x378, OSSL_CRMF_PKIPUBLICATIONINFO *, OSSL_CRMF_MSG_get0_regCtrl_pkiPublicationInfo , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set_PKIPublicationInfo_action(___pi, ___action) \
      LP2(0x37e, int, OSSL_CRMF_MSG_set_PKIPublicationInfo_action , OSSL_CRMF_PKIPUBLICATIONINFO *, ___pi, a0, int, ___action, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo(___msg, ___pi) \
      LP2(0x384, int, OSSL_CRMF_MSG_set1_regCtrl_pkiPublicationInfo , OSSL_CRMF_MSG *, ___msg, a0, const OSSL_CRMF_PKIPUBLICATIONINFO *, ___pi, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey(___msg) \
      LP1(0x38a, X509_PUBKEY *, OSSL_CRMF_MSG_get0_regCtrl_protocolEncrKey , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey(___msg, ___pubkey) \
      LP2(0x390, int, OSSL_CRMF_MSG_set1_regCtrl_protocolEncrKey , OSSL_CRMF_MSG *, ___msg, a0, const X509_PUBKEY *, ___pubkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regCtrl_oldCertID(___msg) \
      LP1(0x396, OSSL_CRMF_CERTID *, OSSL_CRMF_MSG_get0_regCtrl_oldCertID , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regCtrl_oldCertID(___msg, ___cid) \
      LP2(0x39c, int, OSSL_CRMF_MSG_set1_regCtrl_oldCertID , OSSL_CRMF_MSG *, ___msg, a0, const OSSL_CRMF_CERTID *, ___cid, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTID_gen(___issuer, ___serial) \
      LP2(0x3a2, OSSL_CRMF_CERTID *, OSSL_CRMF_CERTID_gen , const X509_NAME *, ___issuer, a0, const ASN1_INTEGER *, ___serial, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regInfo_utf8Pairs(___msg) \
      LP1(0x3a8, ASN1_UTF8STRING *, OSSL_CRMF_MSG_get0_regInfo_utf8Pairs , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regInfo_utf8Pairs(___msg, ___utf8pairs) \
      LP2(0x3ae, int, OSSL_CRMF_MSG_set1_regInfo_utf8Pairs , OSSL_CRMF_MSG *, ___msg, a0, const ASN1_UTF8STRING *, ___utf8pairs, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_regInfo_certReq(___msg) \
      LP1(0x3b4, OSSL_CRMF_CERTREQUEST *, OSSL_CRMF_MSG_get0_regInfo_certReq , const OSSL_CRMF_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set1_regInfo_certReq(___msg, ___cr) \
      LP2(0x3ba, int, OSSL_CRMF_MSG_set1_regInfo_certReq , OSSL_CRMF_MSG *, ___msg, a0, const OSSL_CRMF_CERTREQUEST *, ___cr, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set0_validity(___crm, ___notBefore, ___notAfter) \
      LP3(0x3c0, int, OSSL_CRMF_MSG_set0_validity , OSSL_CRMF_MSG *, ___crm, a0, ASN1_TIME *, ___notBefore, a1, ASN1_TIME *, ___notAfter, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set_certReqId(___crm, ___rid) \
      LP2(0x3c6, int, OSSL_CRMF_MSG_set_certReqId , OSSL_CRMF_MSG *, ___crm, a0, int, ___rid, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get_certReqId(___crm) \
      LP1(0x3cc, int, OSSL_CRMF_MSG_get_certReqId , const OSSL_CRMF_MSG *, ___crm, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_set0_extensions(___crm, ___exts) \
      LP2(0x3d2, int, OSSL_CRMF_MSG_set0_extensions , OSSL_CRMF_MSG *, ___crm, a0, X509_EXTENSIONS *, ___exts, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_push0_extension(___crm, ___ext) \
      LP2(0x3d8, int, OSSL_CRMF_MSG_push0_extension , OSSL_CRMF_MSG *, ___crm, a0, X509_EXTENSION *, ___ext, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_create_popo(___meth, ___crm, ___pkey, ___digest, ___libctx, ___propq) \
      LP6(0x3de, int, OSSL_CRMF_MSG_create_popo , int, ___meth, d0, OSSL_CRMF_MSG *, ___crm, a0, EVP_PKEY *, ___pkey, a1, const EVP_MD *, ___digest, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSGS_verify_popo(___reqs, ___rid, ___acceptRAVerified, ___libctx, ___propq) \
      LP5(0x3e4, int, OSSL_CRMF_MSGS_verify_popo , const OSSL_CRMF_MSGS *, ___reqs, a0, int, ___rid, d0, int, ___acceptRAVerified, d1, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_MSG_get0_tmpl(___crm) \
      LP1(0x3ea, OSSL_CRMF_CERTTEMPLATE *, OSSL_CRMF_MSG_get0_tmpl , const OSSL_CRMF_MSG *, ___crm, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTTEMPLATE_get0_serialNumber(___tmpl) \
      LP1(0x3f0, const ASN1_INTEGER *, OSSL_CRMF_CERTTEMPLATE_get0_serialNumber , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTTEMPLATE_get0_subject(___tmpl) \
      LP1(0x3f6, const X509_NAME *, OSSL_CRMF_CERTTEMPLATE_get0_subject , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTTEMPLATE_get0_issuer(___tmpl) \
      LP1(0x3fc, const X509_NAME *, OSSL_CRMF_CERTTEMPLATE_get0_issuer , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTTEMPLATE_get0_extensions(___tmpl) \
      LP1(0x402, X509_EXTENSIONS *, OSSL_CRMF_CERTTEMPLATE_get0_extensions , const OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTTEMPLATE_fill(___tmpl, ___pubkey, ___subject, ___issuer, ___serial) \
      LP5(0x408, int, OSSL_CRMF_CERTTEMPLATE_fill , OSSL_CRMF_CERTTEMPLATE *, ___tmpl, a0, EVP_PKEY *, ___pubkey, a1, const X509_NAME *, ___subject, a2, const X509_NAME *, ___issuer, a3, const ASN1_INTEGER *, ___serial, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert(___ecert, ___libctx, ___propq, ___pkey) \
      LP4(0x40e, X509 *, OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert , const OSSL_CRMF_ENCRYPTEDVALUE *, ___ecert, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, EVP_PKEY *, ___pkey, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_locate(___p, ___key) \
      LP2(0x414, OSSL_PARAM *, OSSL_PARAM_locate , OSSL_PARAM *, ___p, a0, const char *, ___key, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_int_amiga(___result, ___key, ___buf) \
      LP3NR(0x41a, OSSL_PARAM_construct_int_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_uint_amiga(___result, ___key, ___buf) \
      LP3NR(0x420, OSSL_PARAM_construct_uint_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, unsigned int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_long_amiga(___result, ___key, ___buf) \
      LP3NR(0x426, OSSL_PARAM_construct_long_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, long int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_ulong_amiga(___result, ___key, ___buf) \
      LP3NR(0x42c, OSSL_PARAM_construct_ulong_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, unsigned long int *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_int32_amiga(___result, ___key, ___buf) \
      LP3NR(0x432, OSSL_PARAM_construct_int32_amiga , OSSL_PARAM *, ___result, a1, const char *, ___key, a2, int32_t *, ___buf, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_uint32_amiga(___result, ___key, ___buf) \
      LP3NR(0x438, OSSL_PARAM_construct_uint32_amiga , OSSL_PARAM *, ___result, a1, const char *, ___key, a2, uint32_t *, ___buf, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_int64_amiga(___result, ___key, ___buf) \
      LP3NR(0x43e, OSSL_PARAM_construct_int64_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, int64_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_uint64_amiga(___result, ___key, ___buf) \
      LP3NR(0x444, OSSL_PARAM_construct_uint64_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, uint64_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_size_t_amiga(___result, ___key, ___buf) \
      LP3NR(0x44a, OSSL_PARAM_construct_size_t_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, size_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_BN_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x450, OSSL_PARAM_construct_BN_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, unsigned char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_double_amiga(___result, ___key, ___buf) \
      LP3NR(0x456, OSSL_PARAM_construct_double_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, double *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_utf8_string_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x45c, OSSL_PARAM_construct_utf8_string_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_utf8_ptr_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x462, OSSL_PARAM_construct_utf8_ptr_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, char **, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_octet_string_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x468, OSSL_PARAM_construct_octet_string_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, void *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_octet_ptr_amiga(___result, ___key, ___buf, ___bsize) \
      LP4NR(0x46e, OSSL_PARAM_construct_octet_ptr_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, void **, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_int(___p, ___val) \
      LP2(0x474, int, OSSL_PARAM_get_int , const OSSL_PARAM *, ___p, a0, int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_uint(___p, ___val) \
      LP2(0x47a, int, OSSL_PARAM_get_uint , const OSSL_PARAM *, ___p, a0, unsigned int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_long(___p, ___val) \
      LP2(0x480, int, OSSL_PARAM_get_long , const OSSL_PARAM *, ___p, a0, long int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_ulong(___p, ___val) \
      LP2(0x486, int, OSSL_PARAM_get_ulong , const OSSL_PARAM *, ___p, a0, unsigned long int *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_int32(___p, ___val) \
      LP2(0x48c, int, OSSL_PARAM_get_int32 , const OSSL_PARAM *, ___p, a0, int32_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_uint32(___p, ___val) \
      LP2(0x492, int, OSSL_PARAM_get_uint32 , const OSSL_PARAM *, ___p, a0, uint32_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_int64(___p, ___val) \
      LP2(0x498, int, OSSL_PARAM_get_int64 , const OSSL_PARAM *, ___p, a0, int64_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_uint64(___p, ___val) \
      LP2(0x49e, int, OSSL_PARAM_get_uint64 , const OSSL_PARAM *, ___p, a0, uint64_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_size_t(___p, ___val) \
      LP2(0x4a4, int, OSSL_PARAM_get_size_t , const OSSL_PARAM *, ___p, a0, size_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_int(___p, ___val) \
      LP2(0x4aa, int, OSSL_PARAM_set_int , OSSL_PARAM *, ___p, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_uint(___p, ___val) \
      LP2(0x4b0, int, OSSL_PARAM_set_uint , OSSL_PARAM *, ___p, a0, unsigned int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_long(___p, ___val) \
      LP2(0x4b6, int, OSSL_PARAM_set_long , OSSL_PARAM *, ___p, a0, long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_ulong(___p, ___val) \
      LP2(0x4bc, int, OSSL_PARAM_set_ulong , OSSL_PARAM *, ___p, a0, unsigned long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_int32(___p, ___val) \
      LP2(0x4c2, int, OSSL_PARAM_set_int32 , OSSL_PARAM *, ___p, a0, int32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_uint32(___p, ___val) \
      LP2(0x4c8, int, OSSL_PARAM_set_uint32 , OSSL_PARAM *, ___p, a0, uint32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_int64(___p, ___val) \
      LP2(0x4ce, int, OSSL_PARAM_set_int64 , OSSL_PARAM *, ___p, a0, int64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_uint64(___p, ___val) \
      LP2(0x4d4, int, OSSL_PARAM_set_uint64 , OSSL_PARAM *, ___p, a0, uint64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_size_t(___p, ___val) \
      LP2(0x4da, int, OSSL_PARAM_set_size_t , OSSL_PARAM *, ___p, a0, size_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_double(___p, ___val) \
      LP2(0x4e0, int, OSSL_PARAM_get_double , const OSSL_PARAM *, ___p, a0, double *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_double(___p, ___val) \
      LP2(0x4e6, int, OSSL_PARAM_set_double , OSSL_PARAM *, ___p, a0, double, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_BN(___p, ___val) \
      LP2(0x4ec, int, OSSL_PARAM_get_BN , const OSSL_PARAM *, ___p, a0, BIGNUM **, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_BN(___p, ___val) \
      LP2(0x4f2, int, OSSL_PARAM_set_BN , OSSL_PARAM *, ___p, a0, const BIGNUM *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_utf8_string(___p, ___val, ___max_len) \
      LP3(0x4f8, int, OSSL_PARAM_get_utf8_string , const OSSL_PARAM *, ___p, a0, char **, ___val, a1, size_t, ___max_len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_utf8_string(___p, ___val) \
      LP2(0x4fe, int, OSSL_PARAM_set_utf8_string , OSSL_PARAM *, ___p, a0, const char *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_octet_string(___p, ___val, ___max_len, ___used_len) \
      LP4(0x504, int, OSSL_PARAM_get_octet_string , const OSSL_PARAM *, ___p, a0, void **, ___val, a1, size_t, ___max_len, d0, size_t *, ___used_len, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_octet_string(___p, ___val, ___len) \
      LP3(0x50a, int, OSSL_PARAM_set_octet_string , OSSL_PARAM *, ___p, a0, const void *, ___val, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_utf8_ptr(___p, ___val) \
      LP2(0x510, int, OSSL_PARAM_get_utf8_ptr , const OSSL_PARAM *, ___p, a0, const char **, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_utf8_ptr(___p, ___val) \
      LP2(0x516, int, OSSL_PARAM_set_utf8_ptr , OSSL_PARAM *, ___p, a0, const char *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_octet_ptr(___p, ___val, ___used_len) \
      LP3(0x51c, int, OSSL_PARAM_get_octet_ptr , const OSSL_PARAM *, ___p, a0, const void **, ___val, a1, size_t *, ___used_len, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_octet_ptr(___p, ___val, ___used_len) \
      LP3(0x522, int, OSSL_PARAM_set_octet_ptr , OSSL_PARAM *, ___p, a0, const void *, ___val, a1, size_t, ___used_len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_set0_distinguishing_id(___x, ___d_id) \
      LP2NR(0x528, X509_set0_distinguishing_id , X509 *, ___x, a0, ASN1_OCTET_STRING *, ___d_id, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_get0_distinguishing_id(___x) \
      LP1(0x52e, ASN1_OCTET_STRING *, X509_get0_distinguishing_id , X509 *, ___x, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_up_ref(___md) \
      LP1(0x534, int, EVP_MD_up_ref , EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x53a, EVP_MD *, EVP_MD_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_set_default_properties(___libctx, ___propq) \
      LP2(0x540, int, EVP_set_default_properties , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_end_amiga(___result) \
      LP1NR(0x546, OSSL_PARAM_construct_end_amiga , OSSL_PARAM *, ___result, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_check_named_curve(___group, ___nist_only, ___ctx) \
      LP3(0x54c, int, EC_GROUP_check_named_curve , const EC_GROUP *, ___group, a0, int, ___nist_only, d0, BN_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_up_ref(___cipher) \
      LP1(0x552, int, EVP_CIPHER_up_ref , EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x558, EVP_CIPHER *, EVP_CIPHER_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_mode(___cipher) \
      LP1(0x55e, int, EVP_CIPHER_get_mode , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_info(___type) \
      LP1(0x564, const char *, OPENSSL_info , int, ___type, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_new(___kdf) \
      LP1(0x56a, EVP_KDF_CTX *, EVP_KDF_CTX_new , EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_kdf(___ctx) \
      LP1(0x570, const EVP_KDF *, EVP_KDF_CTX_kdf , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_KeyParams(___a, ___pp) \
      LP2(0x576, int, i2d_KeyParams , const EVP_PKEY *, ___a, a0, unsigned char **, ___pp, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_KeyParams(___type, ___a, ___pp, ___length) \
      LP4(0x57c, EVP_PKEY *, d2i_KeyParams , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_KeyParams_bio(___bp, ___pkey) \
      LP2(0x582, int, i2d_KeyParams_bio , BIO *, ___bp, a0, const EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_KeyParams_bio(___type, ___a, ___in) \
      LP3(0x588, EVP_PKEY *, d2i_KeyParams_bio , int, ___type, d0, EVP_PKEY **, ___a, a0, BIO *, ___in, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_PKISTATUS_it() \
      LP0(0x58e, const ASN1_ITEM *, OSSL_CMP_PKISTATUS_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CMP_PKIHEADER(___a, ___in, ___len) \
      LP3(0x594, OSSL_CMP_PKIHEADER *, d2i_OSSL_CMP_PKIHEADER , OSSL_CMP_PKIHEADER **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CMP_PKIHEADER(___a, ___out) \
      LP2(0x59a, int, i2d_OSSL_CMP_PKIHEADER , const OSSL_CMP_PKIHEADER *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_PKIHEADER_it() \
      LP0(0x5a0, const ASN1_ITEM *, OSSL_CMP_PKIHEADER_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CMP_MSG(___a, ___in, ___len) \
      LP3(0x5a6, OSSL_CMP_MSG *, d2i_OSSL_CMP_MSG , OSSL_CMP_MSG **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CMP_MSG(___a, ___out) \
      LP2(0x5ac, int, i2d_OSSL_CMP_MSG , const OSSL_CMP_MSG *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_it() \
      LP0(0x5b2, const ASN1_ITEM *, OSSL_CMP_MSG_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_create(___type, ___value) \
      LP2(0x5b8, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_create , ASN1_OBJECT *, ___type, a0, ASN1_TYPE *, ___value, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_set0(___itav, ___type, ___value) \
      LP3NR(0x5be, OSSL_CMP_ITAV_set0 , OSSL_CMP_ITAV *, ___itav, a0, ASN1_OBJECT *, ___type, a1, ASN1_TYPE *, ___value, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_get0_type(___itav) \
      LP1(0x5c4, ASN1_OBJECT *, OSSL_CMP_ITAV_get0_type , const OSSL_CMP_ITAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_get0_value(___itav) \
      LP1(0x5ca, ASN1_TYPE *, OSSL_CMP_ITAV_get0_value , const OSSL_CMP_ITAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_push0_stack_item(___itav_sk_p, ___itav) \
      LP2(0x5d0, int, OSSL_CMP_ITAV_push0_stack_item , struct stack_st_OSSL_CMP_ITAV **, ___itav_sk_p, a0, OSSL_CMP_ITAV *, ___itav, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_free(___itav) \
      LP1NR(0x5d6, OSSL_CMP_ITAV_free , OSSL_CMP_ITAV *, ___itav, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_free(___msg) \
      LP1NR(0x5dc, OSSL_CMP_MSG_free , OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_set_params(___ctx, ___params) \
      LP2(0x5e2, int, EVP_MD_CTX_set_params , EVP_MD_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_get_params(___ctx, ___params) \
      LP2(0x5e8, int, EVP_MD_CTX_get_params , EVP_MD_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_new_ex(___ctx) \
      LP1(0x5ee, BN_CTX *, BN_CTX_new_ex , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_CTX_secure_new_ex(___ctx) \
      LP1(0x5f4, BN_CTX *, BN_CTX_secure_new_ex , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_thread_stop_ex(___ctx) \
      LP1NR(0x5fa, OPENSSL_thread_stop_ex , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_locate_const(___p, ___key) \
      LP2(0x600, const OSSL_PARAM *, OSSL_PARAM_locate_const , const OSSL_PARAM *, ___p, a0, const char *, ___key, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_set0_distinguishing_id(___x, ___d_id) \
      LP2NR(0x606, X509_REQ_set0_distinguishing_id , X509_REQ *, ___x, a0, ASN1_OCTET_STRING *, ___d_id, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_get0_distinguishing_id(___x) \
      LP1(0x60c, ASN1_OCTET_STRING *, X509_REQ_get0_distinguishing_id , X509_REQ *, ___x, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_rand_ex(___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx) \
      LP6(0x612, int, BN_rand_ex , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2, unsigned int, ___strength, d3, BN_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_priv_rand_ex(___rnd, ___bits, ___top, ___bottom, ___strength, ___ctx) \
      LP6(0x618, int, BN_priv_rand_ex , BIGNUM *, ___rnd, a0, int, ___bits, d0, int, ___top, d1, int, ___bottom, d2, unsigned int, ___strength, d3, BN_CTX *, ___ctx, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_rand_range_ex(___r, ___range, ___strength, ___ctx) \
      LP4(0x61e, int, BN_rand_range_ex , BIGNUM *, ___r, a0, const BIGNUM *, ___range, a1, unsigned int, ___strength, d0, BN_CTX *, ___ctx, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_priv_rand_range_ex(___r, ___range, ___strength, ___ctx) \
      LP4(0x624, int, BN_priv_rand_range_ex , BIGNUM *, ___r, a0, const BIGNUM *, ___range, a1, unsigned int, ___strength, d0, BN_CTX *, ___ctx, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_generate_prime_ex2(___ret, ___bits, ___safe, ___add, ___rem, ___cb, ___ctx) \
      LP7(0x62a, int, BN_generate_prime_ex2 , BIGNUM *, ___ret, a0, int, ___bits, d0, int, ___safe, d1, const BIGNUM *, ___add, a1, const BIGNUM *, ___rem, a2, BN_GENCB *, ___cb, a3, BN_CTX *, ___ctx, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_free(___exchange) \
      LP1NR(0x630, EVP_KEYEXCH_free , EVP_KEYEXCH *, ___exchange, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_up_ref(___exchange) \
      LP1(0x636, int, EVP_KEYEXCH_up_ref , EVP_KEYEXCH *, ___exchange, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x63c, EVP_KEYEXCH *, EVP_KEYEXCH_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_pad(___ctx, ___pad) \
      LP2(0x642, int, EVP_PKEY_CTX_set_dh_pad , EVP_PKEY_CTX *, ___ctx, a0, int, ___pad, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_params(___ctx, ___params) \
      LP2(0x648, int, EVP_PKEY_CTX_set_params , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x64e, EVP_KEYMGMT *, EVP_KEYMGMT_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_up_ref(___keymgmt) \
      LP1(0x654, int, EVP_KEYMGMT_up_ref , EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_free(___keymgmt) \
      LP1NR(0x65a, EVP_KEYMGMT_free , EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_get0_provider(___keymgmt) \
      LP1(0x660, const OSSL_PROVIDER *, EVP_KEYMGMT_get0_provider , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_dup(___a) \
      LP1(0x666, X509_PUBKEY *, X509_PUBKEY_dup , const X509_PUBKEY *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get0_name(___md) \
      LP1(0x66c, const char *, EVP_MD_get0_name , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get0_name(___cipher) \
      LP1(0x672, const char *, EVP_CIPHER_get0_name , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get0_provider(___md) \
      LP1(0x678, const OSSL_PROVIDER *, EVP_MD_get0_provider , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get0_provider(___cipher) \
      LP1(0x67e, const OSSL_PROVIDER *, EVP_CIPHER_get0_provider , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_get0_name(___prov) \
      LP1(0x684, const char *, OSSL_PROVIDER_get0_name , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x68a, EVP_CIPHER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_CIPHER *cipher,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_MD_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x690, EVP_MD_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_MD *md,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_get0_provider(___exchange) \
      LP1(0x696, OSSL_PROVIDER *, EVP_KEYEXCH_get0_provider , const EVP_KEYEXCH *, ___exchange, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_available(___a, ___name) \
      LP2(0x69c, int, OSSL_PROVIDER_available , OSSL_LIB_CTX *, ___a, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_new() \
      LP0NR(0x6a2, ERR_new ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_set_debug(___file, ___line, ___func) \
      LP3NR(0x6a8, ERR_set_debug , const char *, ___file, a0, int, ___line, d0, const char *, ___func, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_vset_error(___lib, ___reason, ___fmt, ___args) \
      LP4NR(0x6ae, ERR_vset_error , int, ___lib, d0, int, ___reason, d1, const char *, ___fmt, a0, long *, ___args, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define ERR_set_error(___lib, ___reason, ___fmt, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; ERR_vset_error((___lib), (___reason), (___fmt), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define X509_self_signed(___cert, ___verify_signature) \
      LP2(0x6b4, int, X509_self_signed , X509 *, ___cert, a0, int, ___verify_signature, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_hexstr2buf_ex(___buf, ___buf_n, ___buflen, ___str, ___sep) \
      LP5(0x6ba, int, OPENSSL_hexstr2buf_ex , unsigned char *, ___buf, a0, size_t, ___buf_n, d0, size_t *, ___buflen, a1, const char *, ___str, a2, const char, ___sep, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_buf2hexstr_ex(___str, ___str_n, ___strlen, ___buf, ___buflen, ___sep) \
      LP6(0x6c0, int, OPENSSL_buf2hexstr_ex , char *, ___str, a0, size_t, ___str_n, d0, size_t *, ___strlen, a1, const unsigned char *, ___buf, a2, size_t, ___buflen, d1, const char, ___sep, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_allocate_from_text(___to, ___paramdefs, ___key, ___value, ___value_n, ___found) \
      LP6(0x6c6, int, OSSL_PARAM_allocate_from_text , OSSL_PARAM *, ___to, a0, const OSSL_PARAM *, ___paramdefs, a1, const char *, ___key, a2, const char *, ___value, a3, size_t, ___value_n, d0, int *, ___found, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_gettable_params(___digest) \
      LP1(0x6cc, const OSSL_PARAM *, EVP_MD_gettable_params , const EVP_MD *, ___digest, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_settable_params(___ctx) \
      LP1(0x6d2, const OSSL_PARAM *, EVP_MD_CTX_settable_params , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_gettable_params(___ctx) \
      LP1(0x6d8, const OSSL_PARAM *, EVP_MD_CTX_gettable_params , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get_params(___cipher, ___params) \
      LP2(0x6de, int, EVP_CIPHER_get_params , EVP_CIPHER *, ___cipher, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_set_params(___ctx, ___params) \
      LP2(0x6e4, int, EVP_CIPHER_CTX_set_params , EVP_CIPHER_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_params(___ctx, ___params) \
      LP2(0x6ea, int, EVP_CIPHER_CTX_get_params , EVP_CIPHER_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_gettable_params(___cipher) \
      LP1(0x6f0, const OSSL_PARAM *, EVP_CIPHER_gettable_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_settable_ctx_params(___cipher) \
      LP1(0x6f6, const OSSL_PARAM *, EVP_CIPHER_settable_ctx_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_gettable_ctx_params(___cipher) \
      LP1(0x6fc, const OSSL_PARAM *, EVP_CIPHER_gettable_ctx_params , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get_params(___digest, ___params) \
      LP2(0x702, int, EVP_MD_get_params , const EVP_MD *, ___digest, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_fetch(___libctx, ___algorithm, ___properties) \
      LP3(0x708, EVP_MAC *, EVP_MAC_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_settable_ctx_params(___mac) \
      LP1(0x70e, const OSSL_PARAM *, EVP_MAC_settable_ctx_params , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_set_params(___ctx, ___params) \
      LP2(0x714, int, EVP_MAC_CTX_set_params , EVP_MAC_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_get_params(___ctx, ___params) \
      LP2(0x71a, int, EVP_MAC_CTX_get_params , EVP_MAC_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_gettable_ctx_params(___mac) \
      LP1(0x720, const OSSL_PARAM *, EVP_MAC_gettable_ctx_params , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_free(___mac) \
      LP1NR(0x726, EVP_MAC_free , EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_up_ref(___mac) \
      LP1(0x72c, int, EVP_MAC_up_ref , EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_get_params(___mac, ___params) \
      LP2(0x732, int, EVP_MAC_get_params , EVP_MAC *, ___mac, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_gettable_params(___mac) \
      LP1(0x738, const OSSL_PARAM *, EVP_MAC_gettable_params , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_get0_provider(___mac) \
      LP1(0x73e, const OSSL_PROVIDER *, EVP_MAC_get0_provider , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x744, EVP_MAC_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_MAC *mac,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_MAC_get0_name(___mac) \
      LP1(0x74a, const char *, EVP_MAC_get0_name , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_free(___md) \
      LP1NR(0x750, EVP_MD_free , EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_free(___cipher) \
      LP1NR(0x756, EVP_CIPHER_free , EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_up_ref(___kdf) \
      LP1(0x75c, int, EVP_KDF_up_ref , EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_free(___kdf) \
      LP1NR(0x762, EVP_KDF_free , EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_fetch(___libctx, ___algorithm, ___properties) \
      LP3(0x768, EVP_KDF *, EVP_KDF_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_dup(___src) \
      LP1(0x76e, EVP_KDF_CTX *, EVP_KDF_CTX_dup , const EVP_KDF_CTX *, ___src, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_get0_provider(___kdf) \
      LP1(0x774, const OSSL_PROVIDER *, EVP_KDF_get0_provider , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_get_params(___kdf, ___params) \
      LP2(0x77a, int, EVP_KDF_get_params , EVP_KDF *, ___kdf, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_get_params(___ctx, ___params) \
      LP2(0x780, int, EVP_KDF_CTX_get_params , EVP_KDF_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_set_params(___ctx, ___params) \
      LP2(0x786, int, EVP_KDF_CTX_set_params , EVP_KDF_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_gettable_params(___kdf) \
      LP1(0x78c, const OSSL_PARAM *, EVP_KDF_gettable_params , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_gettable_ctx_params(___kdf) \
      LP1(0x792, const OSSL_PARAM *, EVP_KDF_gettable_ctx_params , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_settable_ctx_params(___kdf) \
      LP1(0x798, const OSSL_PARAM *, EVP_KDF_settable_ctx_params , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x79e, EVP_KDF_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KDF *kdf,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_free(___signature) \
      LP1NR(0x7a4, EVP_SIGNATURE_free , EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_up_ref(___signature) \
      LP1(0x7aa, int, EVP_SIGNATURE_up_ref , EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_get0_provider(___signature) \
      LP1(0x7b0, OSSL_PROVIDER *, EVP_SIGNATURE_get0_provider , const EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x7b6, EVP_SIGNATURE *, EVP_SIGNATURE_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_signature_md(___ctx, ___md) \
      LP2(0x7bc, int, EVP_PKEY_CTX_set_signature_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_signature_md(___ctx, ___md) \
      LP2(0x7c2, int, EVP_PKEY_CTX_get_signature_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_params(___ctx, ___params) \
      LP2(0x7c8, int, EVP_PKEY_CTX_get_params , EVP_PKEY_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_gettable_params(___ctx) \
      LP1(0x7ce, const OSSL_PARAM *, EVP_PKEY_CTX_gettable_params , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_settable_params(___ctx) \
      LP1(0x7d4, const OSSL_PARAM *, EVP_PKEY_CTX_settable_params , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_tag_length(___ctx) \
      LP1(0x7da, int, EVP_CIPHER_CTX_get_tag_length , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_get_error_all(___file, ___line, ___func, ___data, ___flags) \
      LP5(0x7e0, unsigned long, ERR_get_error_all , const char **, ___file, a0, int *, ___line, a1, const char **, ___func, a2, const char **, ___data, a3, int *, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_error_func(___func) \
      LP1(0x7e6, unsigned long, ERR_peek_error_func , const char **, ___func, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_error_data(___data, ___flags) \
      LP2(0x7ec, unsigned long, ERR_peek_error_data , const char **, ___data, a0, int *, ___flags, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_error_all(___file, ___line, ___func, ___data, ___flags) \
      LP5(0x7f2, unsigned long, ERR_peek_error_all , const char **, ___file, a0, int *, ___line, a1, const char **, ___func, a2, const char **, ___data, a3, int *, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_last_error_func(___func) \
      LP1(0x7f8, unsigned long, ERR_peek_last_error_func , const char **, ___func, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_last_error_data(___data, ___flags) \
      LP2(0x7fe, unsigned long, ERR_peek_last_error_data , const char **, ___data, a0, int *, ___flags, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_peek_last_error_all(___file, ___line, ___func, ___data, ___flags) \
      LP5(0x804, unsigned long, ERR_peek_last_error_all , const char **, ___file, a0, int *, ___line, a1, const char **, ___func, a2, const char **, ___data, a3, int *, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_is_a(___cipher, ___name) \
      LP2(0x80a, int, EVP_CIPHER_is_a , const EVP_CIPHER *, ___cipher, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_is_a(___mac, ___name) \
      LP2(0x810, int, EVP_MAC_is_a , const EVP_MAC *, ___mac, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_settable_ctx_params(___md) \
      LP1(0x816, const OSSL_PARAM *, EVP_MD_settable_ctx_params , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_gettable_ctx_params(___md) \
      LP1(0x81c, const OSSL_PARAM *, EVP_MD_gettable_ctx_params , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_new(___libctx, ___propq) \
      LP2(0x822, OSSL_CMP_CTX *, OSSL_CMP_CTX_new , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_free(___ctx) \
      LP1NR(0x828, OSSL_CMP_CTX_free , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_reinit(___ctx) \
      LP1(0x82e, int, OSSL_CMP_CTX_reinit , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_option(___ctx, ___opt, ___val) \
      LP3(0x834, int, OSSL_CMP_CTX_set_option , OSSL_CMP_CTX *, ___ctx, a0, int, ___opt, d0, int, ___val, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get_option(___ctx, ___opt) \
      LP2(0x83a, int, OSSL_CMP_CTX_get_option , const OSSL_CMP_CTX *, ___ctx, a0, int, ___opt, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_log_cb(___ctx, ___cb) \
      LP2(0x840, int, OSSL_CMP_CTX_set_log_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_log_cb_t, ___cb, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_print_errors(___ctx) \
      LP1NR(0x846, OSSL_CMP_CTX_print_errors , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_serverPath(___ctx, ___path) \
      LP2(0x84c, int, OSSL_CMP_CTX_set1_serverPath , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___path, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_server(___ctx, ___address) \
      LP2(0x852, int, OSSL_CMP_CTX_set1_server , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___address, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_serverPort(___ctx, ___port) \
      LP2(0x858, int, OSSL_CMP_CTX_set_serverPort , OSSL_CMP_CTX *, ___ctx, a0, int, ___port, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_proxy(___ctx, ___name) \
      LP2(0x85e, int, OSSL_CMP_CTX_set1_proxy , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_no_proxy(___ctx, ___names) \
      LP2(0x864, int, OSSL_CMP_CTX_set1_no_proxy , OSSL_CMP_CTX *, ___ctx, a0, const char *, ___names, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_http_cb(___ctx, ___cb) \
      LP2(0x86a, int, OSSL_CMP_CTX_set_http_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_HTTP_bio_cb_t, ___cb, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_http_cb_arg(___ctx, ___arg) \
      LP2(0x870, int, OSSL_CMP_CTX_set_http_cb_arg , OSSL_CMP_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get_http_cb_arg(___ctx) \
      LP1(0x876, void *, OSSL_CMP_CTX_get_http_cb_arg , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_transfer_cb(___ctx, ___cb) \
      LP2(0x87c, int, OSSL_CMP_CTX_set_transfer_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_transfer_cb_t, ___cb, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_transfer_cb_arg(___ctx, ___arg) \
      LP2(0x882, int, OSSL_CMP_CTX_set_transfer_cb_arg , OSSL_CMP_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get_transfer_cb_arg(___ctx) \
      LP1(0x888, void *, OSSL_CMP_CTX_get_transfer_cb_arg , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_srvCert(___ctx, ___cert) \
      LP2(0x88e, int, OSSL_CMP_CTX_set1_srvCert , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_expected_sender(___ctx, ___name) \
      LP2(0x894, int, OSSL_CMP_CTX_set1_expected_sender , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set0_trustedStore(___ctx, ___store) \
      LP2(0x89a, int, OSSL_CMP_CTX_set0_trustedStore , OSSL_CMP_CTX *, ___ctx, a0, X509_STORE *, ___store, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get0_trustedStore(___ctx) \
      LP1(0x8a0, X509_STORE *, OSSL_CMP_CTX_get0_trustedStore , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_untrusted(___ctx, ___certs) \
      LP2(0x8a6, int, OSSL_CMP_CTX_set1_untrusted , OSSL_CMP_CTX *, ___ctx, a0, struct stack_st_X509 *, ___certs, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get0_untrusted(___ctx) \
      LP1(0x8ac, struct stack_st_X509 *, OSSL_CMP_CTX_get0_untrusted , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_cert(___ctx, ___cert) \
      LP2(0x8b2, int, OSSL_CMP_CTX_set1_cert , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_pkey(___ctx, ___pkey) \
      LP2(0x8b8, int, OSSL_CMP_CTX_set1_pkey , OSSL_CMP_CTX *, ___ctx, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_build_cert_chain(___ctx, ___own_trusted, ___candidates) \
      LP3(0x8be, int, OSSL_CMP_CTX_build_cert_chain , OSSL_CMP_CTX *, ___ctx, a0, X509_STORE *, ___own_trusted, a1, struct stack_st_X509 *, ___candidates, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_referenceValue(___ctx, ___ref, ___len) \
      LP3(0x8c4, int, OSSL_CMP_CTX_set1_referenceValue , OSSL_CMP_CTX *, ___ctx, a0, const unsigned char *, ___ref, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_secretValue(___ctx, ___sec, ___len) \
      LP3(0x8ca, int, OSSL_CMP_CTX_set1_secretValue , OSSL_CMP_CTX *, ___ctx, a0, const unsigned char *, ___sec, a1, const int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_recipient(___ctx, ___name) \
      LP2(0x8d0, int, OSSL_CMP_CTX_set1_recipient , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_push0_geninfo_ITAV(___ctx, ___itav) \
      LP2(0x8d6, int, OSSL_CMP_CTX_push0_geninfo_ITAV , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_ITAV *, ___itav, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_extraCertsOut(___ctx, ___extraCertsOut) \
      LP2(0x8dc, int, OSSL_CMP_CTX_set1_extraCertsOut , OSSL_CMP_CTX *, ___ctx, a0, struct stack_st_X509 *, ___extraCertsOut, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set0_newPkey(___ctx, ___priv, ___pkey) \
      LP3(0x8e2, int, OSSL_CMP_CTX_set0_newPkey , OSSL_CMP_CTX *, ___ctx, a0, int, ___priv, d0, EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get0_newPkey(___ctx, ___priv) \
      LP2(0x8e8, EVP_PKEY *, OSSL_CMP_CTX_get0_newPkey , const OSSL_CMP_CTX *, ___ctx, a0, int, ___priv, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_issuer(___ctx, ___name) \
      LP2(0x8ee, int, OSSL_CMP_CTX_set1_issuer , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_subjectName(___ctx, ___name) \
      LP2(0x8f4, int, OSSL_CMP_CTX_set1_subjectName , OSSL_CMP_CTX *, ___ctx, a0, const X509_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_push1_subjectAltName(___ctx, ___name) \
      LP2(0x8fa, int, OSSL_CMP_CTX_push1_subjectAltName , OSSL_CMP_CTX *, ___ctx, a0, const GENERAL_NAME *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set0_reqExtensions(___ctx, ___exts) \
      LP2(0x900, int, OSSL_CMP_CTX_set0_reqExtensions , OSSL_CMP_CTX *, ___ctx, a0, X509_EXTENSIONS *, ___exts, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_reqExtensions_have_SAN(___ctx) \
      LP1(0x906, int, OSSL_CMP_CTX_reqExtensions_have_SAN , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_push0_policy(___ctx, ___pinfo) \
      LP2(0x90c, int, OSSL_CMP_CTX_push0_policy , OSSL_CMP_CTX *, ___ctx, a0, POLICYINFO *, ___pinfo, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_oldCert(___ctx, ___cert) \
      LP2(0x912, int, OSSL_CMP_CTX_set1_oldCert , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_p10CSR(___ctx, ___csr) \
      LP2(0x918, int, OSSL_CMP_CTX_set1_p10CSR , OSSL_CMP_CTX *, ___ctx, a0, const X509_REQ *, ___csr, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_push0_genm_ITAV(___ctx, ___itav) \
      LP2(0x91e, int, OSSL_CMP_CTX_push0_genm_ITAV , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_ITAV *, ___itav, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_certConf_cb(___ctx, ___cb) \
      LP2(0x924, int, OSSL_CMP_CTX_set_certConf_cb , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_certConf_cb_t, ___cb, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set_certConf_cb_arg(___ctx, ___arg) \
      LP2(0x92a, int, OSSL_CMP_CTX_set_certConf_cb_arg , OSSL_CMP_CTX *, ___ctx, a0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get_certConf_cb_arg(___ctx) \
      LP1(0x930, void *, OSSL_CMP_CTX_get_certConf_cb_arg , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get_status(___ctx) \
      LP1(0x936, int, OSSL_CMP_CTX_get_status , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get0_statusString(___ctx) \
      LP1(0x93c, OSSL_CMP_PKIFREETEXT *, OSSL_CMP_CTX_get0_statusString , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get_failInfoCode(___ctx) \
      LP1(0x942, int, OSSL_CMP_CTX_get_failInfoCode , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get0_newCert(___ctx) \
      LP1(0x948, X509 *, OSSL_CMP_CTX_get0_newCert , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get1_newChain(___ctx) \
      LP1(0x94e, struct stack_st_X509 *, OSSL_CMP_CTX_get1_newChain , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get1_caPubs(___ctx) \
      LP1(0x954, struct stack_st_X509 *, OSSL_CMP_CTX_get1_caPubs , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_get1_extraCertsIn(___ctx) \
      LP1(0x95a, struct stack_st_X509 *, OSSL_CMP_CTX_get1_extraCertsIn , const OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_transactionID(___ctx, ___id) \
      LP2(0x960, int, OSSL_CMP_CTX_set1_transactionID , OSSL_CMP_CTX *, ___ctx, a0, const ASN1_OCTET_STRING *, ___id, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_set1_senderNonce(___ctx, ___nonce) \
      LP2(0x966, int, OSSL_CMP_CTX_set1_senderNonce , OSSL_CMP_CTX *, ___ctx, a0, const ASN1_OCTET_STRING *, ___nonce, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_log_open() \
      LP0(0x96c, int, OSSL_CMP_log_open ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_log_close() \
      LP0NR(0x972, OSSL_CMP_log_close ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_print_to_bio(___bio, ___component, ___file, ___line, ___level, ___msg) \
      LP6(0x978, int, OSSL_CMP_print_to_bio , BIO *, ___bio, a0, const char *, ___component, a1, const char *, ___file, a2, int, ___line, d0, OSSL_CMP_severity, ___level, d1, const char *, ___msg, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_print_errors_cb(___log_fn) \
      LP1NR(0x97e, OSSL_CMP_print_errors_cb , OSSL_CMP_log_cb_t, ___log_fn, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTID_get0_issuer(___cid) \
      LP1(0x984, const X509_NAME *, OSSL_CRMF_CERTID_get0_issuer , const OSSL_CRMF_CERTID *, ___cid, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CRMF_CERTID_get0_serialNumber(___cid) \
      LP1(0x98a, const ASN1_INTEGER *, OSSL_CRMF_CERTID_get0_serialNumber , const OSSL_CRMF_CERTID *, ___cid, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestSignUpdate(___ctx, ___data, ___dsize) \
      LP3(0x990, int, EVP_DigestSignUpdate , EVP_MD_CTX *, ___ctx, a0, const void *, ___data, a1, size_t, ___dsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestVerifyUpdate(___ctx, ___data, ___dsize) \
      LP3(0x996, int, EVP_DigestVerifyUpdate , EVP_MD_CTX *, ___ctx, a0, const void *, ___data, a1, size_t, ___dsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_check_prime(___p, ___ctx, ___cb) \
      LP3(0x99c, int, BN_check_prime , const BIGNUM *, ___p, a0, BN_CTX *, ___ctx, a1, BN_GENCB *, ___cb, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_is_a(___keymgmt, ___name) \
      LP2(0x9a2, int, EVP_KEYMGMT_is_a , const EVP_KEYMGMT *, ___keymgmt, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x9a8, EVP_KEYMGMT_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KEYMGMT *keymgmt,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_is_a(___keyexch, ___name) \
      LP2(0x9ae, int, EVP_KEYEXCH_is_a , const EVP_KEYEXCH *, ___keyexch, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_do_all_provided(___libctx, ___fn, ___data) \
      LP3NRFP(0x9b4, EVP_KEYEXCH_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KEYEXCH *keyexch,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_KDF_is_a(___kdf, ___name) \
      LP2(0x9ba, int, EVP_KDF_is_a , const EVP_KDF *, ___kdf, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_is_a(___md, ___name) \
      LP2(0x9c0, int, EVP_MD_is_a , const EVP_MD *, ___md, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_is_a(___signature, ___name) \
      LP2(0x9c6, int, EVP_SIGNATURE_is_a , const EVP_SIGNATURE *, ___signature, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_do_all_provided(___libctx, ___fn, ___data) \
      LP3NRFP(0x9cc, EVP_SIGNATURE_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_SIGNATURE *signature,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_MD_names_do_all(___md, ___fn, ___data) \
      LP3FP(0x9d2, int, EVP_MD_names_do_all , const EVP_MD *, ___md, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_names_do_all(___cipher, ___fn, ___data) \
      LP3FP(0x9d8, int, EVP_CIPHER_names_do_all , const EVP_CIPHER *, ___cipher, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_MAC_names_do_all(___mac, ___fn, ___data) \
      LP3FP(0x9de, int, EVP_MAC_names_do_all , const EVP_MAC *, ___mac, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_names_do_all(___keymgmt, ___fn, ___data) \
      LP3FP(0x9e4, int, EVP_KEYMGMT_names_do_all , const EVP_KEYMGMT *, ___keymgmt, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_names_do_all(___keyexch, ___fn, ___data) \
      LP3FP(0x9ea, int, EVP_KEYEXCH_names_do_all , const EVP_KEYEXCH *, ___keyexch, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_KDF_names_do_all(___kdf, ___fn, ___data) \
      LP3FP(0x9f0, int, EVP_KDF_names_do_all , const EVP_KDF *, ___kdf, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_names_do_all(___signature, ___fn, ___data) \
      LP3FP(0x9f6, int, EVP_SIGNATURE_names_do_all , const EVP_SIGNATURE *, ___signature, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_snprint_PKIStatus(___ctx, ___buf, ___bufsize) \
      LP3(0x9fc, char *, OSSL_CMP_CTX_snprint_PKIStatus , const OSSL_CMP_CTX *, ___ctx, a0, char *, ___buf, a1, size_t, ___bufsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_HDR_get0_transactionID(___hdr) \
      LP1(0xa02, ASN1_OCTET_STRING *, OSSL_CMP_HDR_get0_transactionID , const OSSL_CMP_PKIHEADER *, ___hdr, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_HDR_get0_recipNonce(___hdr) \
      LP1(0xa08, ASN1_OCTET_STRING *, OSSL_CMP_HDR_get0_recipNonce , const OSSL_CMP_PKIHEADER *, ___hdr, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_store() \
      LP0(0xa0e, X509_LOOKUP_METHOD *, X509_LOOKUP_store ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_add_cert(___sk, ___cert, ___flags) \
      LP3(0xa14, int, X509_add_cert , struct stack_st_X509 *, ___sk, a0, X509 *, ___cert, a1, int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_add_certs(___sk, ___certs, ___flags) \
      LP3(0xa1a, int, X509_add_certs , struct stack_st_X509 *, ___sk, a0, struct stack_st_X509 *, ___certs, a1, int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_file(___ctx, ___file) \
      LP2(0xa20, int, X509_STORE_load_file , X509_STORE *, ___ctx, a0, const char *, ___file, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_path(___ctx, ___path) \
      LP2(0xa26, int, X509_STORE_load_path , X509_STORE *, ___ctx, a0, const char *, ___path, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_store(___ctx, ___store) \
      LP2(0xa2c, int, X509_STORE_load_store , X509_STORE *, ___ctx, a0, const char *, ___store, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_fromdata(___ctx, ___ppkey, ___selection, ___params) \
      LP4(0xa32, int, EVP_PKEY_fromdata , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1, int, ___selection, d0, OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_free(___cipher) \
      LP1NR(0xa38, EVP_ASYM_CIPHER_free , EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_up_ref(___cipher) \
      LP1(0xa3e, int, EVP_ASYM_CIPHER_up_ref , EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_get0_provider(___cipher) \
      LP1(0xa44, OSSL_PROVIDER *, EVP_ASYM_CIPHER_get0_provider , const EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0xa4a, EVP_ASYM_CIPHER *, EVP_ASYM_CIPHER_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_is_a(___cipher, ___name) \
      LP2(0xa50, int, EVP_ASYM_CIPHER_is_a , const EVP_ASYM_CIPHER *, ___cipher, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0xa56, EVP_ASYM_CIPHER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_ASYM_CIPHER *cipher,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_names_do_all(___cipher, ___fn, ___data) \
      LP3FP(0xa5c, int, EVP_ASYM_CIPHER_names_do_all , const EVP_ASYM_CIPHER *, ___cipher, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_padding(___ctx, ___pad_mode) \
      LP2(0xa62, int, EVP_PKEY_CTX_set_rsa_padding , EVP_PKEY_CTX *, ___ctx, a0, int, ___pad_mode, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_rsa_padding(___ctx, ___pad_mode) \
      LP2(0xa68, int, EVP_PKEY_CTX_get_rsa_padding , EVP_PKEY_CTX *, ___ctx, a0, int *, ___pad_mode, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_mgf1_md(___ctx, ___md) \
      LP2(0xa6e, int, EVP_PKEY_CTX_set_rsa_mgf1_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_mgf1_md_name(___ctx, ___mdname, ___mdprops) \
      LP3(0xa74, int, EVP_PKEY_CTX_set_rsa_mgf1_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1, const char *, ___mdprops, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_rsa_mgf1_md(___ctx, ___md) \
      LP2(0xa7a, int, EVP_PKEY_CTX_get_rsa_mgf1_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_oaep_md(___ctx, ___md) \
      LP2(0xa80, int, EVP_PKEY_CTX_set_rsa_oaep_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_oaep_md_name(___ctx, ___mdname, ___mdprops) \
      LP3(0xa86, int, EVP_PKEY_CTX_set_rsa_oaep_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1, const char *, ___mdprops, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_rsa_oaep_md(___ctx, ___md) \
      LP2(0xa8c, int, EVP_PKEY_CTX_get_rsa_oaep_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set0_rsa_oaep_label(___ctx, ___label, ___llen) \
      LP3(0xa92, int, EVP_PKEY_CTX_set0_rsa_oaep_label , EVP_PKEY_CTX *, ___ctx, a0, void *, ___label, a1, int, ___llen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_rsa_oaep_label(___ctx, ___label) \
      LP2(0xa98, int, EVP_PKEY_CTX_get0_rsa_oaep_label , EVP_PKEY_CTX *, ___ctx, a0, unsigned char **, ___label, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_rsa_mgf1_md_name(___ctx, ___name, ___namelen) \
      LP3(0xa9e, int, EVP_PKEY_CTX_get_rsa_mgf1_md_name , EVP_PKEY_CTX *, ___ctx, a0, char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_rsa_oaep_md_name(___ctx, ___name, ___namelen) \
      LP3(0xaa4, int, EVP_PKEY_CTX_get_rsa_oaep_md_name , EVP_PKEY_CTX *, ___ctx, a0, char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_up_ref(___encoder) \
      LP1(0xaaa, int, OSSL_ENCODER_up_ref , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_free(___encoder) \
      LP1NR(0xab0, OSSL_ENCODER_free , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_fetch(___libctx, ___name, ___properties) \
      LP3(0xab6, OSSL_ENCODER *, OSSL_ENCODER_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_is_a(___encoder, ___name) \
      LP2(0xabc, int, OSSL_ENCODER_is_a , const OSSL_ENCODER *, ___encoder, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_get0_provider(___encoder) \
      LP1(0xac2, const OSSL_PROVIDER *, OSSL_ENCODER_get0_provider , const OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0xac8, OSSL_ENCODER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(OSSL_ENCODER *encoder,void *arg), 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_names_do_all(___encoder, ___fn, ___data) \
      LP3FP(0xace, int, OSSL_ENCODER_names_do_all , const OSSL_ENCODER *, ___encoder, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_settable_ctx_params(___encoder) \
      LP1(0xad4, const OSSL_PARAM *, OSSL_ENCODER_settable_ctx_params , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_new() \
      LP0(0xada, OSSL_ENCODER_CTX *, OSSL_ENCODER_CTX_new ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_params(___ctx, ___params) \
      LP2(0xae0, int, OSSL_ENCODER_CTX_set_params , OSSL_ENCODER_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_free(___ctx) \
      LP1NR(0xae6, OSSL_ENCODER_CTX_free , OSSL_ENCODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_get0_properties(___encoder) \
      LP1(0xaec, const char *, OSSL_ENCODER_get0_properties , const OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_to_bio(___ctx, ___out) \
      LP2(0xaf2, int, OSSL_ENCODER_to_bio , OSSL_ENCODER_CTX *, ___ctx, a0, BIO *, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_new_for_pkey(___pkey, ___selection, ___output_type, ___output_struct, ___propquery) \
      LP5(0xaf8, OSSL_ENCODER_CTX *, OSSL_ENCODER_CTX_new_for_pkey , const EVP_PKEY *, ___pkey, a0, int, ___selection, d0, const char *, ___output_type, a1, const char *, ___output_struct, a2, const char *, ___propquery, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_cipher(___ctx, ___cipher_name, ___propquery) \
      LP3(0xafe, int, OSSL_ENCODER_CTX_set_cipher , OSSL_ENCODER_CTX *, ___ctx, a0, const char *, ___cipher_name, a1, const char *, ___propquery, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_passphrase(___ctx, ___kstr, ___klen) \
      LP3(0xb04, int, OSSL_ENCODER_CTX_set_passphrase , OSSL_ENCODER_CTX *, ___ctx, a0, const unsigned char *, ___kstr, a1, size_t, ___klen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_pem_password_cb(___ctx, ___cb, ___cbarg) \
      LP3(0xb0a, int, OSSL_ENCODER_CTX_set_pem_password_cb , OSSL_ENCODER_CTX *, ___ctx, a0, pem_password_cb *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_passphrase_ui(___ctx, ___ui_method, ___ui_data) \
      LP3(0xb10, int, OSSL_ENCODER_CTX_set_passphrase_ui , OSSL_ENCODER_CTX *, ___ctx, a0, const UI_METHOD *, ___ui_method, a1, void *, ___ui_data, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_X509_PUBKEY(___out, ___x, ___cb, ___u) \
      LP4(0xb16, X509_PUBKEY *, PEM_read_bio_X509_PUBKEY , BIO *, ___out, a0, X509_PUBKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_X509_PUBKEY(___out, ___x) \
      LP2(0xb1c, int, PEM_write_bio_X509_PUBKEY , BIO *, ___out, a0, const X509_PUBKEY *, ___x, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_X509_PUBKEY_bio(___bp, ___xpk) \
      LP2(0xb22, X509_PUBKEY *, d2i_X509_PUBKEY_bio , BIO *, ___bp, a0, X509_PUBKEY **, ___xpk, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_X509_PUBKEY_bio(___bp, ___xpk) \
      LP2(0xb28, int, i2d_X509_PUBKEY_bio , BIO *, ___bp, a0, const X509_PUBKEY *, ___xpk, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_cmp_timeframe(___vpm, ___start, ___end) \
      LP3(0xb2e, int, X509_cmp_timeframe , const X509_VERIFY_PARAM *, ___vpm, a0, const ASN1_TIME *, ___start, a1, const ASN1_TIME *, ___end, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_get0_header(___msg) \
      LP1(0xb34, OSSL_CMP_PKIHEADER *, OSSL_CMP_MSG_get0_header , const OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_get_bodytype(___msg) \
      LP1(0xb3a, int, OSSL_CMP_MSG_get_bodytype , const OSSL_CMP_MSG *, ___msg, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_update_transactionID(___ctx, ___msg) \
      LP2(0xb40, int, OSSL_CMP_MSG_update_transactionID , OSSL_CMP_CTX *, ___ctx, a0, OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_setup_CRM(___ctx, ___for_KUR, ___rid) \
      LP3(0xb46, OSSL_CRMF_MSG *, OSSL_CMP_CTX_setup_CRM , OSSL_CMP_CTX *, ___ctx, a0, int, ___for_KUR, d0, int, ___rid, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_prefix() \
      LP0(0xb4c, const BIO_METHOD *, BIO_f_prefix ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_new_from_name(___libctx, ___name, ___propquery) \
      LP3(0xb52, EVP_PKEY_CTX *, EVP_PKEY_CTX_new_from_name , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___propquery, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_new_from_pkey(___libctx, ___pkey, ___propquery) \
      LP3(0xb58, EVP_PKEY_CTX *, EVP_PKEY_CTX_new_from_pkey , OSSL_LIB_CTX *, ___libctx, a0, EVP_PKEY *, ___pkey, a1, const char *, ___propquery, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_set_callback(___libctx, ___cb, ___cbarg) \
      LP3NR(0xb5e, OSSL_SELF_TEST_set_callback , OSSL_LIB_CTX *, ___libctx, a0, OSSL_CALLBACK *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_get_callback(___libctx, ___cb, ___cbarg) \
      LP3NR(0xb64, OSSL_SELF_TEST_get_callback , OSSL_LIB_CTX *, ___libctx, a0, OSSL_CALLBACK **, ___cb, a1, void **, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_dup(___a) \
      LP1(0xb6a, ASN1_TIME *, ASN1_TIME_dup , const ASN1_TIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_UTCTIME_dup(___a) \
      LP1(0xb70, ASN1_UTCTIME *, ASN1_UTCTIME_dup , const ASN1_UTCTIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_GENERALIZEDTIME_dup(___a) \
      LP1(0xb76, ASN1_GENERALIZEDTIME *, ASN1_GENERALIZEDTIME_dup , const ASN1_GENERALIZEDTIME *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_priv_bytes_ex(___ctx, ___buf, ___num, ___strength) \
      LP4(0xb7c, int, RAND_priv_bytes_ex , OSSL_LIB_CTX *, ___ctx, a0, unsigned char *, ___buf, a1, size_t, ___num, d0, unsigned int, ___strength, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_bytes_ex(___ctx, ___buf, ___num, ___strength) \
      LP4(0xb82, int, RAND_bytes_ex , OSSL_LIB_CTX *, ___ctx, a0, unsigned char *, ___buf, a1, size_t, ___num, d0, unsigned int, ___strength, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_default_digest_name(___pkey, ___mdname, ___mdname_sz) \
      LP3(0xb88, int, EVP_PKEY_get_default_digest_name , EVP_PKEY *, ___pkey, a0, char *, ___mdname, a1, size_t, ___mdname_sz, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_decrypt_set1_pkey_and_peer(___cms, ___pk, ___cert, ___peer) \
      LP4(0xb8e, int, CMS_decrypt_set1_pkey_and_peer , CMS_ContentInfo *, ___cms, a0, EVP_PKEY *, ___pk, a1, X509 *, ___cert, a2, X509 *, ___peer, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_add1_recipient(___cms, ___recip, ___originatorPrivKey, ___originator, ___flags) \
      LP5(0xb94, CMS_RecipientInfo *, CMS_add1_recipient , CMS_ContentInfo *, ___cms, a0, X509 *, ___recip, a1, EVP_PKEY *, ___originatorPrivKey, a2, X509 *, ___originator, a3, unsigned int, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_RecipientInfo_kari_set0_pkey_and_peer(___ri, ___pk, ___peer) \
      LP3(0xb9a, int, CMS_RecipientInfo_kari_set0_pkey_and_peer , CMS_RecipientInfo *, ___ri, a0, EVP_PKEY *, ___pk, a1, X509 *, ___peer, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_pkey_add1_attr(___p8, ___attr) \
      LP2(0xba0, int, PKCS8_pkey_add1_attr , PKCS8_PRIV_KEY_INFO *, ___p8, a0, X509_ATTRIBUTE *, ___attr, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_pkey_add1_attr_by_OBJ(___p8, ___obj, ___type, ___bytes, ___len) \
      LP5(0xba6, int, PKCS8_pkey_add1_attr_by_OBJ , PKCS8_PRIV_KEY_INFO *, ___p8, a0, const ASN1_OBJECT *, ___obj, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_private_check(___ctx) \
      LP1(0xbac, int, EVP_PKEY_private_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_pairwise_check(___ctx) \
      LP1(0xbb2, int, EVP_PKEY_pairwise_check , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_verify_ctx(___it, ___alg, ___signature, ___data, ___ctx) \
      LP5(0xbb8, int, ASN1_item_verify_ctx , const ASN1_ITEM *, ___it, a0, const X509_ALGOR *, ___alg, a1, const ASN1_BIT_STRING *, ___signature, a2, const void *, ___data, a3, EVP_MD_CTX *, ___ctx, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_sign_ex(___it, ___algor1, ___algor2, ___signature, ___data, ___id, ___pkey, ___md, ___libctx, ___propq) \
      LP10(0xbbe, int, ASN1_item_sign_ex , const ASN1_ITEM *, ___it, a0, X509_ALGOR *, ___algor1, a1, X509_ALGOR *, ___algor2, a2, ASN1_BIT_STRING *, ___signature, a3, const void *, ___data, d0, const ASN1_OCTET_STRING *, ___id, d1, EVP_PKEY *, ___pkey, d2, const EVP_MD *, ___md, d3, OSSL_LIB_CTX *, ___libctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_verify_ex(___it, ___alg, ___signature, ___data, ___id, ___pkey, ___libctx, ___propq) \
      LP8(0xbc4, int, ASN1_item_verify_ex , const ASN1_ITEM *, ___it, a0, const X509_ALGOR *, ___alg, a1, const ASN1_BIT_STRING *, ___signature, a2, const void *, ___data, a3, const ASN1_OCTET_STRING *, ___id, d0, EVP_PKEY *, ___pkey, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_socket_wait(___fd, ___for_read, ___max_time) \
      LP3(0xbca, int, BIO_socket_wait , int, ___fd, d0, int, ___for_read, d1, time_t, ___max_time, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_wait(___bio, ___max_time, ___nap_milliseconds) \
      LP3(0xbd0, int, BIO_wait , BIO *, ___bio, a0, time_t, ___max_time, d0, unsigned int, ___nap_milliseconds, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_do_connect_retry(___bio, ___timeout, ___nap_milliseconds) \
      LP3(0xbd6, int, BIO_do_connect_retry , BIO *, ___bio, a0, int, ___timeout, d0, int, ___nap_milliseconds, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_parse_url(___url, ___pscheme, ___puser, ___phost, ___pport, ___pport_num, ___ppath, ___pquery, ___pfrag) \
      LP9(0xbdc, int, OSSL_parse_url , const char *, ___url, a0, char **, ___pscheme, a1, char **, ___puser, a2, char **, ___phost, a3, char **, ___pport, d0, int *, ___pport_num, d1, char **, ___ppath, d2, char **, ___pquery, d3, char **, ___pfrag, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_adapt_proxy(___proxy, ___no_proxy, ___server, ___use_ssl) \
      LP4(0xbe2, const char *, OSSL_HTTP_adapt_proxy , const char *, ___proxy, a0, const char *, ___no_proxy, a1, const char *, ___server, a2, int, ___use_ssl, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_get_resp_len(___rctx) \
      LP1(0xbe8, size_t, OSSL_HTTP_REQ_CTX_get_resp_len , const OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_REQ_CTX_set_expected(___rctx, ___content_type, ___asn1, ___timeout, ___keep_alive) \
      LP5(0xbee, int, OSSL_HTTP_REQ_CTX_set_expected , OSSL_HTTP_REQ_CTX *, ___rctx, a0, const char *, ___content_type, a1, int, ___asn1, d0, int, ___timeout, d1, int, ___keep_alive, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_is_alive(___rctx) \
      LP1(0xbf4, int, OSSL_HTTP_is_alive , const OSSL_HTTP_REQ_CTX *, ___rctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_open(___server, ___port, ___proxy, ___no_proxy, ___use_ssl, ___bio, ___rbio, ___bio_update_fn, ___arg, ___buf_size, ___overall_timeout) \
      LP11(0xbfa, OSSL_HTTP_REQ_CTX *, OSSL_HTTP_open , const char *, ___server, a0, const char *, ___port, a1, const char *, ___proxy, a2, const char *, ___no_proxy, a3, int, ___use_ssl, d0, BIO *, ___bio, d1, BIO *, ___rbio, d2, OSSL_HTTP_bio_cb_t, ___bio_update_fn, d3, void *, ___arg, d4, int, ___buf_size, d5, int, ___overall_timeout, d6,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_proxy_connect(___bio, ___server, ___port, ___proxyuser, ___proxypass, ___timeout, ___bio_err, ___prog) \
      LP8(0xc00, int, OSSL_HTTP_proxy_connect , BIO *, ___bio, a0, const char *, ___server, a1, const char *, ___port, a2, const char *, ___proxyuser, a3, const char *, ___proxypass, d0, int, ___timeout, d1, BIO *, ___bio_err, d2, const char *, ___prog, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_set1_request(___rctx, ___path, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive) \
      LP10(0xc06, int, OSSL_HTTP_set1_request , OSSL_HTTP_REQ_CTX *, ___rctx, a0, const char *, ___path, a1, const struct stack_st_CONF_VALUE *, ___headers, a2, const char *, ___content_type, a3, BIO *, ___req, d0, const char *, ___expected_content_type, d1, int, ___expect_asn1, d2, size_t, ___max_resp_len, d3, int, ___timeout, d4, int, ___keep_alive, d5,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_exchange(___rctx, ___redirection_url) \
      LP2(0xc0c, BIO *, OSSL_HTTP_exchange , OSSL_HTTP_REQ_CTX *, ___rctx, a0, char **, ___redirection_url, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_get_amiga_1(___url, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs) \
      LP7(0xc12, BIO *, OSSL_HTTP_get_amiga_1 , const char *, ___url, a0, const char *, ___proxy, a1, const char *, ___no_proxy, a2, BIO *, ___bio, d1, BIO *, ___rbio, d2, OSSL_HTTP_bio_cb_t, ___bio_update_fn, a3, void *, ___moreargs, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_get_amiga_2(___arg, ___buf_size, ___headers, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout) \
      LP7(0xc18, void *, OSSL_HTTP_get_amiga_2 , void *, ___arg, a0, int, ___buf_size, a1, const struct stack_st_CONF_VALUE *, ___headers, a2, const char *, ___expected_content_type, a3, int, ___expect_asn1, d0, size_t, ___max_resp_len, d1, int, ___timeout, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_transfer_amiga_1(___prctx, ___server, ___port, ___path, ___use_ssl, ___proxy, ___no_proxy, ___bio, ___rbio, ___bio_update_fn, ___moreargs) \
      LP11(0xc1e, BIO *, OSSL_HTTP_transfer_amiga_1 , OSSL_HTTP_REQ_CTX **, ___prctx, a0, const char *, ___server, a1, const char *, ___port, a2, const char *, ___path, d1, int, ___use_ssl, d2, const char *, ___proxy, d3, const char *, ___no_proxy, d4, BIO *, ___bio, d5, BIO *, ___rbio, d6, OSSL_HTTP_bio_cb_t, ___bio_update_fn, a3, void *, ___moreargs, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_transfer_amiga_2(___arg, ___buf_size, ___headers, ___content_type, ___req, ___expected_content_type, ___expect_asn1, ___max_resp_len, ___timeout, ___keep_alive) \
      LP10(0xc24, void *, OSSL_HTTP_transfer_amiga_2 , void *, ___arg, a0, int, ___buf_size, d0, const struct stack_st_CONF_VALUE *, ___headers, a1, const char *, ___content_type, a2, BIO *, ___req, a3, const char *, ___expected_content_type, d1, int, ___expect_asn1, d2, size_t, ___max_resp_len, d3, int, ___timeout, d4, int, ___keep_alive, d5,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_HTTP_close(___rctx, ___ok) \
      LP2(0xc2a, int, OSSL_HTTP_close , OSSL_HTTP_REQ_CTX *, ___rctx, a0, int, ___ok, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_i2d_mem_bio(___it, ___val) \
      LP2(0xc30, BIO *, ASN1_item_i2d_mem_bio , const ASN1_ITEM *, ___it, a0, const ASN1_VALUE *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_add_error_txt(___sepr, ___txt) \
      LP2NR(0xc36, ERR_add_error_txt , const char *, ___sepr, a0, const char *, ___txt, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ERR_add_error_mem_bio(___sep, ___bio) \
      LP2NR(0xc3c, ERR_add_error_mem_bio , const char *, ___sep, a0, BIO *, ___bio, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_print_verify_cb(___ok, ___ctx) \
      LP2(0xc42, int, X509_STORE_CTX_print_verify_cb , int, ___ok, d0, X509_STORE_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_get1_all_certs(___st) \
      LP1(0xc48, struct stack_st_X509 *, X509_STORE_get1_all_certs , X509_STORE *, ___st, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_validate_msg(___ctx, ___msg) \
      LP2(0xc4e, int, OSSL_CMP_validate_msg , OSSL_CMP_CTX *, ___ctx, a0, const OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_validate_cert_path(___ctx, ___trusted_store, ___cert) \
      LP3(0xc54, int, OSSL_CMP_validate_cert_path , const OSSL_CMP_CTX *, ___ctx, a0, X509_STORE *, ___trusted_store, a1, X509 *, ___cert, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_ecdh_cofactor_mode(___ctx, ___cofactor_mode) \
      LP2(0xc5a, int, EVP_PKEY_CTX_set_ecdh_cofactor_mode , EVP_PKEY_CTX *, ___ctx, a0, int, ___cofactor_mode, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_ecdh_cofactor_mode(___ctx) \
      LP1(0xc60, int, EVP_PKEY_CTX_get_ecdh_cofactor_mode , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_ecdh_kdf_type(___ctx, ___kdf) \
      LP2(0xc66, int, EVP_PKEY_CTX_set_ecdh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0, int, ___kdf, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_ecdh_kdf_type(___ctx) \
      LP1(0xc6c, int, EVP_PKEY_CTX_get_ecdh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_ecdh_kdf_md(___ctx, ___md) \
      LP2(0xc72, int, EVP_PKEY_CTX_set_ecdh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_ecdh_kdf_md(___ctx, ___md) \
      LP2(0xc78, int, EVP_PKEY_CTX_get_ecdh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_ecdh_kdf_outlen(___ctx, ___len) \
      LP2(0xc7e, int, EVP_PKEY_CTX_set_ecdh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_ecdh_kdf_outlen(___ctx, ___len) \
      LP2(0xc84, int, EVP_PKEY_CTX_get_ecdh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int *, ___len, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set0_ecdh_kdf_ukm(___ctx, ___ukm, ___len) \
      LP3(0xc8a, int, EVP_PKEY_CTX_set0_ecdh_kdf_ukm , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___ukm, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_pss_saltlen(___ctx, ___saltlen) \
      LP2(0xc90, int, EVP_PKEY_CTX_set_rsa_pss_saltlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_rsa_pss_saltlen(___ctx, ___saltlen) \
      LP2(0xc96, int, EVP_PKEY_CTX_get_rsa_pss_saltlen , EVP_PKEY_CTX *, ___ctx, a0, int *, ___saltlen, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_ISSUER_SIGN_TOOL(___a, ___in, ___len) \
      LP3(0xc9c, ISSUER_SIGN_TOOL *, d2i_ISSUER_SIGN_TOOL , ISSUER_SIGN_TOOL **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_ISSUER_SIGN_TOOL(___a, ___out) \
      LP2(0xca2, int, i2d_ISSUER_SIGN_TOOL , const ISSUER_SIGN_TOOL *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ISSUER_SIGN_TOOL_it() \
      LP0(0xca8, const ASN1_ITEM *, ISSUER_SIGN_TOOL_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_new(___cb, ___cbarg) \
      LP2(0xcae, OSSL_SELF_TEST *, OSSL_SELF_TEST_new , OSSL_CALLBACK *, ___cb, a0, void *, ___cbarg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_free(___st) \
      LP1NR(0xcb4, OSSL_SELF_TEST_free , OSSL_SELF_TEST *, ___st, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_onbegin(___st, ___type, ___desc) \
      LP3NR(0xcba, OSSL_SELF_TEST_onbegin , OSSL_SELF_TEST *, ___st, a0, const char *, ___type, a1, const char *, ___desc, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_oncorrupt_byte(___st, ___bytes) \
      LP2(0xcc0, int, OSSL_SELF_TEST_oncorrupt_byte , OSSL_SELF_TEST *, ___st, a0, unsigned char *, ___bytes, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_SELF_TEST_onend(___st, ___ret) \
      LP2NR(0xcc6, OSSL_SELF_TEST_onend , OSSL_SELF_TEST *, ___st, a0, int, ___ret, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_set_default_search_path(___a, ___path) \
      LP2(0xccc, int, OSSL_PROVIDER_set_default_search_path , OSSL_LIB_CTX *, ___a, a0, const char *, ___path, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_digest_sig(___cert, ___md_used, ___md_is_fallback) \
      LP3(0xcd2, ASN1_OCTET_STRING *, X509_digest_sig , const X509 *, ___cert, a0, EVP_MD **, ___md_used, a1, int *, ___md_is_fallback, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_dup(___a) \
      LP1(0xcd8, OSSL_CMP_MSG *, OSSL_CMP_MSG_dup , const OSSL_CMP_MSG *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_ITAV_dup(___a) \
      LP1(0xcde, OSSL_CMP_ITAV *, OSSL_CMP_ITAV_dup , const OSSL_CMP_ITAV *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CMP_PKISI(___a, ___in, ___len) \
      LP3(0xce4, OSSL_CMP_PKISI *, d2i_OSSL_CMP_PKISI , OSSL_CMP_PKISI **, ___a, a0, const unsigned char **, ___in, a1, long, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CMP_PKISI(___a, ___out) \
      LP2(0xcea, int, i2d_OSSL_CMP_PKISI , const OSSL_CMP_PKISI *, ___a, a0, unsigned char **, ___out, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_PKISI_free(___a) \
      LP1NR(0xcf0, OSSL_CMP_PKISI_free , OSSL_CMP_PKISI *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_PKISI_new() \
      LP0(0xcf6, OSSL_CMP_PKISI *, OSSL_CMP_PKISI_new ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_PKISI_it() \
      LP0(0xcfc, const ASN1_ITEM *, OSSL_CMP_PKISI_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_PKISI_dup(___a) \
      LP1(0xd02, OSSL_CMP_PKISI *, OSSL_CMP_PKISI_dup , const OSSL_CMP_PKISI *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_snprint_PKIStatusInfo(___statusInfo, ___buf, ___bufsize) \
      LP3(0xd08, char *, OSSL_CMP_snprint_PKIStatusInfo , const OSSL_CMP_PKISI *, ___statusInfo, a0, char *, ___buf, a1, size_t, ___bufsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_STATUSINFO_new(___status, ___fail_info, ___text) \
      LP3(0xd0e, OSSL_CMP_PKISI *, OSSL_CMP_STATUSINFO_new , int, ___status, d0, int, ___fail_info, d1, const char *, ___text, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_OSSL_CMP_MSG_bio(___bio, ___msg) \
      LP2(0xd14, OSSL_CMP_MSG *, d2i_OSSL_CMP_MSG_bio , BIO *, ___bio, a0, OSSL_CMP_MSG **, ___msg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2d_OSSL_CMP_MSG_bio(___bio, ___msg) \
      LP2(0xd1a, int, i2d_OSSL_CMP_MSG_bio , BIO *, ___bio, a0, const OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_process_request(___srv_ctx, ___req) \
      LP2(0xd20, OSSL_CMP_MSG *, OSSL_CMP_SRV_process_request , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, const OSSL_CMP_MSG *, ___req, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_CTX_server_perform(___client_ctx, ___req) \
      LP2(0xd26, OSSL_CMP_MSG *, OSSL_CMP_CTX_server_perform , OSSL_CMP_CTX *, ___client_ctx, a0, const OSSL_CMP_MSG *, ___req, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_new(___libctx, ___propq) \
      LP2(0xd2c, OSSL_CMP_SRV_CTX *, OSSL_CMP_SRV_CTX_new , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_free(___srv_ctx) \
      LP1NR(0xd32, OSSL_CMP_SRV_CTX_free , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_init(___srv_ctx, ___custom_ctx, ___process_cert_request, ___process_rr, ___process_genm, ___process_error, ___process_certConf, ___process_pollReq) \
      LP8(0xd38, int, OSSL_CMP_SRV_CTX_init , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, void *, ___custom_ctx, a1, OSSL_CMP_SRV_cert_request_cb_t, ___process_cert_request, a2, OSSL_CMP_SRV_rr_cb_t, ___process_rr, a3, OSSL_CMP_SRV_genm_cb_t, ___process_genm, d0, OSSL_CMP_SRV_error_cb_t, ___process_error, d1, OSSL_CMP_SRV_certConf_cb_t, ___process_certConf, d2, OSSL_CMP_SRV_pollReq_cb_t, ___process_pollReq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_get0_cmp_ctx(___srv_ctx) \
      LP1(0xd3e, OSSL_CMP_CTX *, OSSL_CMP_SRV_CTX_get0_cmp_ctx , const OSSL_CMP_SRV_CTX *, ___srv_ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_get0_custom_ctx(___srv_ctx) \
      LP1(0xd44, void *, OSSL_CMP_SRV_CTX_get0_custom_ctx , const OSSL_CMP_SRV_CTX *, ___srv_ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_set_send_unprotected_errors(___srv_ctx, ___val) \
      LP2(0xd4a, int, OSSL_CMP_SRV_CTX_set_send_unprotected_errors , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_set_accept_unprotected(___srv_ctx, ___val) \
      LP2(0xd50, int, OSSL_CMP_SRV_CTX_set_accept_unprotected , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_set_accept_raverified(___srv_ctx, ___val) \
      LP2(0xd56, int, OSSL_CMP_SRV_CTX_set_accept_raverified , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(___srv_ctx, ___val) \
      LP2(0xd5c, int, OSSL_CMP_SRV_CTX_set_grant_implicit_confirm , OSSL_CMP_SRV_CTX *, ___srv_ctx, a0, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_exec_certreq(___ctx, ___req_type, ___crm) \
      LP3(0xd62, X509 *, OSSL_CMP_exec_certreq , OSSL_CMP_CTX *, ___ctx, a0, int, ___req_type, d0, const OSSL_CRMF_MSG *, ___crm, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_try_certreq(___ctx, ___req_type, ___crm, ___checkAfter) \
      LP4(0xd68, int, OSSL_CMP_try_certreq , OSSL_CMP_CTX *, ___ctx, a0, int, ___req_type, d0, const OSSL_CRMF_MSG *, ___crm, a1, int *, ___checkAfter, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_certConf_cb(___ctx, ___cert, ___fail_info, ___text) \
      LP4(0xd6e, int, OSSL_CMP_certConf_cb , OSSL_CMP_CTX *, ___ctx, a0, X509 *, ___cert, a1, int, ___fail_info, d0, const char **, ___text, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_exec_RR_ses(___ctx) \
      LP1(0xd74, int, OSSL_CMP_exec_RR_ses , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_exec_GENM_ses(___ctx) \
      LP1(0xd7a, struct stack_st_OSSL_CMP_ITAV *, OSSL_CMP_exec_GENM_ses , OSSL_CMP_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_http_perform(___ctx, ___req) \
      LP2(0xd80, OSSL_CMP_MSG *, OSSL_CMP_MSG_http_perform , OSSL_CMP_CTX *, ___ctx, a0, const OSSL_CMP_MSG *, ___req, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_read(___file, ___libctx, ___propq) \
      LP3(0xd86, OSSL_CMP_MSG *, OSSL_CMP_MSG_read , const char *, ___file, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_CMP_MSG_write(___file, ___msg) \
      LP2(0xd8c, int, OSSL_CMP_MSG_write , const char *, ___file, a0, const OSSL_CMP_MSG *, ___msg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_Q_vkeygen(___libctx, ___propq, ___type, ___args) \
      LP4(0xd92, EVP_PKEY *, EVP_PKEY_Q_vkeygen , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, const char *, ___type, a2, long *, ___args, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#ifndef NO_INLINE_VARARGS
#define EVP_PKEY_Q_keygen(___libctx, ___propq, ___type, ___dummy, ...) \
    ({_sfdc_vararg _message[] = { ___dummy, __VA_ARGS__ }; EVP_PKEY_Q_vkeygen((___libctx), (___propq), (___type), (long *) _message); })
#endif /* !NO_INLINE_VARARGS */

#define EVP_PKEY_generate(___ctx, ___ppkey) \
      LP2(0xd98, int, EVP_PKEY_generate , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY **, ___ppkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_keygen_bits(___ctx, ___bits) \
      LP2(0xd9e, int, EVP_PKEY_CTX_set_rsa_keygen_bits , EVP_PKEY_CTX *, ___ctx, a0, int, ___bits, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_rsa_keygen_pubexp(___ctx, ___pubexp) \
      LP2(0xda4, int, EVP_PKEY_CTX_set1_rsa_keygen_pubexp , EVP_PKEY_CTX *, ___ctx, a0, BIGNUM *, ___pubexp, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_keygen_primes(___ctx, ___primes) \
      LP2(0xdaa, int, EVP_PKEY_CTX_set_rsa_keygen_primes , EVP_PKEY_CTX *, ___ctx, a0, int, ___primes, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_new_ex(___libctx, ___meth) \
      LP2(0xdb0, CONF *, NCONF_new_ex , OSSL_LIB_CTX *, ___libctx, a0, CONF_METHOD *, ___meth, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CONF_modules_load_file_ex(___libctx, ___filename, ___appname, ___flags) \
      LP4(0xdb6, int, CONF_modules_load_file_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___filename, a1, const char *, ___appname, a2, unsigned long, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_load_config(___ctx, ___config_file) \
      LP2(0xdbc, int, OSSL_LIB_CTX_load_config , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___config_file, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_to_param(___bld) \
      LP1(0xdc2, OSSL_PARAM *, OSSL_PARAM_BLD_to_param , OSSL_PARAM_BLD *, ___bld, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_int(___bld, ___key, ___val) \
      LP3(0xdc8, int, OSSL_PARAM_BLD_push_int , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_uint(___bld, ___key, ___val) \
      LP3(0xdce, int, OSSL_PARAM_BLD_push_uint , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, unsigned int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_long(___bld, ___key, ___val) \
      LP3(0xdd4, int, OSSL_PARAM_BLD_push_long , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_ulong(___bld, ___key, ___val) \
      LP3(0xdda, int, OSSL_PARAM_BLD_push_ulong , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, unsigned long int, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_int32(___bld, ___key, ___val) \
      LP3(0xde0, int, OSSL_PARAM_BLD_push_int32 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, int32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_uint32(___bld, ___key, ___val) \
      LP3(0xde6, int, OSSL_PARAM_BLD_push_uint32 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, uint32_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_int64(___bld, ___key, ___val) \
      LP3(0xdec, int, OSSL_PARAM_BLD_push_int64 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, int64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_uint64(___bld, ___key, ___val) \
      LP3(0xdf2, int, OSSL_PARAM_BLD_push_uint64 , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, uint64_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_size_t(___bld, ___key, ___val) \
      LP3(0xdf8, int, OSSL_PARAM_BLD_push_size_t , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, size_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_double(___bld, ___key, ___val) \
      LP3(0xdfe, int, OSSL_PARAM_BLD_push_double , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, double, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_BN(___bld, ___key, ___bn) \
      LP3(0xe04, int, OSSL_PARAM_BLD_push_BN , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const BIGNUM *, ___bn, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_BN_pad(___bld, ___key, ___bn, ___sz) \
      LP4(0xe0a, int, OSSL_PARAM_BLD_push_BN_pad , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const BIGNUM *, ___bn, a2, size_t, ___sz, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_utf8_string(___bld, ___key, ___buf, ___bsize) \
      LP4(0xe10, int, OSSL_PARAM_BLD_push_utf8_string , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_utf8_ptr(___bld, ___key, ___buf, ___bsize) \
      LP4(0xe16, int, OSSL_PARAM_BLD_push_utf8_ptr , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_octet_string(___bld, ___key, ___buf, ___bsize) \
      LP4(0xe1c, int, OSSL_PARAM_BLD_push_octet_string , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, const void *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_octet_ptr(___bld, ___key, ___buf, ___bsize) \
      LP4(0xe22, int, OSSL_PARAM_BLD_push_octet_ptr , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, void *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_new() \
      LP0(0xe28, OSSL_PARAM_BLD *, OSSL_PARAM_BLD_new ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_free(___bld) \
      LP1NR(0xe2e, OSSL_PARAM_BLD_free , OSSL_PARAM_BLD *, ___bld, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_type_by_keymgmt(___pkey, ___keymgmt) \
      LP2(0xe34, int, EVP_PKEY_set_type_by_keymgmt , EVP_PKEY *, ___pkey, a0, EVP_KEYMGMT *, ___keymgmt, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_set_by_key_ex(___respid, ___cert, ___libctx, ___propq) \
      LP4(0xe3a, int, OCSP_RESPID_set_by_key_ex , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OCSP_RESPID_match_ex(___respid, ___cert, ___libctx, ___propq) \
      LP4(0xe40, int, OCSP_RESPID_match_ex , OCSP_RESPID *, ___respid, a0, X509 *, ___cert, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_create_verifier_ex(___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq) \
      LP8(0xe46, char *, SRP_create_verifier_ex , const char *, ___user, a0, const char *, ___pass, a1, char **, ___salt, a2, char **, ___verifier, a3, const char *, ___N, d0, const char *, ___g, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_create_verifier_BN_ex(___user, ___pass, ___salt, ___verifier, ___N, ___g, ___libctx, ___propq) \
      LP8(0xe4c, int, SRP_create_verifier_BN_ex , const char *, ___user, a0, const char *, ___pass, a1, BIGNUM **, ___salt, a2, BIGNUM **, ___verifier, a3, const BIGNUM *, ___N, d0, const BIGNUM *, ___g, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_B_ex(___b, ___N, ___g, ___v, ___libctx, ___propq) \
      LP6(0xe52, BIGNUM *, SRP_Calc_B_ex , const BIGNUM *, ___b, a0, const BIGNUM *, ___N, a1, const BIGNUM *, ___g, a2, const BIGNUM *, ___v, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_u_ex(___A, ___B, ___N, ___libctx, ___propq) \
      LP5(0xe58, BIGNUM *, SRP_Calc_u_ex , const BIGNUM *, ___A, a0, const BIGNUM *, ___B, a1, const BIGNUM *, ___N, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_x_ex(___s, ___user, ___pass, ___libctx, ___propq) \
      LP5(0xe5e, BIGNUM *, SRP_Calc_x_ex , const BIGNUM *, ___s, a0, const char *, ___user, a1, const char *, ___pass, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SRP_Calc_client_key_ex(___N, ___B, ___g, ___x, ___a, ___u, ___libctx, ___propq) \
      LP8(0xe64, BIGNUM *, SRP_Calc_client_key_ex , const BIGNUM *, ___N, a0, const BIGNUM *, ___B, a1, const BIGNUM *, ___g, a2, const BIGNUM *, ___x, a3, const BIGNUM *, ___a, d0, const BIGNUM *, ___u, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_gettable_params(___pkey) \
      LP1(0xe6a, const OSSL_PARAM *, EVP_PKEY_gettable_params , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_int_param(___pkey, ___key_name, ___out) \
      LP3(0xe70, int, EVP_PKEY_get_int_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, int *, ___out, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_size_t_param(___pkey, ___key_name, ___out) \
      LP3(0xe76, int, EVP_PKEY_get_size_t_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, size_t *, ___out, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_bn_param(___pkey, ___key_name, ___bn) \
      LP3(0xe7c, int, EVP_PKEY_get_bn_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, BIGNUM **, ___bn, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_utf8_string_param(___pkey, ___key_name, ___str, ___max_buf_sz, ___out_sz) \
      LP5(0xe82, int, EVP_PKEY_get_utf8_string_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, char *, ___str, a2, size_t, ___max_buf_sz, d0, size_t *, ___out_sz, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_octet_string_param(___pkey, ___key_name, ___buf, ___max_buf_sz, ___out_sz) \
      LP5(0xe88, int, EVP_PKEY_get_octet_string_param , const EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, unsigned char *, ___buf, a2, size_t, ___max_buf_sz, d0, size_t *, ___out_sz, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_is_a(___pkey, ___name) \
      LP2(0xe8e, int, EVP_PKEY_is_a , const EVP_PKEY *, ___pkey, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_can_sign(___pkey) \
      LP1(0xe94, int, EVP_PKEY_can_sign , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_new_ex(___libctx, ___propq) \
      LP2(0xe9a, X509_STORE_CTX *, X509_STORE_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_CTX_verify(___ctx) \
      LP1(0xea0, int, X509_STORE_CTX_verify , X509_STORE_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CT_POLICY_EVAL_CTX_new_ex(___libctx, ___propq) \
      LP2(0xea6, CT_POLICY_EVAL_CTX *, CT_POLICY_EVAL_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_new_ex(___public_key, ___name, ___libctx, ___propq) \
      LP4(0xeac, CTLOG *, CTLOG_new_ex , EVP_PKEY *, ___public_key, a0, const char *, ___name, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_new_from_base64_ex(___ct_log, ___pkey_base64, ___name, ___libctx, ___propq) \
      LP5(0xeb2, int, CTLOG_new_from_base64_ex , CTLOG **, ___ct_log, a0, const char *, ___pkey_base64, a1, const char *, ___name, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CTLOG_STORE_new_ex(___libctx, ___propq) \
      LP2(0xeb8, CTLOG_STORE *, CTLOG_STORE_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_ex_data(___key, ___idx, ___arg) \
      LP3(0xebe, int, EVP_PKEY_set_ex_data , EVP_PKEY *, ___key, a0, int, ___idx, d0, void *, ___arg, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_ex_data(___key, ___idx) \
      LP2(0xec4, void *, EVP_PKEY_get_ex_data , const EVP_PKEY *, ___key, a0, int, ___idx, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_group_name(___ctx, ___name) \
      LP2(0xeca, int, EVP_PKEY_CTX_set_group_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_group_name(___ctx, ___name, ___namelen) \
      LP3(0xed0, int, EVP_PKEY_CTX_get_group_name , EVP_PKEY_CTX *, ___ctx, a0, char *, ___name, a1, size_t, ___namelen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_ec_paramgen_curve_nid(___ctx, ___nid) \
      LP2(0xed6, int, EVP_PKEY_CTX_set_ec_paramgen_curve_nid , EVP_PKEY_CTX *, ___ctx, a0, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PrivateKey_ex(___type, ___a, ___pp, ___length, ___libctx, ___propq) \
      LP6(0xedc, EVP_PKEY *, d2i_PrivateKey_ex , int, ___type, d0, EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_AutoPrivateKey_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      LP5(0xee2, EVP_PKEY *, d2i_AutoPrivateKey_ex , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PrivateKey_ex_bio(___bp, ___a, ___libctx, ___propq) \
      LP4(0xee8, EVP_PKEY *, d2i_PrivateKey_ex_bio , BIO *, ___bp, a0, EVP_PKEY **, ___a, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PrivateKey_ex(___out, ___x, ___cb, ___u, ___libctx, ___propq) \
      LP6(0xeee, EVP_PKEY *, PEM_read_bio_PrivateKey_ex , BIO *, ___out, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_bits(___ctx, ___nbits) \
      LP2(0xef4, int, EVP_PKEY_CTX_set_dsa_paramgen_bits , EVP_PKEY_CTX *, ___ctx, a0, int, ___nbits, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_q_bits(___ctx, ___qbits) \
      LP2(0xefa, int, EVP_PKEY_CTX_set_dsa_paramgen_q_bits , EVP_PKEY_CTX *, ___ctx, a0, int, ___qbits, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_md_props(___ctx, ___md_name, ___md_properties) \
      LP3(0xf00, int, EVP_PKEY_CTX_set_dsa_paramgen_md_props , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___md_name, a1, const char *, ___md_properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_gindex(___ctx, ___gindex) \
      LP2(0xf06, int, EVP_PKEY_CTX_set_dsa_paramgen_gindex , EVP_PKEY_CTX *, ___ctx, a0, int, ___gindex, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_type(___ctx, ___name) \
      LP2(0xf0c, int, EVP_PKEY_CTX_set_dsa_paramgen_type , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_seed(___ctx, ___seed, ___seedlen) \
      LP3(0xf12, int, EVP_PKEY_CTX_set_dsa_paramgen_seed , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___seed, a1, size_t, ___seedlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dsa_paramgen_md(___ctx, ___md) \
      LP2(0xf18, int, EVP_PKEY_CTX_set_dsa_paramgen_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_paramgen_type(___ctx, ___typ) \
      LP2(0xf1e, int, EVP_PKEY_CTX_set_dh_paramgen_type , EVP_PKEY_CTX *, ___ctx, a0, int, ___typ, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_paramgen_gindex(___ctx, ___gindex) \
      LP2(0xf24, int, EVP_PKEY_CTX_set_dh_paramgen_gindex , EVP_PKEY_CTX *, ___ctx, a0, int, ___gindex, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_paramgen_seed(___ctx, ___seed, ___seedlen) \
      LP3(0xf2a, int, EVP_PKEY_CTX_set_dh_paramgen_seed , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___seed, a1, size_t, ___seedlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_paramgen_prime_len(___ctx, ___pbits) \
      LP2(0xf30, int, EVP_PKEY_CTX_set_dh_paramgen_prime_len , EVP_PKEY_CTX *, ___ctx, a0, int, ___pbits, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_paramgen_subprime_len(___ctx, ___qlen) \
      LP2(0xf36, int, EVP_PKEY_CTX_set_dh_paramgen_subprime_len , EVP_PKEY_CTX *, ___ctx, a0, int, ___qlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_paramgen_generator(___ctx, ___gen) \
      LP2(0xf3c, int, EVP_PKEY_CTX_set_dh_paramgen_generator , EVP_PKEY_CTX *, ___ctx, a0, int, ___gen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_nid(___ctx, ___nid) \
      LP2(0xf42, int, EVP_PKEY_CTX_set_dh_nid , EVP_PKEY_CTX *, ___ctx, a0, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_rfc5114(___ctx, ___gen) \
      LP2(0xf48, int, EVP_PKEY_CTX_set_dh_rfc5114 , EVP_PKEY_CTX *, ___ctx, a0, int, ___gen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dhx_rfc5114(___ctx, ___gen) \
      LP2(0xf4e, int, EVP_PKEY_CTX_set_dhx_rfc5114 , EVP_PKEY_CTX *, ___ctx, a0, int, ___gen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get0_host(___param, ___idx) \
      LP2(0xf54, char *, X509_VERIFY_PARAM_get0_host , X509_VERIFY_PARAM *, ___param, a0, int, ___idx, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get0_email(___param) \
      LP1(0xf5a, char *, X509_VERIFY_PARAM_get0_email , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_VERIFY_PARAM_get1_ip_asc(___param) \
      LP1(0xf60, char *, X509_VERIFY_PARAM_get1_ip_asc , X509_VERIFY_PARAM *, ___param, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_modified(___p) \
      LP1(0xf66, int, OSSL_PARAM_modified , const OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_all_unmodified(___p) \
      LP1NR(0xf6c, OSSL_PARAM_set_all_unmodified , OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_fetch(___libctx, ___algorithm, ___properties) \
      LP3(0xf72, EVP_RAND *, EVP_RAND_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_up_ref(___rand) \
      LP1(0xf78, int, EVP_RAND_up_ref , EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_free(___rand) \
      LP1NR(0xf7e, EVP_RAND_free , EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_get0_name(___rand) \
      LP1(0xf84, const char *, EVP_RAND_get0_name , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_is_a(___rand, ___name) \
      LP2(0xf8a, int, EVP_RAND_is_a , const EVP_RAND *, ___rand, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_get0_provider(___rand) \
      LP1(0xf90, const OSSL_PROVIDER *, EVP_RAND_get0_provider , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_get_params(___rand, ___params) \
      LP2(0xf96, int, EVP_RAND_get_params , EVP_RAND *, ___rand, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_new(___rand, ___parent) \
      LP2(0xf9c, EVP_RAND_CTX *, EVP_RAND_CTX_new , EVP_RAND *, ___rand, a0, EVP_RAND_CTX *, ___parent, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_free(___ctx) \
      LP1NR(0xfa2, EVP_RAND_CTX_free , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_get0_rand(___ctx) \
      LP1(0xfa8, EVP_RAND *, EVP_RAND_CTX_get0_rand , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_get_params(___ctx, ___params) \
      LP2(0xfae, int, EVP_RAND_CTX_get_params , EVP_RAND_CTX *, ___ctx, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_set_params(___ctx, ___params) \
      LP2(0xfb4, int, EVP_RAND_CTX_set_params , EVP_RAND_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_gettable_params(___rand) \
      LP1(0xfba, const OSSL_PARAM *, EVP_RAND_gettable_params , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_gettable_ctx_params(___rand) \
      LP1(0xfc0, const OSSL_PARAM *, EVP_RAND_gettable_ctx_params , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_settable_ctx_params(___rand) \
      LP1(0xfc6, const OSSL_PARAM *, EVP_RAND_settable_ctx_params , const EVP_RAND *, ___rand, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0xfcc, EVP_RAND_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_RAND *rand,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_RAND_names_do_all(___rand, ___fn, ___data) \
      LP3FP(0xfd2, int, EVP_RAND_names_do_all , const EVP_RAND *, ___rand, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_RAND_instantiate(___ctx, ___strength, ___prediction_resistance, ___pstr, ___pstr_len, ___params) \
      LP6(0xfd8, int, EVP_RAND_instantiate , EVP_RAND_CTX *, ___ctx, a0, unsigned int, ___strength, d0, int, ___prediction_resistance, d1, const unsigned char *, ___pstr, a1, size_t, ___pstr_len, d2, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_uninstantiate(___ctx) \
      LP1(0xfde, int, EVP_RAND_uninstantiate , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_generate(___ctx, ___out, ___outlen, ___strength, ___prediction_resistance, ___addin, ___addin_len) \
      LP7(0xfe4, int, EVP_RAND_generate , EVP_RAND_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0, unsigned int, ___strength, d1, int, ___prediction_resistance, d2, const unsigned char *, ___addin, a2, size_t, ___addin_len, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_reseed(___ctx, ___prediction_resistance, ___ent, ___ent_len, ___addin, ___addin_len) \
      LP6(0xfea, int, EVP_RAND_reseed , EVP_RAND_CTX *, ___ctx, a0, int, ___prediction_resistance, d0, const unsigned char *, ___ent, a1, size_t, ___ent_len, d1, const unsigned char *, ___addin, a2, size_t, ___addin_len, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_nonce(___ctx, ___out, ___outlen) \
      LP3(0xff0, int, EVP_RAND_nonce , EVP_RAND_CTX *, ___ctx, a0, unsigned char *, ___out, a1, size_t, ___outlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_enable_locking(___ctx) \
      LP1(0xff6, int, EVP_RAND_enable_locking , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_verify_zeroization(___ctx) \
      LP1(0xffc, int, EVP_RAND_verify_zeroization , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_get_strength(___ctx) \
      LP1(0x1002, unsigned int, EVP_RAND_get_strength , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_get_state(___ctx) \
      LP1(0x1008, int, EVP_RAND_get_state , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_default_properties_is_fips_enabled(___libctx) \
      LP1(0x100e, int, EVP_default_properties_is_fips_enabled , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_default_properties_enable_fips(___libctx, ___enable) \
      LP2(0x1014, int, EVP_default_properties_enable_fips , OSSL_LIB_CTX *, ___libctx, a0, int, ___enable, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new_raw_private_key_ex(___libctx, ___keytype, ___propq, ___priv, ___len) \
      LP5(0x101a, EVP_PKEY *, EVP_PKEY_new_raw_private_key_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___keytype, a1, const char *, ___propq, a2, const unsigned char *, ___priv, a3, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_new_raw_public_key_ex(___libctx, ___keytype, ___propq, ___pub, ___len) \
      LP5(0x1020, EVP_PKEY *, EVP_PKEY_new_raw_public_key_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___keytype, a1, const char *, ___propq, a2, const unsigned char *, ___pub, a3, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_BLD_push_time_t(___bld, ___key, ___val) \
      LP3(0x1026, int, OSSL_PARAM_BLD_push_time_t , OSSL_PARAM_BLD *, ___bld, a0, const char *, ___key, a1, time_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_construct_time_t_amiga(___result, ___key, ___buf) \
      LP3NR(0x102c, OSSL_PARAM_construct_time_t_amiga , OSSL_PARAM *, ___result, a0, const char *, ___key, a1, time_t *, ___buf, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_time_t(___p, ___val) \
      LP2(0x1032, int, OSSL_PARAM_get_time_t , const OSSL_PARAM *, ___p, a0, time_t *, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_set_time_t(___p, ___val) \
      LP2(0x1038, int, OSSL_PARAM_set_time_t , OSSL_PARAM *, ___p, a0, time_t, ___val, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_attach(___bio, ___scheme, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data) \
      LP9(0x103e, OSSL_STORE_CTX *, OSSL_STORE_attach , BIO *, ___bio, a0, const char *, ___scheme, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3, const UI_METHOD *, ___ui_method, d0, void *, ___ui_data, d1, const OSSL_PARAM *, ___params, d2, OSSL_STORE_post_process_info_fn, ___post_process, d3, void *, ___post_process_data, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen(___ctx, ___saltlen) \
      LP2(0x1044, int, EVP_PKEY_CTX_set_rsa_pss_keygen_saltlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md(___ctx, ___md) \
      LP2(0x104a, int, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name(___ctx, ___mdname) \
      LP2(0x1050, int, EVP_PKEY_CTX_set_rsa_pss_keygen_mgf1_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_do_all(___ctx, ___cb, ___cbdata) \
      LP3FP(0x1056, int, OSSL_PROVIDER_do_all , OSSL_LIB_CTX *, ___ctx, a0, __fpt, ___cb, a1, void *, ___cbdata, a2,\
      , AMISSLEXT_BASE_NAME, int (*__fpt)(OSSL_PROVIDER *provider,void *cbdata), 0, 0, 0, 0, 0, 0)

#define EC_GROUP_get_field_type(___group) \
      LP1(0x105c, int, EC_GROUP_get_field_type , const EC_GROUP *, ___group, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_eq(___a, ___b) \
      LP2(0x1062, int, X509_PUBKEY_eq , const X509_PUBKEY *, ___a, a0, const X509_PUBKEY *, ___b, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_eq(___a, ___b) \
      LP2(0x1068, int, EVP_PKEY_eq , const EVP_PKEY *, ___a, a0, const EVP_PKEY *, ___b, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_parameters_eq(___a, ___b) \
      LP2(0x106e, int, EVP_PKEY_parameters_eq , const EVP_PKEY *, ___a, a0, const EVP_PKEY *, ___b, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_query_operation(___prov, ___operation_id, ___no_cache) \
      LP3(0x1074, const OSSL_ALGORITHM *, OSSL_PROVIDER_query_operation , const OSSL_PROVIDER *, ___prov, a0, int, ___operation_id, d0, int *, ___no_cache, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_unquery_operation(___prov, ___operation_id, ___algs) \
      LP3NR(0x107a, OSSL_PROVIDER_unquery_operation , const OSSL_PROVIDER *, ___prov, a0, int, ___operation_id, d0, const OSSL_ALGORITHM *, ___algs, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_get0_provider_ctx(___prov) \
      LP1(0x1080, void *, OSSL_PROVIDER_get0_provider_ctx , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_get_capabilities(___prov, ___capability, ___cb, ___arg) \
      LP4(0x1086, int, OSSL_PROVIDER_get_capabilities , const OSSL_PROVIDER *, ___prov, a0, const char *, ___capability, a1, OSSL_CALLBACK *, ___cb, a2, void *, ___arg, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_by_curve_name_ex(___libctx, ___propq, ___nid) \
      LP3(0x108c, EC_GROUP *, EC_GROUP_new_by_curve_name_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1, int, ___nid, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_set0_default(___libctx) \
      LP1(0x1092, OSSL_LIB_CTX *, OSSL_LIB_CTX_set0_default , OSSL_LIB_CTX *, ___libctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_X509_INFO_read_bio_ex(___bp, ___sk, ___cb, ___u, ___libctx, ___propq) \
      LP6(0x1098, struct stack_st_X509_INFO *, PEM_X509_INFO_read_bio_ex , BIO *, ___bp, a0, struct stack_st_X509_INFO *, ___sk, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_verify_ex(___a, ___r, ___libctx, ___propq) \
      LP4(0x109e, int, X509_REQ_verify_ex , X509_REQ *, ___a, a0, EVP_PKEY *, ___r, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_new_ex(___libctx, ___propq) \
      LP2(0x10a4, X509 *, X509_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_ctrl_ex(___ctx, ___cmd, ___argc, ___argl, ___ret, ___libctx, ___propq) \
      LP7(0x10aa, int, X509_LOOKUP_ctrl_ex , X509_LOOKUP *, ___ctx, a0, int, ___cmd, d0, const char *, ___argc, a1, long, ___argl, d1, char **, ___ret, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_load_cert_file_ex(___ctx, ___file, ___type, ___libctx, ___propq) \
      LP5(0x10b0, int, X509_load_cert_file_ex , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_load_cert_crl_file_ex(___ctx, ___file, ___type, ___libctx, ___propq) \
      LP5(0x10b6, int, X509_load_cert_crl_file_ex , X509_LOOKUP *, ___ctx, a0, const char *, ___file, a1, int, ___type, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_LOOKUP_by_subject_ex(___ctx, ___type, ___name, ___ret, ___libctx, ___propq) \
      LP6(0x10bc, int, X509_LOOKUP_by_subject_ex , X509_LOOKUP *, ___ctx, a0, X509_LOOKUP_TYPE, ___type, d0, const X509_NAME *, ___name, a1, X509_OBJECT *, ___ret, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_file_ex(___ctx, ___file, ___libctx, ___propq) \
      LP4(0x10c2, int, X509_STORE_load_file_ex , X509_STORE *, ___ctx, a0, const char *, ___file, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_store_ex(___ctx, ___store, ___libctx, ___propq) \
      LP4(0x10c8, int, X509_STORE_load_store_ex , X509_STORE *, ___ctx, a0, const char *, ___store, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_load_locations_ex(___ctx, ___file, ___dir, ___libctx, ___propq) \
      LP5(0x10ce, int, X509_STORE_load_locations_ex , X509_STORE *, ___ctx, a0, const char *, ___file, a1, const char *, ___dir, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_STORE_set_default_paths_ex(___ctx, ___libctx, ___propq) \
      LP3(0x10d4, int, X509_STORE_set_default_paths_ex , X509_STORE *, ___ctx, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_build_chain(___target, ___certs, ___store, ___with_self_signed, ___libctx, ___propq) \
      LP6(0x10da, struct stack_st_X509 *, X509_build_chain , X509 *, ___target, a0, struct stack_st_X509 *, ___certs, a1, X509_STORE *, ___store, a2, int, ___with_self_signed, d0, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509V3_set_issuer_pkey(___ctx, ___pkey) \
      LP2(0x10e0, int, X509V3_set_issuer_pkey , X509V3_CTX *, ___ctx, a0, EVP_PKEY *, ___pkey, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2s_ASN1_UTF8STRING(___method, ___utf8) \
      LP2(0x10e6, char *, i2s_ASN1_UTF8STRING , X509V3_EXT_METHOD *, ___method, a0, ASN1_UTF8STRING *, ___utf8, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define s2i_ASN1_UTF8STRING(___method, ___ctx, ___str) \
      LP3(0x10ec, ASN1_UTF8STRING *, s2i_ASN1_UTF8STRING , X509V3_EXT_METHOD *, ___method, a0, X509V3_CTX *, ___ctx, a1, const char *, ___str, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_open_ex(___uri, ___libctx, ___propq, ___ui_method, ___ui_data, ___params, ___post_process, ___post_process_data) \
      LP8(0x10f2, OSSL_STORE_CTX *, OSSL_STORE_open_ex , const char *, ___uri, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2, const UI_METHOD *, ___ui_method, a3, void *, ___ui_data, d0, const OSSL_PARAM *, ___params, d1, OSSL_STORE_post_process_info_fn, ___post_process, d2, void *, ___post_process_data, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_fetch(___libctx, ___name, ___properties) \
      LP3(0x10f8, OSSL_DECODER *, OSSL_DECODER_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_up_ref(___encoder) \
      LP1(0x10fe, int, OSSL_DECODER_up_ref , OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_free(___encoder) \
      LP1NR(0x1104, OSSL_DECODER_free , OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_get0_provider(___encoder) \
      LP1(0x110a, const OSSL_PROVIDER *, OSSL_DECODER_get0_provider , const OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_get0_properties(___encoder) \
      LP1(0x1110, const char *, OSSL_DECODER_get0_properties , const OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_is_a(___encoder, ___name) \
      LP2(0x1116, int, OSSL_DECODER_is_a , const OSSL_DECODER *, ___encoder, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x111c, OSSL_DECODER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(OSSL_DECODER *encoder,void *arg), 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_names_do_all(___encoder, ___fn, ___data) \
      LP3FP(0x1122, int, OSSL_DECODER_names_do_all , const OSSL_DECODER *, ___encoder, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_settable_ctx_params(___encoder) \
      LP1(0x1128, const OSSL_PARAM *, OSSL_DECODER_settable_ctx_params , OSSL_DECODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_new() \
      LP0(0x112e, OSSL_DECODER_CTX *, OSSL_DECODER_CTX_new ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_params(___ctx, ___params) \
      LP2(0x1134, int, OSSL_DECODER_CTX_set_params , OSSL_DECODER_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_free(___ctx) \
      LP1NR(0x113a, OSSL_DECODER_CTX_free , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_passphrase(___ctx, ___kstr, ___klen) \
      LP3(0x1140, int, OSSL_DECODER_CTX_set_passphrase , OSSL_DECODER_CTX *, ___ctx, a0, const unsigned char *, ___kstr, a1, size_t, ___klen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_pem_password_cb(___ctx, ___cb, ___cbarg) \
      LP3(0x1146, int, OSSL_DECODER_CTX_set_pem_password_cb , OSSL_DECODER_CTX *, ___ctx, a0, pem_password_cb *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_passphrase_ui(___ctx, ___ui_method, ___ui_data) \
      LP3(0x114c, int, OSSL_DECODER_CTX_set_passphrase_ui , OSSL_DECODER_CTX *, ___ctx, a0, const UI_METHOD *, ___ui_method, a1, void *, ___ui_data, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_from_bio(___ctx, ___in) \
      LP2(0x1152, int, OSSL_DECODER_from_bio , OSSL_DECODER_CTX *, ___ctx, a0, BIO *, ___in, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_add_decoder(___ctx, ___decoder) \
      LP2(0x1158, int, OSSL_DECODER_CTX_add_decoder , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_DECODER *, ___decoder, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_add_extra(___ctx, ___libctx, ___propq) \
      LP3(0x115e, int, OSSL_DECODER_CTX_add_extra , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_get_num_decoders(___ctx) \
      LP1(0x1164, int, OSSL_DECODER_CTX_get_num_decoders , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_input_type(___ctx, ___input_type) \
      LP2(0x116a, int, OSSL_DECODER_CTX_set_input_type , OSSL_DECODER_CTX *, ___ctx, a0, const char *, ___input_type, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_export(___decoder_inst, ___reference, ___reference_sz, ___export_cb, ___export_cbarg) \
      LP5(0x1170, int, OSSL_DECODER_export , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0, void *, ___reference, a1, size_t, ___reference_sz, d0, OSSL_CALLBACK *, ___export_cb, a2, void *, ___export_cbarg, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_INSTANCE_get_decoder(___decoder_inst) \
      LP1(0x1176, OSSL_DECODER *, OSSL_DECODER_INSTANCE_get_decoder , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_INSTANCE_get_decoder_ctx(___decoder_inst) \
      LP1(0x117c, void *, OSSL_DECODER_INSTANCE_get_decoder_ctx , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_gettable_params(___decoder) \
      LP1(0x1182, const OSSL_PARAM *, OSSL_DECODER_gettable_params , OSSL_DECODER *, ___decoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_get_params(___decoder, ___params) \
      LP2(0x1188, int, OSSL_DECODER_get_params , OSSL_DECODER *, ___decoder, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_new_for_pkey(___pkey, ___input_type, ___input_struct, ___keytype, ___selection, ___libctx, ___propquery) \
      LP7(0x118e, OSSL_DECODER_CTX *, OSSL_DECODER_CTX_new_for_pkey , EVP_PKEY **, ___pkey, a0, const char *, ___input_type, a1, const char *, ___input_struct, a2, const char *, ___keytype, a3, int, ___selection, d0, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propquery, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_construct(___ctx, ___construct) \
      LP2(0x1194, int, OSSL_DECODER_CTX_set_construct , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_DECODER_CONSTRUCT *, ___construct, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_construct_data(___ctx, ___construct_data) \
      LP2(0x119a, int, OSSL_DECODER_CTX_set_construct_data , OSSL_DECODER_CTX *, ___ctx, a0, void *, ___construct_data, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_cleanup(___ctx, ___cleanup) \
      LP2(0x11a0, int, OSSL_DECODER_CTX_set_cleanup , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_DECODER_CLEANUP *, ___cleanup, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_get_construct(___ctx) \
      LP1(0x11a6, OSSL_DECODER_CONSTRUCT *, OSSL_DECODER_CTX_get_construct , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_get_construct_data(___ctx) \
      LP1(0x11ac, void *, OSSL_DECODER_CTX_get_construct_data , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_get_cleanup(___ctx) \
      LP1(0x11b2, OSSL_DECODER_CLEANUP *, OSSL_DECODER_CTX_get_cleanup , OSSL_DECODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_get0_primary(___ctx) \
      LP1(0x11b8, EVP_RAND_CTX *, RAND_get0_primary , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_get0_public(___ctx) \
      LP1(0x11be, EVP_RAND_CTX *, RAND_get0_public , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_get0_private(___ctx) \
      LP1(0x11c4, EVP_RAND_CTX *, RAND_get0_private , OSSL_LIB_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_bag_obj(___bag) \
      LP1(0x11ca, const ASN1_TYPE *, PKCS12_SAFEBAG_get0_bag_obj , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_get0_bag_type(___bag) \
      LP1(0x11d0, const ASN1_OBJECT *, PKCS12_SAFEBAG_get0_bag_type , const PKCS12_SAFEBAG *, ___bag, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create_secret(___type, ___vtype, ___value, ___len) \
      LP4(0x11d6, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_secret , int, ___type, d0, int, ___vtype, d1, const unsigned char *, ___value, a0, int, ___len, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add1_attr_by_NID(___bag, ___nid, ___type, ___bytes, ___len) \
      LP5(0x11dc, int, PKCS12_add1_attr_by_NID , PKCS12_SAFEBAG *, ___bag, a0, int, ___nid, d0, int, ___type, d1, const unsigned char *, ___bytes, a1, int, ___len, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add1_attr_by_txt(___bag, ___attrname, ___type, ___bytes, ___len) \
      LP5(0x11e2, int, PKCS12_add1_attr_by_txt , PKCS12_SAFEBAG *, ___bag, a0, const char *, ___attrname, a1, int, ___type, d0, const unsigned char *, ___bytes, a2, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_secret(___pbags, ___nid_type, ___value, ___len) \
      LP4(0x11e8, PKCS12_SAFEBAG *, PKCS12_add_secret , struct stack_st_PKCS12_SAFEBAG **, ___pbags, a0, int, ___nid_type, d0, const unsigned char *, ___value, a1, int, ___len, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_write_ASN1_ex(___bio, ___val, ___data, ___flags, ___ctype_nid, ___econt_nid, ___mdalgs, ___it, ___libctx, ___propq) \
      LP10(0x11ee, int, SMIME_write_ASN1_ex , BIO *, ___bio, a0, ASN1_VALUE *, ___val, a1, BIO *, ___data, a2, int, ___flags, d0, int, ___ctype_nid, d1, int, ___econt_nid, d2, struct stack_st_X509_ALGOR *, ___mdalgs, a3, const ASN1_ITEM *, ___it, d3, OSSL_LIB_CTX *, ___libctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_read_ASN1_ex(___bio, ___flags, ___bcont, ___it, ___x, ___libctx, ___propq) \
      LP7(0x11f4, ASN1_VALUE *, SMIME_read_ASN1_ex , BIO *, ___bio, a0, int, ___flags, d0, BIO **, ___bcont, a1, const ASN1_ITEM *, ___it, a2, ASN1_VALUE **, ___x, a3, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ContentInfo_new_ex(___libctx, ___propq) \
      LP2(0x11fa, CMS_ContentInfo *, CMS_ContentInfo_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_read_CMS_ex(___bio, ___flags, ___bcont, ___ci) \
      LP4(0x1200, CMS_ContentInfo *, SMIME_read_CMS_ex , BIO *, ___bio, a0, int, ___flags, d0, BIO **, ___bcont, a1, CMS_ContentInfo **, ___ci, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_sign_ex(___signcert, ___pkey, ___certs, ___data, ___flags, ___ctx, ___propq) \
      LP7(0x1206, CMS_ContentInfo *, CMS_sign_ex , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, struct stack_st_X509 *, ___certs, a2, BIO *, ___data, a3, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___ctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_data_create_ex(___in, ___flags, ___ctx, ___propq) \
      LP4(0x120c, CMS_ContentInfo *, CMS_data_create_ex , BIO *, ___in, a0, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_digest_create_ex(___in, ___md, ___flags, ___ctx, ___propq) \
      LP5(0x1212, CMS_ContentInfo *, CMS_digest_create_ex , BIO *, ___in, a0, const EVP_MD *, ___md, a1, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___ctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_EncryptedData_encrypt_ex(___in, ___cipher, ___key, ___keylen, ___flags, ___ctx, ___propq) \
      LP7(0x1218, CMS_ContentInfo *, CMS_EncryptedData_encrypt_ex , BIO *, ___in, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, size_t, ___keylen, d0, unsigned int, ___flags, d1, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_encrypt_ex(___certs, ___in, ___cipher, ___flags, ___ctx, ___propq) \
      LP6(0x121e, CMS_ContentInfo *, CMS_encrypt_ex , struct stack_st_X509 *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, unsigned int, ___flags, d0, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_EnvelopedData_create_ex(___cipher, ___ctx, ___propq) \
      LP3(0x1224, CMS_ContentInfo *, CMS_EnvelopedData_create_ex , const EVP_CIPHER *, ___cipher, a0, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_ReceiptRequest_create0_ex(___id, ___idlen, ___allorfirst, ___receiptList, ___receiptsTo, ___ctx) \
      LP6(0x122a, CMS_ReceiptRequest *, CMS_ReceiptRequest_create0_ex , unsigned char *, ___id, a0, int, ___idlen, d0, int, ___allorfirst, d1, struct stack_st_GENERAL_NAMES *, ___receiptList, a1, struct stack_st_GENERAL_NAMES *, ___receiptsTo, a2, OSSL_LIB_CTX *, ___ctx, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SignFinal_ex(___ctx, ___md, ___s, ___pkey, ___libctx, ___propq) \
      LP6(0x1230, int, EVP_SignFinal_ex , EVP_MD_CTX *, ___ctx, a0, unsigned char *, ___md, a1, unsigned int *, ___s, a2, EVP_PKEY *, ___pkey, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_VerifyFinal_ex(___ctx, ___sigbuf, ___siglen, ___pkey, ___libctx, ___propq) \
      LP6(0x1236, int, EVP_VerifyFinal_ex , EVP_MD_CTX *, ___ctx, a0, const unsigned char *, ___sigbuf, a1, unsigned int, ___siglen, d0, EVP_PKEY *, ___pkey, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestSignInit_ex(___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params) \
      LP7(0x123c, int, EVP_DigestSignInit_ex , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const char *, ___mdname, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___props, d0, EVP_PKEY *, ___pkey, d1, const OSSL_PARAM *, ___params, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestVerifyInit_ex(___ctx, ___pctx, ___mdname, ___libctx, ___props, ___pkey, ___params) \
      LP7(0x1242, int, EVP_DigestVerifyInit_ex , EVP_MD_CTX *, ___ctx, a0, EVP_PKEY_CTX **, ___pctx, a1, const char *, ___mdname, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___props, d0, EVP_PKEY *, ___pkey, d1, const OSSL_PARAM *, ___params, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_new_ex(___libctx, ___propq) \
      LP2(0x1248, PKCS7 *, PKCS7_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_sign_ex(___signcert, ___pkey, ___certs, ___data, ___flags, ___libctx, ___propq) \
      LP7(0x124e, PKCS7 *, PKCS7_sign_ex , X509 *, ___signcert, a0, EVP_PKEY *, ___pkey, a1, struct stack_st_X509 *, ___certs, a2, BIO *, ___data, a3, int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_encrypt_ex(___certs, ___in, ___cipher, ___flags, ___libctx, ___propq) \
      LP6(0x1254, PKCS7 *, PKCS7_encrypt_ex , struct stack_st_X509 *, ___certs, a0, BIO *, ___in, a1, const EVP_CIPHER *, ___cipher, a2, int, ___flags, d0, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define SMIME_read_PKCS7_ex(___bio, ___bcont, ___p7) \
      LP3(0x125a, PKCS7 *, SMIME_read_PKCS7_ex , BIO *, ___bio, a0, BIO **, ___bcont, a1, PKCS7 **, ___p7, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_self_test(___prov) \
      LP1(0x1260, int, OSSL_PROVIDER_self_test , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_tls1_prf_md(___ctx, ___md) \
      LP2(0x1266, int, EVP_PKEY_CTX_set_tls1_prf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_tls1_prf_secret(___pctx, ___sec, ___seclen) \
      LP3(0x126c, int, EVP_PKEY_CTX_set1_tls1_prf_secret , EVP_PKEY_CTX *, ___pctx, a0, const unsigned char *, ___sec, a1, int, ___seclen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_add1_tls1_prf_seed(___pctx, ___seed, ___seedlen) \
      LP3(0x1272, int, EVP_PKEY_CTX_add1_tls1_prf_seed , EVP_PKEY_CTX *, ___pctx, a0, const unsigned char *, ___seed, a1, int, ___seedlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_hkdf_md(___ctx, ___md) \
      LP2(0x1278, int, EVP_PKEY_CTX_set_hkdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_hkdf_salt(___ctx, ___salt, ___saltlen) \
      LP3(0x127e, int, EVP_PKEY_CTX_set1_hkdf_salt , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___salt, a1, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_hkdf_key(___ctx, ___key, ___keylen) \
      LP3(0x1284, int, EVP_PKEY_CTX_set1_hkdf_key , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___key, a1, int, ___keylen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_add1_hkdf_info(___ctx, ___info, ___infolen) \
      LP3(0x128a, int, EVP_PKEY_CTX_add1_hkdf_info , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___info, a1, int, ___infolen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_hkdf_mode(___ctx, ___mode) \
      LP2(0x1290, int, EVP_PKEY_CTX_set_hkdf_mode , EVP_PKEY_CTX *, ___ctx, a0, int, ___mode, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_pbe_pass(___ctx, ___pass, ___passlen) \
      LP3(0x1296, int, EVP_PKEY_CTX_set1_pbe_pass , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_scrypt_salt(___ctx, ___salt, ___saltlen) \
      LP3(0x129c, int, EVP_PKEY_CTX_set1_scrypt_salt , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___salt, a1, int, ___saltlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_scrypt_N(___ctx, ___n) \
      LP2(0x12a2, int, EVP_PKEY_CTX_set_scrypt_N , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___n, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_scrypt_r(___ctx, ___r) \
      LP2(0x12a8, int, EVP_PKEY_CTX_set_scrypt_r , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___r, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_scrypt_p(___ctx, ___p) \
      LP2(0x12ae, int, EVP_PKEY_CTX_set_scrypt_p , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___p, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_scrypt_maxmem_bytes(___ctx, ___maxmem_bytes) \
      LP2(0x12b4, int, EVP_PKEY_CTX_set_scrypt_maxmem_bytes , EVP_PKEY_CTX *, ___ctx, a0, uint64_t, ___maxmem_bytes, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_kdf_type(___ctx, ___kdf) \
      LP2(0x12ba, int, EVP_PKEY_CTX_set_dh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0, int, ___kdf, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_dh_kdf_type(___ctx) \
      LP1(0x12c0, int, EVP_PKEY_CTX_get_dh_kdf_type , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set0_dh_kdf_oid(___ctx, ___oid) \
      LP2(0x12c6, int, EVP_PKEY_CTX_set0_dh_kdf_oid , EVP_PKEY_CTX *, ___ctx, a0, ASN1_OBJECT *, ___oid, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_dh_kdf_oid(___ctx, ___oid) \
      LP2(0x12cc, int, EVP_PKEY_CTX_get0_dh_kdf_oid , EVP_PKEY_CTX *, ___ctx, a0, ASN1_OBJECT **, ___oid, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_kdf_md(___ctx, ___md) \
      LP2(0x12d2, int, EVP_PKEY_CTX_set_dh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_dh_kdf_md(___ctx, ___md) \
      LP2(0x12d8, int, EVP_PKEY_CTX_get_dh_kdf_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD **, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_dh_kdf_outlen(___ctx, ___len) \
      LP2(0x12de, int, EVP_PKEY_CTX_set_dh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get_dh_kdf_outlen(___ctx, ___len) \
      LP2(0x12e4, int, EVP_PKEY_CTX_get_dh_kdf_outlen , EVP_PKEY_CTX *, ___ctx, a0, int *, ___len, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set0_dh_kdf_ukm(___ctx, ___ukm, ___len) \
      LP3(0x12ea, int, EVP_PKEY_CTX_set0_dh_kdf_ukm , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___ukm, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_updated_iv(___ctx, ___buf, ___len) \
      LP3(0x12f0, int, EVP_CIPHER_CTX_get_updated_iv , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___buf, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get_original_iv(___ctx, ___buf, ___len) \
      LP3(0x12f6, int, EVP_CIPHER_CTX_get_original_iv , EVP_CIPHER_CTX *, ___ctx, a0, void *, ___buf, a1, size_t, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_gettable_params(___keymgmt) \
      LP1(0x12fc, const OSSL_PARAM *, EVP_KEYMGMT_gettable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_settable_params(___keymgmt) \
      LP1(0x1302, const OSSL_PARAM *, EVP_KEYMGMT_settable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_gen_settable_params(___keymgmt) \
      LP1(0x1308, const OSSL_PARAM *, EVP_KEYMGMT_gen_settable_params , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_gettable_ctx_params(___sig) \
      LP1(0x130e, const OSSL_PARAM *, EVP_SIGNATURE_gettable_ctx_params , const EVP_SIGNATURE *, ___sig, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_settable_ctx_params(___sig) \
      LP1(0x1314, const OSSL_PARAM *, EVP_SIGNATURE_settable_ctx_params , const EVP_SIGNATURE *, ___sig, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_gettable_ctx_params(___keyexch) \
      LP1(0x131a, const OSSL_PARAM *, EVP_KEYEXCH_gettable_ctx_params , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_settable_ctx_params(___keyexch) \
      LP1(0x1320, const OSSL_PARAM *, EVP_KEYEXCH_settable_ctx_params , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define d2i_PUBKEY_ex(___a, ___pp, ___length, ___libctx, ___propq) \
      LP5(0x1326, EVP_PKEY *, d2i_PUBKEY_ex , EVP_PKEY **, ___a, a0, const unsigned char **, ___pp, a1, long, ___length, d0, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new_PUBKEY(___pubkey) \
      LP1(0x132c, OSSL_STORE_INFO *, OSSL_STORE_INFO_new_PUBKEY , EVP_PKEY *, ___pubkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_PUBKEY(___info) \
      LP1(0x1332, EVP_PKEY *, OSSL_STORE_INFO_get0_PUBKEY , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get1_PUBKEY(___info) \
      LP1(0x1338, EVP_PKEY *, OSSL_STORE_INFO_get1_PUBKEY , const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_PUBKEY_ex(___out, ___x, ___cb, ___u, ___libctx, ___propq) \
      LP6(0x133e, EVP_PKEY *, PEM_read_bio_PUBKEY_ex , BIO *, ___out, a0, EVP_PKEY **, ___x, a1, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d0, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_read_bio_Parameters_ex(___bp, ___x, ___libctx, ___propq) \
      LP4(0x1344, EVP_PKEY *, PEM_read_bio_Parameters_ex , BIO *, ___bp, a0, EVP_PKEY **, ___x, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EC_GROUP_new_from_params(___params, ___libctx, ___propq) \
      LP3(0x134a, EC_GROUP *, EC_GROUP_new_from_params , const OSSL_PARAM *, ___params, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_fetch(___libctx, ___scheme, ___properties) \
      LP3(0x1350, OSSL_STORE_LOADER *, OSSL_STORE_LOADER_fetch , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___scheme, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_up_ref(___loader) \
      LP1(0x1356, int, OSSL_STORE_LOADER_up_ref , OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_get0_provider(___loader) \
      LP1(0x135c, const OSSL_PROVIDER *, OSSL_STORE_LOADER_get0_provider , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_get0_properties(___loader) \
      LP1(0x1362, const char *, OSSL_STORE_LOADER_get0_properties , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_is_a(___loader, ___scheme) \
      LP2(0x1368, int, OSSL_STORE_LOADER_is_a , const OSSL_STORE_LOADER *, ___loader, a0, const char *, ___scheme, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x136e, OSSL_STORE_LOADER_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(OSSL_STORE_LOADER *loader,void *arg), 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_names_do_all(___loader, ___fn, ___data) \
      LP3FP(0x1374, int, OSSL_STORE_LOADER_names_do_all , const OSSL_STORE_LOADER *, ___loader, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_utf8_string_ptr(___p, ___val) \
      LP2(0x137a, int, OSSL_PARAM_get_utf8_string_ptr , const OSSL_PARAM *, ___p, a0, const char **, ___val, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_get_octet_string_ptr(___p, ___val, ___used_len) \
      LP3(0x1380, int, OSSL_PARAM_get_octet_string_ptr , const OSSL_PARAM *, ___p, a0, const void **, ___val, a1, size_t *, ___used_len, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_passphrase_cb(___ctx, ___cb, ___cbarg) \
      LP3(0x1386, int, OSSL_DECODER_CTX_set_passphrase_cb , OSSL_DECODER_CTX *, ___ctx, a0, OSSL_PASSPHRASE_CALLBACK *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_mac_key(___ctx, ___key, ___keylen) \
      LP3(0x138c, int, EVP_PKEY_CTX_set_mac_key , EVP_PKEY_CTX *, ___ctx, a0, const unsigned char *, ___key, a1, int, ___keylen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_new(___type, ___data) \
      LP2(0x1392, OSSL_STORE_INFO *, OSSL_STORE_INFO_new , int, ___type, d0, void *, ___data, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_INFO_get0_data(___type, ___info) \
      LP2(0x1398, void *, OSSL_STORE_INFO_get0_data , int, ___type, d0, const OSSL_STORE_INFO *, ___info, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKCS82PKEY_ex(___p8, ___libctx, ___propq) \
      LP3(0x139e, EVP_PKEY *, EVP_PKCS82PKEY_ex , const PKCS8_PRIV_KEY_INFO *, ___p8, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set1_id(___ctx, ___id, ___len) \
      LP3(0x13a4, int, EVP_PKEY_CTX_set1_id , EVP_PKEY_CTX *, ___ctx, a0, const void *, ___id, a1, int, ___len, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get1_id(___ctx, ___id) \
      LP2(0x13aa, int, EVP_PKEY_CTX_get1_id , EVP_PKEY_CTX *, ___ctx, a0, void *, ___id, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get1_id_len(___ctx, ___id_len) \
      LP2(0x13b0, int, EVP_PKEY_CTX_get1_id_len , EVP_PKEY_CTX *, ___ctx, a0, size_t *, ___id_len, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_AuthEnvelopedData_create(___cipher) \
      LP1(0x13b6, CMS_ContentInfo *, CMS_AuthEnvelopedData_create , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CMS_AuthEnvelopedData_create_ex(___cipher, ___ctx, ___propq) \
      LP3(0x13bc, CMS_ContentInfo *, CMS_AuthEnvelopedData_create_ex , const EVP_CIPHER *, ___cipher, a0, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_ec_param_enc(___ctx, ___param_enc) \
      LP2(0x13c2, int, EVP_PKEY_CTX_set_ec_param_enc , EVP_PKEY_CTX *, ___ctx, a0, int, ___param_enc, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_type_name(___key) \
      LP1(0x13c8, const char *, EVP_PKEY_get0_type_name , const EVP_PKEY *, ___key, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_get0_name(___keymgmt) \
      LP1(0x13ce, const char *, EVP_KEYMGMT_get0_name , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_free(___wrap) \
      LP1NR(0x13d4, EVP_KEM_free , EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_up_ref(___wrap) \
      LP1(0x13da, int, EVP_KEM_up_ref , EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_get0_provider(___wrap) \
      LP1(0x13e0, OSSL_PROVIDER *, EVP_KEM_get0_provider , const EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_fetch(___ctx, ___algorithm, ___properties) \
      LP3(0x13e6, EVP_KEM *, EVP_KEM_fetch , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___algorithm, a1, const char *, ___properties, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_is_a(___wrap, ___name) \
      LP2(0x13ec, int, EVP_KEM_is_a , const EVP_KEM *, ___wrap, a0, const char *, ___name, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_do_all_provided(___libctx, ___fn, ___arg) \
      LP3NRFP(0x13f2, EVP_KEM_do_all_provided , OSSL_LIB_CTX *, ___libctx, a0, __fpt, ___fn, a1, void *, ___arg, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(EVP_KEM *wrap,void *arg), 0, 0, 0, 0, 0, 0)

#define EVP_KEM_names_do_all(___wrap, ___fn, ___data) \
      LP3FP(0x13f8, int, EVP_KEM_names_do_all , const EVP_KEM *, ___wrap, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_encapsulate_init(___ctx, ___params) \
      LP2(0x13fe, int, EVP_PKEY_encapsulate_init , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_encapsulate(___ctx, ___wrappedkey, ___wrappedkeylen, ___genkey, ___genkeylen) \
      LP5(0x1404, int, EVP_PKEY_encapsulate , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___wrappedkey, a1, size_t *, ___wrappedkeylen, a2, unsigned char *, ___genkey, a3, size_t *, ___genkeylen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_decapsulate_init(___ctx, ___params) \
      LP2(0x140a, int, EVP_PKEY_decapsulate_init , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_decapsulate(___ctx, ___unwrapped, ___unwrappedlen, ___wrapped, ___wrappedlen) \
      LP5(0x1410, int, EVP_PKEY_decapsulate , EVP_PKEY_CTX *, ___ctx, a0, unsigned char *, ___unwrapped, a1, size_t *, ___unwrappedlen, a2, const unsigned char *, ___wrapped, a3, size_t, ___wrappedlen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_kem_op(___ctx, ___op) \
      LP2(0x1416, int, EVP_PKEY_CTX_set_kem_op , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___op, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_gettable_params(___encoder) \
      LP1(0x141c, const OSSL_PARAM *, OSSL_ENCODER_gettable_params , OSSL_ENCODER *, ___encoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_get_params(___encoder, ___params) \
      LP2(0x1422, int, OSSL_ENCODER_get_params , OSSL_ENCODER *, ___encoder, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_output_type(___ctx, ___output_type) \
      LP2(0x1428, int, OSSL_ENCODER_CTX_set_output_type , OSSL_ENCODER_CTX *, ___ctx, a0, const char *, ___output_type, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_add_encoder(___ctx, ___encoder) \
      LP2(0x142e, int, OSSL_ENCODER_CTX_add_encoder , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_ENCODER *, ___encoder, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_add_extra(___ctx, ___libctx, ___propq) \
      LP3(0x1434, int, OSSL_ENCODER_CTX_add_extra , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_get_num_encoders(___ctx) \
      LP1(0x143a, int, OSSL_ENCODER_CTX_get_num_encoders , OSSL_ENCODER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_selection(___ctx, ___selection) \
      LP2(0x1440, int, OSSL_ENCODER_CTX_set_selection , OSSL_ENCODER_CTX *, ___ctx, a0, int, ___selection, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_INSTANCE_get_encoder(___encoder_inst) \
      LP1(0x1446, OSSL_ENCODER *, OSSL_ENCODER_INSTANCE_get_encoder , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_INSTANCE_get_encoder_ctx(___encoder_inst) \
      LP1(0x144c, void *, OSSL_ENCODER_INSTANCE_get_encoder_ctx , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_INSTANCE_get_output_type(___encoder_inst) \
      LP1(0x1452, const char *, OSSL_ENCODER_INSTANCE_get_output_type , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_construct(___ctx, ___construct) \
      LP2(0x1458, int, OSSL_ENCODER_CTX_set_construct , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_ENCODER_CONSTRUCT *, ___construct, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_construct_data(___ctx, ___construct_data) \
      LP2(0x145e, int, OSSL_ENCODER_CTX_set_construct_data , OSSL_ENCODER_CTX *, ___ctx, a0, void *, ___construct_data, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_cleanup(___ctx, ___cleanup) \
      LP2(0x1464, int, OSSL_ENCODER_CTX_set_cleanup , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_ENCODER_CLEANUP *, ___cleanup, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_passphrase_cb(___ctx, ___cb, ___cbarg) \
      LP3(0x146a, int, OSSL_ENCODER_CTX_set_passphrase_cb , OSSL_ENCODER_CTX *, ___ctx, a0, OSSL_PASSPHRASE_CALLBACK *, ___cb, a1, void *, ___cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_type_names_do_all(___pkey, ___fn, ___data) \
      LP3FP(0x1470, int, EVP_PKEY_type_names_do_all , const EVP_PKEY *, ___pkey, a0, __fpt, ___fn, a1, void *, ___data, a2,\
      , AMISSLEXT_BASE_NAME, void (*__fpt)(const char *name,void *data), 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_INSTANCE_get_input_type(___decoder_inst) \
      LP1(0x1476, const char *, OSSL_DECODER_INSTANCE_get_input_type , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_gettable_ctx_params(___ciph) \
      LP1(0x147c, const OSSL_PARAM *, EVP_ASYM_CIPHER_gettable_ctx_params , const EVP_ASYM_CIPHER *, ___ciph, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_settable_ctx_params(___ciph) \
      LP1(0x1482, const OSSL_PARAM *, EVP_ASYM_CIPHER_settable_ctx_params , const EVP_ASYM_CIPHER *, ___ciph, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_gettable_ctx_params(___kem) \
      LP1(0x1488, const OSSL_PARAM *, EVP_KEM_gettable_ctx_params , const EVP_KEM *, ___kem, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_settable_ctx_params(___kem) \
      LP1(0x148e, const OSSL_PARAM *, EVP_KEM_settable_ctx_params , const EVP_KEM *, ___kem, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_type_is_other(___p7) \
      LP1(0x1494, int, PKCS7_type_is_other , PKCS7 *, ___p7, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS7_get_octet_string(___p7) \
      LP1(0x149a, ASN1_OCTET_STRING *, PKCS7_get_octet_string , PKCS7 *, ___p7, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_from_data(___ctx, ___pdata, ___pdata_len) \
      LP3(0x14a0, int, OSSL_DECODER_from_data , OSSL_DECODER_CTX *, ___ctx, a0, const unsigned char **, ___pdata, a1, size_t *, ___pdata_len, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_to_data(___ctx, ___pdata, ___pdata_len) \
      LP3(0x14a6, int, OSSL_ENCODER_to_data , OSSL_ENCODER_CTX *, ___ctx, a0, unsigned char **, ___pdata, a1, size_t *, ___pdata_len, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_libctx(___ctx) \
      LP1(0x14ac, OSSL_LIB_CTX *, EVP_PKEY_CTX_get0_libctx , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_propq(___ctx) \
      LP1(0x14b2, const char *, EVP_PKEY_CTX_get0_propq , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set1_encoded_public_key(___pkey, ___pub, ___publen) \
      LP3(0x14b8, int, EVP_PKEY_set1_encoded_public_key , EVP_PKEY *, ___pkey, a0, const unsigned char *, ___pub, a1, size_t, ___publen, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get1_encoded_public_key(___pkey, ___ppub) \
      LP2(0x14be, size_t, EVP_PKEY_get1_encoded_public_key , EVP_PKEY *, ___pkey, a0, unsigned char **, ___ppub, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_selection(___ctx, ___selection) \
      LP2(0x14c4, int, OSSL_DECODER_CTX_set_selection , OSSL_DECODER_CTX *, ___ctx, a0, int, ___selection, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_CTX_set_input_structure(___ctx, ___input_structure) \
      LP2(0x14ca, int, OSSL_DECODER_CTX_set_input_structure , OSSL_DECODER_CTX *, ___ctx, a0, const char *, ___input_structure, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_INSTANCE_get_input_structure(___decoder_inst, ___was_set) \
      LP2(0x14d0, const char *, OSSL_DECODER_INSTANCE_get_input_structure , OSSL_DECODER_INSTANCE *, ___decoder_inst, a0, int *, ___was_set, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_CTX_set_output_structure(___ctx, ___output_structure) \
      LP2(0x14d6, int, OSSL_ENCODER_CTX_set_output_structure , OSSL_ENCODER_CTX *, ___ctx, a0, const char *, ___output_structure, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_INSTANCE_get_output_structure(___encoder_inst) \
      LP1(0x14dc, const char *, OSSL_ENCODER_INSTANCE_get_output_structure , OSSL_ENCODER_INSTANCE *, ___encoder_inst, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PrivateKey_ex(___out, ___x, ___enc, ___kstr, ___klen, ___cb, ___u, ___libctx, ___propq) \
      LP9(0x14e2, int, PEM_write_bio_PrivateKey_ex , BIO *, ___out, a0, const EVP_PKEY *, ___x, a1, const EVP_CIPHER *, ___enc, a2, const unsigned char *, ___kstr, a3, int, ___klen, d0, pem_password_cb *, ___cb, d1, void *, ___u, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PEM_write_bio_PUBKEY_ex(___out, ___x, ___libctx, ___propq) \
      LP4(0x14e8, int, PEM_write_bio_PUBKEY_ex , BIO *, ___out, a0, const EVP_PKEY *, ___x, a1, OSSL_LIB_CTX *, ___libctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_group_name(___pkey, ___name, ___name_sz, ___gname_len) \
      LP4(0x14ee, int, EVP_PKEY_get_group_name , const EVP_PKEY *, ___pkey, a0, char *, ___name, a1, size_t, ___name_sz, d0, size_t *, ___gname_len, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_atomic_or(___val, ___op, ___ret, ___lock) \
      LP4(0x14f4, int, CRYPTO_atomic_or , uint64_t *, ___val, a0, uint64_t, ___op, d0, uint64_t *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define CRYPTO_atomic_load(___val, ___ret, ___lock) \
      LP3(0x14fa, int, CRYPTO_atomic_load , uint64_t *, ___val, a0, uint64_t *, ___ret, a1, CRYPTO_RWLOCK *, ___lock, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_md(___ctx, ___md) \
      LP2(0x1500, int, EVP_PKEY_CTX_set_rsa_pss_keygen_md , EVP_PKEY_CTX *, ___ctx, a0, const EVP_MD *, ___md, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_set_rsa_pss_keygen_md_name(___ctx, ___mdname, ___mdprops) \
      LP3(0x1506, int, EVP_PKEY_CTX_set_rsa_pss_keygen_md_name , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___mdname, a1, const char *, ___mdprops, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_settable_params(___pkey) \
      LP1(0x150c, const OSSL_PARAM *, EVP_PKEY_settable_params , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_params(___pkey, ___params) \
      LP2(0x1512, int, EVP_PKEY_set_params , EVP_PKEY *, ___pkey, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_int_param(___pkey, ___key_name, ___in) \
      LP3(0x1518, int, EVP_PKEY_set_int_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, int, ___in, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_size_t_param(___pkey, ___key_name, ___in) \
      LP3(0x151e, int, EVP_PKEY_set_size_t_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, size_t, ___in, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_bn_param(___pkey, ___key_name, ___bn) \
      LP3(0x1524, int, EVP_PKEY_set_bn_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, const BIGNUM *, ___bn, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_utf8_string_param(___pkey, ___key_name, ___str) \
      LP3(0x152a, int, EVP_PKEY_set_utf8_string_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, const char *, ___str, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_set_octet_string_param(___pkey, ___key_name, ___buf, ___bsize) \
      LP4(0x1530, int, EVP_PKEY_set_octet_string_param , EVP_PKEY *, ___pkey, a0, const char *, ___key_name, a1, const unsigned char *, ___buf, a2, size_t, ___bsize, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_ec_point_conv_form(___pkey) \
      LP1(0x1536, int, EVP_PKEY_get_ec_point_conv_form , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_field_type(___pkey) \
      LP1(0x153c, int, EVP_PKEY_get_field_type , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get_params(___pkey, ___params) \
      LP2(0x1542, int, EVP_PKEY_get_params , const EVP_PKEY *, ___pkey, a0, OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_fromdata_init(___ctx) \
      LP1(0x1548, int, EVP_PKEY_fromdata_init , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_fromdata_settable(___ctx, ___selection) \
      LP2(0x154e, const OSSL_PARAM *, EVP_PKEY_fromdata_settable , EVP_PKEY_CTX *, ___ctx, a0, int, ___selection, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_param_check_quick(___ctx) \
      LP1(0x1554, int, EVP_PKEY_param_check_quick , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_public_check_quick(___ctx) \
      LP1(0x155a, int, EVP_PKEY_public_check_quick , EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_is_a(___ctx, ___keytype) \
      LP2(0x1560, int, EVP_PKEY_CTX_is_a , EVP_PKEY_CTX *, ___ctx, a0, const char *, ___keytype, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_settable_params(___ctx) \
      LP1(0x1566, const OSSL_PARAM *, EVP_CIPHER_CTX_settable_params , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_gettable_params(___ctx) \
      LP1(0x156c, const OSSL_PARAM *, EVP_CIPHER_CTX_gettable_params , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_gettable_params(___ctx) \
      LP1(0x1572, const OSSL_PARAM *, EVP_KDF_CTX_gettable_params , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_CTX_settable_params(___ctx) \
      LP1(0x1578, const OSSL_PARAM *, EVP_KDF_CTX_settable_params , EVP_KDF_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_gettable_params(___ctx) \
      LP1(0x157e, const OSSL_PARAM *, EVP_MAC_CTX_gettable_params , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_settable_params(___ctx) \
      LP1(0x1584, const OSSL_PARAM *, EVP_MAC_CTX_settable_params , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_gettable_params(___ctx) \
      LP1(0x158a, const OSSL_PARAM *, EVP_RAND_CTX_gettable_params , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_CTX_settable_params(___ctx) \
      LP1(0x1590, const OSSL_PARAM *, EVP_RAND_CTX_settable_params , EVP_RAND_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_set_DRBG_type(___ctx, ___drbg, ___propq, ___cipher, ___digest) \
      LP5(0x1596, int, RAND_set_DRBG_type , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___drbg, a1, const char *, ___propq, a2, const char *, ___cipher, a3, const char *, ___digest, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RAND_set_seed_source_type(___ctx, ___seed, ___propq) \
      LP3(0x159c, int, RAND_set_seed_source_type , OSSL_LIB_CTX *, ___ctx, a0, const char *, ___seed, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BN_mod_exp_mont_consttime_x2(___rr1, ___a1, ___p1, ___m1, ___in_mont1, ___rr2, ___a2, ___p2, ___m2, ___in_mont2, ___ctx) \
      LP11(0x15a2, int, BN_mod_exp_mont_consttime_x2 , BIGNUM *, ___rr1, a0, const BIGNUM *, ___a1, a1, const BIGNUM *, ___p1, a2, const BIGNUM *, ___m1, a3, BN_MONT_CTX *, ___in_mont1, d0, BIGNUM *, ___rr2, d1, const BIGNUM *, ___a2, d2, const BIGNUM *, ___p2, d3, const BIGNUM *, ___m2, d4, BN_MONT_CTX *, ___in_mont2, d5, BN_CTX *, ___ctx, d6,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_f_readbuffer() \
      LP0(0x15a8, const BIO_METHOD *, BIO_f_readbuffer ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ESS_check_signing_certs(___ss, ___ssv2, ___chain, ___require_signing_cert) \
      LP4(0x15ae, int, OSSL_ESS_check_signing_certs , const ESS_SIGNING_CERT *, ___ss, a0, const ESS_SIGNING_CERT_V2 *, ___ssv2, a1, const struct stack_st_X509 *, ___chain, a2, int, ___require_signing_cert, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ESS_signing_cert_new_init(___signcert, ___certs, ___set_issuer_serial) \
      LP3(0x15b4, ESS_SIGNING_CERT *, OSSL_ESS_signing_cert_new_init , const X509 *, ___signcert, a0, const struct stack_st_X509 *, ___certs, a1, int, ___set_issuer_serial, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ESS_signing_cert_v2_new_init(___hash_alg, ___signcert, ___certs, ___set_issuer_serial) \
      LP4(0x15ba, ESS_SIGNING_CERT_V2 *, OSSL_ESS_signing_cert_v2_new_init , const EVP_MD *, ___hash_alg, a0, const X509 *, ___signcert, a1, const struct stack_st_X509 *, ___certs, a2, int, ___set_issuer_serial, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_it() \
      LP0(0x15c0, const ASN1_ITEM *, ESS_SIGNING_CERT_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ESS_SIGNING_CERT_V2_it() \
      LP0(0x15c6, const ASN1_ITEM *, ESS_SIGNING_CERT_V2_it ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_Q_digest(___libctx, ___name, ___propq, ___data, ___datalen, ___md, ___mdlen) \
      LP7(0x15cc, int, EVP_Q_digest , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___name, a1, const char *, ___propq, a2, const void *, ___data, a3, size_t, ___datalen, d0, unsigned char *, ___md, d1, size_t *, ___mdlen, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DigestInit_ex2(___ctx, ___type, ___params) \
      LP3(0x15d2, int, EVP_DigestInit_ex2 , EVP_MD_CTX *, ___ctx, a0, const EVP_MD *, ___type, a1, const OSSL_PARAM *, ___params, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_EncryptInit_ex2(___ctx, ___cipher, ___key, ___iv, ___params) \
      LP5(0x15d8, int, EVP_EncryptInit_ex2 , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, const OSSL_PARAM *, ___params, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_DecryptInit_ex2(___ctx, ___cipher, ___key, ___iv, ___params) \
      LP5(0x15de, int, EVP_DecryptInit_ex2 , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, const OSSL_PARAM *, ___params, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CipherInit_ex2(___ctx, ___cipher, ___key, ___iv, ___enc, ___params) \
      LP6(0x15e4, int, EVP_CipherInit_ex2 , EVP_CIPHER_CTX *, ___ctx, a0, const EVP_CIPHER *, ___cipher, a1, const unsigned char *, ___key, a2, const unsigned char *, ___iv, a3, int, ___enc, d0, const OSSL_PARAM *, ___params, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_sign_init_ex(___ctx, ___params) \
      LP2(0x15ea, int, EVP_PKEY_sign_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_verify_init_ex(___ctx, ___params) \
      LP2(0x15f0, int, EVP_PKEY_verify_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_verify_recover_init_ex(___ctx, ___params) \
      LP2(0x15f6, int, EVP_PKEY_verify_recover_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_encrypt_init_ex(___ctx, ___params) \
      LP2(0x15fc, int, EVP_PKEY_encrypt_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_decrypt_init_ex(___ctx, ___params) \
      LP2(0x1602, int, EVP_PKEY_decrypt_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_derive_init_ex(___ctx, ___params) \
      LP2(0x1608, int, EVP_PKEY_derive_init_ex , EVP_PKEY_CTX *, ___ctx, a0, const OSSL_PARAM *, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define TS_RESP_CTX_new_ex(___libctx, ___propq) \
      LP2(0x160e, TS_RESP_CTX *, TS_RESP_CTX_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_REQ_new_ex(___libctx, ___propq) \
      LP2(0x1614, X509_REQ *, X509_REQ_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_dup(___pkey) \
      LP1(0x161a, EVP_PKEY *, EVP_PKEY_dup , EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define RSA_PSS_PARAMS_dup(___a) \
      LP1(0x1620, RSA_PSS_PARAMS *, RSA_PSS_PARAMS_dup , const RSA_PSS_PARAMS *, ___a, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_derive_set_peer_ex(___ctx, ___peer, ___validate_peer) \
      LP3(0x1626, int, EVP_PKEY_derive_set_peer_ex , EVP_PKEY_CTX *, ___ctx, a0, EVP_PKEY *, ___peer, a1, int, ___validate_peer, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_get0_name(___decoder) \
      LP1(0x162c, const char *, OSSL_DECODER_get0_name , const OSSL_DECODER *, ___decoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_get0_name(___kdf) \
      LP1(0x1632, const char *, OSSL_ENCODER_get0_name , const OSSL_ENCODER *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_DECODER_get0_description(___decoder) \
      LP1(0x1638, const char *, OSSL_DECODER_get0_description , const OSSL_DECODER *, ___decoder, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_ENCODER_get0_description(___kdf) \
      LP1(0x163e, const char *, OSSL_ENCODER_get0_description , const OSSL_ENCODER *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_STORE_LOADER_get0_description(___loader) \
      LP1(0x1644, const char *, OSSL_STORE_LOADER_get0_description , const OSSL_STORE_LOADER *, ___loader, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_get0_description(___md) \
      LP1(0x164a, const char *, EVP_MD_get0_description , const EVP_MD *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_get0_description(___cipher) \
      LP1(0x1650, const char *, EVP_CIPHER_get0_description , const EVP_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_get0_description(___mac) \
      LP1(0x1656, const char *, EVP_MAC_get0_description , const EVP_MAC *, ___mac, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_RAND_get0_description(___md) \
      LP1(0x165c, const char *, EVP_RAND_get0_description , const EVP_RAND *, ___md, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_description(___pkey) \
      LP1(0x1662, const char *, EVP_PKEY_get0_description , const EVP_PKEY *, ___pkey, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYMGMT_get0_description(___keymgmt) \
      LP1(0x1668, const char *, EVP_KEYMGMT_get0_description , const EVP_KEYMGMT *, ___keymgmt, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_get0_description(___signature) \
      LP1(0x166e, const char *, EVP_SIGNATURE_get0_description , const EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_get0_description(___cipher) \
      LP1(0x1674, const char *, EVP_ASYM_CIPHER_get0_description , const EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_get0_description(___wrap) \
      LP1(0x167a, const char *, EVP_KEM_get0_description , const EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_get0_description(___keyexch) \
      LP1(0x1680, const char *, EVP_KEYEXCH_get0_description , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KDF_get0_description(___kdf) \
      LP1(0x1686, const char *, EVP_KDF_get0_description , const EVP_KDF *, ___kdf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OPENSSL_sk_find_all(___st, ___data, ___pnum) \
      LP3(0x168c, int, OPENSSL_sk_find_all , OPENSSL_STACK *, ___st, a0, const void *, ___data, a1, int *, ___pnum, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_CRL_new_ex(___libctx, ___propq) \
      LP2(0x1692, X509_CRL *, X509_CRL_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_dup(___p) \
      LP1(0x1698, OSSL_PARAM *, OSSL_PARAM_dup , const OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_merge(___p1, ___p2) \
      LP2(0x169e, OSSL_PARAM *, OSSL_PARAM_merge , const OSSL_PARAM *, ___p1, a0, const OSSL_PARAM *, ___p2, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PARAM_free(___p) \
      LP1NR(0x16a4, OSSL_PARAM_free , OSSL_PARAM *, ___p, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_todata(___pkey, ___selection, ___params) \
      LP3(0x16aa, int, EVP_PKEY_todata , const EVP_PKEY *, ___pkey, a0, int, ___selection, d0, OSSL_PARAM **, ___params, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_export(___pkey, ___selection, ___export_cb, ___export_cbarg) \
      LP4(0x16b0, int, EVP_PKEY_export , const EVP_PKEY *, ___pkey, a0, int, ___selection, d0, OSSL_CALLBACK *, ___export_cb, a1, void *, ___export_cbarg, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_get0_md(___ctx) \
      LP1(0x16b6, const EVP_MD *, EVP_MD_CTX_get0_md , const EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MD_CTX_get1_md(___ctx) \
      LP1(0x16bc, EVP_MD *, EVP_MD_CTX_get1_md , EVP_MD_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get0_cipher(___ctx) \
      LP1(0x16c2, const EVP_CIPHER *, EVP_CIPHER_CTX_get0_cipher , const EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_CIPHER_CTX_get1_cipher(___ctx) \
      LP1(0x16c8, EVP_CIPHER *, EVP_CIPHER_CTX_get1_cipher , EVP_CIPHER_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_get0_global_default() \
      LP0(0x16ce, OSSL_LIB_CTX *, OSSL_LIB_CTX_get0_global_default ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_SIGNATURE_get0_name(___signature) \
      LP1(0x16d4, const char *, EVP_SIGNATURE_get0_name , const EVP_SIGNATURE *, ___signature, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_ASYM_CIPHER_get0_name(___cipher) \
      LP1(0x16da, const char *, EVP_ASYM_CIPHER_get0_name , const EVP_ASYM_CIPHER *, ___cipher, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEM_get0_name(___wrap) \
      LP1(0x16e0, const char *, EVP_KEM_get0_name , const EVP_KEM *, ___wrap, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_KEYEXCH_get0_name(___keyexch) \
      LP1(0x16e6, const char *, EVP_KEYEXCH_get0_name , const EVP_KEYEXCH *, ___keyexch, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_v2_PBE_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq) \
      LP9(0x16ec, int, PKCS5_v2_PBE_keyivgen_ex , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_scrypt_ex_amiga_1(___pass, ___passlen, ___salt, ___N, ___r, ___p, ___maxmem, ___moreargs) \
      LP8(0x16f2, int, EVP_PBE_scrypt_ex_amiga_1 , const char *, ___pass, a0, size_t, ___passlen, a1, const unsigned char *, ___salt, a2, uint64_t, ___N, d0, uint64_t, ___r, d2, uint64_t, ___p, d4, uint64_t, ___maxmem, d6, void *, ___moreargs, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_scrypt_ex_amiga_2(___saltlen, ___key, ___keylen, ___ctx, ___propq) \
      LP5(0x16f8, void *, EVP_PBE_scrypt_ex_amiga_2 , size_t, ___saltlen, d0, unsigned char *, ___key, a0, size_t, ___keylen, d1, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_v2_scrypt_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___c, ___md, ___en_de, ___libctx, ___propq) \
      LP9(0x16fe, int, PKCS5_v2_scrypt_keyivgen_ex , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___c, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_CipherInit_ex(___pbe_obj, ___pass, ___passlen, ___param, ___ctx, ___en_de, ___libctx, ___propq) \
      LP8(0x1704, int, EVP_PBE_CipherInit_ex , ASN1_OBJECT *, ___pbe_obj, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, EVP_CIPHER_CTX *, ___ctx, a3, int, ___en_de, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PBE_find_ex(___type, ___pbe_nid, ___pcnid, ___pmnid, ___pkeygen, ___pkeygen_ex) \
      LP6(0x170a, int, EVP_PBE_find_ex , int, ___type, d0, int, ___pbe_nid, d1, int *, ___pcnid, a0, int *, ___pmnid, a1, EVP_PBE_KEYGEN **, ___pkeygen, a2, EVP_PBE_KEYGEN_EX **, ___pkeygen_ex, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_SAFEBAG_create_pkcs8_encrypt_ex(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8inf, ___ctx, ___propq) \
      LP9(0x1710, PKCS12_SAFEBAG *, PKCS12_SAFEBAG_create_pkcs8_encrypt_ex , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8inf, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_decrypt_ex(___p8, ___pass, ___passlen, ___ctx, ___propq) \
      LP5(0x1716, PKCS8_PRIV_KEY_INFO *, PKCS8_decrypt_ex , const X509_SIG *, ___p8, a0, const char *, ___pass, a1, int, ___passlen, d0, OSSL_LIB_CTX *, ___ctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_decrypt_skey_ex(___bag, ___pass, ___passlen, ___ctx, ___propq) \
      LP5(0x171c, PKCS8_PRIV_KEY_INFO *, PKCS12_decrypt_skey_ex , const PKCS12_SAFEBAG *, ___bag, a0, const char *, ___pass, a1, int, ___passlen, d0, OSSL_LIB_CTX *, ___ctx, a2, const char *, ___propq, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_encrypt_ex(___pbe_nid, ___cipher, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___p8, ___ctx, ___propq) \
      LP10(0x1722, X509_SIG *, PKCS8_encrypt_ex , int, ___pbe_nid, d0, const EVP_CIPHER *, ___cipher, a0, const char *, ___pass, a1, int, ___passlen, d1, unsigned char *, ___salt, a2, int, ___saltlen, d2, int, ___iter, d3, PKCS8_PRIV_KEY_INFO *, ___p8, a3, OSSL_LIB_CTX *, ___ctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS8_set0_pbe_ex(___pass, ___passlen, ___p8inf, ___pbe, ___ctx, ___propq) \
      LP6(0x1728, X509_SIG *, PKCS8_set0_pbe_ex , const char *, ___pass, a0, int, ___passlen, d0, PKCS8_PRIV_KEY_INFO *, ___p8inf, a1, X509_ALGOR *, ___pbe, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_pack_p7encdata_ex(___pbe_nid, ___pass, ___passlen, ___salt, ___saltlen, ___iter, ___bags, ___ctx, ___propq) \
      LP9(0x172e, PKCS7 *, PKCS12_pack_p7encdata_ex , int, ___pbe_nid, d0, const char *, ___pass, a0, int, ___passlen, d1, unsigned char *, ___salt, a1, int, ___saltlen, d2, int, ___iter, d3, struct stack_st_PKCS12_SAFEBAG *, ___bags, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_pbe_crypt_ex(___algor, ___pass, ___passlen, ___in, ___inlen, ___data, ___datalen, ___en_de, ___libctx, ___propq) \
      LP10(0x1734, unsigned char *, PKCS12_pbe_crypt_ex , const X509_ALGOR *, ___algor, a0, const char *, ___pass, a1, int, ___passlen, d0, const unsigned char *, ___in, a2, int, ___inlen, d1, unsigned char **, ___data, a3, int *, ___datalen, d2, int, ___en_de, d3, OSSL_LIB_CTX *, ___libctx, d4, const char *, ___propq, d5,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_item_decrypt_d2i_ex(___algor, ___it, ___pass, ___passlen, ___oct, ___zbuf, ___libctx, ___propq) \
      LP8(0x173a, void *, PKCS12_item_decrypt_d2i_ex , const X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, const ASN1_OCTET_STRING *, ___oct, a3, int, ___zbuf, d1, OSSL_LIB_CTX *, ___libctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_item_i2d_encrypt_ex(___algor, ___it, ___pass, ___passlen, ___obj, ___zbuf, ___ctx, ___propq) \
      LP8(0x1740, ASN1_OCTET_STRING *, PKCS12_item_i2d_encrypt_ex , X509_ALGOR *, ___algor, a0, const ASN1_ITEM *, ___it, a1, const char *, ___pass, a2, int, ___passlen, d0, void *, ___obj, a3, int, ___zbuf, d1, OSSL_LIB_CTX *, ___ctx, d2, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_init_ex(___mode, ___ctx, ___propq) \
      LP3(0x1746, PKCS12 *, PKCS12_init_ex , int, ___mode, d0, OSSL_LIB_CTX *, ___ctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_key_gen_asc_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      LP11(0x174c, int, PKCS12_key_gen_asc_ex , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3, OSSL_LIB_CTX *, ___ctx, d5, const char *, ___propq, d6,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_key_gen_uni_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      LP11(0x1752, int, PKCS12_key_gen_uni_ex , unsigned char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3, OSSL_LIB_CTX *, ___ctx, d5, const char *, ___propq, d6,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_key_gen_utf8_ex(___pass, ___passlen, ___salt, ___saltlen, ___id, ___iter, ___n, ___out, ___md_type, ___ctx, ___propq) \
      LP11(0x1758, int, PKCS12_key_gen_utf8_ex , const char *, ___pass, a0, int, ___passlen, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, int, ___id, d2, int, ___iter, d3, int, ___n, d4, unsigned char *, ___out, a2, const EVP_MD *, ___md_type, a3, OSSL_LIB_CTX *, ___ctx, d5, const char *, ___propq, d6,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_PBE_keyivgen_ex(___ctx, ___pass, ___passlen, ___param, ___cipher, ___md_type, ___en_de, ___libctx, ___propq) \
      LP9(0x175e, int, PKCS12_PBE_keyivgen_ex , EVP_CIPHER_CTX *, ___ctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md_type, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_create_ex(___pass, ___name, ___pkey, ___cert, ___ca, ___nid_key, ___nid_cert, ___iter, ___mac_iter, ___keytype, ___ctx, ___propq) \
      LP12(0x1764, PKCS12 *, PKCS12_create_ex , const char *, ___pass, a0, const char *, ___name, a1, EVP_PKEY *, ___pkey, a2, X509 *, ___cert, a3, struct stack_st_X509 *, ___ca, d0, int, ___nid_key, d1, int, ___nid_cert, d2, int, ___iter, d3, int, ___mac_iter, d4, int, ___keytype, d5, OSSL_LIB_CTX *, ___ctx, d6, const char *, ___propq, d7,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_key_ex(___pbags, ___key, ___key_usage, ___iter, ___key_nid, ___pass, ___ctx, ___propq) \
      LP8(0x176a, PKCS12_SAFEBAG *, PKCS12_add_key_ex , struct stack_st_PKCS12_SAFEBAG **, ___pbags, a0, EVP_PKEY *, ___key, a1, int, ___key_usage, d0, int, ___iter, d1, int, ___key_nid, d2, const char *, ___pass, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_safe_ex(___psafes, ___bags, ___safe_nid, ___iter, ___pass, ___ctx, ___propq) \
      LP7(0x1770, int, PKCS12_add_safe_ex , struct stack_st_PKCS7 **, ___psafes, a0, struct stack_st_PKCS12_SAFEBAG *, ___bags, a1, int, ___safe_nid, d0, int, ___iter, d1, const char *, ___pass, a2, OSSL_LIB_CTX *, ___ctx, a3, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS12_add_safes_ex(___safes, ___p7_nid, ___ctx, ___propq) \
      LP4(0x1776, PKCS12 *, PKCS12_add_safes_ex , struct stack_st_PKCS7 *, ___safes, a0, int, ___p7_nid, d0, OSSL_LIB_CTX *, ___ctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe_set0_algor_ex(___algor, ___alg, ___iter, ___salt, ___saltlen, ___libctx) \
      LP6(0x177c, int, PKCS5_pbe_set0_algor_ex , X509_ALGOR *, ___algor, a0, int, ___alg, d0, int, ___iter, d1, const unsigned char *, ___salt, a1, int, ___saltlen, d2, OSSL_LIB_CTX *, ___libctx, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe_set_ex(___alg, ___iter, ___salt, ___saltlen, ___libctx) \
      LP5(0x1782, X509_ALGOR *, PKCS5_pbe_set_ex , int, ___alg, d0, int, ___iter, d1, const unsigned char *, ___salt, a0, int, ___saltlen, d2, OSSL_LIB_CTX *, ___libctx, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbe2_set_iv_ex(___cipher, ___iter, ___salt, ___saltlen, ___aiv, ___prf_nid, ___libctx) \
      LP7(0x1788, X509_ALGOR *, PKCS5_pbe2_set_iv_ex , const EVP_CIPHER *, ___cipher, a0, int, ___iter, d0, unsigned char *, ___salt, a1, int, ___saltlen, d1, unsigned char *, ___aiv, a2, int, ___prf_nid, d2, OSSL_LIB_CTX *, ___libctx, a3,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_pbkdf2_set_ex(___iter, ___salt, ___saltlen, ___prf_nid, ___keylen, ___libctx) \
      LP6(0x178e, X509_ALGOR *, PKCS5_pbkdf2_set_ex , int, ___iter, d0, unsigned char *, ___salt, a0, int, ___saltlen, d1, int, ___prf_nid, d2, int, ___keylen, d3, OSSL_LIB_CTX *, ___libctx, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_from_core_bio(___libctx, ___corebio) \
      LP2(0x1794, BIO *, BIO_new_from_core_bio , OSSL_LIB_CTX *, ___libctx, a0, OSSL_CORE_BIO *, ___corebio, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_new_ex(___libctx, ___method) \
      LP2(0x179a, BIO *, BIO_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const BIO_METHOD *, ___method, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_s_core() \
      LP0(0x17a0, const BIO_METHOD *, BIO_s_core ,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_get_line(___bio, ___buf, ___size) \
      LP3(0x17a6, int, BIO_get_line , BIO *, ___bio, a0, char *, ___buf, a1, int, ___size, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_new_from_dispatch(___handle, ___in) \
      LP2(0x17ac, OSSL_LIB_CTX *, OSSL_LIB_CTX_new_from_dispatch , const OSSL_CORE_HANDLE *, ___handle, a0, const OSSL_DISPATCH *, ___in, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_LIB_CTX_new_child(___handle, ___in) \
      LP2(0x17b2, OSSL_LIB_CTX *, OSSL_LIB_CTX_new_child , const OSSL_CORE_HANDLE *, ___handle, a0, const OSSL_DISPATCH *, ___in, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define OSSL_PROVIDER_get0_dispatch(___prov) \
      LP1(0x17b8, const OSSL_DISPATCH *, OSSL_PROVIDER_get0_dispatch , const OSSL_PROVIDER *, ___prov, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define PKCS5_PBE_keyivgen_ex(___cctx, ___pass, ___passlen, ___param, ___cipher, ___md, ___en_de, ___libctx, ___propq) \
      LP9(0x17be, int, PKCS5_PBE_keyivgen_ex , EVP_CIPHER_CTX *, ___cctx, a0, const char *, ___pass, a1, int, ___passlen, d0, ASN1_TYPE *, ___param, a2, const EVP_CIPHER *, ___cipher, a3, const EVP_MD *, ___md, d1, int, ___en_de, d2, OSSL_LIB_CTX *, ___libctx, d3, const char *, ___propq, d4,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_MAC_CTX_get_block_size(___ctx) \
      LP1(0x17c4, size_t, EVP_MAC_CTX_get_block_size , EVP_MAC_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define BIO_debug_callback_ex(___bio, ___oper, ___argp, ___len, ___argi, ___argl, ___ret, ___processed) \
      LP8(0x17ca, long, BIO_debug_callback_ex , BIO *, ___bio, a0, int, ___oper, d0, const char *, ___argp, a1, size_t, ___len, d1, int, ___argi, d2, long, ___argl, d3, int, ___ret, d4, size_t *, ___processed, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define b2i_PVK_bio_ex(___in, ___cb, ___u, ___libctx, ___propq) \
      LP5(0x17d0, EVP_PKEY *, b2i_PVK_bio_ex , BIO *, ___in, a0, pem_password_cb *, ___cb, a1, void *, ___u, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define i2b_PVK_bio_ex(___out, ___pk, ___enclevel, ___cb, ___u, ___libctx, ___propq) \
      LP7(0x17d6, int, i2b_PVK_bio_ex , BIO *, ___out, a0, const EVP_PKEY *, ___pk, a1, int, ___enclevel, d0, pem_password_cb *, ___cb, a2, void *, ___u, a3, OSSL_LIB_CTX *, ___libctx, d1, const char *, ___propq, d2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_get0_libctx(___conf) \
      LP1(0x17dc, OSSL_LIB_CTX *, NCONF_get0_libctx , const CONF *, ___conf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define NCONF_get_section_names(___conf) \
      LP1(0x17e2, struct stack_st_OPENSSL_CSTRING *, NCONF_get_section_names , const CONF *, ___conf, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define X509_PUBKEY_new_ex(___libctx, ___propq) \
      LP2(0x17e8, X509_PUBKEY *, X509_PUBKEY_new_ex , OSSL_LIB_CTX *, ___libctx, a0, const char *, ___propq, a1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_new_ex(___it, ___libctx, ___propq) \
      LP3(0x17ee, ASN1_VALUE *, ASN1_item_new_ex , const ASN1_ITEM *, ___it, a0, OSSL_LIB_CTX *, ___libctx, a1, const char *, ___propq, a2,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_d2i_bio_ex(___it, ___in, ___pval, ___libctx, ___propq) \
      LP5(0x17f4, void *, ASN1_item_d2i_bio_ex , const ASN1_ITEM *, ___it, a0, BIO *, ___in, a1, void *, ___pval, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_item_d2i_ex(___val, ___in, ___len, ___it, ___libctx, ___propq) \
      LP6(0x17fa, ASN1_VALUE *, ASN1_item_d2i_ex , ASN1_VALUE **, ___val, a0, const unsigned char **, ___in, a1, long, ___len, d0, const ASN1_ITEM *, ___it, a2, OSSL_LIB_CTX *, ___libctx, a3, const char *, ___propq, d1,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define ASN1_TIME_print_ex(___bp, ___tm, ___flags) \
      LP3(0x1800, int, ASN1_TIME_print_ex , BIO *, ___bp, a0, const ASN1_TIME *, ___tm, a1, unsigned long, ___flags, d0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_get0_provider(___key) \
      LP1(0x1806, const OSSL_PROVIDER *, EVP_PKEY_get0_provider , const EVP_PKEY *, ___key, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#define EVP_PKEY_CTX_get0_provider(___ctx) \
      LP1(0x180c, const OSSL_PROVIDER *, EVP_PKEY_CTX_get0_provider , const EVP_PKEY_CTX *, ___ctx, a0,\
      , AMISSLEXT_BASE_NAME, 0, 0, 0, 0, 0, 0)

#endif /* !_PPCINLINE_AMISSLEXT_H */
