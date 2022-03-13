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

# Read the OpenSSL .pod manual files and output them in OpenSSL.doc format

releasever=`grep ^VERSION= Makefile | awk -F= '{ print $2 }'`
releaserev=`grep ^AMISSLMASTERREVISION= Makefile | awk -F= '{ print $2 }'`
releasedate=`grep ^AMISSLMASTERDATE= Makefile | awk -F= '{ print $2 }'`

printf "\$VER: OpenSSL.doc $releasever.$releaserev ($releasedate)\n\n"

pod2text -w80 openssl/doc/man1/openssl.pod

find openssl/doc/man1 build_os4/openssl/doc/man1 -name "*.pod" \
    ! -regex "^.*\openssl\.pod$" -type f -printf "%f###%p\n" \
    | sort | sed 's/.*###//' |
while IFS= read -r podfile; do
    printf "\n********************************************************************************\n\n"
    pod2text -w80 $podfile
done
