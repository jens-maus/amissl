#!/bin/sh

tmp=`mktemp -d`
idltool -a -g ../include/xml/amissl.xml -o ${tmp}
patch ${tmp}/amissl_glue.c < amissl_glue.patch
sed -i "s/(_ossl_old_des_key_schedule)/(void *)/g" ${tmp}/amissl_m68k.c
sed -i "s/(_ossl_old_des_cblock)/(void *)/g" ${tmp}/amissl_m68k.c
cp ${tmp}/amissl_glue.c .
cp ${tmp}/amissl_m68k.c .
cp ${tmp}/amissl_vectors.? .
cp ${tmp}/include/inline4/amissl.h ../include/inline4/
cp ${tmp}/include/interfaces/amissl.* ../include/interfaces/
cp ${tmp}/include/proto/amissl.h ../include/proto/
rm -rf ${tmp}
