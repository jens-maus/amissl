#!/bin/sh
OBJ_DIR=$1
rm -f include/openssl/*
for header in openssl/include/openssl/*.h; do
  file=$(basename ${header})
  if echo "${file}" | grep -qv "__"; then
    cp -a ${header} include/openssl/
    sed -i '1s/^/#if !defined(PROTO_AMISSL_H) \&\& !defined(AMISSL_COMPILE)\n#include <proto\/amissl.h>\n#endif\n/' include/openssl/${file}
    echo "copied+patched ${header} to include/openssl"
  fi
done
mkdir -p ${OBJ_DIR}/crypto/include/internal
rm -f ${OBJ_DIR}/cryptol/include/internal/*.h
for header in openssl/crypto/include/internal/*.h; do
  file=$(basename ${header})
  if echo "${file}" | grep -qv "__"; then
    cp -a ${header} ${OBJ_DIR}/crypto/include/internal/
    sed -i '1s/^/#if !defined(PROTO_AMISSL_H) \&\& !defined(AMISSL_COMPILE)\n#include <proto\/amissl.h>\n#endif\n/' ${OBJ_DIR}/crypto/include/internal/${file}
    echo "copied+patched ${header} ${OBJ_DIR}/crypto/include/internal"
  fi
done
