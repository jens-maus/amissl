/* crypto/des/read_pwd_amiga.c */
/* This file introduces Amiga specific password reading which uses
 * reqtools.library. If library is not present, it will fail.
 */

#include "des_locl.h"
#include <proto/exec.h>
#include <utility/tagitem.h>
#include <libraries/reqtools.h>
#include <clib/reqtools_protos.h>
#include <pragmas/reqtools_pragmas.h>

int des_read_pw_string(buf, length, prompt, verify)
char *buf;
int length;
const char *prompt;
int verify;
{
	char buff[BUFSIZ];
	int ret;

	ret = des_read_pw(buf, buff, (length > BUFSIZ) ? BUFSIZ : length, prompt, verify);
	memset(buff, 0, BUFSIZ);
	return(ret);
}

/* return 0 if ok, 1 (or -1) otherwise */
int des_read_pw(buf, buff, size, prompt, verify)
char *buf;
char *buff;
int size;
const char *prompt;
int verify;
{
	int number = 5;
	int ok = 0;
	struct TagItem invtag[] = {RTGS_Invisible, TRUE, TAG_END, NULL};
	struct ReqToolsBase *ReqToolsBase;

	if (ReqToolsBase = (struct ReqToolsBase *)OpenLibrary("reqtools.library", 38))
	{
		while (!ok && number--)
		{
			buf[0] = '\0';
			if (rtGetStringA(buf, size, (char *)prompt, NULL, &invtag[0]))
			{
				if (verify)
				{
					*buff = '\0';
					if (!rtGetStringA(buff, size, "Verifying password", NULL, &invtag[0])
						|| (strcmp(buf,buff) != 0))
					{
							rtEZRequestA("Verify error!", "Cancel", NULL, NULL, NULL);
							break;
					}
				}
				ok = 1;
			}
		}
		CloseLibrary((struct Library *)ReqToolsBase);
	}
	return(!ok);
}
