#include <proto/exec.h>

unsigned long getpid(void)
{
	return((unsigned long)FindTask(NULL));
}
