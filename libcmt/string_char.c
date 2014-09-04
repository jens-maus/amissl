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

#include <string.h>

#define __CTYPE_CONTROL		0x01
#define __CTYPE_DIGIT		0x02
#define __CTYPE_HEX_DIGIT	0x04
#define __CTYPE_PUNCTUATION	0x08
#define __CTYPE_PRINTABLE	0x10
#define __CTYPE_WHITE_SPACE	0x20
#define __CTYPE_LOWER_CASE	0x40
#define __CTYPE_UPPER_CASE	0x80

const unsigned char __ctype_table[257] =
{
        /*   -1     */ 0,
        /*   0      */ __CTYPE_CONTROL,
        /*   1      */ __CTYPE_CONTROL,
        /*   2      */ __CTYPE_CONTROL,
        /*   3      */ __CTYPE_CONTROL,
        /*   4      */ __CTYPE_CONTROL,
        /*   5      */ __CTYPE_CONTROL,
        /*   6      */ __CTYPE_CONTROL,
        /*   7      */ __CTYPE_CONTROL,
        /*   8      */ __CTYPE_CONTROL,
        /*   9      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  10      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  11      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  12      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  13      */ __CTYPE_CONTROL|__CTYPE_WHITE_SPACE,
        /*  14      */ __CTYPE_CONTROL,
        /*  15      */ __CTYPE_CONTROL,
        /*  16      */ __CTYPE_CONTROL,
        /*  17      */ __CTYPE_CONTROL,
        /*  18      */ __CTYPE_CONTROL,
        /*  19      */ __CTYPE_CONTROL,
        /*  20      */ __CTYPE_CONTROL,
        /*  21      */ __CTYPE_CONTROL,
        /*  22      */ __CTYPE_CONTROL,
        /*  23      */ __CTYPE_CONTROL,
        /*  24      */ __CTYPE_CONTROL,
        /*  25      */ __CTYPE_CONTROL,
        /*  26      */ __CTYPE_CONTROL,
        /*  27      */ __CTYPE_CONTROL,
        /*  28      */ __CTYPE_CONTROL,
        /*  29      */ __CTYPE_CONTROL,
        /*  30      */ __CTYPE_CONTROL,
        /*  31      */ __CTYPE_CONTROL,
        /*  32, ' ' */ __CTYPE_PRINTABLE|__CTYPE_WHITE_SPACE,
        /*  33, '!' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  34, '"' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  35, '#' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  36, '$' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  37, '%' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  38, '&' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  39, ''' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  40, '(' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  41, ')' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  42, '*' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  43, '+' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  44, ',' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  45, '-' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  46, '.' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  47, '/' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  48, '0' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  49, '1' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  50, '2' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  51, '3' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  52, '4' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  53, '5' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  54, '6' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  55, '7' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  56, '8' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  57, '9' */ __CTYPE_DIGIT|__CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE,
        /*  58, ':' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  59, ';' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  60, '<' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  61, '=' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  62, '>' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  63, '?' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  64, '@' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  65, 'A' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  66, 'B' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  67, 'C' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  68, 'D' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  69, 'E' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  70, 'F' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  71, 'G' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  72, 'H' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  73, 'I' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  74, 'J' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  75, 'K' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  76, 'L' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  77, 'M' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  78, 'N' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  79, 'O' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  80, 'P' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  81, 'Q' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  82, 'R' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  83, 'S' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  84, 'T' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  85, 'U' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  86, 'V' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  87, 'W' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  88, 'X' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  89, 'Y' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  90, 'Z' */ __CTYPE_PRINTABLE|__CTYPE_UPPER_CASE,
        /*  91, '[' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  92, '\' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  93, ']' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  94, '^' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  95, '_' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  96, '`' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /*  97, 'a' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /*  98, 'b' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /*  99, 'c' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 100, 'd' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 101, 'e' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 102, 'f' */ __CTYPE_HEX_DIGIT|__CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 103, 'g' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 104, 'h' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 105, 'i' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 106, 'j' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 107, 'k' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 108, 'l' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 109, 'm' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 110, 'n' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 111, 'o' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 112, 'p' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 113, 'q' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 114, 'r' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 115, 's' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 116, 't' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 117, 'u' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 118, 'v' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 119, 'w' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 120, 'x' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 121, 'y' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 122, 'z' */ __CTYPE_PRINTABLE|__CTYPE_LOWER_CASE,
        /* 123, '{' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 124, '|' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 125, '}' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 126, '~' */ __CTYPE_PUNCTUATION|__CTYPE_PRINTABLE,
        /* 127      */ __CTYPE_CONTROL,
        /* 128      */ 0,
        /* 129      */ 0,
        /* 130      */ 0,
        /* 131      */ 0,
        /* 132      */ 0,
        /* 133      */ 0,
        /* 134      */ 0,
        /* 135      */ 0,
        /* 136      */ 0,
        /* 137      */ 0,
        /* 138      */ 0,
        /* 139      */ 0,
        /* 140      */ 0,
        /* 141      */ 0,
        /* 142      */ 0,
        /* 143      */ 0,
        /* 144      */ 0,
        /* 145      */ 0,
        /* 146      */ 0,
        /* 147      */ 0,
        /* 148      */ 0,
        /* 149      */ 0,
        /* 150      */ 0,
        /* 151      */ 0,
        /* 152      */ 0,
        /* 153      */ 0,
        /* 154      */ 0,
        /* 155      */ 0,
        /* 156      */ 0,
        /* 157      */ 0,
        /* 158      */ 0,
        /* 159      */ 0,
        /* 160      */ 0,
        /* 161      */ 0,
        /* 162      */ 0,
        /* 163      */ 0,
        /* 164      */ 0,
        /* 165      */ 0,
        /* 166      */ 0,
        /* 167      */ 0,
        /* 168      */ 0,
        /* 169      */ 0,
        /* 170      */ 0,
        /* 171      */ 0,
        /* 172      */ 0,
        /* 173      */ 0,
        /* 174      */ 0,
        /* 175      */ 0,
        /* 176      */ 0,
        /* 177      */ 0,
        /* 178      */ 0,
        /* 179      */ 0,
        /* 180      */ 0,
        /* 181      */ 0,
        /* 182      */ 0,
        /* 183      */ 0,
        /* 184      */ 0,
        /* 185      */ 0,
        /* 186      */ 0,
        /* 187      */ 0,
        /* 188      */ 0,
        /* 189      */ 0,
        /* 190      */ 0,
        /* 191      */ 0,
        /* 192      */ 0,
        /* 193      */ 0,
        /* 194      */ 0,
        /* 195      */ 0,
        /* 196      */ 0,
        /* 197      */ 0,
        /* 198      */ 0,
        /* 199      */ 0,
        /* 200      */ 0,
        /* 201      */ 0,
        /* 202      */ 0,
        /* 203      */ 0,
        /* 204      */ 0,
        /* 205      */ 0,
        /* 206      */ 0,
        /* 207      */ 0,
        /* 208      */ 0,
        /* 209      */ 0,
        /* 210      */ 0,
        /* 211      */ 0,
        /* 212      */ 0,
        /* 213      */ 0,
        /* 214      */ 0,
        /* 215      */ 0,
        /* 216      */ 0,
        /* 217      */ 0,
        /* 218      */ 0,
        /* 219      */ 0,
        /* 220      */ 0,
        /* 221      */ 0,
        /* 222      */ 0,
        /* 223      */ 0,
        /* 224      */ 0,
        /* 225      */ 0,
        /* 226      */ 0,
        /* 227      */ 0,
        /* 228      */ 0,
        /* 229      */ 0,
        /* 230      */ 0,
        /* 231      */ 0,
        /* 232      */ 0,
        /* 233      */ 0,
        /* 234      */ 0,
        /* 235      */ 0,
        /* 236      */ 0,
        /* 237      */ 0,
        /* 238      */ 0,
        /* 239      */ 0,
        /* 240      */ 0,
        /* 241      */ 0,
        /* 242      */ 0,
        /* 243      */ 0,
        /* 244      */ 0,
        /* 245      */ 0,
        /* 246      */ 0,
        /* 247      */ 0,
        /* 248      */ 0,
        /* 249      */ 0,
        /* 250      */ 0,
        /* 251      */ 0,
        /* 252      */ 0,
        /* 253      */ 0,
        /* 254      */ 0,
        /* 255      */ 0
};

