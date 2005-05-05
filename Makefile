SRC_D=src
OBJ_D=obj
LIB_D=lib
OUTDIR=LIBS:
LIBCPU=68000
LIBSSL=openssl/OS4/out/libssl.a
LIBCRYPTO=openssl/OS4/out/libcrypto.a
STRIPDEBUG=

VERSION=3
VERSIONNAME=097g
AMISSLREVISION=4
AMISSLMASTERREVISION=4
AMISSLDATE=5.5.2005
AMISSLMASTERDATE=5.5.2005

LFLAGS=-nostdlib -mbaserel -mcrt=clib2-ts
OPT= -O2
INCLUDE = -I$(AmiSSL)/include -I$(AmiSSL)/libcmt/include
CFLAGS=$(INCLUDE) -mbaserel -mcrt=clib2-ts $(OPT) -DAMISSL_COMPILE \
       -DVERSION=$(VERSION) -DVERSIONNAME=$(VERSIONNAME) \
       -DAMISSLREVISION=$(AMISSLREVISION) -DAMISSLDATE=$(AMISSLDATE) \
       -DAMISSLMASTERREVISION=$(AMISSLMASTERREVISION) \
       -DAMISSLMASTERDATE=$(AMISSLMASTERDATE)
OBJS= $(OBJ_D)/amissl_library_os4.o $(OBJ_D)/amissl_library.o $(OBJ_D)/amissl_glue.o $(OBJ_D)/amissl_68k.o
LIBS= $(LIBSSL) $(LIBCRYPTO) libcmt/libcmt.a -lc -lm -lgcc

all: amissl_v$(VERSIONNAME).library amisslmaster.library \
     $(LIB_D)/libamisslauto.a $(LIB_D)/libamisslstubs.a

clean:
	-rm obj/*.o

$(OBJ_D)/%.o: $(SRC_D)/%.c
	ppc-amigaos-gcc -c $< -o $@ $(CFLAGS)

$(OBJ_D)/amissl_library_os4.o: $(SRC_D)/amissl_library_os4.c $(SRC_D)/amissl_vectors.c
$(OBJ_D)/amissl_glue.o: $(SRC_D)/amissl_glue.c
$(OBJ_D)/amissl_library.o: $(SRC_D)/amissl_library.c
$(OBJ_D)/amissl_68k.o: $(SRC_D)/amissl_68k.c
$(OBJ_D)/amisslmaster_library.o: $(SRC_D)/amisslmaster_library.c
$(OBJ_D)/amisslmaster_library_os4.o: $(SRC_D)/amisslmaster_library_os4.c $(SRC_D)/amisslmaster_vectors.c
$(OBJ_D)/amisslmaster_68k.o: $(SRC_D)/amisslmaster_68k.c

amissl_v$(VERSIONNAME).library: $(OBJS) libcmt/libcmt.a $(LIBSSL) $(LIBCRYPTO)
	ppc-amigaos-gcc -o $@ $(LFLAGS) $(OBJS) $(LIBS) -Wl,-M,-Map=$@.map
#	ppc-amigaos-strip $@
	cp $@ /cygdrive/D/FTP

amisslmaster.library: $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_library.o $(OBJ_D)/amisslmaster_68k.o
	ppc-amigaos-gcc -o $@ $(LFLAGS) $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_68k.o $(OBJ_D)/amisslmaster_library.o -mbaserel -Wl,-M,-Map=$@.map
#	ppc-amigaos-strip $@
	cp $@ /cygdrive/D/FTP

$(OBJ_D)/autoinit_amissl_main.o: $(SRC_D)/autoinit_amissl_main.c
	ppc-amigaos-gcc -c $< -o $@ -DVERSION=$(VERSION) $(INCLUDE)

$(OBJ_D)/libstubs.o: $(SRC_D)/libstubs.c
	ppc-amigaos-gcc -c $< -o $@ $(INCLUDE)

$(LIB_D)/libamisslauto.a: $(OBJ_D)/autoinit_amissl_main.o
	ppc-amigaos-ar r $@ $(OBJ_D)/autoinit_amissl_main.o
#	cp $@ /usr/local/amiga/ppc-amigaos/local/clib2/lib

$(LIB_D)/libamisslstubs.a: $(OBJ_D)/libstubs.o
	ppc-amigaos-ar r $@ $(OBJ_D)/libstubs.o

testing:
	ppc-amigaos-gcc basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib

libs:
	sh makeit.os4

cleanlibs:
	rm -rf openssl/OS4/*
	
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
	delete $(RELDIR)/include/CVS all
	delete $(RELDIR)/include/#?/CVS all
	copy certs/~(#?CVS#?) $(RELDIR)/certs all CLONE
