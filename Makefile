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
OPT= #-O2
CFLAGS=-I$(AmiSSL)/include -mbaserel $(OPT)
OBJS=$(OBJ_D)/amissl_glue.o $(OBJ_D)/amissl_library_os4.o $(OBJ_D)/amissl_library.o
LIBS=$(LIBSSL) $(LIBCRYPTO) libcmt/libcmt.a -lc -lm -lgcc

all: amissl_v$(LIBVERSIONNAME).library # amisslmaster.library

clean:
	-rm obj/*.o

$(OBJ_D)/amissl_library_os4.o: $(SRC_D)/amissl_library_os4.c $(SRC_D)/amissl_vectors.c
	ppc-amigaos-gcc -c $< -o $@ $(CFLAGS)

$(OBJ_D)/amissl_glue.o: $(SRC_D)/amissl_glue.c
	ppc-amigaos-gcc -c $< -o $@ $(CFLAGS)

$(OBJ_D)/amissl_library.o: $(SRC_D)/amissl_library.c src/debug.h
	ppc-amigaos-gcc -c $< -o $@ $(CFLAGS) -D__USE_INLINE__

#$(OBJ_D)/amissl_library.o: $(SRC_D)/amissl_library.c
#	sc $* OBJNAME $@ $(CFLAGS)
#
#$(OBJ_D)/amisslmaster_library.o: $(SRC_D)/amisslmaster_library.c
#	sc $* OBJNAME $@ $(CFLAGS)

amissl_v$(LIBVERSIONNAME).library: $(OBJS)
	ppc-amigaos-gcc -o $@ $(LFLAGS) $(OBJS) $(LIBS) -Wl,-M,-Map=$@.map
	cp amissl_v$(LIBVERSIONNAME).library /cygdrive/D/FTP

testing:
	ppc-amigaos-gcc basereltest.c -o basereltest -mbaserel -Wl,-M,-Map=$@.map -nostdlib

libs:
	sh makeit.os4

cleanlibs:
	rm -rf openssl/OS4/*