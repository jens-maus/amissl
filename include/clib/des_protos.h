#ifndef CLIB_DES_PROTOS_H
#define CLIB_DES_PROTOS_H

#include <amissl/des.h>

long InitDES(struct Library *AmiSSLBase);
long CleanupDES(void);

const char *DES_options(void);
void DES_ecb3_encrypt(const_DES_cblock *input, DES_cblock *output,
		      DES_key_schedule *ks1,DES_key_schedule *ks2,
		      DES_key_schedule *ks3, int enc);
DES_LONG DES_cbc_cksum(const unsigned char *input,DES_cblock *output,
		       long length,DES_key_schedule *schedule,
		       const_DES_cblock *ivec);
/* DES_cbc_encrypt does not update the IV!  Use DES_ncbc_encrypt instead. */
void DES_cbc_encrypt(const unsigned char *input,unsigned char *output,
		     long length,DES_key_schedule *schedule,DES_cblock *ivec,
		     int enc);
void DES_ncbc_encrypt(const unsigned char *input,unsigned char *output,
		      long length,DES_key_schedule *schedule,DES_cblock *ivec,
		      int enc);
void DES_xcbc_encrypt(const unsigned char *input,unsigned char *output,
		      long length,DES_key_schedule *schedule,DES_cblock *ivec,
		      const_DES_cblock *inw,const_DES_cblock *outw,int enc);
void DES_cfb_encrypt(const unsigned char *in,unsigned char *out,int numbits,
		     long length,DES_key_schedule *schedule,DES_cblock *ivec,
		     int enc);
void DES_ecb_encrypt(const_DES_cblock *input,DES_cblock *output,
		     DES_key_schedule *ks,int enc);

void DES_encrypt1(DES_LONG *data,DES_key_schedule *ks, int enc);

/* 	This functions is the same as DES_encrypt1() except that the DES
	initial permutation (IP) and final permutation (FP) have been left
	out.  As for DES_encrypt1(), you should not use this function.
	It is used by the routines in the library that implement triple DES.
	IP() DES_encrypt2() DES_encrypt2() DES_encrypt2() FP() is the same
	as DES_encrypt1() DES_encrypt1() DES_encrypt1() except faster :-). */
void DES_encrypt2(DES_LONG *data,DES_key_schedule *ks, int enc);

void DES_encrypt3(DES_LONG *data, DES_key_schedule *ks1,
		  DES_key_schedule *ks2, DES_key_schedule *ks3);
void DES_decrypt3(DES_LONG *data, DES_key_schedule *ks1,
		  DES_key_schedule *ks2, DES_key_schedule *ks3);
void DES_ede3_cbc_encrypt(const unsigned char *input,unsigned char *output, 
			  long length,
			  DES_key_schedule *ks1,DES_key_schedule *ks2,
			  DES_key_schedule *ks3,DES_cblock *ivec,int enc);
void DES_ede3_cbcm_encrypt(const unsigned char *in,unsigned char *out,
			   long length,
			   DES_key_schedule *ks1,DES_key_schedule *ks2,
			   DES_key_schedule *ks3,
			   DES_cblock *ivec1,DES_cblock *ivec2,
			   int enc);
void DES_ede3_cfb64_encrypt(const unsigned char *in,unsigned char *out,
			    long length,DES_key_schedule *ks1,
			    DES_key_schedule *ks2,DES_key_schedule *ks3,
			    DES_cblock *ivec,int *num,int enc);
void DES_ede3_ofb64_encrypt(const unsigned char *in,unsigned char *out,
			    long length,DES_key_schedule *ks1,
			    DES_key_schedule *ks2,DES_key_schedule *ks3,
			    DES_cblock *ivec,int *num);

void DES_xwhite_in2out(const_DES_cblock *DES_key,const_DES_cblock *in_white,
		       DES_cblock *out_white);

int DES_enc_read(int fd,void *buf,int len,DES_key_schedule *sched,
		 DES_cblock *iv);
int DES_enc_write(int fd,const void *buf,int len,DES_key_schedule *sched,
		  DES_cblock *iv);
char *DES_fcrypt(const char *buf,const char *salt, char *ret);
char *DES_crypt(const char *buf,const char *salt);
void DES_ofb_encrypt(const unsigned char *in,unsigned char *out,int numbits,
		     long length,DES_key_schedule *schedule,DES_cblock *ivec);
void DES_pcbc_encrypt(const unsigned char *input,unsigned char *output,
		      long length,DES_key_schedule *schedule,DES_cblock *ivec,
		      int enc);
DES_LONG DES_quad_cksum(const unsigned char *input,DES_cblock output[],
			long length,int out_count,DES_cblock *seed);
int DES_random_key(DES_cblock *ret);
void DES_set_odd_parity(DES_cblock *key);
int DES_check_key_parity(const_DES_cblock *key);
int DES_is_weak_key(const_DES_cblock *key);
/* DES_set_key (= set_key = DES_key_sched = key_sched) calls
 * DES_set_key_checked if global variable DES_check_key is set,
 * DES_set_key_unchecked otherwise. */
int DES_set_key(const_DES_cblock *key,DES_key_schedule *schedule);
int DES_key_sched(const_DES_cblock *key,DES_key_schedule *schedule);
int DES_set_key_checked(const_DES_cblock *key,DES_key_schedule *schedule);
void DES_set_key_unchecked(const_DES_cblock *key,DES_key_schedule *schedule);
void DES_string_to_key(const char *str,DES_cblock *key);
void DES_string_to_2keys(const char *str,DES_cblock *key1,DES_cblock *key2);
void DES_cfb64_encrypt(const unsigned char *in,unsigned char *out,long length,
		       DES_key_schedule *schedule,DES_cblock *ivec,int *num,
		       int enc);
void DES_ofb64_encrypt(const unsigned char *in,unsigned char *out,long length,
		       DES_key_schedule *schedule,DES_cblock *ivec,int *num);

int DES_read_password(DES_cblock *key, const char *prompt, int verify);
int DES_read_2passwords(DES_cblock *key1, DES_cblock *key2, const char *prompt,
	int verify);

#endif /* CLIB_DES_PROTOS_H */
