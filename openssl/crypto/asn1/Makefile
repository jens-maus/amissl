#
# OpenSSL/crypto/asn1/Makefile
#

DIR=	asn1
TOP=	../..
CC=	cc
INCLUDES= -I.. -I$(TOP) -I../../include
CFLAG=-g
MAKEFILE=	Makefile
AR=		ar r

CFLAGS= $(INCLUDES) $(CFLAG)

GENERAL=Makefile README
TEST=
APPS=

LIB=$(TOP)/libcrypto.a
LIBSRC=	a_object.c a_bitstr.c a_utctm.c a_gentm.c a_time.c a_int.c a_octet.c \
	a_print.c a_type.c a_set.c a_dup.c a_d2i_fp.c a_i2d_fp.c \
	a_enum.c a_utf8.c a_sign.c a_digest.c a_verify.c a_mbstr.c a_strex.c \
	x_algor.c x_val.c x_pubkey.c x_sig.c x_req.c x_attrib.c x_bignum.c \
	x_long.c x_name.c x_x509.c x_x509a.c x_crl.c x_info.c x_spki.c nsseq.c \
	d2i_pu.c d2i_pr.c i2d_pu.c i2d_pr.c\
	t_req.c t_x509.c t_x509a.c t_crl.c t_pkey.c t_spki.c t_bitst.c \
	tasn_new.c tasn_fre.c tasn_enc.c tasn_dec.c tasn_utl.c tasn_typ.c \
	f_int.c f_string.c n_pkey.c \
	f_enum.c a_hdr.c x_pkey.c a_bool.c x_exten.c asn_mime.c \
	asn1_gen.c asn1_par.c asn1_lib.c asn1_err.c a_meth.c a_bytes.c a_strnid.c \
	evp_asn1.c asn_pack.c p5_pbe.c p5_pbev2.c p8_pkey.c asn_moid.c
LIBOBJ= a_object.o a_bitstr.o a_utctm.o a_gentm.o a_time.o a_int.o a_octet.o \
	a_print.o a_type.o a_set.o a_dup.o a_d2i_fp.o a_i2d_fp.o \
	a_enum.o a_utf8.o a_sign.o a_digest.o a_verify.o a_mbstr.o a_strex.o \
	x_algor.o x_val.o x_pubkey.o x_sig.o x_req.o x_attrib.o x_bignum.o \
	x_long.o x_name.o x_x509.o x_x509a.o x_crl.o x_info.o x_spki.o nsseq.o \
	d2i_pu.o d2i_pr.o i2d_pu.o i2d_pr.o \
	t_req.o t_x509.o t_x509a.o t_crl.o t_pkey.o t_spki.o t_bitst.o \
	tasn_new.o tasn_fre.o tasn_enc.o tasn_dec.o tasn_utl.o tasn_typ.o \
	f_int.o f_string.o n_pkey.o \
	f_enum.o a_hdr.o x_pkey.o a_bool.o x_exten.o asn_mime.o \
	asn1_gen.o asn1_par.o asn1_lib.o asn1_err.o a_meth.o a_bytes.o a_strnid.o \
	evp_asn1.o asn_pack.o p5_pbe.o p5_pbev2.o p8_pkey.o asn_moid.o

SRC= $(LIBSRC)

EXHEADER=  asn1.h asn1_mac.h asn1t.h
HEADER=	$(EXHEADER)

ALL=    $(GENERAL) $(SRC) $(HEADER)

top:
	(cd ../..; $(MAKE) DIRS=crypto SDIRS=$(DIR) sub_all)

test:	test.c
	cc -g -I../../include -c test.c
	cc -g -I../../include -o test test.o -L../.. -lcrypto

pk:	pk.c
	cc -g -I../../include -c pk.c
	cc -g -I../../include -o pk pk.o -L../.. -lcrypto

all:	lib

lib:	$(LIBOBJ)
	$(ARX) $(LIB) $(LIBOBJ)
	$(RANLIB) $(LIB) || echo Never mind.
	@touch lib

files:
	$(PERL) $(TOP)/util/files.pl Makefile >> $(TOP)/MINFO

links:
	@$(PERL) $(TOP)/util/mklink.pl ../../include/openssl $(EXHEADER)
	@$(PERL) $(TOP)/util/mklink.pl ../../test $(TEST)
	@$(PERL) $(TOP)/util/mklink.pl ../../apps $(APPS)

install:
	@[ -n "$(INSTALLTOP)" ] # should be set by top Makefile...
	@headerlist="$(EXHEADER)"; for i in $$headerlist ; \
	do  \
	(cp $$i $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i; \
	chmod 644 $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i ); \
	done;

tags:
	ctags $(SRC)

tests:

lint:
	lint -DLINT $(INCLUDES) $(SRC)>fluff

depend:
	@[ -n "$(MAKEDEPEND)" ] # should be set by top Makefile...
	$(MAKEDEPEND) -- $(CFLAG) $(INCLUDES) $(DEPFLAG) -- $(PROGS) $(LIBSRC)

dclean:
	$(PERL) -pe 'if (/^# DO NOT DELETE THIS LINE/) {print; exit(0);}' $(MAKEFILE) >Makefile.new
	mv -f Makefile.new $(MAKEFILE)

clean:
	rm -f *.o *.obj lib tags core .pure .nfs* *.old *.bak fluff


# DO NOT DELETE THIS LINE -- make depend depends on it.

