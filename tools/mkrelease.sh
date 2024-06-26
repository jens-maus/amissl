#!/bin/sh
#
############################################################################
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
# Copyright (c) 2006-2022 AmiSSL Open Source Team.
# All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License in the file LICENSE in the
# source distribution or at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# AmiSSL Official Support Site: https://github.com/jens-maus/amissl
#
############################################################################

# AmiSSL release archive build script

rm -rf "release"
mkdir -p "release"
mkdir -p "release/AmiSSL"
mkdir -p "release/AmiSSL/C"
mkdir -p "release/AmiSSL/Certs"
mkdir -p "release/AmiSSL/Developer"
mkdir -p "release/AmiSSL/Developer/Autodocs"
mkdir -p "release/AmiSSL/Developer/Examples"
mkdir -p "release/AmiSSL/Developer/fd"
mkdir -p "release/AmiSSL/Developer/include"
mkdir -p "release/AmiSSL/Developer/lib"
mkdir -p "release/AmiSSL/Developer/sfd"
mkdir -p "release/AmiSSL/Developer/xml"
mkdir -p "release/AmiSSL/Doc"
mkdir -p "release/AmiSSL/Libs"

releasever=`grep ^VERSION= Makefile | awk -F= '{ print $2 }'`
releaserev=`grep ^REVISION= Makefile | awk -F= '{ print $2 }'`
versionname=`grep ^MAJOR= openssl/VERSION.dat | awk -F= '{ print $2 }'`
versionname="${versionname}`grep ^MINOR= openssl/VERSION.dat | awk -F= '{ print $2 }'`"
versionname="${versionname}`grep ^PATCH= openssl/VERSION.dat | awk -F= '{ print $2 }'`"

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
	    $strip -p -R.comment build_$os/httpget -o "release/AmiSSL/Developer/Examples/$fullsys/httpget"
	    chmod 755 "release/AmiSSL/Developer/Examples/$fullsys/httpget"
	    mkdir -p "release/AmiSSL/Developer/lib/$fullsys"
	    cp -a build_$os/libamisslstubs.a "release/AmiSSL/Developer/lib/$fullsys/"
	    cp -a build_$os/libamisslauto.a "release/AmiSSL/Developer/lib/$fullsys/"
	fi
done

