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
OS="os3 os4"

for os in ${OS}; do
	case $os in
	    os3)         fullsys="AmigaOS3";;
	    os4)         fullsys="AmigaOS4";;
	    mos)         fullsys="MorphOS";;
	    aros-i386)   fullsys="AROS-i386";;
	    aros-ppc)    fullsys="AROS-ppc";;
	    aros-x86_64) fullsys="AROS-x86_64";;
	esac
	mkdir -p "release/AmiSSL/Libs/$fullsys"
	cp -a build_$os/amisslmaster.library "release/AmiSSL/Libs/$fullsys/"
	mkdir -p "release/AmiSSL/Libs/$fullsys/AmiSSL"
	cp -a build_$os/amissl_v$versionname.library "release/AmiSSL/Libs/$fullsys/AmiSSL/"
	mkdir -p "release/AmiSSL/C/$fullsys"
	cp -a build_$os/openssl/apps/openssl "release/AmiSSL/C/$fullsys/OpenSSL"
	mkdir -p "release/AmiSSL/Developer/Examples/$fullsys"
	cp -a build_$os/https "release/AmiSSL/Developer/Examples/$fullsys/"
	mkdir -p "release/AmiSSL/Developer/lib/$fullsys"
	cp -a build_$os/libamisslauto.a "release/AmiSSL/Developer/lib/$fullsys/"
done

cp -a dist/AmiSSL.info "release/"
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

# copy SDK relevant files
cp -a include/amissl "release/AmiSSL/Developer/include/"
cp -a include/openssl "release/AmiSSL/Developer/include/"
for incdir in clib inline inline4 interfaces libraries ppcinline pragmas proto; do
  mkdir -p "release/AmiSSL/Developer/include/${incdir}"
	cp -a -R include/${incdir}/amissl* "release/AmiSSL/Developer/include/${incdir}/"
done

releasever=`grep ^VERSION= Makefile | awk -F= '{ print $2 }'`
releaserev=`grep ^AMISSLMASTERREVISION= Makefile | awk -F= '{ print $2 }'`

echo "  MK AmiSSL-$releasever.$releaserev.lha"
cd release
rm -f ../AmiSSL-$releasever.$releaserev.lha
lha -ao5q ../AmiSSL-$releasever.$releaserev.lha *
cp ../dist/AmiSSL.readme ../AmiSSL-$releasever.$releaserev.readme
cd ..
