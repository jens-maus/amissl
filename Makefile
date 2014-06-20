SRC_D=src
OBJ_D=obj
LIB_D=lib
OUTDIR=LIBS:
LIBCPU=OS4
LIBSSL=openssl/OS4/out/libssl.a
LIBCRYPTO=openssl/OS4/out/libcrypto.a
STRIPDEBUG=

ifeq ($(AmiSSL),)
  AmiSSL=.
endif

VERSION=3
VERSIONNAME=098y
AMISSLREVISION=8
AMISSLMASTERREVISION=8
AMISSLDATE=28.03.2014
AMISSLMASTERDATE=28.03.2014

LFLAGS=-mcrt=clib2 -nostdlib -mbaserel
OPT=-O2 
INCLUDE = -I$(AmiSSL)/include -I$(AmiSSL)/libcmt/include
CFLAGS=$(INCLUDE) -mbaserel -mcrt=clib2 $(OPT) -DAMISSL -DAMISSL_COMPILE \
       -DVERSION=$(VERSION) -DVERSIONNAME=$(VERSIONNAME) \
       -DAMISSLREVISION=$(AMISSLREVISION) -DAMISSLDATE=$(AMISSLDATE) \
       -DAMISSLMASTERREVISION=$(AMISSLMASTERREVISION) \
       -DAMISSLMASTERDATE=$(AMISSLMASTERDATE) -DLIBCPU=$(LIBCPU) \
       -Wno-pointer-sign
OBJS= $(OBJ_D)/amissl_library_os4.o $(OBJ_D)/amissl_library.o $(OBJ_D)/amissl_glue.o $(OBJ_D)/amissl_m68k.o
LIBS= $(LIBSSL) $(LIBCRYPTO) libcmt/libcmt.a

all: $(LIB_D)/libamisslauto.a $(LIB_D)/libamisslstubs.a amissl_v$(VERSIONNAME).library amisslmaster.library

clean:
	-rm -f obj/*.o lib/*.a libcmt/*.o libcmt/*.a
	-rm -f amissl_v$(VERSIONNAME).library*
	-rm -f amisslmaster.library*

distclean: clean cleanlibs
	-rm -f openssl/MINFO
	-rm -f openssl/Makefile
	-rm -f openssl/crypto/opensslconf.h
	-rm -f openssl/openssl.pc
	-rm -f openssl/crypto/buildinf.h
	-rm -rf openssl/outinc
	-rm -rf obj lib
	-rm -rf *.library *.map
	-rm -rf OS4

$(OBJ_D)/%.o: $(SRC_D)/%.c
	ppc-amigaos-gcc-4.0.3 $(GCCVER) -c $< -o $@ $(CFLAGS)

$(OBJ_D)/amissl_library_os4.o: $(SRC_D)/amissl_library_os4.c $(SRC_D)/amissl_vectors.c
$(OBJ_D)/amissl_glue.o: $(SRC_D)/amissl_glue.c
$(OBJ_D)/amissl_library.o: $(SRC_D)/amissl_library.c
$(OBJ_D)/amissl_m68k.o: $(SRC_D)/amissl_m68k.c
$(OBJ_D)/amisslmaster_library.o: $(SRC_D)/amisslmaster_library.c
$(OBJ_D)/amisslmaster_library_os4.o: $(SRC_D)/amisslmaster_library_os4.c $(SRC_D)/amisslmaster_vectors.c
$(OBJ_D)/amisslmaster_m68k.o: $(SRC_D)/amisslmaster_m68k.c

amissl_v$(VERSIONNAME).library: $(OBJS) libcmt/libcmt.a $(LIBSSL) $(LIBCRYPTO)
	ppc-amigaos-gcc-4.0.3 -o $@ $(LFLAGS) $(OBJS) $(LIBS) -Wl,-M,-Map=$@.map
#	ppc-amigaos-strip $@
#	cp $@ /cygdrive/D/FTP

amisslmaster.library: $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_library.o $(OBJ_D)/amisslmaster_m68k.o
	ppc-amigaos-gcc-4.0.3 -o $@ $(LFLAGS) $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_m68k.o $(OBJ_D)/amisslmaster_library.o -Wl,-M,-Map=$@.map
#	ppc-amigaos-strip $@
#	cp $@ /cygdrive/D/FTP

$(OBJ_D)/autoinit_amissl_main.o: $(SRC_D)/autoinit_amissl_main.c
	ppc-amigaos-gcc-4.0.3 -mcrt=clib2 -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE) -Wno-pointer-sign

$(OBJ_D)/libstubs.o: $(SRC_D)/libstubs.c
	ppc-amigaos-gcc-4.0.3 -mcrt=clib2 -c $< -o $@ -DAMISSL $(INCLUDE) -Wno-pointer-sign

$(LIB_D)/libamisslauto.a: $(OBJ_D)/autoinit_amissl_main.o
	ppc-amigaos-ar r $@ $(OBJ_D)/autoinit_amissl_main.o
#	cp $@ /usr/local/amiga/ppc-amigaos/local/clib2/lib

$(LIB_D)/libamisslstubs.a: $(OBJ_D)/libstubs.o
	ppc-amigaos-ar r $@ $(OBJ_D)/libstubs.o

testing:
	ppc-amigaos-gcc-4.0.3 basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib

libs:
	sh makeit.os4

cleanlibs:
	rm -rf openssl/OS4
	
tests:
	(cd openssl; make -f OS4/Makefile.one exe)

RELDIR = RAM:AmiSSL$(VERSION)

release:
	delete $(RELDIR) all
	makedir $(RELDIR)
	makedir $(RELDIR)/libs
	makedir $(RELDIR)/libs/amissl
	copy libs:amissl/amissl_v$(VERSIONNAME).library $(RELDIR)/libs/amissl CLONE
	copy libs:amisslmaster.library $(RELDIR)/libs CLONE
	copy include $(RELDIR)/include all CLONE
	delete $(RELDIR)/include/internal all
	delete $(RELDIR)/include/CVS all
	delete $(RELDIR)/include/#?/CVS all
	copy certs/~(#?CVS#?) $(RELDIR)/certs all CLONE
