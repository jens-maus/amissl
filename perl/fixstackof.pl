#!/usr/bin/perl -w

# Changes all occurances of STACK_OF to STACK in order to
# make it possible for FD2Pragma to understand amissl_protos.h
# file since STACK_OF is a macro.
#
# Usage: perl fixstackof.pl infile outfile

use strict;

open(IN, "<$ARGV[0]") || die "$ARGV[0]: $!\n";
open(OUT, ">$ARGV[1]") || die "$ARGV[1]: $!\n";

while(<IN>)
{
	s/STACK_OF\(.*?\)/STACK/g;

	print OUT;
}

close(OUT);
close(IN);
