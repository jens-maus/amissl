#ifndef mc68000

#include <stdlib.h>

char *strcpy(char *s1,const char *s2)
{ char *s=s1;
  do
    *s++=*s2;
  while(*s2++!='\0');
  return s1;
}

#else

asm("
	.globl	_strcpy
_strcpy:
	moveml	sp@(4:W),d0/a0
	movel	d0,a1
L1:	moveb	a0@+,a1@+
	jne	L1
	rts
");

#endif
