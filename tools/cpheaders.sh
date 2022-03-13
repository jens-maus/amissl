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

BUILD_D=$1
rm -f include/openssl/*
for header in ${BUILD_D}/openssl/include/openssl/*.h openssl/include/openssl/*.h; do
  file=$(basename ${header})
  if echo "${file}" | grep -qv "__"; then
    cp -a ${header} include/openssl/
    sed -i '0,/^ \* Copyright/s// * Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.\n * Copyright (c) 2014-2022 AmiSSL Open Source Team.\n * All Rights Reserved.\n *\n * This file has been modified for use with AmiSSL for AmigaOS-based systems.\n *\n&/' include/openssl/${file}
    sed -i '0,/^ \*\//s//&\n\n#if !defined(PROTO_AMISSL_H) \&\& !defined(AMISSL_COMPILE)\n# include <proto\/amissl.h>\n#endif/' include/openssl/${file}
    sed -i '0,/pragma once/s//if defined(__GNUC__) \&\& (__GNUC__ > 3 || (__GNUC__ == 3 \&\& __GNUC_MINOR__ > 3))\n#  &\n# endif/' include/openssl/${file}
    echo "copied+patched ${header} to include/openssl"
  fi
done
