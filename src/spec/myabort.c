#include <proto/exec.h>
#include <intuition/intuition.h>
#include <proto/intuition.h>

void myabort(void)
{
	struct EasyStruct es = {sizeof(struct EasyStruct), 0, "AmiSSL request",
							"Fatal AmiSSL error has occured!", "OK"};

	EasyRequestArgs(NULL, &es, NULL, NULL);

	Wait(0);
}
