#!/usr/local/bin/perl
#
# amiga-os4.pl - AmigaOS4
#

$o='/';
$cp='cp';
$rm='-rm -f';
$mkdir='mkdir';

# C compiler stuff
$cc="\$(CC)";
$cfile="-c ";

if ($debug)
  { $cflags="-g -gstabs -DREF_CHECK -DCRYPTO_MDEBUG"; }
elsif ($profile)
  { $cflags="-pg -O3"; }
else
  { $cflags="-O3 -fomit-frame-pointer"; }

$cflags.=" -mcrt=clib2 -mcpu=powerpc -mstrict-align -DNDEBUG -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -D__NO_NET_API -DB_ENDIAN -DOPENSSL_NO_STDIO -DOPENSSL_SYS_AMIGA -I\$(AmiSSL)/include -DOPENSSLDIR=\\\"AmiSSL:\\\" -DENGINESDIR=\\\"AmiSSL:engines\\\" -W -Wall";
$app_cflag="-I\$(AmiSSL)/openssl";
$lib_cflag="-mbaserel -mcheck68kfuncptr -DAMISSL_COMPILE -I\$(AmiSSL)/libcmt/include";
$obj='.o';
$ofile='-o ';
$define='-D';
$include='-I';

# EXE linking stuff
$link='${CC}';
$lflags='-mcrt=clib2';
$efile='-o ';
$exep='';
$ex_libs='$(AmiSSL)/bin_os4/libamisslauto.a $(AmiSSL)/bin_os4/libamisslstubs.a -lm';

# static library stuff
$mklib='ppc-amigaos-ar r';
$mlflags='';
$ranlib='ppc-amigaos-ranlib';
$plib='lib';
$libp=".a";
$shlibp=".a";
$lfile='';

$asm='ppc-amigaos-as';
$afile='-o ';
$bn_asm_obj="\$(OBJ_D)/bn_asm_amigaos4_ppc32.o";
$bn_asm_src="\$(TMP_D)/bn_asm_amigaos4_ppc32.s";
$des_enc_obj="";
$des_enc_src="";
$bf_enc_obj="";
$bf_enc_src="";

$src_dir='$(AmiSSL)/openssl/';
$maxchars=2048;

sub do_lib_rule
	{
	local($obj,$target,$name,$shlib)=@_;
	local($ret,$_,$Name);

	$target =~ s/\//$o/g if $o ne '/';
	$target="$target";
	($Name=$name) =~ tr/a-z/A-Z/;

	$ret.="$target: \$(${Name}OBJ)\n";
	$ret.="\t\$(RM) $target\n";
	$ret.="\t\$(MKLIB) $target \$(${Name}OBJ)\n";
	$ret.="\t\$(RANLIB) $target\n\n";
	}

sub do_link_rule
	{
	local($target,$files,$dep_libs,$libs)=@_;
	local($ret,$_);

	$file =~ s/\//$o/g if $o ne '/';
	$n=&bname($target);
	$ret.="$target: $files $dep_libs\n";
	$ret.="\t\$(LINK) ${efile}$target \$(LFLAGS) $files $libs\n\n";
	return($ret);
	}

sub do_rehash_rule {
    my ($target, $deps) = @_;
    my $ret = <<"EOF";
$target: $deps
	(OPENSSL="`pwd`/util/opensslwrap.sh"; \\
	OPENSSL_DEBUG_MEMORY=on; \\
	export OPENSSL OPENSSL_DEBUG_MEMORY; \\
	\$(PERL) \$(BIN_D)${o}c_rehash certs/demo; \\
	touch $target)
EOF
    return $ret
}
sub do_test_rule {
    my ($target, $deps, $test_cmd) = @_;
    my $ret = <<"EOF";
$target: $deps force.$target
	TOP=. BIN_D=\$(BIN_D) TEST_D=\$(TEST_D) \\
	    PERL=\$(PERL) \$(PERL) test/$test_cmd \$(TESTS)
force.$target:

EOF
    return $ret;
}

1;
