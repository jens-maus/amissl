#!/bin/sh
#
# script to update the root CA files in this
# directory
#

CURDIR=$(pwd)
TMPDIR=$(mktemp -d)
cd ${TMPDIR}
wget -O ca-bundle.crt https://curl.se/ca/cacert.pem
awk 'BEGIN {c=0} v{v=v"\n"$0} /----BEGIN/{v=$0;c++}/----END/&&v { print v > "cert." c ".pem"; v=x}' ca-bundle.crt
rm ca-bundle.crt
c_rehash .
rm -f ${CURDIR}/*.[[:alnum:]]
find . -type l -exec cp {} ${CURDIR}/ \;
rm -rf ${TMPDIR}
