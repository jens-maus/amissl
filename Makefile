SRC_D=src
OBJ_D=obj
OUTDIR=LIBS:
LIBCPU=68000
LIBSSL=openssl/OS4/out/libssl.a
LIBCRYPTO=openssl/OS4/out/libcrypto.a
STRIPDEBUG=
LIBVERSIONNAME=097e
LIBVERSION=3
LIBREVISION=1
LIBVERSIONFULL=$(LIBVERSION).$(LIBREVISION)
LFLAGS=-nostdlib
OPT= -O2
INCLUDE = -I$(AmiSSL)/include -I$(AmiSSL)/libcmt/include
CFLAGS=$(INCLUDE) -mbaserel $(OPT) 
OBJS= $(OBJ_D)/amissl_library_os4.o $(OBJ_D)/amissl_library.o $(OBJ_D)/amissl_glue.o $(OBJ_D)/amissl_68k.o
LIBS= $(LIBSSL) $(LIBCRYPTO) libcmt/libcmt.a -lc -lm -lgcc
LIBAUTO=lib/libamisslauto.a

all: amissl_v$(LIBVERSIONNAME).library amisslmaster.library $(LIBAUTO)

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

amissl_v$(LIBVERSIONNAME).library: $(OBJS) libcmt/libcmt.a $(LIBSSL) $(LIBCRYPTO)
	ppc-amigaos-gcc -o $@ $(LFLAGS) $(OBJS) $(LIBS) -Wl,-M,-Map=$@.map
#	ppc-amigaos-strip $@
	cp $@ /cygdrive/D/FTP

amisslmaster.library: $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_library.o $(OBJ_D)/amisslmaster_68k.o
	ppc-amigaos-gcc -o $@ $(LFLAGS) $(OBJ_D)/amisslmaster_library_os4.o $(OBJ_D)/amisslmaster_68k.o $(OBJ_D)/amisslmaster_library.o -mbaserel -Wl,-M,-Map=$@.map
#	ppc-amigaos-strip $@
	cp $@ /cygdrive/D/FTP

$(OBJ_D)/autoinit_amissl_main.o: $(SRC_D)/autoinit_amissl_main.c
	ppc-amigaos-gcc -c $< -o $@ $(INCLUDE)

$(OBJ_D)/libstubs.o: $(SRC_D)/libstubs.c
	ppc-amigaos-gcc -c $< -o $@ $(INCLUDE)

$(LIBAUTO): $(OBJ_D)/autoinit_amissl_main.o $(OBJ_D)/libstubs.o
	ppc-amigaos-ar r $@ $(OBJ_D)/autoinit_amissl_main.o $(OBJ_D)/libstubs.o
	cp $@ ../ppc-amigaos/clib2/lib

testing:
	ppc-amigaos-gcc basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib

libs:
	sh makeit.os4

cleanlibs:
	rm -rf openssl/OS4/*
	
tests:
	(cd openssl; make -f OS4/Makefile.one exe)

release:
	delete ram:AmiSSL3 all
	makedir ram:AmiSSL3
	makedir ram:AmiSSL3/libs
	makedir ram:AmiSSL3/libs/amissl
	copy libs:amissl/amissl_v097e.library ram:AmiSSL3/libs/amissl
	copy libs:amisslmaster.library ram:AmiSSL3/libs
	copy include ram:AmiSSL3/include all
	delete ram:AmiSSL3/include/CVS all
	delete ram:AmiSSL3/include/#?/CVS all
	copy certs/~(#?CVS#?) ram:AmiSSL3/certs all
