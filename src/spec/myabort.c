#include <proto/exec.h>
#include <intuition/intuition.h>
#include <proto/intuition.h>

static const struct EasyStruct easy_struct =
{
	sizeof(struct EasyStruct), 0, "AmiSSL error",
	"A fatal AmiSSL error has occured!", "Abort"
};

void myabort(void)
{
	EasyRequestArgs(NULL, &easy_struct, NULL, NULL);

	Wait(0);
}
