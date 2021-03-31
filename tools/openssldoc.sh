#!/bin/sh

# Read the OpenSSL .pod manual files and output them in OpenSSL.doc format

releasever=`grep ^VERSION= Makefile | awk -F= '{ print $2 }'`
releaserev=`grep ^AMISSLMASTERREVISION= Makefile | awk -F= '{ print $2 }'`
releasedate=`grep ^AMISSLMASTERDATE= Makefile | awk -F= '{ print $2 }'`

printf "\$VER: OpenSSL.doc $releasever.$releaserev ($releasedate)\n\n"

pod2text -w80 openssl/doc/man1/openssl.pod

find openssl/doc/man1 ! -regex "^.*\openssl\.pod$" -type f | sort |
while IFS= read -r podfile; do
    printf "\n********************************************************************************\n\n"
    pod2text -w80 $podfile
done
