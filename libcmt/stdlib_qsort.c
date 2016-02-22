/*
 * $Id: stdlib_qsort.c,v 1.6 2006-01-08 12:04:26 obarthel Exp $
 *
 * :ts=4
 *
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2015 by Olaf Barthel <obarthel (at) gmx.net>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/****************************************************************************/

#ifndef _STDLIB_HEADERS_H
#include "stdlib_headers.h"
#endif /* _STDLIB_HEADERS_H */

/****************************************************************************/

/******************************************************************
 * qsort.c  --  Non-Recursive ANSI Quicksort function             *
 *                                                                *
 * Public domain by Raymond Gardner, Englewood CO  February 1991  *
 *                                                                *
 * Usage:                                                         *
 *     qsort(base, nbr_elements, width_bytes, compare_function);  *
 *        void *base;                                             *
 *        size_t nbr_elements, width_bytes;                       *
 *        int (*compare_function)(const void *, const void *);    *
 *                                                                *
 * Sorts an array starting at base, of length nbr_elements, each  *
 * element of size width_bytes, ordered via compare_function,     *
 * which is called as  (*compare_function)(ptr_to_element1,       *
 * ptr_to_element2) and returns < 0 if element1 < element2,       *
 * 0 if element1 = element2, > 0 if element1 > element2.          *
 * Most refinements are due to R. Sedgewick. See "Implementing    *
 * Quicksort Programs", Comm. ACM, Oct. 1978, and Corrigendum,    *
 * Comm. ACM, June 1979.                                          *
 ******************************************************************/

/******************************************************************/

#define SWAP(a, b, size)	(swap((char *)(a), (char *)(b), size))
#define COMPARE(a, b)		((*comp)((const void *)(a), (const void *)(b)))

/******************************************************************/

/* subfiles of THRESHOLD or fewer elements will
   be sorted by a simple insertion sort
   Note! THRESHOLD must be at least 3 */
#define THRESHOLD 7

/******************************************************************/

/* For an 68030 and beyond the alignment does not matter and you can skip the
   second half of the test (everything beyond the 'nbytes >= sizeof(long)'). */
#if defined(M68020)
#define IS_WORD_ALIGNED(a,b) (1)
#else
#define IS_WORD_ALIGNED(a,b) (((((unsigned long)(a)) | ((unsigned long)(b))) & 1) == 0)
#endif /* M68020 */

/******************************************************************/

/* swap nbytes between a and b */
INLINE STATIC void
swap(char * a, char * b, size_t nbytes)
{
	char temp;

	assert( a != NULL && b != NULL && nbytes > 0 );

	/* This is an attempt to use 'long' sized swapping, if possible. */
	if(nbytes >= sizeof(long) && IS_WORD_ALIGNED(a,b))
	{
		long *_a = (long *)a;
		long *_b = (long *)b;
		long _temp;

		do
		{
			_temp	= (*_a);
			(*_a++)	= (*_b);
			(*_b++)	= _temp;

			nbytes -= sizeof(long);
		}
		while(nbytes >= sizeof(long));

		if(nbytes > 0)
		{
			a = (char *)_a;
			b = (char *)_b;

			do
			{
				temp	= (*a);
				(*a++)	= (*b);
				(*b++)	= temp;
			}
			while(--nbytes > 0);
		}
	}
	else
	{
		do
		{
			temp	= (*a);
			(*a++)	= (*b);
			(*b++)	= temp;
		}
		while(--nbytes > 0);
	}
}

/******************************************************************/

void
qsort(void * base, size_t count, size_t size, int (*comp)(const void * element1, const void * element2))
{
	ENTER();

	//SHOWPOINTER(base);
	//SHOWVALUE(count);
	//SHOWVALUE(size);
	//SHOWPOINTER(comp);

	assert( (int)count >= 0 && (int)size >= 0 );

	if(count > 1 && size > 0)
	{
		char *stack[32 * 2], **sp;	/* stack and stack pointer */
		char *i, *j, *limit;		/* scan and limit pointers */
		char *base_pointer;			/* base pointer as (char *) */
		size_t threshold;			/* size of THRESHOLD elements in bytes */

		assert( base != NULL && comp != NULL );

		#if defined(CHECK_FOR_NULL_POINTERS)
		{
			if(base == NULL || comp == NULL)
			{
				//SHOWMSG("invalid parameters");

				__set_errno(EFAULT);
				goto out;
			}
		}
		#endif /* CHECK_FOR_NULL_POINTERS */

		/* set up (char *) base_pointer pointer */
		base_pointer = (char *)base;

		/* init threshold */
		threshold = THRESHOLD * size; /* ZZZ problematic if (THRESHOLD * size) > 0xffffffff */

		/* init stack pointer */
		sp = stack;

		/* pointer past end of array */
		limit = base_pointer + count * size; /* ZZZ problematic if (count * size) > 0xffffffff or (base_pointer + count * size) > 0xffffffff */

		/* repeat until break... */
		while(TRUE)
		{
			/* if more than THRESHOLD elements */
			if((size_t)(limit - base_pointer) > threshold)
			{
				/* swap base_pointer with middle */
				SWAP((((limit - base_pointer) / size) / 2) * size + base_pointer, base_pointer, size);

				/* i scans left to right */
				i = base_pointer + size;

				/* j scans right to left */
				j = limit - size;

				/* Sedgewick's three-element sort sets things up so that
				   (*i) <= (*base_pointer) <= (*j); (*base_pointer) is
				   pivot element */
				if(COMPARE(i, j) > 0)
					SWAP(i, j, size);

				if(COMPARE(base_pointer, j) > 0)
					SWAP(base_pointer, j, size);

				if(COMPARE(i, base_pointer) > 0)
					SWAP(i, base_pointer, size);

				/* loop until break */
				while(TRUE)
				{
					/* move i right until (*i) >= pivot */
					do
						i += size;
					while(COMPARE(i, base_pointer) < 0);

					/* move j left until (*j) <= pivot */
					do
						j -= size;
					while(COMPARE(j, base_pointer) > 0);

					/* break loop if pointers crossed */
					if(i > j)
						break;

					/* else swap elements, keep scanning */
					SWAP(i, j, size);
				}

				/* move pivot into correct place */
				SWAP(base_pointer, j, size);

				/* if left subfile larger */
				if(j - base_pointer > limit - i)
				{
					/* stack left subfile base_pointer and limit */
					sp[0] = base_pointer;
					sp[1] = j;

					/* sort the right subfile */
					base_pointer = i;
				}
				else /* else right subfile larger */
				{
					/* stack right subfile base_pointer and limit */
					sp[0] = i;
					sp[1] = limit;

					/* sort the left subfile */
					limit = j;
				}

				/* increment stack pointer */
				sp += 2;
			}
			else /* else subfile is small, use insertion sort */
			{
				for(j = base_pointer, i = j + size; i < limit; j = i, i += size)
				{
					for( ; COMPARE(j, j + size) > 0; j -= size )
					{
						SWAP(j, j + size, size);
						if(j == base_pointer)
							break;
					}
				}

				/* if any entries on stack pop the base_pointer and limit,
				   else the stack is empty and we're done */
				if(sp == stack)
					break;

				sp -= 2;

				base_pointer	= sp[0];
				limit			= sp[1];
			}
		}
	}

 out:

	LEAVE();
}
