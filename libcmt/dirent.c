#include <dirent.h>
#include <stdlib.h>
#include <exec/memory.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <string.h>
#include <dos/exall.h>
#include <dos/dosextens.h>
#if defined(__amigaos4__)
#include <dos/obsolete.h> // FIXME
#endif
#include <internal/amissl.h>


typedef struct _mydirdesc {
  int dd_fd;
  struct dirent dd_ent;
  BPTR d_lock;
  ULONG d_count;
  LONG d_more;
  struct ExAllControl *d_eac;
  struct ExAllData *current;
  union {
    char ead[2048];
    struct FileInfoBlock fib;
  } _dirun;
} MYDIR;

#define d_ead _dirun.ead
#define d_info _dirun.fib

#ifdef __amigaos4__
#define fib_EntryType fib_Obsolete /* FIXME */
#endif

DIR *opendir(const char *dirname)
{
  MYDIR *dirp;

  if ((dirp=(MYDIR *)malloc(sizeof(MYDIR))) != NULL)
  {
    if ((dirp->d_lock=(Lock((STRPTR)dirname,SHARED_LOCK))) != 0ul)
    {
      dirp->d_count=0; dirp->d_more = DOSTRUE;

      if ((dirp->d_eac=AllocDosObject(DOS_EXALLCONTROL,NULL)) != NULL)
      {
#if 0
        dirp->d_eac->eac_LastKey=0;
        dirp->d_eac->eac_MatchString=NULL;
        dirp->d_eac->eac_MatchFunc=NULL;
#endif
        if (Examine(dirp->d_lock,&dirp->d_info))
        {
          if (dirp->d_info.fib_EntryType>=0)
            return (DIR *)dirp;
        }
        FreeDosObject(DOS_EXALLCONTROL,dirp->d_eac);
      }
      UnLock(dirp->d_lock);
    }
    free(dirp); dirp=NULL;
  }
  return (DIR *)dirp;
}

struct dirent *readdir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
  struct dirent *result;

  if (dirp->d_count==0 && dirp->d_more!=DOSFALSE)
  {
    dirp->d_more=ExAll(dirp->d_lock,(APTR)&dirp->d_ead[0],sizeof(dirp->d_ead),ED_NAME,dirp->d_eac);
    dirp->current=(struct ExAllData *)&dirp->d_ead[0];
    dirp->d_count=dirp->d_eac->eac_Entries;
  }

  result = NULL;

  if (dirp->d_count)
  {
#ifdef __amigaos4__
    dirp->dd_ent.d_ino = 1;
    strcpy(dirp->dd_ent.d_name,dirp->current->ed_Name);
    dirp->current=dirp->current->ed_Next;
    dirp->d_count--;
#else
    dirp->dd_ent.d_ino = dirp->dd_ent.d_reclen = 1;
    strcpy(dirp->dd_ent.d_name,dirp->current->ed_Name);
    dirp->dd_ent.d_namlen = strlen(dirp->dd_ent.d_name);
    dirp->current=dirp->current->ed_Next;
    dirp->d_count--;
#endif
    result=&dirp->dd_ent;
  }
  return result;
}

#undef rewinddir

void rewinddir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
  if (dirp->d_more!=DOSFALSE)
    do
     {
       dirp->d_more=ExAll(dirp->d_lock,(APTR)&dirp->d_ead[0],sizeof(dirp->d_ead),ED_NAME,dirp->d_eac);
     }
    while(dirp->d_more!=DOSFALSE);
  dirp->d_count=0; dirp->d_more = DOSTRUE; dirp->d_eac->eac_LastKey=0;
}

#ifdef __amigaos4__
int 
#else
void
#endif
closedir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
  rewinddir(mydirp);
  FreeDosObject(DOS_EXALLCONTROL,dirp->d_eac);
  UnLock(dirp->d_lock);
  free(dirp);
#ifdef __amigaos4__
  return 1;
#endif
}
