#!/usr/bin/perl -w

# Makes scripts needed to create link libraries. Writes script
# files in current directory.

use strict;

my $openssldir = "SSL:"; # Must have a trailing : or /
my $amisslobj = "AmiSSL:obj/"; # Ditto
my $mode = 0;
my $currdir;
my $mainobjects;
my $currobjs;

open(IN, "<${openssldir}MINFO") || die "${openssldir}MINFO: $!\n";

while(<IN>)
{
	if (!$mode)
	{
		if (/^RELATIVE_DIRECTORY=(.{2,})$/)
		{
			$currdir = $1;
			$mode = &is_needed($currdir);
		}
	}
	else
	{
		if (/^LIBOBJ=(.*)$/)
		{
			if ($mode == 1)
			{
				$currobjs = $1;
				&write_script(&findlastpart($currdir), $currobjs);
			}
			elsif ($mode == 2)
			{
				$mainobjects .= $1 . " ";
			}
			$mode = 0;
		}
	}
}
close(IN);

&write_script("main", $mainobjects) if defined($mainobjects);

sub is_needed
{
	my ($test) = @_;
	my $needed = 0;

	if (($test eq "crypto/bf") || ($test eq "crypto/cast") || ($test eq "crypto/des")
		|| ($test eq "crypto/idea") || ($test eq "crypto/md2") || ($test eq "crypto/md4") || ($test eq "crypto/md5")
		|| ($test eq "crypto/mdc2") || ($test eq "crypto/sha") || ($test eq "crypto/rc2")
		|| ($test eq "crypto/rc4") || ($test eq "crypto/rc5") || ($test eq "crypto/ripemd"))
	{
		$needed = 1;
	}
	elsif (($test eq "crypto") || ($test eq "crypto/asn1") || ($test eq "crypto/bio")
		 || ($test eq "crypto/bn") || ($test eq "crypto/buffer") || ($test eq "crypto/comp")
		 || ($test eq "crypto/conf") || ($test eq "crypto/dh") || ($test eq "crypto/dsa")
		 || ($test eq "crypto/err") || ($test eq "crypto/evp") || ($test eq "crypto/hmac")
		 || ($test eq "crypto/lhash") || ($test eq "crypto/objects") || ($test eq "crypto/pem")
		 || ($test eq "crypto/pkcs12") || ($test eq "crypto/pkcs7") || ($test eq "crypto/rand")
		 || ($test eq "crypto/stack") || ($test eq "crypto/txt_db")
		 || ($test eq "crypto/x509") || ($test eq "crypto/x509v3")
		 || ($test eq "ssl"))
	{
		$needed = 2;
	}

	return($needed);
}

sub write_script
{
	my ($name, $objs) = @_;
	my $maxlen = 150;
	my $currline;
	my @obj = split(/ /, $objs);

	open(OUT, ">$name") || die "$name: $!\n";

	print OUT ".key \"CPU/A/K\"\n.bra {\n.ket }\n\nCD ${openssldir}tmp\n\n";

	$currline = "";

	foreach(@obj)
	{
		$currline .= $_ . " ";
		if (length($currline) > $maxlen)
		{
			print OUT "Delete $currline\n";
			$currline = "";
		}
	}

	print OUT "Delete $currline\n" if ($currline ne "");

	print OUT "\nCD $openssldir\n\nsmake headers\n\n";
	
	foreach(@obj)
	{
 		print OUT "smake CPU_TYPE={CPU} ADD=DEF=\U$name\E_LIB_COMPILE tmp/$_\n";
	}

	print OUT "\nCD ${openssldir}tmp\n\n";

	$currline = "";

	foreach(@obj)
	{
		$currline .= $_ . " ";
		if (length($currline) > $maxlen)
		{
			print OUT "oml $amisslobj$name.lib.{CPU} a $currline\n";
			$currline = "";
		}
	}

	print OUT "oml $amisslobj$name.lib.{CPU} a $currline\n" if ($currline ne "");

	close(OUT);
}

sub findlastpart
{
	my ($path) = @_;

	$path =~ /^(.*)\/(.*)$/;

	if (defined($2))
	{
		return($2);
	}
	else
	{
		$path =~ /^(.*)$/;
		return($1);
	}
}
