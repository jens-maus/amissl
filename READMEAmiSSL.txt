This archive contains developer files and example program which should
make it possible to add AmiSSL support to clients and servers.

However, this archive doesn't contain complete documentation since
AmiSSL is port of OpenSSL (http://www.openssl.org/) which also lacks
the documentation. There is some (very old) documentation that you can
find on http://psych.psy.uq.oz.au/~ftp/Crypto/ssl.html . It is for
SSLeay, predecessor of OpenSSL. I also suggest getting OpenSSL source
in case you need to use more advanced features of OpenSSL since they
have more available examples. The provided example, https.c, is
example of very simple client. It gives an example of getting a
https:// document by connecting directly to the site, and also by
connecting to the site through proxy server (SSL tunneling).

AmiSSL gives the same functionality as OpenSSL (SSLeay), but there
are a few differences as a result of shared library model.

- First you need to open amissl.library *and* initialize it.
  Don't forget to initialize it, or it won't work right:

  #include <amissl/amissl.h>

  if (AmiSSLBase = OpenLibrary("amissl.library", 1))
  {
      if (!InitAmiSSL(AmiSSL_Version, AmiSSL_CurrentVersion,
                      AmiSSL_Revision, AmiSSL_CurrentRevision,
                   /* AmiSSL_VersionOverride, TRUE,*/
                      AmiSSL_SocketBase, SocketBase,
                      TAG_DONE))
      {
          everything OK, do your stuff

          ...

          CleanupAmiSSL(TAG_DONE);
      }
      CloseLibrary(AmiSSLBase);
  }
  
  So, the first step is opening amissl.library. After that,
  InitAmiSSL is called. It returns 0 if initialization went OK.
  AmiSSL_Version and AmiSSL_Revision provide a mechanism for
  AmiSSL to protect you from possible future radical changes
  in the AmiSSL API (actually, it will probably be changes in
  OpenSSL API). You can use AmiSSL_VersionOverride, TRUE
  to force AmiSSL not to check for this. You could have an
  ENV variable or program option which would let user specify
  if your program should call InitAmiSSL with
  AmiSSL_VersionOverride, TRUE. You *must* provide
  AmiSSL_SocketBase, SocketBase if you are using SSL part of
  AmiSSL. If you are using only f. ex. big number part of AmiSSL
  you can leave this out. Of course, you get SocketBase by
  opening bsdsocket.library.

- Every process has to get its own AmiSSLBase! Do not share them!
  However, all sublibraries (DES, idea etc.) will always return
  the same library base, you can use them as you wish.

- Functions BIO_set_fp(), BIO_get_fp() and BIO_new_fp() are not
  implemented since they require FILE * and since FILE is different
  in every Amiga compiler, it can't work. But, there are replacement
  functions which have _amiga added to their name and take BPTR instead
  of FILE *. So BIO_set_fp(bio_out, stdout, BIO_NOCLOSE); becomes
  BIO_set_fp_amiga(bio_out, Output(), BIO_NOCLOSE);

- Functions that have FILE * argument are not implemented. However,
  all these functions have an equivalent that accepts BIO * instead
  of FILE * so nothing is lost.

- Every AmiSSL sublibrary has xxx_IsReal() function which
  returns 1 if library is real or 0 if it's a dummy version
  of it (for example, des_IsReal()). Also, AmiSSL library
  has EVP_xxx_IsReal() which calls coresponding xxx_IsReal()
  function (f. ex. EVP_des_IsReal() calls des_IsReal()) so
  you don't have to open des.library just to check if it's
  real, if you opened amissl.library you can do it through it.

- AmiSSL includes need very long identifier len, so if you
  are using SAS/C you have to use IDLEN=100. gcc doesn't have
  this problem. I don't know about other compilers.

- If you are using callback hooks, be sure to compile with
  NOSTACKCHECK and SAVEDS (or whatever your compiler uses).

- include/amissl and include/clib should work with any compiler.
  Other directories in include directory are SAS/C specific.

  But since you have FD files you can use FD2Pragma from Aminet
  to create files needed for your compiler. You need to add
  some types to FD2Pragma.types file (at the end of this file)
  to create some files for gcc.

  Also, a macro is used in clib/amissl_protos.h, STACK_OF(type)
  which FD2Pragma doesn't understand. To fix that, I have included
  a perl script, fixstackof.pl, which replaces all occurances of
  "STACK_OF(something)" to "STACK" which will enable you to make
  some gcc specific files. Usage:

  perl path:include/clib/amissl_protos.h path:include/clib/amissl_protos.h.tmp

  and then use amissl_protos.h.tmp in your command line instead
  of amissl_protos.h when FD2Pragma complains that it can't
  understand a function prototype. I'm a beginner in perl,
  so don't flame me if it could've been done better :)

