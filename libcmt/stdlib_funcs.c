/*
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2005 by Olaf Barthel <olsen@sourcery.han.de>
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

#include <errno.h>
#include <string.h>
#include <limits.h>
#include <exec/types.h>

#include "libcmt.h"
#include <internal/amissl.h>

extern int isspace(int c);

void *bsearch(const void *key, const void *base, size_t count, size_t size, int (*compare)(const void * key,const void * value))
{
	void * result = NULL;

	if(count > 0 && size > 0)
	{
		void * current;
		size_t lower = 0;
		size_t upper = count;
		size_t position;
		int delta;

		while(lower < upper)
		{
			position = (lower + upper) / 2;

			current = (void *)(((ULONG)base) + (position * size));

			delta = (*compare)(key, current);
			if(delta == 0)
			{
				result = current;
				break;
			}

			if(delta < 0)
				upper = position;
			else
				lower = position + 1;
		}
	}

	return(result);
}

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
static __inline
void swap(char * a, char * b, size_t nbytes)
{
	char temp;

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
	if(count > 1 && size > 0)
	{
		char *stack[32 * 2], **sp;	/* stack and stack pointer */
		char *i, *j, *limit;		/* scan and limit pointers */
		char *base_pointer;			/* base pointer as (char *) */
		size_t threshold;			/* size of THRESHOLD elements in bytes */

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
}

long
strtol(const char *str, char **ptr, int base)
{
	BOOL is_negative;
	long result = 0;
	long new_sum;
	long sum;
	char c;

	if(base < 0)
	{
		SetAmiSSLerrno(ERANGE);
		goto out;
	}

	/* Skip all leading blanks. */
	while((c = (*str)) != '\0')
	{
		if(!isspace(c))
			break;

		str++;
	}

	/* The first character may be a sign. */
	if(c == '-')
	{
		/* It's a negative number. */
		is_negative = TRUE;

		str++;
	}
	else
	{
		/* It's not going to be negative. */
		is_negative = FALSE;

		/* But there may be a sign we will choose to
		 * ignore.
		 */
		if(c == '+')
			str++;
	}

	c = (*str);

	/* There may be a leading '0x' to indicate that what
	 * follows is a hexadecimal number.
	 */
	if(base == 0 || base == 16)
	{
		if((c == '0') && (str[1] == 'x' || str[1] == 'X'))
		{
			base = 16;

			str += 2;

			c = (*str);
		}
	}

	/* If we still don't know what base to use and the
	 * next letter to follow is a zero then this is
	 * probably a number in octal notation.
	 */
	if(base == 0)
	{
		if(c == '0')
			base = 8;
		else
			base = 10;
	}

	sum = 0;

	if(1 <= base && base <= 36)
	{
		while(c != '\0')
		{
			if('0' <= c && c <= '9')
				c -= '0';
			else if ('a' <= c)
				c -= 'a' - 10;
			else if ('A' <= c)
				c -= 'A' - 10;
			else
				break;

			/* Ignore invalid numbers. */
			if(c >= base)
				break;

			new_sum = base * sum + c;
			if(new_sum < sum) /* overflow? */
			{
				SetAmiSSLerrno(ERANGE);

				if(is_negative)
					result = LONG_MIN;
				else
					result = LONG_MAX;

				goto out;
			}

			sum = new_sum;

			str++;

			c = (*str);
		}
	}

	if(is_negative)
		result = (-sum);
	else
		result = sum;

 out:

	/* If desired, remember where we stopped reading the
	 * number from the buffer.
	 */
	if(ptr != NULL)
		(*ptr) = (char *)str;

	return(result);
}

unsigned long
strtoul(const char *str, char **ptr, int base)
{
	BOOL is_negative;
	unsigned long result = 0;
	unsigned long new_sum;
	unsigned long sum;
	char c;

	if(base < 0)
	{
		SetAmiSSLerrno(ERANGE);
		goto out;
	}

	/* Skip all leading blanks. */
	while((c = (*str)) != '\0')
	{
		if(!isspace(c))
			break;

		str++;
	}

	/* The first character may be a sign. */
	if(c == '-')
	{
		/* It's a negative number. */
		is_negative = TRUE;

		str++;
	}
	else
	{
		/* It's not going to be negative. */
		is_negative = FALSE;

		/* But there may be a sign we will choose to
		 * ignore.
		 */
		if(c == '+')
			str++;
	}

	c = (*str);

	/* There may be a leading '0x' to indicate that what
	 * follows is a hexadecimal number.
	 */
	if(base == 0 || base == 16)
	{
		if((c == '0') && (str[1] == 'x' || str[1] == 'X'))
		{
			base = 16;

			str += 2;

			c = (*str);
		}
	}

	/* If we still don't know what base to use and the
	 * next letter to follow is a zero then this is
	 * probably a number in octal notation.
	 */
	if(base == 0)
	{
		if(c == '0')
			base = 8;
		else
			base = 10;
	}

	sum = 0;

	if(1 <= base && base <= 36)
	{
		while(c != '\0')
		{
			if('0' <= c && c <= '9')
				c -= '0';
			else if ('a' <= c)
				c -= 'a' - 10;
			else if ('A' <= c)
				c -= 'A' - 10;
			else
				break;

			/* Ignore invalid numbers. */
			if(c >= base)
				break;

			new_sum = base * sum + c;
			if(new_sum < sum) /* overflow? */
			{
				SetAmiSSLerrno(ERANGE);

				result = ULONG_MAX;

				goto out;
			}

			sum = new_sum;

			str++;

			c = (*str);
		}
	}

	if(is_negative)
		result = (-sum);
	else
		result = sum;

 out:

	/* If desired, remember where we stopped reading the
	 * number from the buffer.
	 */
	if(ptr != NULL)
		(*ptr) = (char *)str;

	return(result);
}

int atoi(const char *str)
{
	return((int)strtol(str, NULL, 10));
}
