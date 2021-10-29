#!/bin/sh

# AmiSSL release archive build script

rm -rf "release"
mkdir -p "release"
mkdir -p "release/AmiSSL"
mkdir -p "release/AmiSSL/C"
mkdir -p "release/AmiSSL/Certs"
mkdir -p "release/AmiSSL/Developer"
mkdir -p "release/AmiSSL/Developer/Examples"
mkdir -p "release/AmiSSL/Developer/fd"
mkdir -p "release/AmiSSL/Developer/include"
mkdir -p "release/AmiSSL/Developer/lib"
mkdir -p "release/AmiSSL/Developer/sfd"
mkdir -p "release/AmiSSL/Developer/xml"
mkdir -p "release/AmiSSL/Doc"
mkdir -p "release/AmiSSL/Libs"

versionname=`grep ^VERSIONNAME= Makefile | awk -F= '{ print $2 }'`

#OS="os3 os4 mos aros-i386 aros-ppc aros-x86_64"
OS="os3-68020 os3-68060 os4"

for os in ${OS}; do
	libdir="";
	case $os in
	    os3-68020)   fullsys="AmigaOS3" strip="m68k-amigaos-strip" libdir="/68020-40";;
	    os3-68060)   fullsys="AmigaOS3" strip="m68k-amigaos-strip" libdir="/68060";;
	    os4)         fullsys="AmigaOS4" strip="ppc-amigaos-strip --strip-unneeded-rel-relocs";;
	    mos)         fullsys="MorphOS"  strip="ppc-morphos-strip";;
	    aros-i386)   fullsys="AROS-i386";;
	    aros-ppc)    fullsys="AROS-ppc";;
	    aros-x86_64) fullsys="AROS-x86_64";;
	esac
	mkdir -p "release/AmiSSL/Libs/$fullsys/AmiSSL$libdir"
	$strip -p -R.comment build_$os/amissl_v$versionname.library -o "release/AmiSSL/Libs/$fullsys/AmiSSL$libdir/amissl_v$versionname.library"
	chmod 644 "release/AmiSSL/Libs/$fullsys/AmiSSL$libdir/amissl_v$versionname.library"
	if [ "$os" != "os3-68060" ]; then
	    mkdir -p "release/AmiSSL/Libs/$fullsys"
	    $strip -p -R.comment build_$os/amisslmaster.library -o "release/AmiSSL/Libs/$fullsys/amisslmaster.library"
	    chmod 644 "release/AmiSSL/Libs/$fullsys/amisslmaster.library"
	    mkdir -p "release/AmiSSL/C/$fullsys"
	    $strip -p -R.comment build_$os/openssl/apps/openssl -o "release/AmiSSL/C/$fullsys/OpenSSL"
	    chmod 755 "release/AmiSSL/C/$fullsys/OpenSSL"
	    mkdir -p "release/AmiSSL/Developer/Examples/$fullsys"
	    $strip -p -R.comment build_$os/https -o "release/AmiSSL/Developer/Examples/$fullsys/https"
	    chmod 755 "release/AmiSSL/Developer/Examples/$fullsys/https"
	    mkdir -p "release/AmiSSL/Developer/lib/$fullsys"
	    cp -a build_$os/libamisslauto.a "release/AmiSSL/Developer/lib/$fullsys/"
	fi
done

cp -a dist/AmiSSL.info "release/"
cp -a dist/AutoInstall "release/"
cp -a dist/Install-AmiSSL* "release/AmiSSL/"
cp -a dist/*.doc* "release/AmiSSL/Doc/"
cp -a dist/AmiSSL.readme "release/AmiSSL/Doc/AmiSSL.doc"
cp -a dist/Doc.info "release/AmiSSL/"
cp -a dist/Developer.info "release/AmiSSL/"
cp -a certs/*.? "release/AmiSSL/Certs/"
cp -a dist/README-SDK "release/AmiSSL/Developer/"
cp -a test/https.c "release/AmiSSL/Developer/Examples/"
cp -a include/fd/amissl* "release/AmiSSL/Developer/fd/"
cp -a include/sfd/amissl* "release/AmiSSL/Developer/sfd/"
cp -a include/xml/amissl* "release/AmiSSL/Developer/xml/"
cp -a src/autoinit_amissl_main.c "release/AmiSSL/Developer/lib/"
cp -a openssl/apps/openssl.cnf "release/AmiSSL/C/"
cp -a build_os4/openssl/apps/CA.pl "release/AmiSSL/C/"

# create new OpenSSL.doc
sh tools/openssldoc.sh > release/AmiSSL/Doc/OpenSSL.doc

# copy SDK relevant files
cp -a include/amissl "release/AmiSSL/Developer/include/"
cp -a include/openssl "release/AmiSSL/Developer/include/"
for incdir in clib defines inline inline4 interfaces libraries ppcinline pragmas proto; do
	mkdir -p "release/AmiSSL/Developer/include/${incdir}"
	cp -a -R include/${incdir}/amissl* "release/AmiSSL/Developer/include/${incdir}/"
done
# copy the extended ppcinline/macros.h for MorphOS
# the one distributed with MorphOS lacks certain macros, i.e. LP2NRFP()
cp -a include/ppcinline/macros.h "release/AmiSSL/Developer/include/ppcinline/"

# OS4 specific clib2/newlib autoinit lib handling
mkdir -p "release/AmiSSL/Developer/lib/AmigaOS4/clib2"
mkdir -p "release/AmiSSL/Developer/lib/AmigaOS4/newlib"
mv release/AmiSSL/Developer/lib/AmigaOS4/libamisslauto.a "release/AmiSSL/Developer/lib/AmigaOS4/clib2/"
cp -a build_os4/libamisslauto_newlib.a "release/AmiSSL/Developer/lib/AmigaOS4/newlib/libamisslauto.a"

releasever=`grep ^VERSION= Makefile | awk -F= '{ print $2 }'`
releaserev=`grep ^AMISSLMASTERREVISION= Makefile | awk -F= '{ print $2 }'`

echo "  MK AmiSSL-$releasever.$releaserev.lha"
cd release
rm -f ../AmiSSL-$releasever.$releaserev.lha
lha -ao5q21 ../AmiSSL-$releasever.$releaserev.lha *
(cd ../ ; sha256sum AmiSSL-$releasever.$releaserev.lha >AmiSSL-$releasever.$releaserev.lha.sha256)
cp ../dist/AmiSSL.readme ../AmiSSL-$releasever.$releaserev.readme
cd ..
