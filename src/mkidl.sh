#!/bin/sh

# amissl.library 
tmp=`mktemp -d`
idltool -a -g ../include/xml/amissl.xml -o ${tmp}
patch ${tmp}/amissl_glue.c < amissl_glue.patch
sed -i "s/(_ossl_old_des_key_schedule)/(void *)/g" ${tmp}/amissl_m68k.c
sed -i "s/(_ossl_old_des_cblock)/(void *)/g" ${tmp}/amissl_m68k.c
cp ${tmp}/amissl_glue.c .
cp ${tmp}/amissl_glue.h .
cp ${tmp}/amissl_m68k.c .
cp ${tmp}/amissl_vectors.? .
cp ${tmp}/include/inline4/amissl.h ../include/inline4/
cp ${tmp}/include/interfaces/amissl.* ../include/interfaces/
cp ${tmp}/include/proto/amissl.h ../include/proto/
rm -rf ${tmp}

# amisslmaster.library 
tmp=`mktemp -d`
idltool -a ../include/xml/amisslmaster.xml -o ${tmp}
cp ${tmp}/amisslmaster_m68k.c .
cp ${tmp}/amisslmaster_vectors.? .
cp ${tmp}/include/inline4/amisslmaster.h ../include/inline4/
cp ${tmp}/include/interfaces/amisslmaster.* ../include/interfaces/
cp ${tmp}/include/proto/amisslmaster.h ../include/proto/
rm -rf ${tmp}

# os3/m68k stuff
idltool -d ../include/xml/amissl.xml -o ../include/sfd
idltool -d ../include/xml/amisslmaster.xml -o ../include/sfd
sfdc --mode=fd ../include/sfd/amissl_lib.sfd -o ../include/fd/amissl_lib.fd
sfdc --mode=fd ../include/sfd/amisslmaster_lib.sfd -o ../include/fd/amisslmaster_lib.fd
#sfdc --mode=clib ../include/sfd/amissl_lib.sfd -o ../include/clib/amissl_protos.h
sfdc --mode=clib ../include/sfd/amisslmaster_lib.sfd -o ../include/clib/amisslmaster_protos.h
sfdc --mode=macros ../include/sfd/amissl_lib.sfd -o ../include/inline/amissl.h
sfdc --mode=macros ../include/sfd/amisslmaster_lib.sfd -o ../include/inline/amisslmaster.h
sfdc --mode=pragmas ../include/sfd/amissl_lib.sfd -o ../include/pragmas/amissl_pragmas.h
sfdc --mode=pragmas ../include/sfd/amisslmaster_lib.sfd -o ../include/pragmas/amisslmaster_pragmas.h
sfdc --mode=proto ../include/sfd/amissl_lib.sfd -o ../include/proto/amissl.h
sfdc --mode=proto ../include/sfd/amisslmaster_lib.sfd -o ../include/proto/amisslmaster.h
