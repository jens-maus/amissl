#!/usr/bin/perl -w

# Experimental. Used to make PPC pragmas

use strict;

my @bases = ("AmiSSL", "BlowFish", "CAST", "DES", "IDEA", "MD2",
			"MD5", "MDC2", "RC2", "RC4", "RC5", "RIPEMD", "SHA");
my @args;

my $indir = "AmiSSL:FD/";
my $pragmasdir = "AmiSSL:include/powerup/ppcpragmas/";
my $protodir = "AmiSSL:include/powerup/ppcproto/";
my $clibdir = "AmiSSL:include/clib/";

if (uc($ARGV[0]) eq "ALL")
{
	@args = @bases;
}
else
{
	@args = @ARGV;
}

foreach (@args)
{
	mkpragmas($_, "", "", "T:");
}

sub mkpragmas
{
	my $base = $_;
	my $infile = $indir . lc($base) . "_lib.fd";
	my $pragmasfile = $pragmasdir . lc($base) . "_pragmas.h";
	my $protofile = $protodir . lc($base) . ".h";
	my $clibfile = $clibdir . lc($base) . "_protos.h";

	system("/Util/FD2Pragma FDFILE $infile CLIB $clibfile SPECIAL=53 MODE=3 TO $pragmasfile");
	system("/Util/FD2Pragma FDFILE $infile CLIB $clibfile SPECIAL=54 MODE=3 TO $protofile");
}
