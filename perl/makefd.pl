#!/usr/bin/perl -w

# Perl script to make xxx.fd_AmiSSL FD files needed for creation
# of shared libraries.
#
# Usage: perl makefd.pl infile_lib.fd
#
# Output goes to infile_lib.fd_AmiSSL

use strict;

open(IN, "<$ARGV[0]") || die "$ARGV[0]: $!\n";
open(OUT, ">$ARGV[0]_AmiSSL") || die "$ARGV[0]_AmiSSL: $!\n";
while(<IN>)
{
	s/^(.*?)\((.*)$/$1_AmiSSL\($2/;
	print OUT;
}
close(OUT);
close(IN);
