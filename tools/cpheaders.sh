#!/bin/sh
rm -f include/openssl/*
for header in openssl/include/openssl/*.h; do
  file=$(basename ${header})
  if echo "${file}" | grep -qv "__"; then
    cp -a ${header} include/openssl/
    sed -i '1s/^/#ifndef PROTO_AMISSL_H\n#include <proto\/amissl.h>\n#endif\n/' include/openssl/${file}
    echo "copied+patched ${header} to include/openssl"
  fi
done
