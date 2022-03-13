/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#include "amissl_glue.h"
#include "amisslext_glue.h"

// ---

int RSA_X931_derive_ex_amiga_1(RSA *rsa, BIGNUM *p1, BIGNUM *p2,
                               BIGNUM *q1, BIGNUM *q2,
                               const BIGNUM *Xp1, void *moreargs)
{
  int result, *a = (int *)moreargs;
  if ((a != NULL))
  {
    result = RSA_X931_derive_ex(rsa, p1, p2, q1, q2, Xp1,
				(const BIGNUM *)a[0], (const BIGNUM *)a[1],
				(const BIGNUM *)a[2], (const BIGNUM *)a[3],
				(const BIGNUM *)a[4], (const BIGNUM *)a[5],
				(BN_GENCB *)a[6]);
    free(a);
  }
  else
  {
    result = 0;
  }
  return result;
}

void *RSA_X931_derive_ex_amiga_2(const BIGNUM *Xp2, const BIGNUM *Xp,
                                 const BIGNUM *Xq1, const BIGNUM *Xq2,
                                 const BIGNUM *Xq, const BIGNUM *e,
                                 BN_GENCB *cb)
{
  int *moreargs = malloc(7*sizeof(int));
  if (moreargs != NULL)
  {
    moreargs[0] = (int)Xp2;
    moreargs[1] = (int)Xp;
    moreargs[2] = (int)Xq1;
    moreargs[3] = (int)Xq2;
    moreargs[4] = (int)Xq;
    moreargs[5] = (int)e;
    moreargs[6] = (int)cb;
  }
  return (void *)moreargs;
}

// ---

BIO *OSSL_HTTP_get_amiga_1(const char *url, const char *proxy, const char *no_proxy,
                           BIO *bio, BIO *rbio,
                           OSSL_HTTP_bio_cb_t bio_update_fn,
			   void *moreargs)
{
  BIO *result;
  int *a = (int *)moreargs;
  if ((a != NULL))
  {
    result = OSSL_HTTP_get(url, proxy, no_proxy, bio, rbio, bio_update_fn,
			   (void *)a[0], (int)a[1], (const STACK_OF(CONF_VALUE) *)a[2],
			   (const char *)a[3],(int)a[4],(size_t)a[5],(int)a[6]);
    free(a);
  }
  else
  {
    result = NULL;
  }
  return result;
}

void *OSSL_HTTP_get_amiga_2(void *arg, int buf_size, const STACK_OF(CONF_VALUE) *headers,
                            const char *expected_content_type, int expect_asn1,
			    size_t max_resp_len, int timeout)
{
  int *moreargs = malloc(7*sizeof(int));
  if (moreargs != NULL)
  {
    moreargs[0] = (int)arg;
    moreargs[1] = (int)buf_size;
    moreargs[2] = (int)headers;
    moreargs[3] = (int)expected_content_type;
    moreargs[4] = (int)expect_asn1;
    moreargs[5] = (int)max_resp_len;
    moreargs[6] = (int)timeout;
  }
  return (void *)moreargs;
}

// ---

BIO * OSSL_HTTP_transfer_amiga_1(OSSL_HTTP_REQ_CTX ** prctx, const char * server,
				 const char * port, const char * path, int use_ssl,
				 const char * proxy, const char * no_proxy,
				 BIO * bio, BIO * rbio, OSSL_HTTP_bio_cb_t bio_update_fn,
				 void * moreargs)
{
  BIO *result;
  int *a = (int *)moreargs;
  if ((a != NULL))
  {
    result = OSSL_HTTP_transfer(prctx, server, port, path, use_ssl, proxy, no_proxy,
				bio, rbio, bio_update_fn,
				(void *)a[0], (int)a[1],
				(const struct stack_st_CONF_VALUE *)a[2],
				(const char *)a[3], (BIO *)a[4], (const char *)a[5],
				(int)a[6], (size_t)a[7], (int)a[8], (int)a[9]);
    free(a);
  }
  else
  {
    result = NULL;
  }
  return result;
}

