#include <proto/exec.h>
#include <clib/usergroup_protos.h>
#include <pragmas/usergroup_pragmas.h>

#pragma libcall UserGroupBase _getuid 30 00
long _getuid(void);

long getuid(void)
{
	struct Library *UserGroupBase;
	long ret = 0;

	if ((UserGroupBase = OpenLibrary("usergroup.library", 1)) || (UserGroupBase = OpenLibrary("AmiTCP:Libs/usergroup.library", 1)))
	{
		ret = _getuid();
		CloseLibrary(UserGroupBase);
	}

	return(ret);
}
