#ifndef HEADER_COMP_H
#define HEADER_COMP_H

#include <amissl/crypto.h>

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct comp_method_st
	{
	int type;		/* NID for compression library */
	const char *name;	/* A text string to identify the library */
	int (*init)();
	void (*finish)();
	int (*compress)();
	int (*expand)();
	long (*ctrl)();
	long (*callback_ctrl)();
	} COMP_METHOD;

typedef struct comp_ctx_st
	{
	COMP_METHOD *meth;
	unsigned long compress_in;
	unsigned long compress_out;
	unsigned long expand_in;
	unsigned long expand_out;

	CRYPTO_EX_DATA	ex_data;
	} COMP_CTX;

/* Error codes for the COMP functions. */

/* Function codes. */

/* Reason codes. */

#ifdef  __cplusplus
}
#endif
#endif