void * OSSL_HTTP_transfer_amiga_2(void * arg, int buf_size,
				  const struct stack_st_CONF_VALUE * headers,
				  const char * content_type, BIO * req,
				  const char * expected_content_type,
				  int expect_asn1, size_t max_resp_len,
				  int timeout, int keep_alive)
{
  int *moreargs = malloc(10*sizeof(int));
  if (moreargs != NULL)
  {
    moreargs[0] = (int)arg;
    moreargs[1] = (int)buf_size;
    moreargs[2] = (int)headers;
    moreargs[3] = (int)content_type;
    moreargs[4] = (int)req;
    moreargs[5] = (int)expected_content_type;
    moreargs[6] = (int)expect_asn1;
    moreargs[7] = (int)max_resp_len;
    moreargs[8] = (int)timeout;
    moreargs[9] = (int)keep_alive;
  }
  return (void *)moreargs;
}

// ---

int EVP_PBE_scrypt_ex_amiga_1(const char * pass, size_t passlen,
			      const unsigned char * salt,
			      uint64_t N, uint64_t r, uint64_t p,
			      uint64_t maxmem, void * moreargs)
{
  int result, *a = (int *)moreargs;
  if (a != NULL)
  {
    result = EVP_PBE_scrypt_ex(pass, passlen, salt, (size_t)a[0], N, r, p, maxmem,
			       (unsigned char *)a[1], (size_t)a[2], (OSSL_LIB_CTX *)a[3],
			       (const char *)a[4]);
    free(a);
  }
  else
  {
    result = 0;
  }
  return result;
}

void * EVP_PBE_scrypt_ex_amiga_2(size_t saltlen, unsigned char * key, size_t keylen,
				 OSSL_LIB_CTX * ctx, const char * propq)
{
  int *moreargs = malloc(5*sizeof(int));
  if (moreargs != NULL)
  {
    moreargs[0] = (int)saltlen;
    moreargs[1] = (int)key;
    moreargs[2] = (int)keylen;
    moreargs[3] = (int)ctx;
    moreargs[4] = (int)propq;
  }
  return (void *)moreargs;
}

// ---

#define IMPLEMENT_OSSL_PARAM_construct_LP0(name) \
  void OSSL_PARAM_construct_##name##_amiga(OSSL_PARAM *result) \
  { *result = OSSL_PARAM_construct_##name(); }

#define IMPLEMENT_OSSL_PARAM_construct_LP1(name, type) \
  void OSSL_PARAM_construct_##name##_amiga(OSSL_PARAM *result, const char *key, type *buf) \
  { *result = OSSL_PARAM_construct_##name(key,buf); }

#define IMPLEMENT_OSSL_PARAM_construct_LP2(name, type) \
  void OSSL_PARAM_construct_##name##_amiga(OSSL_PARAM *result, const char *key, type *buf, size_t bsize) \
  { *result = OSSL_PARAM_construct_##name(key,buf,bsize); }

IMPLEMENT_OSSL_PARAM_construct_LP1(int, int)
IMPLEMENT_OSSL_PARAM_construct_LP1(uint, unsigned int)
IMPLEMENT_OSSL_PARAM_construct_LP1(long, long int)
IMPLEMENT_OSSL_PARAM_construct_LP1(ulong, unsigned long int)
IMPLEMENT_OSSL_PARAM_construct_LP1(int32, int32_t)
IMPLEMENT_OSSL_PARAM_construct_LP1(uint32, uint32_t)
IMPLEMENT_OSSL_PARAM_construct_LP1(int64, int64_t)
IMPLEMENT_OSSL_PARAM_construct_LP1(uint64, uint64_t)
IMPLEMENT_OSSL_PARAM_construct_LP1(size_t, size_t)
IMPLEMENT_OSSL_PARAM_construct_LP1(time_t, time_t)
IMPLEMENT_OSSL_PARAM_construct_LP2(BN, unsigned char)
IMPLEMENT_OSSL_PARAM_construct_LP1(double, double)
IMPLEMENT_OSSL_PARAM_construct_LP2(utf8_string, char)
IMPLEMENT_OSSL_PARAM_construct_LP2(utf8_ptr, char *)
IMPLEMENT_OSSL_PARAM_construct_LP2(octet_string, void)
IMPLEMENT_OSSL_PARAM_construct_LP2(octet_ptr, void *)
IMPLEMENT_OSSL_PARAM_construct_LP0(end)
