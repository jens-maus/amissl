#include <stdio.h>
#include <errno.h>
#include <dos/dos.h>
#include <proto/dos.h>
#include <safelibcconfig.h>

extern void __seterrno(void);

int remove(const char *filename)
{ 
  intsDisable();
  if(DeleteFile((char *)filename))
  {
    intsRestore();
    return 0;
  }
  else
  { __seterrno();
    intsRestore();
    return -1;
  }
}
