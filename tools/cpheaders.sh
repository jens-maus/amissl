#!/bin/sh
for header in openssl/outinc/openssl/*; do
  outfile=`basename ${header}`
  cat > include/openssl/${outfile} << EOF
#ifndef PROTO_AMISSL_H
#include <proto/amissl.h>
#endif /* PROTO_AMISSL_H */
EOF

  cat ${header} >>include/openssl/${outfile}
  echo "copied+patched ${outfile} to include/openssl"
done
