#include <proto/exec.h>

#define PRAGMAS_USERGROUP_H
#define INLINE4_USERGROUP_H
#include <proto/usergroup.h>

#ifndef __amigaos4__
#pragma libcall UserGroupBase _getuid 30 00
long _getuid(void);
#endif

long getuid(void)
{
	struct Library *UserGroupBase;
#ifdef __amigaos4__
	struct UserGroupIFace *IUserGroup;
#endif
	long ret = 0;

	if ((UserGroupBase = OpenLibrary("usergroup.library", 1)) || (UserGroupBase = OpenLibrary("AmiTCP:Libs/usergroup.library", 1)))
	{
#ifndef __amigaos4__
		ret = _getuid();
#else
		if (IUserGroup = (struct UserGroupIFace *)GetInterface(UserGroupBase, "main", 1, NULL))
		{
			ret = IUserGroup->getuid();
			DropInterface((struct Interface *)IUserGroup);
		}
#endif
		CloseLibrary(UserGroupBase);
	}

	return(ret);
}
