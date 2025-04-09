/*
 * Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 * Copyright (c) 2014-2025 AmiSSL Open Source Team.
 * All Rights Reserved.
 *
 * This file has been modified for use with AmiSSL for AmigaOS-based systems.
 *
 * Copyright 2000-2025 The OpenSSL Project Authors. All Rights Reserved.
 * Copyright Siemens AG 2018-2020
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#if !defined(PROTO_AMISSL_H) && !defined(AMISSL_COMPILE)
# include <proto/amissl.h>
#endif

#ifndef OPENSSL_HTTP_H
# define OPENSSL_HTTP_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
#  pragma once
# endif

# include <openssl/opensslconf.h>

# include <openssl/bio.h>
# include <openssl/asn1.h>
# include <openssl/conf.h>


# ifdef __cplusplus
extern "C" {
# endif

# define OSSL_HTTP_NAME "http"
# define OSSL_HTTPS_NAME "https"
# define OSSL_HTTP_PREFIX OSSL_HTTP_NAME"://"
# define OSSL_HTTPS_PREFIX OSSL_HTTPS_NAME"://"
# define OSSL_HTTP_PORT "80"
# define OSSL_HTTPS_PORT "443"
# define OPENSSL_NO_PROXY "NO_PROXY"
# define OPENSSL_HTTP_PROXY "HTTP_PROXY"
# define OPENSSL_HTTPS_PROXY "HTTPS_PROXY"

/* We want to have this even in case of OPENSSL_NO_HTTP */
int OSSL_parse_url(const char *url, char **pscheme, char **puser, char **phost,
                   char **pport, int *pport_num,
                   char **ppath, char **pquery, char **pfrag);

# ifndef OPENSSL_NO_HTTP

#  define OSSL_HTTP_DEFAULT_MAX_LINE_LEN (4 * 1024)
#  define OSSL_HTTP_DEFAULT_MAX_RESP_LEN (100 * 1024)
#  define OSSL_HTTP_DEFAULT_MAX_CRL_LEN (32 * 1024 * 1024)
#  define OSSL_HTTP_DEFAULT_MAX_RESP_HDR_LINES 256


/* Low-level HTTP API */
OSSL_HTTP_REQ_CTX *OSSL_HTTP_REQ_CTX_new(BIO *wbio, BIO *rbio, int buf_size);
void OSSL_HTTP_REQ_CTX_free(OSSL_HTTP_REQ_CTX *rctx);
int OSSL_HTTP_REQ_CTX_set_request_line(OSSL_HTTP_REQ_CTX *rctx, int method_POST,
                                       const char *server, const char *port,
                                       const char *path);
int OSSL_HTTP_REQ_CTX_add1_header(OSSL_HTTP_REQ_CTX *rctx,
                                  const char *name, const char *value);
int OSSL_HTTP_REQ_CTX_set_expected(OSSL_HTTP_REQ_CTX *rctx,
                                   const char *content_type, int asn1,
                                   int timeout, int keep_alive);
int OSSL_HTTP_REQ_CTX_set1_req(OSSL_HTTP_REQ_CTX *rctx, const char *content_type,
                               const ASN1_ITEM *it, const ASN1_VALUE *req);
int OSSL_HTTP_REQ_CTX_nbio(OSSL_HTTP_REQ_CTX *rctx);
int OSSL_HTTP_REQ_CTX_nbio_d2i(OSSL_HTTP_REQ_CTX *rctx,
                               ASN1_VALUE **pval, const ASN1_ITEM *it);
BIO *OSSL_HTTP_REQ_CTX_exchange(OSSL_HTTP_REQ_CTX *rctx);
BIO *OSSL_HTTP_REQ_CTX_get0_mem_bio(const OSSL_HTTP_REQ_CTX *rctx);
size_t OSSL_HTTP_REQ_CTX_get_resp_len(const OSSL_HTTP_REQ_CTX *rctx);
void OSSL_HTTP_REQ_CTX_set_max_response_length(OSSL_HTTP_REQ_CTX *rctx,
                                               unsigned long len);
void OSSL_HTTP_REQ_CTX_set_max_response_hdr_lines(OSSL_HTTP_REQ_CTX *rctx,
                                                  size_t count);
int OSSL_HTTP_is_alive(const OSSL_HTTP_REQ_CTX *rctx);

/* High-level HTTP API */
typedef BIO *(*OSSL_HTTP_bio_cb_t)(BIO *bio, void *arg, int connect, int detail);
OSSL_HTTP_REQ_CTX *OSSL_HTTP_open(const char *server, const char *port,
                                  const char *proxy, const char *no_proxy,
                                  int use_ssl, BIO *bio, BIO *rbio,
                                  OSSL_HTTP_bio_cb_t bio_update_fn, void *arg,
                                  int buf_size, int overall_timeout);
int OSSL_HTTP_proxy_connect(BIO *bio, const char *server, const char *port,
                            const char *proxyuser, const char *proxypass,
                            int timeout, BIO *bio_err, const char *prog);
int OSSL_HTTP_set1_request(OSSL_HTTP_REQ_CTX *rctx, const char *path,
                           const STACK_OF(CONF_VALUE) *headers,
                           const char *content_type, BIO *req,
                           const char *expected_content_type, int expect_asn1,
                           size_t max_resp_len, int timeout, int keep_alive);
BIO *OSSL_HTTP_exchange(OSSL_HTTP_REQ_CTX *rctx, char **redirection_url);