- That's about it. If you have any questions, please contact me.

--- Start of fixstackof.pl ---
#!/usr/bin/perl -w

use strict;

open(IN, "<$ARGV[0]") || die "$ARGV[0]: $!\n";
open(OUT, ">$ARGV[1]") || die "$ARGV[1]: $!\n";
while(<IN>)
{
	while (s/^(.*?)STACK_OF\((.*?)\)(.*)$/${1}STACK$3/)
	{;}

	print OUT;
}
close(OUT);
close(IN);
--- End of fixstackof.pl ---

--- Start of addition to FD2Pragma.types ---
* AmiSSL stuff
BF_KEY                  : struct ?
BF_LONG                 : long
CAST_KEY                : struct ?
CAST_LONG               : long
DES_LONG                : long
des_key_schedule        : struct ?
const_des_cblock        : const unsigned char
des_cblock              : unsigned char
IDEA_KEY_SCHEDULE       : struct ?
MD2_CTX                 : struct ?
MD5_CTX                 : struct ?
MDC2_CTX                : struct ?
RC2_KEY                 : struct ?
RC4_KEY                 : struct ?
RC5_32_KEY              : struct ?
RIPEMD160_CTX           : struct ?
SHA_CTX                 : struct ?
*
ASN1_CTX                : struct ?
ASN1_OBJECT             : struct ?
ASN1_STRING             : struct ?
ASN1_TYPE               : struct ?
ASN1_METHOD             : struct ?
ASN1_HEADER             : struct ?
ASN1_INTEGER            : struct ?
ASN1_ENUMERATED         : struct ?
ASN1_BIT_STRING         : struct ?
ASN1_OCTET_STRING       : struct ?
ASN1_PRINTABLESTRING    : struct ?
ASN1_T61STRING          : struct ?
ASN1_IA5STRING          : struct ?
ASN1_UTCTIME            : struct ?
ASN1_GENERALIZEDTIME    : struct ?
ASN1_TIME               : struct ?
ASN1_GENERALSTRING      : struct ?
ASN1_UNIVERSALSTRING    : struct ?
ASN1_BMPSTRING          : struct ?
ASN1_VISIBLESTRING      : struct ?
ASN1_UTF8STRING         : struct ?
STACK                   : struct ?
BIO                     : struct ?
BIO_METHOD              : struct ?
BIGNUM                  : struct ?
BN_CTX                  : struct ?
BN_ULONG                : unsigned long
BN_MONT_CTX             : struct ?
BN_BLINDING             : struct ?
BN_RECP_CTX             : struct ?
BUF_MEM                 : struct ?
COMP_METHOD             : struct ?
COMP_CTX                : struct ?
CONF_VALUE              : struct ?
LHASH_NODE              : struct ?
LHASH                   : struct ?
CRYPTO_MEM_FUNC         : struct ?
CRYPTO_EX_DATA          : struct ?
CRYPTO_EX_DATA_FUNCS    : struct ?
DH                      : struct ?
DSA                     : struct ?
DSA_SIG                 : struct ?
ERR_STATE               : struct ?
ERR_STRING_DATA         : struct ?
EVP_PKEY                : struct ?
EVP_PKEY_MD             : struct ?
EVP_PKEY_METHOD         : struct ?
EVP_MD                  : struct ?
EVP_MD_CTX              : struct ?
EVP_CIPHER              : struct ?
EVP_CIPHER_INFO         : struct ?
EVP_CIPHER_CTX          : struct ?
EVP_ENCODE_CTX          : struct ?
EVP_PBE_KEYGEN          : struct ?
HMAC_CTX                : struct ?
OBJ_NAME                : struct ?
PEM_ENCODE_SEAL_CTX     : struct ?
PEM_USER                : struct ?
PEM_CTX                 : struct ?
PKCS12_MAC_DATA         : struct ?
PKCS12                  : struct ?
PKCS12_SAFEBAG          : struct ?
PKCS12_BAGS             : struct ?
PKCS7_ISSUER_AND_SERIAL : struct ?
PKCS7_SIGNER_INFO       : struct ?
PKCS7_RECIP_INFO        : struct ?
PKCS7_SIGNED            : struct ?
PKCS7_ENC_CONTENT       : struct ?
PKCS7_ENVELOPE          : struct ?
PKCS7_SIGN_ENVELOPE     : struct ?
PKCS7_DIGEST            : struct ?
PKCS7_ENCRYPT           : struct ?
PKCS7                   : struct ?
RAND_METHOD             : struct ?
RSA                     : struct ?
RSA_METHOD              : struct ?
TXT_DB                  : struct ?
X509_OBJECTS            : struct ?
X509_ALGOR              : struct ?
X509_VAL                : struct ?
X509_PUBKEY             : struct ?
X509_SIG                : struct ?
X509_NAME_ENTRY         : struct ?
X509_NAME               : struct ?
X509_EXTENSION          : struct ?
X509_ATTRIBUTE          : struct ?
X509_REQ_INFO           : struct ?
X509_REQ                : struct ?
X509_CINF               : struct ?
X509                    : struct ?
X509_REVOKED            : struct ?
X509_CRL_INFO           : struct ?
X509_CRL                : struct ?
X509_PKEY               : struct ?
X509_INFO               : struct ?
NETSCAPE_SPKAC          : struct ?
NETSCAPE_SPKI           : struct ?
NETSCAPE_CERT_SEQUENCE  : struct ?
CBC_PARAM               : struct ?
PBEPARAM                : struct ?
PBE2PARAM               : struct ?
PBKDF2PARAM             : struct ?
PKCS8_PRIV_KEY_INFO     : struct ?
X509V3_CONF_METHOD      : struct ?
X509V3_EXT_METHOD       : struct ?
X509V3_CTX              : struct ?
X509_HASH_DIR_CTX       : struct ?
X509_CERT_FILE_CTX      : struct ?
X509_OBJECT             : struct ?
X509_LOOKUP             : struct ?
X509_LOOKUP_METHOD      : struct ?
X509_STORE_CTX          : struct ?
X509_STORE              : struct ?
BIT_STRING_BITNAME      : struct ?
BASIC_CONSTRAINTS       : struct ?
PKEY_USAGE_PERIOD       : struct ?
GENERAL_NAME            : struct ?
DIST_POINT_NAME         : struct ?
DIST_POINT              : struct ?
AUTHORITY_KEYID         : struct ?
SXNETID                 : struct ?
SXNET                   : struct ?
NOTICEREF               : struct ?
USERNOTICE              : struct ?
POLICYQUALINFO          : struct ?
POLICYINFO              : struct ?
pem_password_cb         : void
SSL_CIPHER              : struct ?
SSL                     : struct ?
SSL_CTX                 : struct ?
SSL_METHOD              : struct ?
SSL_SESSION             : struct ?
SSL_COMP                : struct ?
SSL2_CTX                : struct ?
SSL3_RECORD             : struct ?
SSL3_BUFFER             : struct ?
SSL3_CTX                : struct ?
CERT_PKEY               : struct ?
CERT                    : struct ?
SESS_CERT               : struct ?
SSL3_ENC_METHOD         : struct ?
SSL3_COMP               : struct ?
time_t                  : long
size_t                  : unsigned long
--- End of addition to FD2Pragma.types ---
