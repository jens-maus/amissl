#include <proto/exec.h>

void main(void)
{
	struct Library *lib;
	if(lib = OpenLibrary("libs:amissl/cast.library",0))
	{
		CloseLibrary(lib);	
	}
}
