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

# idltool minimum version check
idltool_minver=53.32
[ "`idltool | head -c13 | tail -c5`" \< "$idltool_minver" ] && { echo "idltool $idltool_minver required - please upgrade"; exit 1; }

# amisslmaster.library 
tmp=`mktemp -d`
idltool -a -g ../include/xml/amisslmaster.xml -o ${tmp}
sed -Ei 's/(\s)OBSOLETE_/\1/g' ${tmp}/amisslmaster_glue.c
cp ${tmp}/amisslmaster_glue.h .
cp ${tmp}/amisslmaster_m68k.c .
cp ${tmp}/include/inline4/amisslmaster.h ../include/inline4/
cp ${tmp}/include/interfaces/amisslmaster.* ../include/interfaces/
#cp ${tmp}/include/proto/amisslmaster.h ../include/proto/
rm -rf ${tmp}

# amissl.library 
tmp=`mktemp -d`
idltool -a -g ../include/xml/amissl.xml -o ${tmp}
sed -Ei 's/(\s)OBSOLETE_/\1/g' ${tmp}/amissl_glue.c
patch ${tmp}/amissl_glue.c < amissl_glue.patch
cp ${tmp}/amissl_glue.c .
cp ${tmp}/include/inline4/amissl.h ../include/inline4/
cp ${tmp}/include/interfaces/amissl.* ../include/interfaces/
#cp ${tmp}/include/proto/amissl.h ../include/proto/
# we need to split the huge function vector table into two
csplit -s -n1 -f${tmp}/part ../include/xml/amissl.xml /###/ {*}
cat ${tmp}/part0 ${tmp}/part1 ${tmp}/part3 > ${tmp}/amissl.xml
idltool -g -m ${tmp}/amissl.xml -o ${tmp}
cp ${tmp}/amissl_glue.h .
patch ${tmp}/amissl_m68k.c < amissl_m68k.patch
cp ${tmp}/amissl_m68k.c .
cat ${tmp}/part0 ${tmp}/part2 ${tmp}/part3 > ${tmp}/amisslext.xml
sed -i 's/basename=\"AmiSSLBase\"/basename=\"AmiSSLExtBase\"/' ${tmp}/amisslext.xml
sed -i 's/name=\"amissl\"/name=\"amisslext\"/' ${tmp}/amisslext.xml
sed -i 's/openname=\"amissl.library\"/openname=\"amisslext.library\"/' ${tmp}/amisslext.xml
sed -i 's/name=\"main\"/name=\"ext\"/' ${tmp}/amisslext.xml
idltool -g -m ${tmp}/amisslext.xml -o ${tmp}
sed -i 's/SDI_LIBVECTOR/SDI_LIBVECTOR_EXT/' ${tmp}/amisslext_glue.h
sed -i 's/amisslext\.h/amissl\.h/' ${tmp}/amisslext_m68k.c
patch ${tmp}/amisslext_m68k.c < amisslext_m68k.patch
cp ${tmp}/amisslext_glue.h .
cp ${tmp}/amisslext_m68k.c .

# create sfd files from our xml file
idltool -d ${tmp}/amissl.xml -o ../include/sfd
idltool -d ${tmp}/amisslext.xml -o ../include/sfd
idltool -d ../include/xml/amisslmaster.xml -o ../include/sfd
rm -rf ${tmp}

# create fd files from sfd files
sfdc --mode=fd ../include/sfd/amissl_lib.sfd -o ../include/fd/amissl_lib.fd
sfdc --mode=fd ../include/sfd/amisslext_lib.sfd -o ../include/fd/amisslext_lib.fd
sfdc --mode=fd ../include/sfd/amisslmaster_lib.sfd -o ../include/fd/amisslmaster_lib.fd

# create generic proto file
#sfdc --mode=proto ../include/sfd/amissl_lib.sfd -o ../include/proto/amissl.h
#sfdc --mode=proto ../include/sfd/amisslmaster_lib.sfd -o ../include/proto/amisslmaster.h

# os3/m68k header creation
#sfdc --mode=clib ../include/sfd/amissl_lib.sfd -o ../include/clib/amissl_protos.h
#sfdc --mode=clib ../include/sfd/amisslext_lib.sfd -o ../include/clib/amisslext_protos.h
#sfdc --mode=clib ../include/sfd/amisslmaster_lib.sfd -o ../include/clib/amisslmaster_protos.h
sfdc --mode=macros ../include/sfd/amissl_lib.sfd -o ../include/inline/amissl.h
sfdc --mode=macros ../include/sfd/amisslext_lib.sfd -o ../include/inline/amisslext.h
sfdc --mode=macros ../include/sfd/amisslmaster_lib.sfd -o ../include/inline/amisslmaster.h
sfdc --mode=pragmas ../include/sfd/amissl_lib.sfd -o ../include/pragmas/amissl_pragmas.h
sfdc --mode=pragmas ../include/sfd/amisslext_lib.sfd -o ../include/pragmas/amisslext_pragmas.h
sfdc --mode=pragmas ../include/sfd/amisslmaster_lib.sfd -o ../include/pragmas/amisslmaster_pragmas.h
sfdc --mode=macros --target m68kvbcc-unknown-amigaos ../include/sfd/amissl_lib.sfd -o ../include/inline/amissl_protos.h
sfdc --mode=macros --target m68kvbcc-unknown-amigaos ../include/sfd/amisslext_lib.sfd -o ../include/inline/amisslext_protos.h
sfdc --mode=macros --target m68kvbcc-unknown-amigaos ../include/sfd/amisslmaster_lib.sfd -o ../include/inline/amisslmaster_protos.h

# mos/ppc specific header creation
sfdc --mode=macros --target ppc-morphos ../include/sfd/amissl_lib.sfd -o ../include/ppcinline/amissl.h
sfdc --mode=macros --target ppc-morphos ../include/sfd/amisslext_lib.sfd -o ../include/ppcinline/amisslext.h
sfdc --mode=macros --target ppc-morphos ../include/sfd/amisslmaster_lib.sfd -o ../include/ppcinline/amisslmaster.h
sfdc --mode=gatestubs --target ppc-morphos ../include/sfd/amissl_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first -o amissl_stubs_mos.c
sfdc --mode=gatestubs --target ppc-morphos ../include/sfd/amisslext_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first -o amisslext_stubs_mos.c
sfdc --mode=gatestubs --target ppc-morphos ../include/sfd/amisslmaster_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first -o amisslmaster_stubs_mos.c
sfdc --mode=gateproto --target ppc-morphos ../include/sfd/amissl_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first --sdi -o amissl_stubs_mos.h
sfdc --mode=gateproto --target ppc-morphos ../include/sfd/amisslext_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first --sdi -o amisslext_stubs_mos.h
sfdc --mode=gateproto --target ppc-morphos ../include/sfd/amisslmaster_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first --sdi -o amisslmaster_stubs_mos.h

# aros specific header creation
sfdc --mode=macros --target i386-aros ../include/sfd/amissl_lib.sfd -o ../include/defines/amissl.h
sfdc --mode=macros --target i386-aros ../include/sfd/amisslext_lib.sfd -o ../include/defines/amisslext.h
sfdc --mode=macros --target i386-aros ../include/sfd/amisslmaster_lib.sfd -o ../include/defines/amisslmaster.h
