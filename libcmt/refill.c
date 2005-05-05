#include <proto/dos.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <internal/amissl.h>
#include "libcmt.h"

#if 0
static int lflush(FILE *TOFILE(fp))
{

	if ((TOFILE(fp)->_flag & (_IOLBF|_IORW)) == (_IOLBF|_IORW))
		return (__sflush(fp));
	return (0);
}
#endif

/*
 * Refill a stdio buffer.
 * Return EOF on eof or error, 0 otherwise.
 */
int __srefill(FILE *fp)
{
	TOFILE(fp)->_rcnt = 0;		/* largely a convenience for callers */

	/* SysV does not make this test; take it out for compatibility */
	if (TOFILE(fp)->_flag & _IOEOF)
		return (EOF);

	/* if not already reading, have to be reading and writing */
	if ((TOFILE(fp)->_flag & _IOREAD) == 0) {
		if ((TOFILE(fp)->_flag & _IORW) == 0) {
			SetAmiSSLerrno(EBADF);
			return (EOF);
		}
		/* switch to reading */
		if (TOFILE(fp)->_flag & _IOWRT) {
			if (fflush(fp))
				return (EOF);
			TOFILE(fp)->_flag &= ~_IOWRT;
			TOFILE(fp)->_wcnt = 0;
			TOFILE(fp)->_size = 0;
		}
		TOFILE(fp)->_flag |= _IOREAD;
	} else {
		/*
		 * We were reading.  If there is an ungetc buffer,
		 * we must have been reading from that.  Drop it,
		 * restoring the previous buffer (if any).  If there
		 * is anything in that buffer, return.
		 */
		/* FIXME fix for ungetc here */
	}

//	if (TOFILE(fp)->_bf._base == NULL)
//		__smakebuf(fp);

	/*
	 * Before reading from a line buffered or unbuffered file,
	 * flush all line buffered output files, per the ANSI C
	 * standard.
	 */
//	if (TOFILE(fp)->_flag & (_IOLBF|_IONBF))
//		(void) _fwalk(lflush);

	TOFILE(fp)->_ptr = TOFILE(fp)->_base;
	TOFILE(fp)->_rcnt = Read(TOFILE(fp)->_file, (char *)TOFILE(fp)->_ptr, TOFILE(fp)->_size);
//	TOFILE(fp)->_flag &= ~_IOMOD;	/* buffer contents are again pristine */
	if (TOFILE(fp)->_rcnt <= 0) {
		if (TOFILE(fp)->_rcnt == 0)
			TOFILE(fp)->_flag |= _IOEOF;
		else {
			TOFILE(fp)->_rcnt = 0;
			TOFILE(fp)->_flag |= _IOERR;
		}
		return (EOF);
	}
	return (0);
}
