#!/usr/local/bin/perl
#
# SC.pl - SAS/C (Amiga) stuff.
#

$o='/';
$cp='cp';
$rm='-Delete QUIET FORCE';
$mkdir='MakeDir';

# C compiler stuff
$cc="sc";
$cfile="CSRC ";
$cflags="";
# There's something strange with __bulitin_memcmp in SAS
$app_cflag="\$(ADD) CPU=\$(CPU_TYPE) DEF __USE_SYSBASE=1 DEF __builtin_memcmp=memcmp DEF AMISSL DEF B_ENDIAN DEF THIRTY_TWO_BITS DEF OPENSSL_NO_FP_API DEF OPENSSL_NO_ENGINE IGN=55+63+72+154+161+304+306 NOSTKCHK STRMERGE ABSFUNCPOINTER IDLEN=100 MATH=STANDARD IDIR NetInclude: IDIR AmiSSL:include IDIR AmiSSL:openssl SAVEDS DEBUG=LINE";
$lib_cflag="\$(ADD) CPU=\$(CPU_TYPE) STRSECT=CODE DEF __USE_SYSBASE=1 DEF __builtin_memcmp=memcmp DEF AMISSL DEF AMISSL_COMPILE DEF B_ENDIAN DEF THIRTY_TWO_BITS DEF OPENSSL_NO_FP_API DEF OPENSSL_NO_ENGINE IGN=55+63+72+154+161+304+306 NOSTKCHK STRMERGE ABSFUNCPOINTER IDLEN=100 MATH=STANDARD IDIR NetInclude: IDIR AmiSSL:include DEBUG=LINE";
# OPT OPTGO OPTPEEP OPTLOOP OPTINL OPTINLOCAL OPTDEP=4 OPTSCHED
$obj='.o';
$ofile='OBJNAME ';
$define='DEF ';
$include='IDIR ';

# EXE linking stuff
$link='${CC} LINK';
# either SAS bsearch is fubar'd or SSLeay doesn't like it...
$lflags='${CFLAG} NOICONS SMALLCODE MATH=STANDARD "LINKOPTS=DEFINE _bsearch=_OBJ_bsearch LIB lib:miami.lib AmiSSL:lib/amisslauto.lib AmiSSL:lib/amisslstubs.lib"';
$efile='TO ';
$exep='';
$ex_libs="";

# static library stuff
$mklib='oml';
$libadd='a';
$mlflags='';
$ranlib='';
$plib='';
$libp=".lib";
$shlibp=".lib";
$lfile='';

$asm='asm';
$afile='-o ';
$bn_asm_obj="";
$bn_asm_src="";
$des_enc_obj="";
$des_enc_src="";
$bf_enc_obj="";
$bf_enc_src="";

$src_dir=~ s/\.$//;
$quote='"';
$maxchars=2048;

sub do_lib_rule
	{
	local($obj,$target,$name,$shlib)=@_;
	local($ret,$_,$Name);
	
	$target =~ s/\//$o/g if $o ne '/';
	($Name=$name) =~ tr/a-z/A-Z/;

	$ret.="$target: \$(${Name}OBJ)\n";
	$ret.="\t-\$(RM) $target\n";
	$ret.="\t\$(MKLIB) $target $libadd \$(${Name}OBJ)\n\n";
	}

sub do_link_rule
	{
	local($target,$files,$dep_libs,$libs,$sha1file,$openssl)=@_;
	local($ret,$_);
	
	$file =~ s/\//$o/g if $o ne '/';
	$n=&bname($target);
	$ret.="$target: $files $dep_libs\n";
	$ret.="\t\$(LINK) ${efile}$target \$(LFLAGS) FROM $files\n\n";
	return($ret);
	}

1;
