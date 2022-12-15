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

versionname=`grep ^MAJOR= openssl/VERSION.dat | awk -F= '{ print $2 }'`
versionname="${versionname}`grep ^MINOR= openssl/VERSION.dat | awk -F= '{ print $2 }'`"
versionname="${versionname}`grep ^PATCH= openssl/VERSION.dat | awk -F= '{ print $2 }'`"

# OS4 baserel sanity check
# (only a problem should CopyDataSegment() relocs fail)

relocs=`ppc-amigaos-objdump -r release/AmiSSL/Libs/AmigaOS4/amisslmaster.library -j.data | grep -E 'R_PPC_.*\.(data|bss|sbss)' | wc -l`
if [ "$relocs" != "0" ]; then
    echo "WARN: amisslmaster.library has $relocs .data relocs";
fi

relocs=`ppc-amigaos-objdump -r "release/AmiSSL/Libs/AmigaOS4/AmiSSL/amissl_v$versionname.library" -j.(data|bss|sbss) | grep -E 'R_PPC_.*\.data' | wc -l`
if [ "$relocs" != "0" ]; then
    echo "WARN: amissl_$versionname.library has $relocs .data relocs";
fi
