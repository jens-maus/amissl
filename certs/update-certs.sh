#!/bin/sh
#
############################################################################
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
# Copyright (c) 2006-2023 AmiSSL Open Source Team.
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

#
# script to update the root CA files in this directory
#

CURDIR=$(pwd)
TMPDIR=$(mktemp -d)
cd ${TMPDIR}
wget -O ca-bundle.crt https://curl.se/ca/cacert.pem
awk 'BEGIN {c=0} v{v=v"\n"$0} /----BEGIN/{v=$0;c++}/----END/&&v { print v > "cert." c ".pem"; v=x}' ca-bundle.crt
rm ca-bundle.crt
openssl rehash -compat .
rm -f ${CURDIR}/*.[[:alnum:]]
find . -type l -exec cp {} ${CURDIR}/ \;
rm -rf ${TMPDIR}
