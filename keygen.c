#include <proto/exec.h>

#include <stdio.h>
#include <string.h>
#include <amissl/buffer.h>
#include <amissl/bio.h>
#include <amissl/evp.h>
#include <amissl/crypto.h>
#include <amissl/x509.h>
#include <amissl/pem.h>
#include <proto/amissl.h>

struct Library *AmiSSLBase;

/* generate the MD5 hash of a public key - we use this for storing
   private keys and user certificates */
char *
HashPublicKey(
	      EVP_PKEY *k)
{
  unsigned char *s, *p;
  int i, j;
  char *name = NULL;

  i = i2d_PublicKey(k, NULL);
  s = CRYPTO_malloc(i + 1);
  if (s) {
    EVP_MD_CTX md_ctx;
    unsigned char dg[EVP_MAX_MD_SIZE];
    unsigned int l;

    p = s;
    i2d_PublicKey(k, &p);
    EVP_DigestInit(&md_ctx, EVP_md5());
    EVP_DigestUpdate(&md_ctx, s, i);
    EVP_DigestFinal(&md_ctx, dg, &l);
      
    name = CRYPTO_malloc(EVP_MAX_MD_SIZE * 2 + 2);
    if (name) {
      for (j = 0; j < (int)l; j++) {
	sprintf(&name[j*2], "%02lx", (long)dg[j]);
      }
      name[j * 2] = '\0';
    }
    CRYPTO_free(s);
  }
  return name;
}

/* Generate a public key pair, save the private key to disk, and
   format the public key as a Netscape signed public key and challenge
   (SPKAC), ready for submission to a remote server */

__stdargs __saveds void genprime_cb(int mode,int cnt,void *arg)
{
	printf("%d %d\n",mode,cnt);
}