# if defined(OPENSSL_SYS_AMIGA)
BIO *OSSL_HTTP_get_amiga_1(const char *url, const char *proxy, const char *no_proxy,
                           BIO *bio, BIO *rbio,
                           OSSL_HTTP_bio_cb_t bio_update_fn,
			   void *moreargs);
void *OSSL_HTTP_get_amiga_2(void *arg, int buf_size, const STACK_OF(CONF_VALUE) *headers,
                            const char *expected_content_type, int expect_asn1,
			    size_t max_resp_len, int timeout);

BIO * OSSL_HTTP_transfer_amiga_1(OSSL_HTTP_REQ_CTX ** prctx, const char * server,
				 const char * port, const char * path, int use_ssl,
				 const char * proxy, const char * no_proxy,
				 BIO * bio, BIO * rbio, OSSL_HTTP_bio_cb_t bio_update_fn,
				 void * moreargs);
void * OSSL_HTTP_transfer_amiga_2(void * arg, int buf_size,
				  const struct stack_st_CONF_VALUE * headers,
				  const char * content_type, BIO * req,
				  const char * expected_content_type,
				  int expect_asn1, size_t max_resp_len,
				  int timeout, int keep_alive);
# endif

# if defined(OPENSSL_SYS_AMIGA) && !defined(AMISSL_COMPILE)
#  if defined(__amigaos4__) && !defined(__USE_INLINE__)
#   define OSSL_HTTP_get(url,proxy,no_proxy,bio,rbio,bio_update_fn,arg,buf_size,headers,expected_content_type,expect_asn1,max_resp_len,timeout) \
     IAmiSSL->OSSL_HTTP_get_amiga_1(url,proxy,no_proxy,bio,rbio,bio_update_fn,  \
     IAmiSSL->OSSL_HTTP_get_amiga_2(arg,buf_size,headers,expected_content_type, \
                                    expect_asn1,max_resp_len,timeout))
#   define OSSL_HTTP_transfer(prctx,server,port,path,use_ssl,proxy,no_proxy,bio,rbio,bio_update_fn,arg,buf_size,headers,content_type,req,expected_content_type,expect_asn1,max_resp_len,timeout,keep_alive) \
     IAmiSSL->OSSL_HTTP_transfer_amiga_1(prctx,server,port,path,use_ssl,proxy,  \
                                         no_proxy,bio,rbio,bio_update_fn,       \
     IAmiSSL->OSSL_HTTP_transfer_amiga_2(arg,buf_size,headers,content_type,req, \
                                         expected_content_type,expect_asn1,     \
                                         max_resp_len,timeout,keep_alive))
#  else
#   define OSSL_HTTP_get(url,proxy,no_proxy,bio,rbio,bio_update_fn,arg,buf_size,headers,expected_content_type,expect_asn1,max_resp_len,timeout) \
     OSSL_HTTP_get_amiga_1(url,proxy,no_proxy,bio,rbio,bio_update_fn,  \
     OSSL_HTTP_get_amiga_2(arg,buf_size,headers,expected_content_type, \
                           expect_asn1,max_resp_len,timeout))
#   define OSSL_HTTP_transfer(prctx,server,port,path,use_ssl,proxy,no_proxy,bio,rbio,bio_update_fn,arg,buf_size,headers,content_type,req,expected_content_type,expect_asn1,max_resp_len,timeout,keep_alive) \
     OSSL_HTTP_transfer_amiga_1(prctx,server,port,path,use_ssl,proxy,  \
                                no_proxy,bio,rbio,bio_update_fn,       \
     OSSL_HTTP_transfer_amiga_2(arg,buf_size,headers,content_type,req, \
                                expected_content_type,expect_asn1,     \
                                max_resp_len,timeout,keep_alive))
#  endif
# else
BIO *OSSL_HTTP_get(const char *url, const char *proxy, const char *no_proxy,
                   BIO *bio, BIO *rbio,
                   OSSL_HTTP_bio_cb_t bio_update_fn, void *arg,
                   int buf_size, const STACK_OF(CONF_VALUE) *headers,
                   const char *expected_content_type, int expect_asn1,
                   size_t max_resp_len, int timeout);
BIO *OSSL_HTTP_transfer(OSSL_HTTP_REQ_CTX **prctx,
                        const char *server, const char *port,
                        const char *path, int use_ssl,
                        const char *proxy, const char *no_proxy,
                        BIO *bio, BIO *rbio,
                        OSSL_HTTP_bio_cb_t bio_update_fn, void *arg,
                        int buf_size, const STACK_OF(CONF_VALUE) *headers,
                        const char *content_type, BIO *req,
                        const char *expected_content_type, int expect_asn1,
                        size_t max_resp_len, int timeout, int keep_alive);
#endif
int OSSL_HTTP_close(OSSL_HTTP_REQ_CTX *rctx, int ok);

/* Auxiliary functions */
int OSSL_HTTP_parse_url(const char *url, int *pssl, char **puser, char **phost,
                        char **pport, int *pport_num,
                        char **ppath, char **pquery, char **pfrag);
const char *OSSL_HTTP_adapt_proxy(const char *proxy, const char *no_proxy,
                                  const char *server, int use_ssl);

# endif /* !defined(OPENSSL_NO_HTTP) */
# ifdef  __cplusplus
}
# endif
#endif /* !defined(OPENSSL_HTTP_H) */
