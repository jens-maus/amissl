#!/usr/bin/perl -w

# Patches all includes (both in outinc and respective directories) to
# change #include <openssl/file.h> to #include <amissl/file.h> and
# adds #include <proto/amissl_all.h>

use strict;

my $openssldir = "/SSL"; # Must be UNIX style path
my @includes;
my $dir = "";
my $curr;

open(IN, "<${openssldir}/MINFO") || die "${openssldir}/MINFO: $!\n";

while(<IN>)
{
	if (/^RELATIVE_DIRECTORY=(.+)$/)
	{
		$dir = $1;
	}
	else
	{
		if (/^EXHEADER=(.*)$/)
		{
			foreach(split(/ /, $1))
			{
				push(@includes, $openssldir . "/" . $dir . "/" . $_);
			}
		}
	}
}
close(IN);

foreach(@includes)
{
	$curr = $_;
	fixinclude($curr);

# This is not needed since SMakefile will copy original includes
# to outinc whenever they change

#	$curr =~ /^(.*)\/(.*)$/;
#	fixinclude($openssldir . "/outinc/openssl/" . $2);
}

sub fixinclude
{
	my ($file) = @_;

	open(INC, "<$file") || die "couldn't open $file: $!\n";
	open(OUT, ">$file.new") || die "couldn't open $file.new: $!\n";

	while(<INC>)
	{

		if (/^extern "C" \{$/)
		{
			<INC>;	# Read #endif
			print OUT &Include;
			$_ = "";
		}


#		s/(.*)<openssl\/(.*?)\.h>(.*)$/$1<amissl\/$2\.h>$3/;
#		# The following one is for <openssl/opensslconf> and similar
#		s/(.*)<amissl\/openssl(.*?)\.h>(.*)$/$1<amissl\/amissl$2\.h>$3/;
		print OUT;
	}

	close(OUT);
	close(INC);

	unlink($file);
	rename($file . ".new", $file);
}

sub Include
{
	return <<'EOF';
extern "C" {
#endif

#if defined(AMISSL) && !defined(PROTO_AMISSL_ALL_H)
#include <proto/amissl_all.h>
#endif /* AMISSL && !PROTO_AMISSL_ALL_H */
EOF
}