int
GenerateSPKAC(
	      int num,
	      const char *challenge,
	      const char *path,
	      char **spkac)
{
  NETSCAPE_SPKI *nspki;
  int i, j, ret = 0;
  unsigned char *s,*p;
  RSA *rsa = NULL;
  EVP_CIPHER *enc=NULL;
  EVP_MD *md = EVP_md5();
  BIO *out = NULL;
  EVP_PKEY k;
  EVP_MD_CTX md_ctx;
  unsigned char dg[EVP_MAX_MD_SIZE];
  char *name;
  unsigned int n;

  out = BIO_new(BIO_s_file());
  if (out) {
    rsa = RSA_generate_key(num, RSA_F4, genprime_cb,NULL);
    if (rsa) {
      i = i2d_RSAPublicKey(rsa,NULL);
      s = CRYPTO_malloc(i + 1);
      if (s) {
	p = s;
	i2d_RSAPublicKey(rsa,&p);
	EVP_DigestInit(&md_ctx, md);
	EVP_DigestUpdate(&md_ctx,s,i);
	EVP_DigestFinal(&md_ctx,dg,&n);

	name = CRYPTO_malloc(strlen(path) + EVP_MAX_MD_SIZE * 2 + 2);
	if (name) {
	  p = &name[sprintf(name, "%s/", path)];
	  for (j = 0; j < (int)n; j++) {
	    sprintf(&p[j*2],"%02lx", (long)dg[j]);
	  }
	  p[j * 2] = '\0';
	  if (BIO_write_filename(out, name) > 0) {
	    /* We really ought to do something about encrypting these... */
	    if (PEM_write_bio_RSAPrivateKey(out, rsa, enc, NULL, 0, NULL, NULL) > 0) {
	      nspki = NETSCAPE_SPKI_new();
	      if (nspki) {
		nspki->spkac->pubkey->algor->algorithm = OBJ_nid2obj(NID_rsaEncryption);
		if (nspki->spkac->pubkey->algor->parameter)
		  CRYPTO_free((char *)nspki->spkac->pubkey->algor->parameter);
		nspki->spkac->pubkey->algor->parameter = ASN1_TYPE_new();
		if (nspki->spkac->pubkey->algor->parameter) {
		  nspki->spkac->pubkey->algor->parameter->type = V_ASN1_NULL;

		  nspki->spkac->pubkey->public_key->length = i;
		  if (nspki->spkac->pubkey->public_key->data)
		    CRYPTO_free(nspki->spkac->pubkey->public_key->data);
		  nspki->spkac->pubkey->public_key->data = s;
		  s = NULL;
		  
		  k.type = EVP_PKEY_RSA;
		  k.pkey.rsa = rsa;

		  nspki->sig_algor->algorithm = OBJ_nid2obj(NID_md5WithRSAEncryption);
		  if (nspki->sig_algor->parameter)
		    CRYPTO_free((char *)nspki->sig_algor->parameter);
		  nspki->sig_algor->parameter = ASN1_TYPE_new();
		  if (nspki->sig_algor->parameter) {
		    nspki->sig_algor->parameter->type = V_ASN1_NULL;
		      
		    nspki->spkac->challenge->type = V_ASN1_IA5STRING;
		    if (nspki->spkac->challenge->data)
		      CRYPTO_free(nspki->spkac->challenge->data);
		    nspki->spkac->challenge->data = (char *)challenge;
		    nspki->spkac->challenge->length = strlen(challenge);
		    NETSCAPE_SPKI_sign(nspki, &k, md);
		    i = i2d_NETSCAPE_SPKI(nspki, NULL);
		    s = CRYPTO_malloc(i + 1);
		    if (s) {
		      BIO *f;

		      p = s;
		      i2d_NETSCAPE_SPKI(nspki, &p);
		      BIO_free(out);
		      f = BIO_new(BIO_s_mem());
		      if (f) {
			out = BIO_new(BIO_f_base64());
			if (out) {
			  BUF_MEM *bm;
			  
			  BIO_set_flags(out,BIO_FLAGS_BASE64_NO_NL);

			  BIO_push(out, f);
			  bm = BUF_MEM_new();
			  if (bm) {
			    BIO_set_mem_buf(out, bm, BIO_CLOSE);
			    if (BIO_write(out, s, i) == i &&
				BIO_flush(out) >= 0 &&
				BIO_write(f, "", 1) == 1) {
			      *spkac = bm->data;
			      bm->data = NULL;
			      bm->length = bm->max = 0;
			      ret = 1;
			    }
			  }
			}
		      }
		    }
		    nspki->spkac->challenge->data = NULL;
		  }
		}
		NETSCAPE_SPKI_free(nspki);
	      }
	    }
	  }
	  CRYPTO_free(name);
	}
	if (s)
	  CRYPTO_free(s);
	RSA_free(rsa);
      }
    }
    if (out)
      BIO_free(out);
  }
  return ret;
}

int
main(void)
{
  if (AmiSSLBase = OpenLibrary("amissl.library", 0)) {
    char *s;

    InitAmiSSL(TAG_DONE);

    /* first exercise the SPKAC generator, we'd normally call this
     in response to a <KEYGEN> form. If it succeeds we just free
     the SPKAC.
     
     some way of finding the maximum number of bits the RSA code a
     library supports would be nice (RSAref is limited to 1024,
     SSLeay has no limit). I can't see anything immediately tho'...
     
     Probably we just have to set the limit at 1024 bits, since
     Netscape barfs at anything more than that, and anyway keys
     bigger than that take forever to generate on 99% of Amiga's. */
    if (GenerateSPKAC(128, "TestChallenge", "AmiSSL:usercerts", &s)) {
      /* we have a new private key, stored by its public key
	 fingerprint now... we should now send the SPKAC to the
	 remote server */
      printf("SPKAC = %s", s);
      CRYPTO_free(s);
    }
    CleanupAmiSSL(TAG_DONE);
    CloseLibrary(AmiSSLBase);
  }
}
