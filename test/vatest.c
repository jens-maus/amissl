/* biotest.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <proto/dos.h>
#include <openssl/bio.h>
#include <openssl/err.h>


int main(int argc, char *argv[])
{
	BIO *out;
	double floatval = 3.3;
	long arglist[]={
		(int)"string",
		(int)43,
		0,0,
	};
	
	char buffer[128];
	BIO_snprintf(buffer,128,"Test %s of %d in %f","value",43,3.3);
	printf("Buffer: >>%s<<\n",buffer);

	BIO_snprintf(buffer,16,"Test %s of %d in %f","value",43,3.3);
	printf("Buffer: >>%s<<\n",buffer);

	arglist[2] = ((int *)&floatval)[0];
	arglist[3] = ((int *)&floatval)[1];

	BIO_vsnprintf(buffer,128,"Test %s of %d in %f",arglist);
	printf("Buffer: >>%s<<\n",buffer);

	BIO_vsnprintf(buffer,16,"Test %s of %d in %f",arglist);
	printf("Buffer: >>%s<<\n",buffer);

	if (out = BIO_new(BIO_s_file()))
	{
		BIO_set_fp_amiga(out, Output(), BIO_NOCLOSE | BIO_FP_TEXT);
		BIO_vprintf(out,"Test %s of %d in %f\n",arglist);

		BIO_printf(out,"Error test: \n");
		SYSerr(43,42);
		ERR_add_error_data(4,"address=","1234"," offset=","5678");
		ERR_print_errors(out);
		BIO_free(out);
	}
}
