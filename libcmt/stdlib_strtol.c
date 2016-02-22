/*
 * $Id: stdlib_strtol.c,v 1.6 2006-01-08 12:04:26 obarthel Exp $
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

long
strtol(const char *str, char **ptr, int base)
{
	const char * stop = str;
	size_t num_digits_converted = 0;
	BOOL is_negative;
	long result = 0;
	long new_sum;
	long sum;
	char c;

	ENTER();

	//SHOWSTRING(str);
	//SHOWPOINTER(ptr);
	//SHOWVALUE(base);

	assert(str != NULL && base >= 0);

	#if defined(CHECK_FOR_NULL_POINTERS)
	{
		if(str == NULL)
		{
			//SHOWMSG("invalid str parameter");

			__set_errno(EFAULT);
			goto out;
		}
	}
	#endif /* CHECK_FOR_NULL_POINTERS */

	if(base < 0)
	{
		//SHOWMSG("invalid base parameter");

		__set_errno(ERANGE);
		goto out;
	}

	/* Skip all leading blanks. */
	while((c = (*str)) != '\0')
	{
		if(NOT isspace(c))
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
		   ignore. */
		if(c == '+')
			str++;
	}

	c = (*str);

	/* There may be a leading '0x' to indicate that what
	   follows is a hexadecimal number. */
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
	   next letter to follow is a zero then this is
	   probably a number in octal notation. */
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
				__set_errno(ERANGE);

				if(is_negative)
					result = LONG_MIN;
				else
					result = LONG_MAX;

				goto out;
			}

			sum = new_sum;

			str++;

			c = (*str);

			num_digits_converted++;
		}
	}

	/* Did we convert anything? */
	if(num_digits_converted == 0)
		goto out;

	if(is_negative)
		result = (-sum);
	else
		result = sum;

	stop = str;

 out:

	/* If desired, remember where we stopped reading the
	   number from the buffer. */
	if(ptr != NULL)
		(*ptr) = (char *)stop;

	RETURN(result);
	return(result);
}
