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

/* biotest.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <proto/dos.h>
#include <openssl/bio.h>
#include <openssl/err.h>

#include <internal/amissl_compiler.h>

int main(int argc UNUSED, char **argv UNUSED)
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

	BIO_vsnprintf(buffer, sizeof(buffer), "Test %s of %d in %f", (void *)arglist);
	printf("Buffer: >>%s<<\n",buffer);

	BIO_vsnprintf(buffer, 16, "Test %s of %d in %f", (void *)arglist);
	printf("Buffer: >>%s<<\n",buffer);

	if((out = BIO_new(BIO_s_file())) != NULL)
	{
		BIO_set_fp_amiga(out, Output(), BIO_NOCLOSE | BIO_FP_TEXT);
		BIO_vprintf(out, "Test %s of %d in %f\n", (void *)arglist);

		BIO_printf(out,"Error test: \n");
		SYSerr(43,42);
		ERR_add_error_data(4,"address=","1234"," offset=","5678");
		ERR_print_errors(out);
		BIO_free(out);
	}

  return 0;
}