a_bitstr.o: ../../e_os.h ../cryptlib.h a_bitstr.c
a_bool.o: ../../e_os.h ../cryptlib.h a_bool.c
a_bytes.o: ../../e_os.h ../cryptlib.h a_bytes.c
a_d2i_fp.o: ../../e_os.h ../cryptlib.h a_d2i_fp.c
a_digest.o: ../../e_os.h ../cryptlib.h a_digest.c
a_dup.o: ../../e_os.h ../cryptlib.h a_dup.c
a_enum.o: ../../e_os.h ../cryptlib.h a_enum.c
a_gentm.o: ../../e_os.h ../cryptlib.h ../o_time.h a_gentm.c
a_hdr.o: ../../e_os.h ../cryptlib.h a_hdr.c
a_i2d_fp.o: ../../e_os.h ../cryptlib.h a_i2d_fp.c
a_int.o: ../../e_os.h ../cryptlib.h a_int.c
a_mbstr.o: ../../e_os.h ../cryptlib.h a_mbstr.c
a_meth.o: ../../e_os.h ../cryptlib.h a_meth.c
a_object.o: ../../e_os.h ../cryptlib.h a_object.c
a_octet.o: ../../e_os.h ../cryptlib.h a_octet.c
a_print.o: ../../e_os.h ../cryptlib.h a_print.c
a_set.o: ../../e_os.h ../cryptlib.h a_set.c
a_sign.o: ../../e_os.h ../cryptlib.h a_sign.c
a_strex.o: ../../e_os.h ../cryptlib.h a_strex.c charmap.h
a_strnid.o: ../../e_os.h ../cryptlib.h a_strnid.c
a_time.o: ../../e_os.h ../cryptlib.h ../o_time.h a_time.c
a_type.o: ../../e_os.h ../cryptlib.h a_type.c
a_utctm.o: ../../e_os.h ../cryptlib.h ../o_time.h a_utctm.c
a_utf8.o: ../../e_os.h ../cryptlib.h a_utf8.c
a_verify.o: ../../e_os.h ../cryptlib.h a_verify.c
asn1_err.o: asn1_err.c
asn1_gen.o: ../../e_os.h ../cryptlib.h asn1_gen.c
asn1_lib.o: ../../e_os.h ../cryptlib.h asn1_lib.c
asn1_par.o: ../../e_os.h ../cryptlib.h asn1_par.c
asn_mime.o: ../../e_os.h ../cryptlib.h asn_mime.c
asn_moid.o: ../../e_os.h ../cryptlib.h asn_moid.c
asn_pack.o: ../../e_os.h ../cryptlib.h asn_pack.c
d2i_pr.o: ../../e_os.h ../cryptlib.h d2i_pr.c
d2i_pu.o: ../../e_os.h ../cryptlib.h d2i_pu.c
evp_asn1.o: ../../e_os.h ../cryptlib.h evp_asn1.c
f_enum.o: ../../e_os.h ../cryptlib.h f_enum.c
f_int.o: ../../e_os.h ../cryptlib.h f_int.c
f_string.o: ../../e_os.h ../cryptlib.h f_string.c
i2d_pr.o: ../../e_os.h ../cryptlib.h i2d_pr.c
i2d_pu.o: ../../e_os.h ../cryptlib.h i2d_pu.c
n_pkey.o: ../../e_os.h ../cryptlib.h n_pkey.c
nsseq.o: nsseq.c
p5_pbe.o: ../../e_os.h ../cryptlib.h p5_pbe.c
p5_pbev2.o: ../../e_os.h ../cryptlib.h p5_pbev2.c
p8_pkey.o: ../../e_os.h ../cryptlib.h p8_pkey.c
t_bitst.o: ../../e_os.h ../cryptlib.h t_bitst.c
t_crl.o: ../../e_os.h ../cryptlib.h t_crl.c
t_pkey.o: ../../e_os.h ../cryptlib.h t_pkey.c
t_req.o: ../../e_os.h ../cryptlib.h t_req.c
t_spki.o: ../../e_os.h ../cryptlib.h t_spki.c
t_x509.o: ../../e_os.h ../cryptlib.h t_x509.c
t_x509a.o: ../../e_os.h ../cryptlib.h t_x509a.c
tasn_dec.o: tasn_dec.c
tasn_enc.o: ../../e_os.h ../cryptlib.h tasn_enc.c
tasn_fre.o: tasn_fre.c
tasn_new.o: tasn_new.c
tasn_typ.o: tasn_typ.c
tasn_utl.o: tasn_utl.c
x_algor.o: x_algor.c
x_attrib.o: ../../e_os.h ../cryptlib.h x_attrib.c
x_bignum.o: ../../e_os.h ../cryptlib.h x_bignum.c
x_crl.o: ../../e_os.h ../cryptlib.h x_crl.c
x_exten.o: x_exten.c
x_info.o: ../../e_os.h ../cryptlib.h x_info.c
x_long.o: ../../e_os.h ../cryptlib.h x_long.c
x_name.o: ../../e_os.h ../cryptlib.h x_name.c
x_pkey.o: ../../e_os.h ../cryptlib.h x_pkey.c
x_pubkey.o: ../../e_os.h ../cryptlib.h x_pubkey.c
x_req.o: ../../e_os.h ../cryptlib.h x_req.c
x_sig.o: ../../e_os.h ../cryptlib.h x_sig.c
x_spki.o: ../../e_os.h ../cryptlib.h x_spki.c
x_val.o: ../../e_os.h ../cryptlib.h x_val.c
x_x509.o: ../../e_os.h ../cryptlib.h x_x509.c
x_x509a.o: ../../e_os.h ../cryptlib.h x_x509a.c
