#include <stdio.h>
#include <string.h>
#include "scmt.h"

extern int __srefill(FILE *fp);

size_t fread(void *buf,size_t size,size_t count,FILE *fp)
{
	register size_t resid;
	register char *p;
	register int r;
	size_t total;

	/*
	 * The ANSI standard requires a return value of 0 for a count
	 * or a size of 0.  Peculiarily, it imposes no such requirements
	 * on fwrite; it only requires fread to be broken.
	 */
	if ((resid = count * size) == 0)
		return (0);
	if (TOFILE(fp)->_rcnt < 0)
		TOFILE(fp)->_rcnt = 0;
	total = resid;
	p = buf;
	while (resid > (r = TOFILE(fp)->_rcnt)) {
		(void)memcpy((void *)p, (void *)TOFILE(fp)->_ptr, (size_t)r);
		TOFILE(fp)->_ptr += r;
		/* fp->_rcnt = 0 ... done in __srefill */
		p += r;
		resid -= r;
		if (__srefill(TOFILE(fp))) {
			/* no more input: return partial result */
			return ((total - resid) / size);
		}
	}
	(void)memcpy((void *)p, (void *)TOFILE(fp)->_ptr, resid);
	TOFILE(fp)->_rcnt -= resid;
	TOFILE(fp)->_ptr += resid;
	return (count);
}
