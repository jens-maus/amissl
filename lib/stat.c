#include <sys/stat.h>
#include <dos/dos.h>
#include <dos/dosextens.h>

#include <proto/dos.h>
#include <proto/exec.h>

/*
 * 2922 is the number of days between 1.1.1970 and 1.1.1978 (2 leap years and 6 normal)
 * 1440 is the number of minutes per day
 *   60 is the number of seconds per minute 
 */ 

extern long __gmtoffset;

static int __stat(struct stat *buf,struct FileInfoBlock *fib)
{
   buf->st_dev=0;
   buf->st_ino=fib->fib_DiskKey;
   buf->st_mode=
     (fib->fib_DirEntryType<0?S_IFREG:
        (fib->fib_DirEntryType!=ST_SOFTLINK?S_IFDIR:S_IFLNK))|
     (fib->fib_Protection&FIBF_READ?0:S_IRUSR)|
     (fib->fib_Protection&FIBF_WRITE?0:S_IWUSR)|
     (fib->fib_Protection&FIBF_EXECUTE?0:S_IXUSR)|
     (fib->fib_Protection&FIBF_GRP_READ?S_IRGRP:0)|
     (fib->fib_Protection&FIBF_GRP_WRITE?S_IWGRP:0)|
     (fib->fib_Protection&FIBF_GRP_EXECUTE?S_IXGRP:0)|
     (fib->fib_Protection&FIBF_OTR_READ?S_IROTH:0)|
     (fib->fib_Protection&FIBF_OTR_WRITE?S_IWOTH:0)|
     (fib->fib_Protection&FIBF_OTR_EXECUTE?S_IXOTH:0);
   buf->st_nlink=0;
   buf->st_uid=fib->fib_OwnerUID;
   buf->st_gid=fib->fib_OwnerGID;
   buf->st_rdev=0;
   buf->st_size=fib->fib_Size;
   buf->st_atime=buf->st_mtime=buf->st_ctime=
     ((fib->fib_Date.ds_Days+2922)*1440+fib->fib_Date.ds_Minute+__gmtoffset)*60+
     fib->fib_Date.ds_Tick/TICKS_PER_SECOND;
   buf->st_spare1=buf->st_spare2=buf->st_spare3=0;
   buf->st_blksize=512;
   buf->st_blocks=fib->fib_NumBlocks;
   return 0;
}

int stat(const char *name,struct stat *buf)
{ struct Process *proc=(struct Process *)FindTask(NULL);
  struct FileInfoBlock *fib;
  APTR oldwin;
  BPTR lock;
  int ret=-1;

  /* avoid possible dos-requesters ;-( */

  oldwin=proc->pr_WindowPtr; proc->pr_WindowPtr=(APTR)ret;

  if((lock=Lock((STRPTR)name,SHARED_LOCK))!=0)
  {
    if((fib=(struct FileInfoBlock *)AllocDosObject(DOS_FIB,NULL))!=NULL)
    { if(Examine(lock,fib)!=DOSFALSE)
        ret=__stat(buf,fib);
      FreeDosObject(DOS_FIB,fib);
    }
    UnLock(lock);
  }

  proc->pr_WindowPtr=oldwin;

  return ret;
}
