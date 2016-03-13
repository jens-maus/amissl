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

$cflags.=" -mcrt=clib2 -mcpu=powerpc -mstrict-align -DNDEBUG -D__USE_INLINE__ -D__NEW_TIMEVAL_DEFINITION_USED__ -D__NO_NET_API -DB_ENDIAN -DOPENSSL_NO_FP_API -DOPENSSL_SYS_AMIGA -I\$(AmiSSL)/include -W -Wall -Wno-unused-parameter";
if (!$no_asm)
  { $cflags.=" -DOPENSSL_BN_ASM_MONT -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DAES_ASM -DVPAES_ASM"; }
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

sub special_compile_target
	{
	local($target) = @_;

	if ($target eq 'crypto/bn/bn-ppc')
	{
		return &perlasm_compile_target("$to${o}$n$obj","crypto/bn/asm/ppc.pl","bn-ppc");
	}

	return 0;
	}

1;
