#!/usr/bin/perl -w

# Patches all includes to change #include <openssl/file.h>
# to #include <amissl/file.h> and adds #include <proto/amissl_all.h>

use strict;

my $openssldir = "/SSL"; # Must be UNIX style path
my @includes;
my $dir = "";

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
	fixinclude($_);
}

exit(0);

sub fixinclude
{
	my $file = shift;

	open(INC, "<$file") || die "couldn't open $file: $!\n";
	open(OUT, ">$file.new") || die "couldn't open $file.new: $!\n";

	while(<INC>)
	{
		if (/^extern "C" \{$/)
		{
			<INC>;	# Read #endif
			print OUT &Include;
		}
		else
		{
			print OUT;
		}
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
