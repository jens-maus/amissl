#include <dirent.h>
#include <stdlib.h>
#include <exec/memory.h>
#include <proto/exec.h>
#include <proto/dos.h>
#include <string.h>
#include <dos/exall.h>
#include <dos/dosextens.h>
#include <internal/amissl.h>


typedef struct _mydirdesc {
  struct dirent dd_ent;
#ifdef __amigaos4__
  APTR d_context;
#else
  BPTR d_lock;
  ULONG d_count;
  LONG d_more;
  struct ExAllControl *d_eac;
  struct ExAllData *current;
  union {
    char ead[2048];
    struct FileInfoBlock fib;
  } _dirun;
#endif
} MYDIR;

#define d_ead _dirun.ead
#define d_info _dirun.fib

DIR *opendir(const char *dirname)
{
  MYDIR *dirp;

  if ((dirp=(MYDIR *)malloc(sizeof(MYDIR))) != NULL)
  {
#ifdef __amigaos4__
    if ((dirp->d_context = ObtainDirContextTags(EX_StringNameInput, dirname, EX_DataFields, EXF_NAME, TAG_DONE))) {
       return (DIR *)dirp;
    }
#else
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
#endif
    free(dirp); dirp=NULL;
  }
  return (DIR *)dirp;
}

struct dirent *readdir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
  struct dirent *result = NULL;

#ifdef __amigaos4__
  struct ExamineData *ed;
  if ((ed = ExamineDir(dirp->d_context))) {
    dirp->dd_ent.d_ino = 1;
    dirp->dd_ent.d_reclen = 1;
    strcpy(dirp->dd_ent.d_name,ed->Name);
    dirp->dd_ent.d_namelen = strlen(ed->Name);
    result=&dirp->dd_ent;
  }
#else
  if (dirp->d_count==0 && dirp->d_more!=DOSFALSE)
  {
    dirp->d_more=ExAll(dirp->d_lock,(APTR)&dirp->d_ead[0],sizeof(dirp->d_ead),ED_NAME,dirp->d_eac);
    dirp->current=(struct ExAllData *)&dirp->d_ead[0];
    dirp->d_count=dirp->d_eac->eac_Entries;
  }

  if (dirp->d_count)
  {
    dirp->dd_ent.d_ino = 1;
    //dirp->dd_ent.d_reclen = 1;
    strcpy(dirp->dd_ent.d_name,dirp->current->ed_Name);
    //dirp->dd_ent.d_namlen = strlen(dirp->dd_ent.d_name);
    dirp->current=dirp->current->ed_Next;
    dirp->d_count--;
    result=&dirp->dd_ent;
  }
#endif
  return result;
}

#undef rewinddir

void rewinddir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
#ifdef __amigaos4__
  ObtainDirContextTags(EX_ResetContext, dirp->d_context, TAG_DONE);
#else
  if (dirp->d_more!=DOSFALSE)
    do
     {
       dirp->d_more=ExAll(dirp->d_lock,(APTR)&dirp->d_ead[0],sizeof(dirp->d_ead),ED_NAME,dirp->d_eac);
     }
    while(dirp->d_more!=DOSFALSE);
  dirp->d_count=0; dirp->d_more = DOSTRUE; dirp->d_eac->eac_LastKey=0;
#endif
}

#ifdef __amigaos4__
int closedir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
  ReleaseDirContext(dirp->d_context);
  free(dirp);
  return 1;
}
#else
int closedir(DIR *mydirp)
{
  MYDIR *dirp=(MYDIR *)mydirp;
  rewinddir(mydirp);
  FreeDosObject(DOS_EXALLCONTROL,dirp->d_eac);
  UnLock(dirp->d_lock);
  free(dirp);
  return 1;
}
#endif