int isalnum(int c) { return((__ctype_table[c+1] & (__CTYPE_DIGIT|__CTYPE_LOWER_CASE|__CTYPE_UPPER_CASE)) != 0); }
int isalpha(int c) { return((__ctype_table[c+1] & (__CTYPE_LOWER_CASE|__CTYPE_UPPER_CASE)) != 0); }
int iscntrl(int c) { return((__ctype_table[c+1] & __CTYPE_CONTROL) != 0); }
int isdigit(int c) { return((__ctype_table[c+1] & __CTYPE_DIGIT) != 0); }
int isxdigit(int c) { return((__ctype_table[c+1] & __CTYPE_HEX_DIGIT) != 0); }
int isgraph(int c) { return((__ctype_table[c+1] & (__CTYPE_DIGIT|__CTYPE_PUNCTUATION|__CTYPE_LOWER_CASE|__CTYPE_UPPER_CASE)) != 0); }
int ispunct(int c) { return((__ctype_table[c+1] & __CTYPE_PUNCTUATION) != 0); }
int isprint(int c) { return((__ctype_table[c+1] & __CTYPE_PRINTABLE) != 0); }
int islower(int c) { return((__ctype_table[c+1] & __CTYPE_LOWER_CASE) != 0); }
int isupper(int c) { return((__ctype_table[c+1] & __CTYPE_UPPER_CASE) != 0); }
int isspace(int c) { return((__ctype_table[c+1] & __CTYPE_WHITE_SPACE) != 0); }