cp -a dist/AmiSSL.info "release/"
cp -a dist/AutoInstall "release/"
cp -a dist/Install-AmiSSL* "release/AmiSSL/"
cp -a dist/*.doc.info "release/AmiSSL/Doc/"
sed -E  "s/\{version\}/$releasever.$releaserev/" dist/AmiSSL.readme > release/AmiSSL/Doc/AmiSSL.doc
sed -Ei 's/\{repsuffix\}//' release/AmiSSL/Doc/AmiSSL.doc
sed -Ei 's/\{requires\}/AmigaOS 4.0\/PPC, AmigaOS 3.0+\/68020+/' release/AmiSSL/Doc/AmiSSL.doc
sed -Ei 's/\{arch\}/ppc-amigaos >= 4.0.5; m68k-amigaos >= 3.0.0/' release/AmiSSL/Doc/AmiSSL.doc
sed -E  's/^#+\s//g' CHANGES.md > "release/AmiSSL/Doc/ChangeLog"
cp -a dist/ChangeLog.info "release/AmiSSL/Doc/"
cp -a dist/Doc.info "release/AmiSSL/"
cp -a dist/Developer.info "release/AmiSSL/"
cp -a certs/*.? "release/AmiSSL/Certs/"
cp -a openssl/apps/openssl.cnf "release/AmiSSL/C/"
cp -a build_os4/openssl/apps/*.pl "release/AmiSSL/C/"

# create new OpenSSL.doc
echo "  MK OpenSSL.doc"
sh tools/openssldoc.sh > release/AmiSSL/Doc/OpenSSL.doc

# copy SDK relevant files
cp -a dist/README-SDK "release/AmiSSL/Developer/"
cp -a dist/*.doc "release/AmiSSL/Developer/Autodocs/"
cp -a test/http*.c "release/AmiSSL/Developer/Examples/"
cp -a src/autoinit_amissl_main.c "release/AmiSSL/Developer/lib/"
cp -a include/fd/amissl* "release/AmiSSL/Developer/fd/"
cp -a include/sfd/amissl* "release/AmiSSL/Developer/sfd/"
cp -a include/xml/amissl* "release/AmiSSL/Developer/xml/"
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

cd release

#echo "  MK AmiSSL-$releasever.$releaserev.lha"
#rm -f ../AmiSSL-$releasever.$releaserev.lha
#lha a -o5q21 ../AmiSSL-$releasever.$releaserev.lha *
#(cd ../ ; sha256sum AmiSSL-$releasever.$releaserev.lha >AmiSSL-$releasever.$releaserev.lha.sha256)
#cp -a AmiSSL/Doc/AmiSSL.doc ../AmiSSL-$releasever.$releaserev.readme

echo "  MK AmiSSL-$releasever.$releaserev-OS3.lha"
rm -f ../AmiSSL-$releasever.$releaserev-OS3.lha
lha a -o5q21 -x=*Developer* -x=*AmigaOS4* ../AmiSSL-$releasever.$releaserev-OS3.lha AmiSSL AmiSSL.info
(cd ../ ; sha256sum AmiSSL-$releasever.$releaserev-OS3.lha >AmiSSL-$releasever.$releaserev-OS3.lha.sha256)
sed -E  "s/\{version\}/$releasever.$releaserev/" ../dist/AmiSSL.readme > ../AmiSSL-$releasever.$releaserev-OS3.readme
sed -Ei 's/\{repsuffix\}/-OS3/' ../AmiSSL-$releasever.$releaserev-OS3.readme
sed -Ei 's/\{requires\}/AmigaOS 3.0+\/68020+/' ../AmiSSL-$releasever.$releaserev-OS3.readme
sed -Ei 's/\{arch\}/m68k-amigaos >= 3.0.0/' ../AmiSSL-$releasever.$releaserev-OS3.readme

echo "  MK AmiSSL-$releasever.$releaserev-OS4.lha"
rm -f ../AmiSSL-$releasever.$releaserev-OS4.lha
lha a -o5q21 -x=*Developer* -x=*AmigaOS3* ../AmiSSL-$releasever.$releaserev-OS4.lha *
(cd ../ ; sha256sum AmiSSL-$releasever.$releaserev-OS4.lha >AmiSSL-$releasever.$releaserev-OS4.lha.sha256)
sed -E  "s/\{version\}/$releasever.$releaserev/" ../dist/AmiSSL.readme > ../AmiSSL-$releasever.$releaserev-OS4.readme
sed -Ei 's/\{repsuffix\}/-OS4/' ../AmiSSL-$releasever.$releaserev-OS4.readme
sed -Ei 's/\{requires\}/AmigaOS 4.0\/PPC/' ../AmiSSL-$releasever.$releaserev-OS4.readme
sed -Ei 's/\{arch\}/ppc-amigaos >= 4.0.5/' ../AmiSSL-$releasever.$releaserev-OS4.readme

echo "  MK AmiSSL-$releasever.$releaserev-SDK.lha"
rm -f ../AmiSSL-$releasever.$releaserev-SDK.lha
lha a -o5q21 ../AmiSSL-$releasever.$releaserev-SDK.lha AmiSSL/Developer* AmiSSL/Doc/AmiSSL.doc* AmiSSL.info
(cd ../ ; sha256sum AmiSSL-$releasever.$releaserev-SDK.lha >AmiSSL-$releasever.$releaserev-SDK.lha.sha256)
sed -E  "s/\{version\}/$releasever.$releaserev/" ../dist/AmiSSL.readme > ../AmiSSL-$releasever.$releaserev-SDK.readme
sed -Ei 's/^(Short:.*)/\1 SDK/' ../AmiSSL-$releasever.$releaserev-SDK.readme
sed -Ei 's/\{repsuffix\}/-SDK/' ../AmiSSL-$releasever.$releaserev-SDK.readme
sed -Ei '/^Requires:.*/d' ../AmiSSL-$releasever.$releaserev-SDK.readme
sed -Ei 's/\{arch\}/ppc-amigaos >= 4.0.5; m68k-amigaos >= 3.0.0/' ../AmiSSL-$releasever.$releaserev-SDK.readme

cd ..
