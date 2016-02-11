#!/usr/local/bin/perl
#
# amiga-os3.pl - AmigaOS3
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

$cflags.=" -m68020-60 -msoft-float -DNDEBUG -D__NO_NET_API -DB_ENDIAN -DTHIRTY_TWO_BITS -DOPENSSL_NO_FP_API -DOPENSSL_SYS_AMIGA -DNO_INLINE_VARARGS -I\$(AmiSSL)/include -I\$(AmiSSL)/include/netinclude -W -Wall";
$app_cflag="-I\$(AmiSSL)/openssl";
$lib_cflag="-resident32 -DAMISSL_COMPILE -I\$(AmiSSL)/libcmt/include";
$obj='.o';
$ofile='-o ';
$define='-D';
$include='-I';

# EXE linking stuff
$link='${CC}';
$lflags='-resident32';
$efile='-o ';
$exep='';
$ex_libs='$(AmiSSL)/bin_os3/libamisslauto.a $(AmiSSL)/bin_os3/libamisslstubs.a -lm';

# static library stuff
$mklib='m68k-amigaos-ar r';
$mlflags='';
$ranlib='m68k-amigaos-ranlib';
$plib='lib';
$libp=".a";
$shlibp=".a";
$lfile='';

$asm='m68k-amigaos-as';
$afile='-o ';
$bn_asm_obj="\$(OBJ_D)/bn_asm_amigaos3_m68k32.o";
$bn_asm_src="\$(TMP_D)/bn_asm_amigaos3_m68k32.s";
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

1;
