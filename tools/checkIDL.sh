#!/bin/sh

NUM_FILES="../openssl/util/ssleay.num ../openssl/util/libeay.num"
IDL_FILE="../include/xml/amissl.xml"
OUTINC="../openssl/outinc"
itest="(\!WIN16.*|\!VMS.*|\!VMSVAX.*|\!EXPORT_VAR_AS_FUNCTION.*|\!NeXT.*|\!OS2.*)"

SYMBOLS=`awk '{
  if(($3 ~ /^EXIST:\!.*:FUNCTION:.*/ ||
      $3 ~ /^EXIST:EXPORT_VAR_AS_FUNCTION.*:FUNCTION:.*/ ||
      $3 ~ /^EXIST::FUNCTION:.*/) && $3 !~ /(KRB5|JPAKE|SCTP|EC_NISTP_64_GCC_128|RFC3779)/) print $1
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
      awk "/${symbol}\(/,/\);/" ${header} >>missing_func.xml
      grep -q "${symbol}(" ${header}
      if [ $? -eq 0 ]; then
        break
      fi
    done

    echo "    </method>" >>missing_func.xml
  fi

done
