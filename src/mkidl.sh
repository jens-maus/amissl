#!/bin/sh

# amissl.library 
tmp=`mktemp -d`
idltool -a -g ../include/xml/amissl.xml -o ${tmp}
patch ${tmp}/amissl_glue.c < amissl_glue.patch
cp ${tmp}/amissl_glue.c .
cp ${tmp}/amissl_glue.h .
cp ${tmp}/amissl_m68k.c .
cp ${tmp}/include/inline4/amissl.h ../include/inline4/
cp ${tmp}/include/interfaces/amissl.* ../include/interfaces/
#cp ${tmp}/include/proto/amissl.h ../include/proto/
rm -rf ${tmp}

# amisslmaster.library 
tmp=`mktemp -d`
idltool -a -g ../include/xml/amisslmaster.xml -o ${tmp}
cp ${tmp}/amisslmaster_glue.h .
cp ${tmp}/amisslmaster_m68k.c .
cp ${tmp}/include/inline4/amisslmaster.h ../include/inline4/
cp ${tmp}/include/interfaces/amisslmaster.* ../include/interfaces/
cp ${tmp}/include/proto/amisslmaster.h ../include/proto/
rm -rf ${tmp}

# create sfd files from our xml file
idltool -d ../include/xml/amissl.xml -o ../include/sfd
idltool -d ../include/xml/amisslmaster.xml -o ../include/sfd

# create fd files from sfd files
sfdc --mode=fd ../include/sfd/amissl_lib.sfd -o ../include/fd/amissl_lib.fd
sfdc --mode=fd ../include/sfd/amisslmaster_lib.sfd -o ../include/fd/amisslmaster_lib.fd

# create generic proto file
#sfdc --mode=proto ../include/sfd/amissl_lib.sfd -o ../include/proto/amissl.h
#sfdc --mode=proto ../include/sfd/amisslmaster_lib.sfd -o ../include/proto/amisslmaster.h

# os3/m68k header creation
#sfdc --mode=clib ../include/sfd/amissl_lib.sfd -o ../include/clib/amissl_protos.h
sfdc --mode=clib ../include/sfd/amisslmaster_lib.sfd -o ../include/clib/amisslmaster_protos.h
sfdc --mode=macros ../include/sfd/amissl_lib.sfd -o ../include/inline/amissl.h
sfdc --mode=macros ../include/sfd/amisslmaster_lib.sfd -o ../include/inline/amisslmaster.h
sfdc --mode=pragmas ../include/sfd/amissl_lib.sfd -o ../include/pragmas/amissl_pragmas.h
sfdc --mode=pragmas ../include/sfd/amisslmaster_lib.sfd -o ../include/pragmas/amisslmaster_pragmas.h

# mos/ppc specific header creation
sfdc --mode=macros --target ppc-morphos ../include/sfd/amissl_lib.sfd -o ../include/ppcinline/amissl.h
sfdc --mode=macros --target ppc-morphos ../include/sfd/amisslmaster_lib.sfd -o ../include/ppcinline/amisslmaster.h
sfdc --mode=gatestubs --target ppc-morphos ../include/sfd/amissl_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first -o amissl_stubs_mos.c
sfdc --mode=gatestubs --target ppc-morphos ../include/sfd/amisslmaster_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first -o amisslmaster_stubs_mos.c
sfdc --mode=gateproto --target ppc-morphos ../include/sfd/amissl_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first --sdi -o amissl_stubs_mos.h
sfdc --mode=gateproto --target ppc-morphos ../include/sfd/amisslmaster_lib.sfd --gateprefix LIBSTUB_ --libprefix LIB_ --libarg first --sdi -o amisslmaster_stubs_mos.h
