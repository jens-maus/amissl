#include <proto/exec.h>

void mysprintf(char *buffer, char *format, ...)
{
	RawDoFmt(format, &format + 1, (void *)"\x16\xC0\x4E\x75", (APTR)buffer);
}