int tolower(int c) { return(isupper(c) ? (c - 'A' + 'a') : c); }
int toupper(int c) { return(islower(c) ? (c - 'a' + 'A') : c); }

char *
strcat(char *dest, const char *src)
{
	char * result = dest;

	while((*dest) != '\0')
		dest++;

	while(((*dest++) = (*src++)) != '\0')
		;

	return(result);
}

char *
strchr(const char *s, int c)
{
	const unsigned char * us = (const unsigned char *)s;
	char * result = NULL;
	unsigned char us_c;
	unsigned char find_this = (c & 0xff);

	for(;;)
	{
		us_c = (*us);
		if(us_c == find_this)
		{
			result = (char *)us;
			break;
		}

		if(us_c == '\0')
			break;

		us++;
	}

	return(result);
}

int
strcmp(const char *s1, const char * s2)
{
	int result = 0;

	if(s1 != s2)
	{
		while((*s1) == (*s2))
		{
			if((*s1) == '\0')
				break;

			s1++;
			s2++;
		}

		result = (*s1) - (*s2);
	}

	return(result);
}

char *
strcpy(char *dest, const char *src)
{
	char * result = dest;

	if(dest != src)
		while(((*dest++) = (*src++)) != '\0')
			;

	return(result);
}

size_t
strlen(const char *s)
{
	const char * start = s;
	size_t result = 0;

	while((*s) != '\0')
		s++;

	result = (size_t)(s - start);

	return(result);
}

int
strncmp(const char *s1, const char *s2, size_t n)
{
	int result = 0;

	/* If the number of characters is 0 or negative, then this
	 * function is supposed to have no effect.
	 */
	if(s1 != s2 && (int)n > 0)
	{
		while(n-- > 0)
		{
			if((*s1) == (*s2))
			{
				if((*s1) == '\0')
					break;

				s1++;
				s2++;
			}
			else
			{
				result = (*s1) - (*s2);
				break;
			}
		}
	}

	return(result);
}

char *
strncpy(char *dest, const char *src, size_t n)
{
	char * result = dest;

	/* If the number of characters is 0 or negative, then this
	 * function is supposed to have no effect.
	 */
	if((int)n > 0)
	{
		while(n-- > 0)
		{
			if(((*dest++) = (*src++)) == '\0')
			{
				/* Fill the rest with NUL bytes... */
				while(n-- > 0)
					(*dest++) = '\0';

				break;
			}
		}
	}

	return(result);
}

char *
strrchr(const char *s, int c)
{
	const unsigned char * us = (const unsigned char *)s;
	char * result = NULL;
	unsigned char us_c;
	unsigned char find_this = (c & 0xff);

	/* This is technically the opposite of strchr(), but the
	 * implementation is very similar. However, instead of
	 * stopping on the first location that holds the desired
	 * value we just remember where we found it. When the
	 * end of the string finally arrives we will thus be
	 * able to return a pointer to the last occurence of
	 * the character.
	 */
	for(;;)
	{
		us_c = (*us);
		if(us_c == find_this)
			result = (char *)us;

		if(us_c == '\0')
			break;

		us++;
	}

	return(result);
}

int
strncasecmp(const char * _s1, const char * _s2,size_t n)
{
	const unsigned char *s1 = (const unsigned char *)_s1;
	const unsigned char *s2 = (const unsigned char *)_s2;
	unsigned char c1,c2;
	int result = 0;

	if(s1 != s2)
	{
		while(n-- > 0)
		{
			c1 = toupper(*s1++);
			c2 = toupper(*s2++);

			if(c1 == c2)
			{
				if(c1 == '\0')
					break;
			}
			else
			{
				result = (int)c1 - (int)c2;
				break;
			}
		}
	}

	return(result);
}

size_t
strlcat(char *dst, const char *src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t result;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while(n-- != 0 && (*d) != '\0')
		d++;

	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
	{
		result = dlen + strlen(s);
	}
	else
	{
		while((*s) != '\0')
		{
			if(n != 1)
			{
				(*d++) = (*s);

				n--;
			}

			s++;
		}

		(*d) = '\0';

		result = dlen + (s - src); /* count does not include NUL */
	}

 out:

	return(result);
}

size_t
strlcpy(char *dst, const char *src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t result;

	/* Copy as many bytes as will fit */
	if(n != 0 && --n != 0)
	{
		do
		{
			if(((*d++) = (*s++)) == '\0')
				break;
		}
		while(--n != 0);
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if(n == 0)
	{
		if(siz != 0)
			(*d) = '\0'; /* NUL-terminate dst */

		while (*s++)
			;
	}

	result = (s - src - 1);	/* count does not include NUL */

 out:

	return(result);
}
