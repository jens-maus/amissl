#!/usr/bin/perl -w

# Produces a script file to make all shared libraries

use strict;

my $dummy; my $mday; my $mon; my $year;

($dummy, $dummy, $dummy, $mday, $mon, $year, $dummy, $dummy, $dummy) = localtime();
$year %= 100;
$mon += 1;
my $tmpfile = "T:smakelibs.tmp." . rand(65535);

system("List AmiSSL:obj/*.lib.* QUICK NOHEAD SORT=NAME > $tmpfile");

open(IN, "<$tmpfile") || die "couldn't open $tmpfile: $!\n";

while(<IN>)
{
	if (/^(.*)\.lib.(.*)$/)
	{
		if ($1 ne "main")
		{
			print "smake $1.library DATE=${mday}.${mon}.${year} CPU=$2\n";
		}
		else
		{
			print "smake amissl.library DATE=${mday}.${mon}.${year} CPU=$2\n";
		}
	}
}

close(IN);

unlink($tmpfile);
