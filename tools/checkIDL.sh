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

NUM_FILES="../openssl/util/libssl.num ../openssl/util/libcrypto.num"
IDL_FILE="../include/xml/amissl.xml"
OUTINC="../include/openssl"
itest="(\!WIN16.*|\!VMS.*|\!VMSVAX.*|\!EXPORT_VAR_AS_FUNCTION.*|\!NeXT.*|\!OS2.*)"

SYMBOLS=`awk '{
  if(($4 ~ /^EXIST:\!.*:FUNCTION:.*/ ||
      $4 ~ /^EXIST:EXPORT_VAR_AS_FUNCTION.*:FUNCTION:.*/ ||
      $4 ~ /^EXIST::FUNCTION:.*/) && $4 !~ /(KRB5|JPAKE|SCTP|EC_NISTP_64_GCC_128|RFC3779)/) print $1
}' ${NUM_FILES}`

HEADERS=`find ${OUTINC} -name "*.h"`

rm -f missing_func.xml

for symbol in ${SYMBOLS}; do

  grep -q "<method name=\"${symbol}\"" ${IDL_FILE}
  if [ $? -ne 0 ]; then
    echo "${symbol} not found in ${IDL_FILE}"
    echo "    <method name=\"${symbol}\" result=\"\">" >>missing_func.xml
    echo "      <arg name=\"\" type=\"\" m68kreg=\"a0\"/>" >>missing_func.xml

    # search in outinc for the prototype
    for header in ${HEADERS}; do
      #awk "/${symbol}\(/,/\);/ {print; count++; if(count=1) exit}" ${header} >>missing_func.xml
      awk "/${symbol}\(.*\);/" ${header} >>missing_func.xml
      grep -q "${symbol}(" ${header}
      if [ $? -eq 0 ]; then
        break
      fi
    done

    echo "    </method>" >>missing_func.xml
  fi

done
