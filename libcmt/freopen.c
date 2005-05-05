#include <dos/dos.h>
#include <proto/dos.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

extern void __seterrno(void);

FILE *freopen(const char *filename,const char *mode,FILE *stream)
{ int error;
  error=__fflush(stream);
  if(stream->file>2)
  { close(stream->file);
    if(stream->name!=NULL) /* file is temporary */
    { BPTR cd;
      cd=CurrentDir(stream->tmpdir); /* cd t: */
      if(!DeleteFile(stream->name))  /* delete file */
      { __seterrno();
        error=1; }
      free(stream->name); /* free filename */
      stream->name=NULL;
      UnLock(CurrentDir(cd)); /* cd back, unlock t: */
    }
    stream->file=0l;
  }
  if(error)
    return NULL;

  if(filename!=NULL)
  { long file;
    long flags=O_RDONLY;
    int append=0,plus=1;
    if(mode!=NULL)
    { switch(mode[0])
      {
        case 'r':
          break;
        case 'w':
          flags=O_WRONLY|O_CREAT|O_TRUNC;
          break;
        case 'a':
          flags=O_WRONLY|O_CREAT;
          append=1;
          break;
        default:
          return NULL;
      }
      if(mode[1]=='b')
        plus=2;
      switch(mode[plus])
      {
        case '+':
          flags=(flags&~O_ACCMODE)|O_RDWR;
          if(mode[plus+1])
            return NULL;
          break;
        case '\0':
          break;
        default:
          return NULL;
      }
    }

    if((long)filename<4)
      file=(long)filename-1;
    else
      if((file=open(filename,flags,0777))<0)
        return NULL;
    
    if(append&&lseek(file,0,SEEK_END)<0)
      return NULL;

    stream->flags&=~0x6f; /* clear a lot of flags */
    if(isatty(file))
      stream->flags|=1; /* set linebuffered flag */
   
    stream->file=file;
  }

  return stream;
}
