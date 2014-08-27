//RCS_ID_C="$Id$";
/*
 *      stat.c - stat() for the netlib
 *
 *      Copyright © 1994 AmiTCP/IP Group,
 *                       Network Solutions Development Inc.
 *                       All rights reserved.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include <string.h>
#include <stdlib.h>

/* DOS 3.0 and MuFS extensions to file info block */
#ifndef __amigaos4__
#include "fibex.h"
#endif
#include "libcmt.h"
#include <proto/dos.h>
#include <proto/utility.h>
#include <internal/amissl.h>

#ifndef S_IFIFO
#define S_IFIFO S_IFDIR /* Fixme */
#endif /* S_IFIFO */

#ifndef S_IFLNK
#define S_IFLNK S_IFDIR /* Fixme */
#endif /* S_IFLNK */

#ifndef __amigaos4__
/*
 * Conversion table from Amiga filetypes to Unix filetypes
 */
static const mode_t ftype[ST_LINKDIR - ST_PIPEFILE + 1] = {
  S_IFIFO,
  S_IFREG,
  S_IFREG,
  S_IFREG,
  S_IFREG,
  S_IFREG,
  S_IFDIR,
  S_IFDIR,
  S_IFLNK,
  S_IFDIR,
};
#endif

/*
 * Conversion table from Amiga protections to Unix protections
 * rwed -> rwx
 */
static const UBYTE fbits[16] =
{
  00, 02, 01, 03, 02, 02, 03, 03,
  04, 06, 05, 07, 06, 06, 07, 07,
};

#ifdef __amigaos4__
static void __dostat(BPTR lock, struct ExamineData *ed, struct stat *st)
{
  ULONG pbits = ed->Protection ^ 0xf;
  mode_t mode = S_IFREG;
  struct InfoData *id;

  if (EXD_IS_LINK(ed) || EXD_IS_SOFTLINK(ed))
    mode = S_IFLNK;
  else if (EXD_IS_FILE(ed))
    mode = S_IFREG;
  else if (EXD_IS_DIRECTORY(ed))
    mode = S_IFDIR;
  else if (EXD_IS_PIPE(ed))
    mode = S_IFIFO;
  else if (EXD_IS_SOCKET(ed))
    mode = S_IFSOCK;

  bzero(st, sizeof(*st));

  mode |= (fbits[pbits & 0xf] << 6)
    | (fbits[(pbits >> EXDB_GRP_DELETE) & 0xf] << 3)
      | fbits[(pbits >> EXDB_OTR_DELETE) & 0xf];

#ifdef S_ISVTX
  if ((pbits & EXDB_PURE) != 0)
    mode |= S_ISVTX;
#endif /* S_ISVTX */

  st->st_ino = 1; // fib->fib_DiskKey;
  st->st_mode = mode;
  st->st_nlink = 1;
  st->st_uid = ed->OwnerUID;
  st->st_gid = ed->OwnerGID;
  st->st_rdev = 0;
  st->st_size = (off_t)ed->FileSize;

  /*
   * Calculatory time since Jan 1 1970, UCT
   * (in reality there are an odd number of leap seconds,
   * which are not included)
   */
  st->st_atime = st->st_ctime = st->st_mtime =
    60 * ((ed->Date.ds_Days + (8*365+2)) * 24 * 60
	  + ed->Date.ds_Minute)
      + ed->Date.ds_Tick / 50;

  st->st_blksize = 512;
  if((id = AllocDosObject(DOS_INFODATA,NULL))) {
    if(Info(lock,id) && id->id_BytesPerBlock) {
      st->st_blksize = id->id_BytesPerBlock;
    }
    FreeDosObject(DOS_INFODATA,id);
  }
  st->st_blocks = ((uint32)ed->FileSize + st->st_blksize - 1) / st->st_blksize;

/* SYS_STAT_H is defined only by AmiTCP netincludes */
#if defined(SYS_STAT_H)
  #error Probably should not reach here!
  st->st_type = ed->Type;
  st->st_comment = ed->Comment;
  st->st_dosmode = ed->Protection;
#endif
}
#else
static void __dostat(struct FileInfoBlock *fib,
	      struct stat *st)
{
  ULONG pbits = fib->fib_Protection ^ 0xf;
  short fibtype = fib->fib_DirEntryType - ST_PIPEFILE;
  mode_t mode;

  if (fibtype < 0)
    fibtype = 0;
  else if (fibtype > ST_LINKDIR - ST_PIPEFILE)
    fibtype = ST_LINKDIR - ST_PIPEFILE;

  bzero(st, sizeof(*st));

  mode = ftype[fibtype] | (fbits[pbits & 0xf] << 6)
    | (fbits[(pbits >> FIBB_GRP_DELETE) & 0xf] << 3)
      | fbits[(pbits >> FIBB_OTR_DELETE) & 0xf];

#ifdef S_ISVTX
  if ((pbits & FIBF_PURE) != 0)
    mode |= S_ISVTX;
#endif /* S_ISVTX */
#ifdef S_ISUID
  if ((pbits & FIBF_SUID) != 0)
    mode |= S_ISUID;
#endif /* S_ISUID */
#ifdef S_ISGID
  if ((pbits & FIBF_SGID) != 0)
    mode |= S_ISGID;
#endif

