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
#include "fibex.h"
#include "scmt.h"
#include <proto/dos.h>
#include <proto/utility.h>
#include <libraries/amissl.h>

/*
 * Conversion table from Amiga filetypes to Unix filetypes
 */
const static mode_t ftype[ST_LINKDIR - ST_PIPEFILE + 1] = {
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

/*
 * Conversion table from Amiga protections to Unix protections
 * rwed -> rwx
 */
const static UBYTE fbits[16] =
{
  00, 02, 01, 03, 02, 02, 03, 03,
  04, 06, 05, 07, 06, 06, 07, 07,
};

void __dostat(struct FileInfoBlock *fib,
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

  if ((pbits & FIBF_PURE) != 0)
    mode |= S_ISVTX;
  if ((pbits & FIBF_SUID) != 0)
    mode |= S_ISUID;
  if ((pbits & FIBF_SGID) != 0)
    mode |= S_ISGID;

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

  st->st_blksize = 512;
  st->st_blocks = fib->fib_NumBlocks;
  st->st_dosmode = fib->fib_Protection;
  st->st_type = fib->fib_DirEntryType;
  st->st_comment = fib->fib_Comment;
}

int stat(const char *name, struct stat *st)
{
  short found;
  register int rc = -1;
  BPTR lock;
  __aligned struct FileInfoBlock __dostat_fib;

  if (st == NULL || ((1 & (long)st) == 1)) {
    SetAmiSSLerrno(EFAULT);
    return -1;
  }

  lock = Lock((STRPTR)name, SHARED_LOCK);

  if (found = lock != NULL) {
    if (Examine(lock, &__dostat_fib)) {
      __dostat(&__dostat_fib, st);
      st->st_dev = (dev_t)((struct FileLock *)BADDR(lock))->fl_Task;
      rc = 0;
    } else {
      SetAmiSSLerrno(EIO);
    }
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
  __aligned struct FileInfoBlock __dostat_fib;

  if (st == NULL || ((1 & (long)st) == 1)) {
    SetAmiSSLerrno(EFAULT);
    return -1;
  }

  cname = malloc(strlen(name) + 1);

  if (cname) {
    BPTR lock;
    char *pp = PathPart(strcpy(cname, name));
    *pp = '\0';

    if (lock = Lock(cname, SHARED_LOCK)) {
      pp = FilePart((STRPTR)name);
      
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

