#!/usr/bin/perl -w

# Automatically makes all pragmas files using FD2Pragma

use strict;

my @bases = ("AmiSSL");
my @args;

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
	mkpragmas($_, "FD/", "RAM:", "T:");
}

sub mkpragmas
{

	my ($base, $indir, $outdir, $tmpdir) = @_;
	my $infile = $indir . lc($base) . "_lib.fd";
	my $outfile = $outdir . lc($base) . "_pragmas.h";
	my $tmpfile = $tmpdir . lc($base) . "_pragmas.h";
	my $skip;
	my $ret;

	$ret = system("/Util/FD2Pragma INFILE $infile SPECIAL=3 MODE=3 TO $tmpdir");

	if ($ret == 0)
	{
		open(IN, "<$tmpfile") || die "Couldn't read file $tmpfile: $!\n";
		open(OUT, ">$outfile") || die "Couldn't open $outfile: $!\n";

		$skip = 0;

		while(<IN>)
		{
			$skip = 4 if (/^#ifndef CLIB_(.*)_PROTOS_H$/);

			if ($skip > 0)
			{
				$skip--;
			}
			else
			{
				tr/ //s;
				s/^#endif\t\/\* PRAGMAS_(.*)_PRAGMA_H \*\/$/#endif \/\* PRAGMAS_$1_PRAGMAS_H \*\//;

				print OUT;

				print STDERR "$base tagcall: $_" if (/tagcall/);
			}
		}

		close(OUT);
		close(IN);

		unlink($tmpfile) || warn("Couldn't unlink $tmpfile: $!\n");
	}
	else
	{
		warn "Couldn't read file $tmpfile: $!\n"
	}
}
