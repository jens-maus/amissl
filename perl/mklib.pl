#!/usr/bin/perl -w

# Makes autoinitialization routines for AmiSSL. amissl_lib.c
# needs some hand tuning.

use strict;

my @bases = ("AmiSSL", "BlowFish", "CAST", "DES", "IDEA", "MD2", "MD4", "MD5",
			"MDC2", "RC2", "RC4", "RC5", "RIPEMD", "SHA");

foreach (@bases)
{
	if ($_ eq "AmiSSL")
	{
		&makesource($_, 1, "", lc($_ . "lib.c"));
	}
	else
	{
		&makesource($_, 1, "amissl/", lc($_ . "lib.c"));
	}
}

open(OUT, ">SMakefile") || die "can't open SMakefile:$!\n";
print OUT "OBJS=";
foreach (@bases)
{
	print OUT "\L$_\Elib.o ";
}
print OUT "\n\n";

print OUT "all: amissl.lib\n\namissl.lib: \$(OBJS)\n\t-Delete amissl.lib\n\toml amissl.lib a <\@<\n\$(OBJS)\n<\n\n";

foreach (@bases)
{
	my $start = lc($_ . "lib");
	print OUT "${start}.o: ${start}.c\n\tsc ${start}.c NOSTACKCHECK SAVEDS STRINGMERGE\n\n";
}
close(OUT);

exit(0);

sub makesource
{
	my ($base, $ver, $prefix, $outfile) = @_;
	my $lbase = lc($base);

	open(OUT, ">$outfile") || die "can't open $outfile:$!\n";

	print OUT <<"EOF";
#define __USE_SYSBASE	1
#include <proto/exec.h> 

void __regargs __autoopenfail(char *);

struct Library *${base}Base;
static void *libbase;

int __stdargs _STI_250_open${lbase}(void)
{
	if (!(${base}Base = libbase = (void *)OpenLibrary("${prefix}${lbase}.library", ${ver})))
	{
		__autoopenfail("${prefix}${lbase}.library");
		return(1);
	}
	return(0);
}

void __stdargs _STD_250_open${lbase}(void)
{
	if (libbase)
	{
		CloseLibrary((struct Library *)libbase);
		libbase = ${base}Base = NULL;
	}
}
EOF
	close(OUT);
}