  st->st_ino = fib->fib_DiskKey;
  st->st_mode = mode;
  st->st_nlink = 1;
//  st->st_uid = MU2UG(fib->fib_OwnerUID);
//  st->st_gid = MU2UG(fib->fib_OwnerGID);
  st->st_uid = fib->fib_OwnerUID;
  st->st_gid = fib->fib_OwnerGID;
  st->st_rdev = 0;
  st->st_size = fib->fib_Size;

  /*
   * Calculatory time since Jan 1 1970, UCT
   * (in reality there are an odd number of leap seconds,
   * which are not included)
   */
  st->st_atime = st->st_ctime = st->st_mtime =
    60 * ((fib->fib_Date.ds_Days + (8*365+2)) * 24 * 60
	  + fib->fib_Date.ds_Minute)
      + fib->fib_Date.ds_Tick / 50;

/* SYS_STAT_H is defined only by AmiTCP netincludes */
#if defined(SYS_STAT_H)
  st->st_blksize = 512;
  st->st_blocks = fib->fib_NumBlocks;
#endif

#if 0
  st->st_type = fib->fib_DirEntryType;
  st->st_comment = fib->fib_Comment;
#endif

#ifdef SYS_STAT_H
  st->st_dosmode = fib->fib_Protection;
#endif
}
#endif

int stat(const char *name, struct stat *st)
{
  short found;
  register int rc = -1;
  BPTR lock;
#if defined(__amigaos4__)
  struct ExamineData *ed;
#elif defined(__GNUC__)
  struct FileInfoBlock __dostat_fib __attribute__((aligned(4)));
#else
  __aligned struct FileInfoBlock __dostat_fib;
#endif

  if (st == NULL || ((1 & (long)st) == 1)) {
    SetAmiSSLerrno(EFAULT);
    return -1;
  }

  lock = Lock((STRPTR)name, SHARED_LOCK);

  if ( (found = lock) != 0 ) {
#ifdef __amigaos4__
    if ( (ed = ExamineObjectTags(EX_LockInput,lock,TAG_DONE)) ) {
      __dostat(lock, ed, st);
      FreeDosObject(DOS_EXAMINEDATA,ed);
      st->st_dev = (dev_t)((struct Lock *)BADDR(lock))->fl_Port;
      rc = 0;
    } else {
      SetAmiSSLerrno(__io2errno(IoErr()));
    }
#else
    if (Examine(lock, &__dostat_fib)) {
      __dostat(&__dostat_fib, st);
      st->st_dev = (dev_t)((struct FileLock *)BADDR(lock))->fl_Task;
      rc = 0;
    } else {
      SetAmiSSLerrno(EIO);
    }
#endif
  } else {
    UBYTE errcode = IoErr();

    if (errcode == ERROR_OBJECT_IN_USE) {
      rc = lstat(name, st);
    } else {
      SetAmiSSLerrno(__io2errno(errcode));
    }
  }

  if (lock)
    UnLock(lock);

  return rc;
}

int lstat(const char *name, struct stat *st)
{
  /* Cannot lock - do examine via Examine()/ExNext() */
  int rc = -1;
  char *cname;
#if defined(__amigaos4__)
  APTR dircontext;
#elif defined(__GNUC__)
  struct FileInfoBlock __dostat_fib __attribute__((aligned(4)));
#else
  __aligned struct FileInfoBlock __dostat_fib;
#endif

  if (st == NULL || ((1 & (long)st) == 1)) {
    SetAmiSSLerrno(EFAULT);
    return -1;
  }

  cname = malloc(strlen(name) + 1);

  if (cname) {
    BPTR lock;
    char *pp = PathPart(strcpy(cname, name));
    *pp = '\0';

    if ( (lock = Lock(cname, SHARED_LOCK)) ) {
      pp = (char *)FilePart((STRPTR)name);

#ifdef __amigaos4__
      if ((dircontext = ObtainDirContextTags(EX_LockInput, lock, EX_DataFields, EXF_ALL, TAG_DONE))) {
        struct ExamineData *ed;
        while((ed = ExamineDir(dircontext))) {
          if (Stricmp(pp, ed->Name) == 0) {
	    __dostat(lock, ed, st);
	    st->st_dev = (dev_t)((struct Lock *)BADDR(lock))->fl_Port;
	    rc = 0;
	    break;
	  }
	}
        ReleaseDirContext(dircontext);
      }
#else
      if (Examine(lock, &__dostat_fib)) {
	while (ExNext(lock, &__dostat_fib)) {
	  if (Stricmp(pp, __dostat_fib.fib_FileName) == 0) {
	    __dostat(&__dostat_fib, st);
	    st->st_dev = (dev_t)((struct FileLock *)BADDR(lock))->fl_Task;
	    rc = 0;
	    break;
	  }
	}
      }
#endif
      if (rc != 0)
	SetAmiSSLerrno(ENOENT);
    } else {
      SetAmiSSLerrno(__io2errno(IoErr()));
    }

    free(cname);
  } else {
    SetAmiSSLerrno(ENOMEM);
  }

  return rc;
}

