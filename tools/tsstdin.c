/***************************************************************************

 AmiSSL - OpenSSL wrapper for AmigaOS-based systems
 Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 Copyright (c) 2006-2022 AmiSSL Open Source Team.
 All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License in the file LICENSE in the
 source distribution or at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 AmiSSL Official Support Site: https://github.com/jens-maus/amissl

***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <errno.h>

#if defined(__amigaos3__)
// clib2 is lacking all these functions
#ifndef timersub
# define timersub(a, b, result)                                               \
  do {                                                                        \
    (result)->tv_sec = (a)->tv_sec - (b)->tv_sec;                             \
    (result)->tv_usec = (a)->tv_usec - (b)->tv_usec;                          \
    if ((long)((result)->tv_usec) < 0) {                                      \
      --(result)->tv_sec;                                                     \
      (result)->tv_usec += 1000000;                                           \
    }                                                                         \
  } while (0)
#endif

#ifndef getdelim
#define MIN_LINE_SIZE 4
#define DEFAULT_LINE_SIZE 128

ssize_t getdelim(char **bufptr, size_t *n, int delim, FILE *fp)
{
  char *buf;
  char *ptr;
  size_t newsize, numbytes;
  int pos;
  int ch;
  int cont;

  if (fp == NULL || bufptr == NULL || n == NULL)
    {
      errno = EINVAL;
      return -1;
    }

  buf = *bufptr;
  if (buf == NULL || *n < MIN_LINE_SIZE)
    {
      buf = (char *)realloc (*bufptr, DEFAULT_LINE_SIZE);
      if (buf == NULL)
        {
	  return -1;
        }
      *bufptr = buf;
      *n = DEFAULT_LINE_SIZE;
    }

  flockfile (fp);

  numbytes = *n;
  ptr = buf;

  cont = 1;

  while (cont)
    {
      /* fill buffer - leaving room for nul-terminator */
      while (--numbytes > 0)
        {
          if ((ch = getc_unlocked (fp)) == EOF)
            {
	      cont = 0;
              break;
            }
	  else
            {
              *ptr++ = ch;
              if (ch == delim)
                {
                  cont = 0;
                  break;
                }
            }
        }

      if (cont)
        {
          /* Buffer is too small so reallocate a larger buffer.  */
          pos = ptr - buf;
          newsize = (*n << 1);
          buf = realloc (buf, newsize);
          if (buf == NULL)
            {
              cont = 0;
              break;
            }

          /* After reallocating, continue in new buffer */
          *bufptr = buf;
          *n = newsize;
          ptr = buf + pos;
          numbytes = newsize - pos;
        }
    }

  funlockfile (fp);

  /* if no input data, return failure */
  if (ptr == buf)
    return -1;

  /* otherwise, nul-terminate and return number of bytes read */
  *ptr = '\0';
  return (ssize_t)(ptr - buf);
}
#endif

#ifndef getline
ssize_t getline(char **lptr, size_t *n, FILE *fp)
{
  return getdelim (lptr, n, '\n', fp);
}
#endif
#endif // __amigaos3__

int main(int argc, char **argv)
{
	char *line = NULL;
	size_t linesize = 0;
	struct timeval start;

	gettimeofday(&start, NULL);

	while(getline(&line, &linesize, stdin) != -1)
	{
		struct timeval now;
		struct timeval diff;

		gettimeofday(&now, NULL);
		timersub(&now, &start, &diff);

		fprintf(stdout, "[%8ld.%06ld] %s", diff.tv_sec, diff.tv_usec, line);
	}

	free(line);

	return 0;
}
