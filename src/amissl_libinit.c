#include <exec/execbase.h>
#include <exec/semaphores.h>
#include <exec/resident.h>
#include <proto/exec.h>

#if defined(__amigaos4__)
#include <proto/elf.h>
#include <proto/dos.h>
#endif

#if defined(__amigaos3__) && defined(__CLIB2__)
  #include <proto/mathieeedoubbas.h>
  #include <proto/mathieeedoubtrans.h>
#endif

//

#include "amissl_lib_protos.h"

//

#include "amissl_base.h"
#include "amissl_glue.h"

//

#include <internal/debug.h>

#undef DEBUG
#define ENTER()                 ((void)0)
#define LEAVE()                 ((void)0)
#define RETURN(r)               ((void)0)
#define SHOWVALUE(f, v)         ((void)0)
#define SHOWPOINTER(f, p)       ((void)0)
#define SHOWSTRING(f, s)        ((void)0)
#define SHOWMSG(f, m)           ((void)0)
#define D(f, s, vargs...)       ((void)0)
#define E(f, s, vargs...)       ((void)0)
#define W(f, s, vargs...)       ((void)0)
#define ASSERT(expression)      ((void)0)

#if defined(__amigaos4__)
#define GETINTERFACE(iface, base)	(iface = (APTR)GetInterface((struct Library *)(base), "main", 1L, NULL))
#define DROPINTERFACE(iface)			(DropInterface((struct Interface *)iface), iface = NULL)
#else
#define GETINTERFACE(iface, base)	TRUE
#define DROPINTERFACE(iface)
#endif

#ifndef __amigaos4__
#define DeleteLibrary(LIB) \
  FreeMem((STRPTR)(LIB)-(LIB)->lib_NegSize, (ULONG)((LIB)->lib_NegSize+(LIB)->lib_PosSize))
#endif

#if defined(__amigaos3__)
#if defined(__GNUC__) && __GNUC__ < 3
#define FORCED_CONST const __attribute__ ((section (".text")))
#endif // __GNUC__
#endif // __amigaos3__

#ifndef FORCED_CONST
#define FORCED_CONST const FAR
#endif // FORCED_CONST

/****************************************************************************/

/*
 * The system (and compiler) rely on a symbol named _start which marks
 * the beginning of execution of an ELF file. To prevent others from
 * executing this library, and to keep the compiler/linker happy, we
 * define an empty _start symbol here.
 *
 * On the classic system (pre-AmigaOS4) this was usually done by
 * moveq #0,d0
 * rts
 *
 */

#if defined(__amigaos3__)
asm(".text\n\tjra __start\n");
#endif
#if defined(__AROS__)
__startup int Main(void)
#else
LONG _start(void)
#endif
{
  return RETURN_FAIL;
}

/****************************************************************************/

#define XMKSTR(x) #x
#define MKSTR(x)  XMKSTR(x)

#define MIN_STACKSIZE 65536

#if defined(__amigaos4__)
// stack cookie for shell v45+
static const char USED_VAR stack_size[] = "$STACK:" MKSTR(MIN_STACKSIZE) "\n";
#endif

/****************************************************************************/

#if defined(__amigaos4__)
struct Library * AMISSL_COMMON_DATA SysBase = NULL;
struct ExecIFace * AMISSL_COMMON_DATA IExec = NULL;
#if defined(__NEWLIB__)
struct Library *NewlibBase = NULL;
struct NewlibIFace* INewlib = NULL;
#endif
#else
struct ExecBase *SysBase = NULL;
#endif
#if defined(__amigaos3__)
extern struct DosLibrary *DOSBase;
#elif defined(__amigaos4__)
extern struct Library * AMISSL_COMMON_DATA DOSBase;
extern struct DOSIFace * AMISSL_COMMON_DATA IDOS;
#endif

#if defined(__amigaos3__) && defined(__CLIB2__)
struct Library *__MathIeeeDoubBasBase = NULL;
struct Library *__MathIeeeDoubTransBase = NULL;
void __ctor_math_init(void);
void __dtor_math_exit(void);
#endif

#if defined(DEBUG)
struct LibraryHeader *globalBase = NULL;
#endif

#define LIBNAME        "amissl_v" MKSTR(VERSIONNAME) ".library"
#define LIB_VERSION    VERSION
#define LIB_REVISION   AMISSLREVISION
#define LIB_REV_STRING "$VER: " LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLREVISION) " (" MKSTR(AMISSLDATE) ") " MKSTR(LIBCPU) " version\r\n"

static const char UserLibName[] = LIBNAME;
static const char UserLibID[]   = LIB_REV_STRING;

/****************************************************************************/

#define libvector \
    LFUNC_FAS(InternalInitAmiSSL) \
    LFUNC_FA_(InitAmiSSLA) \
    LFUNC_VA_(InitAmiSSL) \
    LFUNC_FA_(CleanupAmiSSLA) \
    LFUNC_VA_(CleanupAmiSSL) \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_FA_(ASN1_TYPE_new) \
    LFUNC_FA_(ASN1_TYPE_free) \
    LFUNC_FA_(d2i_ASN1_TYPE) \
    LFUNC_FA_(i2d_ASN1_TYPE) \
    LFUNC_FA_(ASN1_ANY_it) \
    LFUNC_FA_(ASN1_TYPE_get) \
    LFUNC_FA_(ASN1_TYPE_set) \
    LFUNC_FA_(ASN1_OBJECT_new) \
    LFUNC_FA_(ASN1_OBJECT_free) \
    LFUNC_FA_(i2d_ASN1_OBJECT) \
    LFUNC_FA_(c2i_ASN1_OBJECT) \
    LFUNC_FA_(d2i_ASN1_OBJECT) \
    LFUNC_FA_(ASN1_OBJECT_it) \
    LFUNC_FA_(ASN1_STRING_new) \
    LFUNC_FA_(ASN1_STRING_free) \
    LFUNC_FA_(ASN1_STRING_dup) \
    LFUNC_FA_(ASN1_STRING_type_new) \
    LFUNC_FA_(ASN1_STRING_cmp) \
    LFUNC_FA_(ASN1_STRING_set) \
    LFUNC_FA_(ASN1_STRING_length) \
    LFUNC_FA_(ASN1_STRING_length_set) \
    LFUNC_FA_(ASN1_STRING_type) \
    LFUNC_FA_(ASN1_STRING_data) \
    LFUNC_FA_(ASN1_BIT_STRING_new) \
    LFUNC_FA_(ASN1_BIT_STRING_free) \
    LFUNC_FA_(d2i_ASN1_BIT_STRING) \
    LFUNC_FA_(i2d_ASN1_BIT_STRING) \
    LFUNC_FA_(ASN1_BIT_STRING_it) \
    LFUNC_FA_(i2c_ASN1_BIT_STRING) \
    LFUNC_FA_(c2i_ASN1_BIT_STRING) \
    LFUNC_FA_(ASN1_BIT_STRING_set) \
    LFUNC_FA_(ASN1_BIT_STRING_set_bit) \
    LFUNC_FA_(ASN1_BIT_STRING_get_bit) \
    LFUNC_FA_(ASN1_BIT_STRING_name_print) \
    LFUNC_FA_(ASN1_BIT_STRING_num_asc) \
    LFUNC_FA_(ASN1_BIT_STRING_set_asc) \
    LFUNC_FA_(i2d_ASN1_BOOLEAN) \
    LFUNC_FA_(d2i_ASN1_BOOLEAN) \
    LFUNC_FA_(ASN1_INTEGER_new) \
    LFUNC_FA_(ASN1_INTEGER_free) \
    LFUNC_FA_(d2i_ASN1_INTEGER) \
    LFUNC_FA_(i2d_ASN1_INTEGER) \
    LFUNC_FA_(ASN1_INTEGER_it) \
    LFUNC_FA_(i2c_ASN1_INTEGER) \
    LFUNC_FA_(c2i_ASN1_INTEGER) \
    LFUNC_FA_(d2i_ASN1_UINTEGER) \
    LFUNC_FA_(ASN1_INTEGER_dup) \
    LFUNC_FA_(ASN1_INTEGER_cmp) \
    LFUNC_FA_(ASN1_ENUMERATED_new) \
    LFUNC_FA_(ASN1_ENUMERATED_free) \
    LFUNC_FA_(d2i_ASN1_ENUMERATED) \
    LFUNC_FA_(i2d_ASN1_ENUMERATED) \
    LFUNC_FA_(ASN1_ENUMERATED_it) \
    LFUNC_FA_(ASN1_UTCTIME_check) \
    LFUNC_FA_(ASN1_UTCTIME_set) \
    LFUNC_FA_(ASN1_UTCTIME_set_string) \
    LFUNC_FA_(ASN1_UTCTIME_cmp_time_t) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_check) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_set) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_set_string) \
    LFUNC_FA_(ASN1_OCTET_STRING_new) \
    LFUNC_FA_(ASN1_OCTET_STRING_free) \
    LFUNC_FA_(d2i_ASN1_OCTET_STRING) \
    LFUNC_FA_(i2d_ASN1_OCTET_STRING) \
    LFUNC_FA_(ASN1_OCTET_STRING_it) \
    LFUNC_FA_(ASN1_OCTET_STRING_dup) \
    LFUNC_FA_(ASN1_OCTET_STRING_cmp) \
    LFUNC_FA_(ASN1_OCTET_STRING_set) \
    LFUNC_FA_(ASN1_VISIBLESTRING_new) \
    LFUNC_FA_(ASN1_VISIBLESTRING_free) \
    LFUNC_FA_(d2i_ASN1_VISIBLESTRING) \
    LFUNC_FA_(i2d_ASN1_VISIBLESTRING) \
    LFUNC_FA_(ASN1_VISIBLESTRING_it) \
    LFUNC_FA_(ASN1_UNIVERSALSTRING_new) \
    LFUNC_FA_(ASN1_UNIVERSALSTRING_free) \
    LFUNC_FA_(d2i_ASN1_UNIVERSALSTRING) \
    LFUNC_FA_(i2d_ASN1_UNIVERSALSTRING) \
    LFUNC_FA_(ASN1_UNIVERSALSTRING_it) \
    LFUNC_FA_(ASN1_UTF8STRING_new) \
    LFUNC_FA_(ASN1_UTF8STRING_free) \
    LFUNC_FA_(d2i_ASN1_UTF8STRING) \
    LFUNC_FA_(i2d_ASN1_UTF8STRING) \
    LFUNC_FA_(ASN1_UTF8STRING_it) \
    LFUNC_FA_(ASN1_TYPE_new) \
    LFUNC_FA_(ASN1_TYPE_free) \
    LFUNC_FA_(d2i_ASN1_TYPE) \
    LFUNC_FA_(i2d_ASN1_TYPE) \
    LFUNC_FA_(ASN1_TYPE_it) \
    LFUNC_FA_(ASN1_BMPSTRING_new) \
    LFUNC_FA_(ASN1_BMPSTRING_free) \
    LFUNC_FA_(d2i_ASN1_BMPSTRING) \
    LFUNC_FA_(i2d_ASN1_BMPSTRING) \
    LFUNC_FA_(ASN1_BMPSTRING_it) \
    LFUNC_FA_(UTF8_getc) \
    LFUNC_FA_(UTF8_putc) \
    LFUNC_FA_(ASN1_PRINTABLE_new) \
    LFUNC_FA_(ASN1_PRINTABLE_free) \
    LFUNC_FA_(d2i_ASN1_PRINTABLE) \
    LFUNC_FA_(i2d_ASN1_PRINTABLE) \
    LFUNC_FA_(ASN1_PRINTABLE_it) \
    LFUNC_FA_(DIRECTORYSTRING_new) \
    LFUNC_FA_(DIRECTORYSTRING_free) \
    LFUNC_FA_(d2i_DIRECTORYSTRING) \
    LFUNC_FA_(i2d_DIRECTORYSTRING) \
    LFUNC_FA_(DIRECTORYSTRING_it) \
    LFUNC_FA_(DISPLAYTEXT_new) \
    LFUNC_FA_(DISPLAYTEXT_free) \
    LFUNC_FA_(d2i_DISPLAYTEXT) \
    LFUNC_FA_(i2d_DISPLAYTEXT) \
    LFUNC_FA_(DISPLAYTEXT_it) \
    LFUNC_FA_(ASN1_PRINTABLESTRING_new) \
    LFUNC_FA_(ASN1_PRINTABLESTRING_free) \
    LFUNC_FA_(d2i_ASN1_PRINTABLESTRING) \
    LFUNC_FA_(i2d_ASN1_PRINTABLESTRING) \
    LFUNC_FA_(ASN1_PRINTABLESTRING_it) \
    LFUNC_FA_(ASN1_T61STRING_new) \
    LFUNC_FA_(ASN1_T61STRING_free) \
    LFUNC_FA_(d2i_ASN1_T61STRING) \
    LFUNC_FA_(i2d_ASN1_T61STRING) \
    LFUNC_FA_(ASN1_T61STRING_it) \
    LFUNC_FA_(ASN1_IA5STRING_new) \
    LFUNC_FA_(ASN1_IA5STRING_free) \
    LFUNC_FA_(d2i_ASN1_IA5STRING) \
    LFUNC_FA_(i2d_ASN1_IA5STRING) \
    LFUNC_FA_(ASN1_IA5STRING_it) \
    LFUNC_FA_(ASN1_GENERALSTRING_new) \
    LFUNC_FA_(ASN1_GENERALSTRING_free) \
    LFUNC_FA_(d2i_ASN1_GENERALSTRING) \
    LFUNC_FA_(i2d_ASN1_GENERALSTRING) \
    LFUNC_FA_(ASN1_GENERALSTRING_it) \
    LFUNC_FA_(ASN1_UTCTIME_new) \
    LFUNC_FA_(ASN1_UTCTIME_free) \
    LFUNC_FA_(d2i_ASN1_UTCTIME) \
    LFUNC_FA_(i2d_ASN1_UTCTIME) \
    LFUNC_FA_(ASN1_UTCTIME_it) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_new) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_free) \
    LFUNC_FA_(d2i_ASN1_GENERALIZEDTIME) \
    LFUNC_FA_(i2d_ASN1_GENERALIZEDTIME) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_it) \
    LFUNC_FA_(ASN1_TIME_new) \
    LFUNC_FA_(ASN1_TIME_free) \
    LFUNC_FA_(d2i_ASN1_TIME) \
    LFUNC_FA_(i2d_ASN1_TIME) \
    LFUNC_FA_(ASN1_TIME_it) \
    LFUNC_FA_(ASN1_TIME_set) \
    LFUNC_FA_(ASN1_TIME_check) \
    LFUNC_FA_(ASN1_TIME_to_generalizedtime) \
    LFUNC_FA_(i2d_ASN1_SET) \
    LFUNC_FA_(d2i_ASN1_SET) \
    LFUNC_FA_(i2a_ASN1_INTEGER) \
    LFUNC_FA_(a2i_ASN1_INTEGER) \
    LFUNC_FA_(i2a_ASN1_ENUMERATED) \
    LFUNC_FA_(a2i_ASN1_ENUMERATED) \
    LFUNC_FA_(i2a_ASN1_OBJECT) \
    LFUNC_FA_(a2i_ASN1_STRING) \
    LFUNC_FA_(i2a_ASN1_STRING) \
    LFUNC_FA_(i2t_ASN1_OBJECT) \
    LFUNC_FA_(a2d_ASN1_OBJECT) \
    LFUNC_FA_(ASN1_OBJECT_create) \
    LFUNC_FA_(ASN1_INTEGER_set) \
    LFUNC_FA_(ASN1_INTEGER_get) \
    LFUNC_FA_(BN_to_ASN1_INTEGER) \
    LFUNC_FA_(ASN1_INTEGER_to_BN) \
    LFUNC_FA_(ASN1_ENUMERATED_set) \
    LFUNC_FA_(ASN1_ENUMERATED_get) \
    LFUNC_FA_(BN_to_ASN1_ENUMERATED) \
    LFUNC_FA_(ASN1_ENUMERATED_to_BN) \
    LFUNC_FA_(ASN1_PRINTABLE_type) \
    LFUNC_FA_(i2d_ASN1_bytes) \
    LFUNC_FA_(d2i_ASN1_bytes) \
    LFUNC_FA_(ASN1_tag2bit) \
    LFUNC_FA_(d2i_ASN1_type_bytes) \
    LFUNC_FA_(asn1_Finish) \
    LFUNC_FA_(ASN1_get_object) \
    LFUNC_FA_(ASN1_check_infinite_end) \
    LFUNC_FA_(ASN1_put_object) \
    LFUNC_FA_(ASN1_object_size) \
    LFUNC_FA_(ASN1_dup) \
    LFUNC_FA_(ASN1_item_dup) \
    LFUNC_FA_(ASN1_STRING_to_UTF8) \
    LFUNC_FA_(ASN1_d2i_bio) \
    LFUNC_FA_(ASN1_item_d2i_bio) \
    LFUNC_FA_(ASN1_i2d_bio) \
    LFUNC_FA_(ASN1_item_i2d_bio) \
    LFUNC_FA_(ASN1_UTCTIME_print) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_print) \
    LFUNC_FA_(ASN1_TIME_print) \
    LFUNC_FA_(ASN1_STRING_print) \
    LFUNC_FA_(ASN1_STRING_print_ex) \
    LFUNC_FA_(ASN1_parse) \
    LFUNC_FA_(ASN1_parse_dump) \
    LFUNC_FA_(ASN1_tag2str) \
    LFUNC_FA_(ASN1_UNIVERSALSTRING_to_string) \
    LFUNC_FA_(ASN1_TYPE_set_octetstring) \
    LFUNC_FA_(ASN1_TYPE_get_octetstring) \
    LFUNC_FA_(ASN1_TYPE_set_int_octetstring) \
    LFUNC_FA_(ASN1_TYPE_get_int_octetstring) \
    LFUNC_FA_(ASN1_seq_unpack) \
    LFUNC_FA_(ASN1_seq_pack) \
    LFUNC_FA_(ASN1_unpack_string) \
    LFUNC_FA_(ASN1_item_unpack) \
    LFUNC_FA_(ASN1_pack_string) \
    LFUNC_FA_(ASN1_item_pack) \
    LFUNC_FA_(ASN1_STRING_set_default_mask) \
    LFUNC_FA_(ASN1_STRING_set_default_mask_asc) \
    LFUNC_FA_(ASN1_STRING_get_default_mask) \
    LFUNC_FA_(ASN1_mbstring_copy) \
    LFUNC_FA_(ASN1_mbstring_ncopy) \
    LFUNC_FA_(ASN1_STRING_set_by_NID) \
    LFUNC_FA_(ASN1_STRING_TABLE_get) \
    LFUNC_FA_(ASN1_STRING_TABLE_add) \
    LFUNC_FA_(ASN1_STRING_TABLE_cleanup) \
    LFUNC_FA_(ASN1_item_new) \
    LFUNC_FA_(ASN1_item_free) \
    LFUNC_FA_(ASN1_item_d2i) \
    LFUNC_FA_(ASN1_item_i2d) \
    LFUNC_FA_(ASN1_add_oid_module) \
    LFUNC_FA_(ERR_load_ASN1_strings) \
    LFUNC_FA_(asn1_GetSequence) \
    LFUNC_FA_(asn1_add_error) \
    LFUNC_FA_(ASN1_BOOLEAN_it) \
    LFUNC_FA_(ASN1_TBOOLEAN_it) \
    LFUNC_FA_(ASN1_FBOOLEAN_it) \
    LFUNC_FA_(ASN1_SEQUENCE_it) \
    LFUNC_FA_(CBIGNUM_it) \
    LFUNC_FA_(BIGNUM_it) \
    LFUNC_FA_(LONG_it) \
    LFUNC_FA_(ZLONG_it) \
    LFUNC_FA_(ASN1_item_ex_new) \
    LFUNC_FA_(ASN1_item_ex_free) \
    LFUNC_FA_(ASN1_template_new) \
    LFUNC_FA_(ASN1_primitive_new) \
    LFUNC_FA_(ASN1_template_free) \
    LFUNC_FA_(ASN1_template_d2i) \
    LFUNC_FA_(ASN1_item_ex_d2i) \
    LFUNC_FA_(ASN1_item_ex_i2d) \
    LFUNC_FA_(ASN1_template_i2d) \
    LFUNC_FA_(ASN1_primitive_free) \
    LFUNC_FA_(asn1_ex_i2c) \
    LFUNC_FA_(asn1_ex_c2i) \
    LFUNC_FA_(asn1_get_choice_selector) \
    LFUNC_FA_(asn1_set_choice_selector) \
    LFUNC_FA_(asn1_get_field_ptr) \
    LFUNC_FA_(asn1_do_adb) \
    LFUNC_FA_(asn1_do_lock) \
    LFUNC_FA_(asn1_enc_init) \
    LFUNC_FA_(asn1_enc_free) \
    LFUNC_FA_(asn1_enc_restore) \
    LFUNC_FA_(asn1_enc_save) \
    LFUNC_FA_(BIO_ctrl_pending) \
    LFUNC_FA_(BIO_ctrl_wpending) \
    LFUNC_FA_(BIO_ctrl_get_write_guarantee) \
    LFUNC_FA_(BIO_ctrl_get_read_request) \
    LFUNC_FA_(BIO_ctrl_reset_read_request) \
    LFUNC_FA_(BIO_set_ex_data) \
    LFUNC_FA_(BIO_get_ex_data) \
    LFUNC_FA_(BIO_get_ex_new_index) \
    LFUNC_FA_(BIO_number_read) \
    LFUNC_FA_(BIO_number_written) \
    LFUNC_FA_(BIO_s_file) \
    LFUNC_FA_(BIO_new_file) \
    LFUNC_FA_(BIO_new_fp_amiga) \
    LFUNC_FA_(BIO_new) \
    LFUNC_FA_(BIO_set) \
    LFUNC_FA_(BIO_free) \
    LFUNC_FA_(BIO_vfree) \
    LFUNC_FA_(BIO_read) \
    LFUNC_FA_(BIO_gets) \
    LFUNC_FA_(BIO_write) \
    LFUNC_FA_(BIO_puts) \
    LFUNC_FA_(BIO_indent) \
    LFUNC_FA_(BIO_ctrl) \
    LFUNC_FA_(BIO_callback_ctrl) \
    LFUNC_FA_(BIO_ptr_ctrl) \
    LFUNC_FA_(BIO_int_ctrl) \
    LFUNC_FA_(BIO_push) \
    LFUNC_FA_(BIO_pop) \
    LFUNC_FA_(BIO_free_all) \
    LFUNC_FA_(BIO_find_type) \
    LFUNC_FA_(BIO_next) \
    LFUNC_FA_(BIO_get_retry_BIO) \
    LFUNC_FA_(BIO_get_retry_reason) \
    LFUNC_FA_(BIO_dup_chain) \
    LFUNC_FA_(BIO_nread0) \
    LFUNC_FA_(BIO_nread) \
    LFUNC_FA_(BIO_nwrite0) \
    LFUNC_FA_(BIO_nwrite) \
    LFUNC_FA_(BIO_debug_callback) \
    LFUNC_FA_(BIO_s_mem) \
    LFUNC_FA_(BIO_new_mem_buf) \
    LFUNC_FA_(BIO_s_socket) \
    LFUNC_FA_(BIO_s_connect) \
    LFUNC_FA_(BIO_s_accept) \
    LFUNC_FA_(BIO_s_fd) \
    LFUNC_FA_(BIO_s_log) \
    LFUNC_FA_(BIO_s_bio) \
    LFUNC_FA_(BIO_s_null) \
    LFUNC_FA_(BIO_f_null) \
    LFUNC_FA_(BIO_f_buffer) \
    LFUNC_FA_(BIO_f_nbio_test) \
    LFUNC_FA_(BIO_sock_should_retry) \
    LFUNC_FA_(BIO_sock_non_fatal_error) \
    LFUNC_FA_(BIO_fd_should_retry) \
    LFUNC_FA_(BIO_fd_non_fatal_error) \
    LFUNC_FA_(BIO_dump) \
    LFUNC_FA_(BIO_dump_indent) \
    LFUNC_FA_(BIO_gethostbyname) \
    LFUNC_FA_(BIO_sock_error) \
    LFUNC_FA_(BIO_socket_ioctl) \
    LFUNC_FA_(BIO_socket_nbio) \
    LFUNC_FA_(BIO_get_port) \
    LFUNC_FA_(BIO_get_host_ip) \
    LFUNC_FA_(BIO_get_accept_socket) \
    LFUNC_FA_(BIO_accept) \
    LFUNC_FA_(BIO_sock_init) \
    LFUNC_FA_(BIO_sock_cleanup) \
    LFUNC_FA_(BIO_set_tcp_ndelay) \
    LFUNC_FA_(BIO_new_socket) \
    LFUNC_FA_(BIO_new_fd) \
    LFUNC_FA_(BIO_new_connect) \
    LFUNC_FA_(BIO_new_accept) \
    LFUNC_FA_(BIO_new_bio_pair) \
    LFUNC_FA_(BIO_copy_next_retry) \
    LFUNC_FA_(BIO_vprintf) \
    LFUNC_VA_(BIO_printf) \
    LFUNC_FA_(BIO_vsnprintf) \
    LFUNC_VA_(BIO_snprintf) \
    LFUNC_FA_(ERR_load_BIO_strings) \
    LFUNC_FA_(BN_value_one) \
    LFUNC_FA_(BN_options) \
    LFUNC_FA_(BN_CTX_new) \
    LFUNC_FA_(BN_CTX_init) \
    LFUNC_FA_(BN_CTX_free) \
    LFUNC_FA_(BN_CTX_start) \
    LFUNC_FA_(BN_CTX_get) \
    LFUNC_FA_(BN_CTX_end) \
    LFUNC_FA_(BN_rand) \
    LFUNC_FA_(BN_pseudo_rand) \
    LFUNC_FA_(BN_rand_range) \
    LFUNC_FA_(BN_pseudo_rand_range) \
    LFUNC_FA_(BN_num_bits) \
    LFUNC_FA_(BN_num_bits_word) \
    LFUNC_FA_(BN_new) \
    LFUNC_FA_(BN_init) \
    LFUNC_FA_(BN_clear_free) \
    LFUNC_FA_(BN_copy) \
    LFUNC_FA_(BN_swap) \
    LFUNC_FA_(BN_bin2bn) \
    LFUNC_FA_(BN_bn2bin) \
    LFUNC_FA_(BN_mpi2bn) \
    LFUNC_FA_(BN_bn2mpi) \
    LFUNC_FA_(BN_sub) \
    LFUNC_FA_(BN_usub) \
    LFUNC_FA_(BN_uadd) \
    LFUNC_FA_(BN_add) \
    LFUNC_FA_(BN_mul) \
    LFUNC_FA_(BN_sqr) \
    LFUNC_FA_(BN_div) \
    LFUNC_FA_(BN_nnmod) \
    LFUNC_FA_(BN_mod_add) \
    LFUNC_FA_(BN_mod_add_quick) \
    LFUNC_FA_(BN_mod_sub) \
    LFUNC_FA_(BN_mod_sub_quick) \
    LFUNC_FA_(BN_mod_mul) \
    LFUNC_FA_(BN_mod_sqr) \
    LFUNC_FA_(BN_mod_lshift1) \
    LFUNC_FA_(BN_mod_lshift1_quick) \
    LFUNC_FA_(BN_mod_lshift) \
    LFUNC_FA_(BN_mod_lshift_quick) \
    LFUNC_FA_(BN_mod_word) \
    LFUNC_FA_(BN_div_word) \
    LFUNC_FA_(BN_mul_word) \
    LFUNC_FA_(BN_add_word) \
    LFUNC_FA_(BN_sub_word) \
    LFUNC_FA_(BN_set_word) \
    LFUNC_FA_(BN_get_word) \
    LFUNC_FA_(BN_cmp) \
    LFUNC_FA_(BN_free) \
    LFUNC_FA_(BN_is_bit_set) \
    LFUNC_FA_(BN_lshift) \
    LFUNC_FA_(BN_lshift1) \
    LFUNC_FA_(BN_exp) \
    LFUNC_FA_(BN_mod_exp) \
    LFUNC_FA_(BN_mod_exp_mont) \
    LFUNC_FA_(BN_mod_exp_mont_word) \
    LFUNC_FA_(BN_mod_exp2_mont) \
    LFUNC_FA_(BN_mod_exp_simple) \
    LFUNC_FA_(BN_mask_bits) \
    LFUNC_FA_(BN_print) \
    LFUNC_FA_(BN_reciprocal) \
    LFUNC_FA_(BN_rshift) \
    LFUNC_FA_(BN_rshift1) \
    LFUNC_FA_(BN_clear) \
    LFUNC_FA_(BN_dup) \
    LFUNC_FA_(BN_ucmp) \
    LFUNC_FA_(BN_set_bit) \
    LFUNC_FA_(BN_clear_bit) \
    LFUNC_FA_(BN_bn2hex) \
    LFUNC_FA_(BN_bn2dec) \
    LFUNC_FA_(BN_hex2bn) \
    LFUNC_FA_(BN_dec2bn) \
    LFUNC_FA_(BN_gcd) \
    LFUNC_FA_(BN_kronecker) \
    LFUNC_FA_(BN_mod_inverse) \
    LFUNC_FA_(BN_mod_sqrt) \
    LFUNC_FA_(BN_generate_prime) \
    LFUNC_FA_(BN_is_prime) \
    LFUNC_FA_(BN_is_prime_fasttest) \
    LFUNC_FA_(BN_MONT_CTX_new) \
    LFUNC_FA_(BN_MONT_CTX_init) \
    LFUNC_FA_(BN_mod_mul_montgomery) \
    LFUNC_FA_(BN_from_montgomery) \
    LFUNC_FA_(BN_MONT_CTX_free) \
    LFUNC_FA_(BN_MONT_CTX_set) \
    LFUNC_FA_(BN_MONT_CTX_copy) \
    LFUNC_FA_(BN_BLINDING_new) \
    LFUNC_FA_(BN_BLINDING_free) \
    LFUNC_FA_(BN_BLINDING_update) \
    LFUNC_FA_(BN_BLINDING_convert) \
    LFUNC_FA_(BN_BLINDING_invert) \
    LFUNC_FA_(BN_set_params) \
    LFUNC_FA_(BN_get_params) \
    LFUNC_FA_(BN_RECP_CTX_init) \
    LFUNC_FA_(BN_RECP_CTX_new) \
    LFUNC_FA_(BN_RECP_CTX_free) \
    LFUNC_FA_(BN_RECP_CTX_set) \
    LFUNC_FA_(BN_mod_mul_reciprocal) \
    LFUNC_FA_(BN_mod_exp_recp) \
    LFUNC_FA_(BN_div_recp) \
    LFUNC_FA_(bn_expand2) \
    LFUNC_FA_(bn_dup_expand) \
    LFUNC_FA_(bn_mul_add_words) \
    LFUNC_FA_(bn_mul_words) \
    LFUNC_FA_(bn_sqr_words) \
    LFUNC_FA_(bn_div_words) \
    LFUNC_FA_(bn_add_words) \
    LFUNC_FA_(bn_sub_words) \
    LFUNC_FA_(BN_bntest_rand) \
    LFUNC_FA_(ERR_load_BN_strings) \
    LFUNC_FA_(BUF_MEM_new) \
    LFUNC_FA_(BUF_MEM_free) \
    LFUNC_FA_(BUF_MEM_grow) \
    LFUNC_FA_(BUF_MEM_grow_clean) \
    LFUNC_FA_(BUF_strdup) \
    LFUNC_FA_(BUF_strlcpy) \
    LFUNC_FA_(BUF_strlcat) \
    LFUNC_FA_(ERR_load_BUF_strings) \
    LFUNC_FA_(COMP_CTX_new) \
    LFUNC_FA_(COMP_CTX_free) \
    LFUNC_FA_(COMP_compress_block) \
    LFUNC_FA_(COMP_expand_block) \
    LFUNC_FA_(COMP_rle) \
    LFUNC_FA_(COMP_zlib) \
    LFUNC_FA_(ERR_load_COMP_strings) \
    LFUNC_FA_(CONF_set_default_method) \
    LFUNC_FA_(CONF_set_nconf) \
    LFUNC_FA_(CONF_load) \
    LFUNC_FA_(CONF_load_bio) \
    LFUNC_FA_(CONF_get_section) \
    LFUNC_FA_(CONF_get_string) \
    LFUNC_FA_(CONF_get_number) \
    LFUNC_FA_(CONF_free) \
    LFUNC_FA_(CONF_dump_bio) \
    LFUNC_FA_(OPENSSL_config) \
    LFUNC_FA_(OPENSSL_no_config) \
    LFUNC_FA_(NCONF_new) \
    LFUNC_FA_(NCONF_default) \
    LFUNC_FA_(NCONF_WIN32) \
    LFUNC_FA_(NCONF_free) \
    LFUNC_FA_(NCONF_free_data) \
    LFUNC_FA_(NCONF_load) \
    LFUNC_FA_(NCONF_load_bio) \
    LFUNC_FA_(NCONF_get_section) \
    LFUNC_FA_(NCONF_get_string) \
    LFUNC_FA_(NCONF_get_number_e) \
    LFUNC_FA_(NCONF_dump_bio) \
    LFUNC_FA_(CONF_modules_load) \
    LFUNC_FA_(CONF_modules_load_file) \
    LFUNC_FA_(CONF_modules_unload) \
    LFUNC_FA_(CONF_modules_finish) \
    LFUNC_FA_(CONF_modules_free) \
    LFUNC_FA_(CONF_module_add) \
    LFUNC_FA_(CONF_imodule_get_name) \
    LFUNC_FA_(CONF_imodule_get_value) \
    LFUNC_FA_(CONF_imodule_get_usr_data) \
    LFUNC_FA_(CONF_imodule_set_usr_data) \
    LFUNC_FA_(CONF_imodule_get_module) \
    LFUNC_FA_(CONF_imodule_get_flags) \
    LFUNC_FA_(CONF_imodule_set_flags) \
    LFUNC_FA_(CONF_module_get_usr_data) \
    LFUNC_FA_(CONF_module_set_usr_data) \
    LFUNC_FA_(CONF_get1_default_config_file) \
    LFUNC_FA_(CONF_parse_list) \
    LFUNC_FA_(OPENSSL_load_builtin_modules) \
    LFUNC_FA_(ERR_load_CONF_strings) \
    LFUNC_FA_(_CONF_new_section) \
    LFUNC_FA_(_CONF_get_section) \
    LFUNC_FA_(_CONF_get_section_values) \
    LFUNC_FA_(_CONF_add_string) \
    LFUNC_FA_(_CONF_get_string) \
    LFUNC_FA_(_CONF_new_data) \
    LFUNC_FA_(_CONF_free_data) \
    LFUNC_FA_(CRYPTO_mem_ctrl) \
    LFUNC_FA_(CRYPTO_is_mem_check_on) \
    LFUNC_FA_(SSLeay_version) \
    LFUNC_FA_(SSLeay) \
    LFUNC_FA_(OPENSSL_issetugid) \
    LFUNC_FA_(CRYPTO_get_ex_data_implementation) \
    LFUNC_FA_(CRYPTO_set_ex_data_implementation) \
    LFUNC_FA_(CRYPTO_ex_data_new_class) \
    LFUNC_FA_(CRYPTO_get_ex_new_index) \
    LFUNC_FA_(CRYPTO_new_ex_data) \
    LFUNC_FA_(CRYPTO_dup_ex_data) \
    LFUNC_FA_(CRYPTO_free_ex_data) \
    LFUNC_FA_(CRYPTO_set_ex_data) \
    LFUNC_FA_(CRYPTO_get_ex_data) \
    LFUNC_FA_(CRYPTO_cleanup_all_ex_data) \
    LFUNC_FA_(CRYPTO_get_new_lockid) \
    LFUNC_FA_(CRYPTO_num_locks) \
    LFUNC_FA_(CRYPTO_lock) \
    LFUNC_FA_(CRYPTO_set_locking_callback) \
    LFUNC_FA_(CRYPTO_get_locking_callback) \
    LFUNC_FA_(CRYPTO_set_add_lock_callback) \
    LFUNC_FA_(CRYPTO_get_add_lock_callback) \
    LFUNC_FA_(CRYPTO_set_id_callback) \
    LFUNC_FA_(CRYPTO_get_id_callback) \
    LFUNC_FA_(CRYPTO_thread_id) \
    LFUNC_FA_(CRYPTO_get_lock_name) \
    LFUNC_FA_(CRYPTO_add_lock) \
    LFUNC_FA_(CRYPTO_get_new_dynlockid) \
    LFUNC_FA_(CRYPTO_destroy_dynlockid) \
    LFUNC_FA_(CRYPTO_get_dynlock_value) \
    LFUNC_FA_(CRYPTO_set_dynlock_create_callback) \
    LFUNC_FA_(CRYPTO_set_dynlock_lock_callback) \
    LFUNC_FA_(CRYPTO_set_dynlock_destroy_callback) \
    LFUNC_FA_(CRYPTO_get_dynlock_create_callback) \
    LFUNC_FA_(CRYPTO_get_dynlock_lock_callback) \
    LFUNC_FA_(CRYPTO_get_dynlock_destroy_callback) \
    LFUNC_FA_(CRYPTO_set_mem_functions) \
    LFUNC_FA_(CRYPTO_set_locked_mem_functions) \
    LFUNC_FA_(CRYPTO_set_mem_ex_functions) \
    LFUNC_FA_(CRYPTO_set_locked_mem_ex_functions) \
    LFUNC_FA_(CRYPTO_set_mem_debug_functions) \
    LFUNC_FA_(CRYPTO_get_mem_functions) \
    LFUNC_FA_(CRYPTO_get_locked_mem_functions) \
    LFUNC_FA_(CRYPTO_get_mem_ex_functions) \
    LFUNC_FA_(CRYPTO_get_locked_mem_ex_functions) \
    LFUNC_FA_(CRYPTO_get_mem_debug_functions) \
    LFUNC_FA_(CRYPTO_malloc_locked) \
    LFUNC_FA_(CRYPTO_free_locked) \
    LFUNC_FA_(CRYPTO_malloc) \
    LFUNC_FA_(CRYPTO_free) \
    LFUNC_FA_(CRYPTO_realloc) \
    LFUNC_FA_(CRYPTO_realloc_clean) \
    LFUNC_FA_(CRYPTO_remalloc) \
    LFUNC_FA_(OPENSSL_cleanse) \
    LFUNC_FA_(CRYPTO_set_mem_debug_options) \
    LFUNC_FA_(CRYPTO_get_mem_debug_options) \
    LFUNC_FA_(CRYPTO_push_info_) \
    LFUNC_FA_(CRYPTO_pop_info) \
    LFUNC_FA_(CRYPTO_remove_all_info) \
    LFUNC_FA_(CRYPTO_dbg_malloc) \
    LFUNC_FA_(CRYPTO_dbg_realloc) \
    LFUNC_FA_(CRYPTO_dbg_free) \
    LFUNC_FA_(CRYPTO_dbg_set_options) \
    LFUNC_FA_(CRYPTO_dbg_get_options) \
    LFUNC_FA_(CRYPTO_mem_leaks) \
    LFUNC_FA_(CRYPTO_mem_leaks_cb) \
    LFUNC_FA_(OpenSSLDie) \
    LFUNC_FA_(ERR_load_CRYPTO_strings) \
    LFUNC_FA_(DSO_new) \
    LFUNC_FA_(DSO_new_method) \
    LFUNC_FA_(DSO_free) \
    LFUNC_FA_(DSO_flags) \
    LFUNC_FA_(DSO_up_ref) \
    LFUNC_FA_(DSO_ctrl) \
    LFUNC_FA_(DSO_set_name_converter) \
    LFUNC_FA_(DSO_get_filename) \
    LFUNC_FA_(DSO_set_filename) \
    LFUNC_FA_(DSO_convert_filename) \
    LFUNC_FA_(DSO_get_loaded_filename) \
    LFUNC_FA_(DSO_set_default_method) \
    LFUNC_FA_(DSO_get_default_method) \
    LFUNC_FA_(DSO_get_method) \
    LFUNC_FA_(DSO_set_method) \
    LFUNC_FA_(DSO_load) \
    LFUNC_FA_(DSO_bind_var) \
    LFUNC_FA_(DSO_bind_func) \
    LFUNC_FA_(DSO_METHOD_openssl) \
    LFUNC_FA_(DSO_METHOD_null) \
    LFUNC_FA_(DSO_METHOD_dlfcn) \
    LFUNC_FA_(DSO_METHOD_dl) \
    LFUNC_FA_(DSO_METHOD_win32) \
    LFUNC_FA_(DSO_METHOD_vms) \
    LFUNC_FA_(ERR_load_DSO_strings) \
    LFUNC_FA_(EC_GFp_simple_method) \
    LFUNC_FA_(EC_GFp_mont_method) \
    LFUNC_FA_(EC_GROUP_new) \
    LFUNC_FA_(EC_GROUP_free) \
    LFUNC_FA_(EC_GROUP_clear_free) \
    LFUNC_FA_(EC_GROUP_copy) \
    LFUNC_FA_(EC_GROUP_method_of) \
    LFUNC_FA_(EC_GROUP_set_curve_GFp) \
    LFUNC_FA_(EC_GROUP_get_curve_GFp) \
    LFUNC_FA_(EC_GROUP_new_curve_GFp) \
    LFUNC_FA_(EC_GROUP_set_generator) \
    LFUNC_FA_(EC_GROUP_get0_generator) \
    LFUNC_FA_(EC_GROUP_get_order) \
    LFUNC_FA_(EC_GROUP_get_cofactor) \
    LFUNC_FA_(EC_POINT_new) \
    LFUNC_FA_(EC_POINT_free) \
    LFUNC_FA_(EC_POINT_clear_free) \
    LFUNC_FA_(EC_POINT_copy) \
    LFUNC_FA_(EC_POINT_method_of) \
    LFUNC_FA_(EC_POINT_set_to_infinity) \
    LFUNC_FA_(EC_POINT_set_Jprojective_coordinates_GFp) \
    LFUNC_FA_(EC_POINT_get_Jprojective_coordinates_GFp) \
    LFUNC_FA_(EC_POINT_set_affine_coordinates_GFp) \
    LFUNC_FA_(EC_POINT_get_affine_coordinates_GFp) \
    LFUNC_FA_(EC_POINT_set_compressed_coordinates_GFp) \
    LFUNC_FA_(EC_POINT_point2oct) \
    LFUNC_FA_(EC_POINT_oct2point) \
    LFUNC_FA_(EC_POINT_add) \
    LFUNC_FA_(EC_POINT_dbl) \
    LFUNC_FA_(EC_POINT_invert) \
    LFUNC_FA_(EC_POINT_is_at_infinity) \
    LFUNC_FA_(EC_POINT_is_on_curve) \
    LFUNC_FA_(EC_POINT_cmp) \
    LFUNC_FA_(EC_POINT_make_affine) \
    LFUNC_FA_(EC_POINTs_make_affine) \
    LFUNC_FA_(EC_POINTs_mul) \
    LFUNC_FA_(EC_POINT_mul) \
    LFUNC_FA_(EC_GROUP_precompute_mult) \
    LFUNC_FA_(ERR_load_EC_strings) \
    LFUNC_FA_(ERR_put_error) \
    LFUNC_FA_(ERR_set_error_data) \
    LFUNC_FA_(ERR_get_error) \
    LFUNC_FA_(ERR_get_error_line) \
    LFUNC_FA_(ERR_get_error_line_data) \
    LFUNC_FA_(ERR_peek_error) \
    LFUNC_FA_(ERR_peek_error_line) \
    LFUNC_FA_(ERR_peek_error_line_data) \
    LFUNC_FA_(ERR_peek_last_error) \
    LFUNC_FA_(ERR_peek_last_error_line) \
    LFUNC_FA_(ERR_peek_last_error_line_data) \
    LFUNC_FA_(ERR_clear_error) \
    LFUNC_FA_(ERR_error_string) \
    LFUNC_FA_(ERR_error_string_n) \
    LFUNC_FA_(ERR_lib_error_string) \
    LFUNC_FA_(ERR_func_error_string) \
    LFUNC_FA_(ERR_reason_error_string) \
    LFUNC_FA_(ERR_print_errors_cb) \
    LFUNC_FA_(ERR_print_errors) \
    LFUNC_FA_(ERR_add_error_vdata) \
    LFUNC_VA_(ERR_add_error_data) \
    LFUNC_FA_(ERR_load_strings) \
    LFUNC_FA_(ERR_unload_strings) \
    LFUNC_FA_(ERR_load_ERR_strings) \
    LFUNC_FA_(ERR_load_crypto_strings) \
    LFUNC_FA_(ERR_free_strings) \
    LFUNC_FA_(ERR_remove_state) \
    LFUNC_FA_(ERR_get_state) \
    LFUNC_FA_(ERR_get_string_table) \
    LFUNC_FA_(ERR_get_err_state_table) \
    LFUNC_FA_(ERR_release_err_state_table) \
    LFUNC_FA_(ERR_get_next_error_library) \
    LFUNC_FA_(ERR_get_implementation) \
    LFUNC_FA_(ERR_set_implementation) \
    LFUNC_FA_(EVP_MD_CTX_init) \
    LFUNC_FA_(EVP_MD_CTX_cleanup) \
    LFUNC_FA_(EVP_MD_CTX_create) \
    LFUNC_FA_(EVP_MD_CTX_destroy) \
    LFUNC_FA_(EVP_MD_CTX_copy_ex) \
    LFUNC_FA_(EVP_DigestInit_ex) \
    LFUNC_FA_(EVP_DigestUpdate) \
    LFUNC_FA_(EVP_DigestFinal_ex) \
    LFUNC_FA_(EVP_Digest) \
    LFUNC_FA_(EVP_MD_CTX_copy) \
    LFUNC_FA_(EVP_DigestInit) \
    LFUNC_FA_(EVP_DigestFinal) \
    LFUNC_FA_(EVP_read_pw_string) \
    LFUNC_FA_(EVP_set_pw_prompt) \
    LFUNC_FA_(EVP_get_pw_prompt) \
    LFUNC_FA_(EVP_BytesToKey) \
    LFUNC_FA_(EVP_EncryptInit) \
    LFUNC_FA_(EVP_EncryptInit_ex) \
    LFUNC_FA_(EVP_EncryptUpdate) \
    LFUNC_FA_(EVP_EncryptFinal_ex) \
    LFUNC_FA_(EVP_EncryptFinal) \
    LFUNC_FA_(EVP_DecryptInit) \
    LFUNC_FA_(EVP_DecryptInit_ex) \
    LFUNC_FA_(EVP_DecryptUpdate) \
    LFUNC_FA_(EVP_DecryptFinal) \
    LFUNC_FA_(EVP_DecryptFinal_ex) \
    LFUNC_FA_(EVP_CipherInit) \
    LFUNC_FA_(EVP_CipherInit_ex) \
    LFUNC_FA_(EVP_CipherUpdate) \
    LFUNC_FA_(EVP_CipherFinal) \
    LFUNC_FA_(EVP_CipherFinal_ex) \
    LFUNC_FA_(EVP_SignFinal) \
    LFUNC_FA_(EVP_VerifyFinal) \
    LFUNC_FA_(EVP_OpenInit) \
    LFUNC_FA_(EVP_OpenFinal) \
    LFUNC_FA_(EVP_SealInit) \
    LFUNC_FA_(EVP_SealFinal) \
    LFUNC_FA_(EVP_EncodeInit) \
    LFUNC_FA_(EVP_EncodeUpdate) \
    LFUNC_FA_(EVP_EncodeFinal) \
    LFUNC_FA_(EVP_EncodeBlock) \
    LFUNC_FA_(EVP_DecodeInit) \
    LFUNC_FA_(EVP_DecodeUpdate) \
    LFUNC_FA_(EVP_DecodeFinal) \
    LFUNC_FA_(EVP_DecodeBlock) \
    LFUNC_FA_(EVP_CIPHER_CTX_init) \
    LFUNC_FA_(EVP_CIPHER_CTX_cleanup) \
    LFUNC_FA_(EVP_CIPHER_CTX_set_key_length) \
    LFUNC_FA_(EVP_CIPHER_CTX_set_padding) \
    LFUNC_FA_(EVP_CIPHER_CTX_ctrl) \
    LFUNC_FA_(BIO_f_md) \
    LFUNC_FA_(BIO_f_base64) \
    LFUNC_FA_(BIO_f_cipher) \
    LFUNC_FA_(BIO_f_reliable) \
    LFUNC_FA_(BIO_set_cipher) \
    LFUNC_FA_(EVP_md_null) \
    LFUNC_FA_(EVP_md2) \
    LFUNC_FA_(EVP_md4) \
    LFUNC_FA_(EVP_md5) \
    LFUNC_FA_(EVP_sha) \
    LFUNC_FA_(EVP_sha1) \
    LFUNC_FA_(EVP_dss) \
    LFUNC_FA_(EVP_dss1) \
    LFUNC_FA_(EVP_mdc2) \
    LFUNC_FA_(EVP_ripemd160) \
    LFUNC_FA_(EVP_enc_null) \
    LFUNC_FA_(EVP_des_ecb) \
    LFUNC_FA_(EVP_des_ede) \
    LFUNC_FA_(EVP_des_ede3) \
    LFUNC_FA_(EVP_des_ede_ecb) \
    LFUNC_FA_(EVP_des_ede3_ecb) \
    LFUNC_FA_(EVP_des_cfb64) \
    LFUNC_FA_(EVP_des_cfb1) \
    LFUNC_FA_(EVP_des_cfb8) \
    LFUNC_FA_(EVP_des_ede_cfb64) \
    LFUNC_FA_(EVP_des_ede3_cfb64) \
    LFUNC_FA_(EVP_des_ede3_cfb1) \
    LFUNC_FA_(EVP_des_ede3_cfb8) \
    LFUNC_FA_(EVP_des_ofb) \
    LFUNC_FA_(EVP_des_ede_ofb) \
    LFUNC_FA_(EVP_des_ede3_ofb) \
    LFUNC_FA_(EVP_des_cbc) \
    LFUNC_FA_(EVP_des_ede_cbc) \
    LFUNC_FA_(EVP_des_ede3_cbc) \
    LFUNC_FA_(EVP_desx_cbc) \
    LFUNC_FA_(EVP_rc4) \
    LFUNC_FA_(EVP_rc4_40) \
    LFUNC_FA_(EVP_idea_ecb) \
    LFUNC_FA_(EVP_idea_cfb64) \
    LFUNC_FA_(EVP_idea_ofb) \
    LFUNC_FA_(EVP_idea_cbc) \
    LFUNC_FA_(EVP_rc2_ecb) \
    LFUNC_FA_(EVP_rc2_cbc) \
    LFUNC_FA_(EVP_rc2_40_cbc) \
    LFUNC_FA_(EVP_rc2_64_cbc) \
    LFUNC_FA_(EVP_rc2_cfb64) \
    LFUNC_FA_(EVP_rc2_ofb) \
    LFUNC_FA_(EVP_bf_ecb) \
    LFUNC_FA_(EVP_bf_cbc) \
    LFUNC_FA_(EVP_bf_cfb64) \
    LFUNC_FA_(EVP_bf_ofb) \
    LFUNC_FA_(EVP_cast5_ecb) \
    LFUNC_FA_(EVP_cast5_cbc) \
    LFUNC_FA_(EVP_cast5_cfb64) \
    LFUNC_FA_(EVP_cast5_ofb) \
    LFUNC_FA_(EVP_rc5_32_12_16_cbc) \
    LFUNC_FA_(EVP_rc5_32_12_16_ecb) \
    LFUNC_FA_(EVP_rc5_32_12_16_cfb64) \
    LFUNC_FA_(EVP_rc5_32_12_16_ofb) \
    LFUNC_FA_(EVP_aes_128_ecb) \
    LFUNC_FA_(EVP_aes_128_cbc) \
    LFUNC_FA_(EVP_aes_128_cfb1) \
    LFUNC_FA_(EVP_aes_128_cfb8) \
    LFUNC_FA_(EVP_aes_128_cfb128) \
    LFUNC_FA_(EVP_aes_128_ofb) \
    LFUNC_FA_(EVP_aes_192_ecb) \
    LFUNC_FA_(EVP_aes_192_cbc) \
    LFUNC_FA_(EVP_aes_192_cfb1) \
    LFUNC_FA_(EVP_aes_192_cfb8) \
    LFUNC_FA_(EVP_aes_192_cfb128) \
    LFUNC_FA_(EVP_aes_192_ofb) \
    LFUNC_FA_(EVP_aes_256_ecb) \
    LFUNC_FA_(EVP_aes_256_cbc) \
    LFUNC_FA_(EVP_aes_256_cfb1) \
    LFUNC_FA_(EVP_aes_256_cfb8) \
    LFUNC_FA_(EVP_aes_256_cfb128) \
    LFUNC_FA_(EVP_aes_256_ofb) \
    LFUNC_FA_(OPENSSL_add_all_algorithms_noconf) \
    LFUNC_FA_(OPENSSL_add_all_algorithms_conf) \
    LFUNC_FA_(OpenSSL_add_all_ciphers) \
    LFUNC_FA_(OpenSSL_add_all_digests) \
    LFUNC_FA_(EVP_add_cipher) \
    LFUNC_FA_(EVP_add_digest) \
    LFUNC_FA_(EVP_get_cipherbyname) \
    LFUNC_FA_(EVP_get_digestbyname) \
    LFUNC_FA_(EVP_cleanup) \
    LFUNC_FA_(EVP_PKEY_decrypt) \
    LFUNC_FA_(EVP_PKEY_encrypt) \
    LFUNC_FA_(EVP_PKEY_type) \
    LFUNC_FA_(EVP_PKEY_bits) \
    LFUNC_FA_(EVP_PKEY_size) \
    LFUNC_FA_(EVP_PKEY_assign) \
    LFUNC_FA_(EVP_PKEY_set1_RSA) \
    LFUNC_FA_(EVP_PKEY_get1_RSA) \
    LFUNC_FA_(EVP_PKEY_set1_DSA) \
    LFUNC_FA_(EVP_PKEY_get1_DSA) \
    LFUNC_FA_(EVP_PKEY_set1_DH) \
    LFUNC_FA_(EVP_PKEY_get1_DH) \
    LFUNC_FA_(EVP_PKEY_new) \
    LFUNC_FA_(EVP_PKEY_free) \
    LFUNC_FA_(d2i_PublicKey) \
    LFUNC_FA_(i2d_PublicKey) \
    LFUNC_FA_(d2i_PrivateKey) \
    LFUNC_FA_(d2i_AutoPrivateKey) \
    LFUNC_FA_(i2d_PrivateKey) \
    LFUNC_FA_(EVP_PKEY_copy_parameters) \
    LFUNC_FA_(EVP_PKEY_missing_parameters) \
    LFUNC_FA_(EVP_PKEY_save_parameters) \
    LFUNC_FA_(EVP_PKEY_cmp_parameters) \
    LFUNC_FA_(EVP_CIPHER_type) \
    LFUNC_FA_(EVP_CIPHER_param_to_asn1) \
    LFUNC_FA_(EVP_CIPHER_asn1_to_param) \
    LFUNC_FA_(EVP_CIPHER_set_asn1_iv) \
    LFUNC_FA_(EVP_CIPHER_get_asn1_iv) \
    LFUNC_FA_(PKCS5_PBE_keyivgen) \
    LFUNC_FA_(PKCS5_PBKDF2_HMAC_SHA1) \
    LFUNC_FA_(PKCS5_v2_PBE_keyivgen) \
    LFUNC_FA_(PKCS5_PBE_add) \
    LFUNC_FA_(EVP_PBE_CipherInit) \
    LFUNC_FA_(EVP_PBE_alg_add) \
    LFUNC_FA_(EVP_PBE_cleanup) \
    LFUNC_FA_(ERR_load_EVP_strings) \
    LFUNC_FA_(HMAC_CTX_init) \
    LFUNC_FA_(HMAC_CTX_cleanup) \
    LFUNC_FA_(HMAC_Init) \
    LFUNC_FA_(HMAC_Init_ex) \
    LFUNC_FA_(HMAC_Update) \
    LFUNC_FA_(HMAC_Final) \
    LFUNC_FA_(HMAC) \
    LFUNC_FA_(KRB5_ENCDATA_new) \
    LFUNC_FA_(KRB5_ENCDATA_free) \
    LFUNC_FA_(d2i_KRB5_ENCDATA) \
    LFUNC_FA_(i2d_KRB5_ENCDATA) \
    LFUNC_FA_(KRB5_ENCDATA_it) \
    LFUNC_FA_(KRB5_PRINCNAME_new) \
    LFUNC_FA_(KRB5_PRINCNAME_free) \
    LFUNC_FA_(d2i_KRB5_PRINCNAME) \
    LFUNC_FA_(i2d_KRB5_PRINCNAME) \
    LFUNC_FA_(KRB5_PRINCNAME_it) \
    LFUNC_FA_(KRB5_TKTBODY_new) \
    LFUNC_FA_(KRB5_TKTBODY_free) \
    LFUNC_FA_(d2i_KRB5_TKTBODY) \
    LFUNC_FA_(i2d_KRB5_TKTBODY) \
    LFUNC_FA_(KRB5_TKTBODY_it) \
    LFUNC_FA_(KRB5_APREQBODY_new) \
    LFUNC_FA_(KRB5_APREQBODY_free) \
    LFUNC_FA_(d2i_KRB5_APREQBODY) \
    LFUNC_FA_(i2d_KRB5_APREQBODY) \
    LFUNC_FA_(KRB5_APREQBODY_it) \
    LFUNC_FA_(KRB5_TICKET_new) \
    LFUNC_FA_(KRB5_TICKET_free) \
    LFUNC_FA_(d2i_KRB5_TICKET) \
    LFUNC_FA_(i2d_KRB5_TICKET) \
    LFUNC_FA_(KRB5_TICKET_it) \
    LFUNC_FA_(KRB5_APREQ_new) \
    LFUNC_FA_(KRB5_APREQ_free) \
    LFUNC_FA_(d2i_KRB5_APREQ) \
    LFUNC_FA_(i2d_KRB5_APREQ) \
    LFUNC_FA_(KRB5_APREQ_it) \
    LFUNC_FA_(KRB5_CHECKSUM_new) \
    LFUNC_FA_(KRB5_CHECKSUM_free) \
    LFUNC_FA_(d2i_KRB5_CHECKSUM) \
    LFUNC_FA_(i2d_KRB5_CHECKSUM) \
    LFUNC_FA_(KRB5_CHECKSUM_it) \
    LFUNC_FA_(KRB5_ENCKEY_new) \
    LFUNC_FA_(KRB5_ENCKEY_free) \
    LFUNC_FA_(d2i_KRB5_ENCKEY) \
    LFUNC_FA_(i2d_KRB5_ENCKEY) \
    LFUNC_FA_(KRB5_ENCKEY_it) \
    LFUNC_FA_(KRB5_AUTHDATA_new) \
    LFUNC_FA_(KRB5_AUTHDATA_free) \
    LFUNC_FA_(d2i_KRB5_AUTHDATA) \
    LFUNC_FA_(i2d_KRB5_AUTHDATA) \
    LFUNC_FA_(KRB5_AUTHDATA_it) \
    LFUNC_FA_(KRB5_AUTHENTBODY_new) \
    LFUNC_FA_(KRB5_AUTHENTBODY_free) \
    LFUNC_FA_(d2i_KRB5_AUTHENTBODY) \
    LFUNC_FA_(i2d_KRB5_AUTHENTBODY) \
    LFUNC_FA_(KRB5_AUTHENTBODY_it) \
    LFUNC_FA_(KRB5_AUTHENT_new) \
    LFUNC_FA_(KRB5_AUTHENT_free) \
    LFUNC_FA_(d2i_KRB5_AUTHENT) \
    LFUNC_FA_(i2d_KRB5_AUTHENT) \
    LFUNC_FA_(KRB5_AUTHENT_it) \
    LFUNC_FA_(lh_new) \
    LFUNC_FA_(lh_free) \
    LFUNC_FA_(lh_insert) \
    LFUNC_FA_(lh_delete) \
    LFUNC_FA_(lh_retrieve) \
    LFUNC_FA_(lh_doall) \
    LFUNC_FA_(lh_doall_arg) \
    LFUNC_FA_(lh_strhash) \
    LFUNC_FA_(lh_num_items) \
    LFUNC_FA_(lh_stats_bio) \
    LFUNC_FA_(lh_node_stats_bio) \
    LFUNC_FA_(lh_node_usage_stats_bio) \
    LFUNC_FA_(OBJ_NAME_init) \
    LFUNC_FA_(OBJ_NAME_new_index) \
    LFUNC_FA_(OBJ_NAME_get) \
    LFUNC_FA_(OBJ_NAME_add) \
    LFUNC_FA_(OBJ_NAME_remove) \
    LFUNC_FA_(OBJ_NAME_cleanup) \
    LFUNC_FA_(OBJ_NAME_do_all) \
    LFUNC_FA_(OBJ_NAME_do_all_sorted) \
    LFUNC_FA_(OBJ_dup) \
    LFUNC_FA_(OBJ_nid2obj) \
    LFUNC_FA_(OBJ_nid2ln) \
    LFUNC_FA_(OBJ_nid2sn) \
    LFUNC_FA_(OBJ_obj2nid) \
    LFUNC_FA_(OBJ_txt2obj) \
    LFUNC_FA_(OBJ_obj2txt) \
    LFUNC_FA_(OBJ_txt2nid) \
    LFUNC_FA_(OBJ_ln2nid) \
    LFUNC_FA_(OBJ_sn2nid) \
    LFUNC_FA_(OBJ_cmp) \
    LFUNC_FA_(OBJ_new_nid) \
    LFUNC_FA_(OBJ_add_object) \
    LFUNC_FA_(OBJ_create) \
    LFUNC_FA_(OBJ_cleanup) \
    LFUNC_FA_(OBJ_create_objects) \
    LFUNC_FA_(ERR_load_OBJ_strings) \
    LFUNC_FA_(OCSP_sendreq_bio) \
    LFUNC_FA_(OCSP_cert_to_id) \
    LFUNC_FA_(OCSP_cert_id_new) \
    LFUNC_FA_(OCSP_request_add0_id) \
    LFUNC_FA_(OCSP_request_add1_nonce) \
    LFUNC_FA_(OCSP_basic_add1_nonce) \
    LFUNC_FA_(OCSP_check_nonce) \
    LFUNC_FA_(OCSP_copy_nonce) \
    LFUNC_FA_(OCSP_request_set1_name) \
    LFUNC_FA_(OCSP_request_add1_cert) \
    LFUNC_FA_(OCSP_request_sign) \
    LFUNC_FA_(OCSP_response_status) \
    LFUNC_FA_(OCSP_response_get1_basic) \
    LFUNC_FA_(OCSP_resp_count) \
    LFUNC_FA_(OCSP_resp_get0) \
    LFUNC_FA_(OCSP_resp_find) \
    LFUNC_FA_(OCSP_single_get0_status) \
    LFUNC_FA_(OCSP_resp_find_status) \
    LFUNC_FA_(OCSP_check_validity) \
    LFUNC_FA_(OCSP_request_verify) \
    LFUNC_FA_(OCSP_parse_url) \
    LFUNC_FA_(OCSP_id_issuer_cmp) \
    LFUNC_FA_(OCSP_id_cmp) \
    LFUNC_FA_(OCSP_request_onereq_count) \
    LFUNC_FA_(OCSP_request_onereq_get0) \
    LFUNC_FA_(OCSP_onereq_get0_id) \
    LFUNC_FA_(OCSP_id_get0_info) \
    LFUNC_FA_(OCSP_request_is_signed) \
    LFUNC_FA_(OCSP_response_create) \
    LFUNC_FA_(OCSP_basic_add1_status) \
    LFUNC_FA_(OCSP_basic_add1_cert) \
    LFUNC_FA_(OCSP_basic_sign) \
    LFUNC_FA_(OCSP_crlID_new) \
    LFUNC_FA_(OCSP_accept_responses_new) \
    LFUNC_FA_(OCSP_archive_cutoff_new) \
    LFUNC_FA_(OCSP_url_svcloc_new) \
    LFUNC_FA_(OCSP_REQUEST_get_ext_count) \
    LFUNC_FA_(OCSP_REQUEST_get_ext_by_NID) \
    LFUNC_FA_(OCSP_REQUEST_get_ext_by_OBJ) \
    LFUNC_FA_(OCSP_REQUEST_get_ext_by_critical) \
    LFUNC_FA_(OCSP_REQUEST_get_ext) \
    LFUNC_FA_(OCSP_REQUEST_delete_ext) \
    LFUNC_FA_(OCSP_REQUEST_get1_ext_d2i) \
    LFUNC_FA_(OCSP_REQUEST_add1_ext_i2d) \
    LFUNC_FA_(OCSP_REQUEST_add_ext) \
    LFUNC_FA_(OCSP_ONEREQ_get_ext_count) \
    LFUNC_FA_(OCSP_ONEREQ_get_ext_by_NID) \
    LFUNC_FA_(OCSP_ONEREQ_get_ext_by_OBJ) \
    LFUNC_FA_(OCSP_ONEREQ_get_ext_by_critical) \
    LFUNC_FA_(OCSP_ONEREQ_get_ext) \
    LFUNC_FA_(OCSP_ONEREQ_delete_ext) \
    LFUNC_FA_(OCSP_ONEREQ_get1_ext_d2i) \
    LFUNC_FA_(OCSP_ONEREQ_add1_ext_i2d) \
    LFUNC_FA_(OCSP_ONEREQ_add_ext) \
    LFUNC_FA_(OCSP_BASICRESP_get_ext_count) \
    LFUNC_FA_(OCSP_BASICRESP_get_ext_by_NID) \
    LFUNC_FA_(OCSP_BASICRESP_get_ext_by_OBJ) \
    LFUNC_FA_(OCSP_BASICRESP_get_ext_by_critical) \
    LFUNC_FA_(OCSP_BASICRESP_get_ext) \
    LFUNC_FA_(OCSP_BASICRESP_delete_ext) \
    LFUNC_FA_(OCSP_BASICRESP_get1_ext_d2i) \
    LFUNC_FA_(OCSP_BASICRESP_add1_ext_i2d) \
    LFUNC_FA_(OCSP_BASICRESP_add_ext) \
    LFUNC_FA_(OCSP_SINGLERESP_get_ext_count) \
    LFUNC_FA_(OCSP_SINGLERESP_get_ext_by_NID) \
    LFUNC_FA_(OCSP_SINGLERESP_get_ext_by_OBJ) \
    LFUNC_FA_(OCSP_SINGLERESP_get_ext_by_critical) \
    LFUNC_FA_(OCSP_SINGLERESP_get_ext) \
    LFUNC_FA_(OCSP_SINGLERESP_delete_ext) \
    LFUNC_FA_(OCSP_SINGLERESP_get1_ext_d2i) \
    LFUNC_FA_(OCSP_SINGLERESP_add1_ext_i2d) \
    LFUNC_FA_(OCSP_SINGLERESP_add_ext) \
    LFUNC_FA_(OCSP_SINGLERESP_new) \
    LFUNC_FA_(OCSP_SINGLERESP_free) \
    LFUNC_FA_(d2i_OCSP_SINGLERESP) \
    LFUNC_FA_(i2d_OCSP_SINGLERESP) \
    LFUNC_FA_(OCSP_SINGLERESP_it) \
    LFUNC_FA_(OCSP_CERTSTATUS_new) \
    LFUNC_FA_(OCSP_CERTSTATUS_free) \
    LFUNC_FA_(d2i_OCSP_CERTSTATUS) \
    LFUNC_FA_(i2d_OCSP_CERTSTATUS) \
    LFUNC_FA_(OCSP_CERTSTATUS_it) \
    LFUNC_FA_(OCSP_REVOKEDINFO_new) \
    LFUNC_FA_(OCSP_REVOKEDINFO_free) \
    LFUNC_FA_(d2i_OCSP_REVOKEDINFO) \
    LFUNC_FA_(i2d_OCSP_REVOKEDINFO) \
    LFUNC_FA_(OCSP_REVOKEDINFO_it) \
    LFUNC_FA_(OCSP_BASICRESP_new) \
    LFUNC_FA_(OCSP_BASICRESP_free) \
    LFUNC_FA_(d2i_OCSP_BASICRESP) \
    LFUNC_FA_(i2d_OCSP_BASICRESP) \
    LFUNC_FA_(OCSP_BASICRESP_it) \
    LFUNC_FA_(OCSP_RESPDATA_new) \
    LFUNC_FA_(OCSP_RESPDATA_free) \
    LFUNC_FA_(d2i_OCSP_RESPDATA) \
    LFUNC_FA_(i2d_OCSP_RESPDATA) \
    LFUNC_FA_(OCSP_RESPDATA_it) \
    LFUNC_FA_(OCSP_RESPID_new) \
    LFUNC_FA_(OCSP_RESPID_free) \
    LFUNC_FA_(d2i_OCSP_RESPID) \
    LFUNC_FA_(i2d_OCSP_RESPID) \
    LFUNC_FA_(OCSP_RESPID_it) \
    LFUNC_FA_(OCSP_RESPONSE_new) \
    LFUNC_FA_(OCSP_RESPONSE_free) \
    LFUNC_FA_(d2i_OCSP_RESPONSE) \
    LFUNC_FA_(i2d_OCSP_RESPONSE) \
    LFUNC_FA_(OCSP_RESPONSE_it) \
    LFUNC_FA_(OCSP_RESPBYTES_new) \
    LFUNC_FA_(OCSP_RESPBYTES_free) \
    LFUNC_FA_(d2i_OCSP_RESPBYTES) \
    LFUNC_FA_(i2d_OCSP_RESPBYTES) \
    LFUNC_FA_(OCSP_RESPBYTES_it) \
    LFUNC_FA_(OCSP_ONEREQ_new) \
    LFUNC_FA_(OCSP_ONEREQ_free) \
    LFUNC_FA_(d2i_OCSP_ONEREQ) \
    LFUNC_FA_(i2d_OCSP_ONEREQ) \
    LFUNC_FA_(OCSP_ONEREQ_it) \
    LFUNC_FA_(OCSP_CERTID_new) \
    LFUNC_FA_(OCSP_CERTID_free) \
    LFUNC_FA_(d2i_OCSP_CERTID) \
    LFUNC_FA_(i2d_OCSP_CERTID) \
    LFUNC_FA_(OCSP_CERTID_it) \
    LFUNC_FA_(OCSP_REQUEST_new) \
    LFUNC_FA_(OCSP_REQUEST_free) \
    LFUNC_FA_(d2i_OCSP_REQUEST) \
    LFUNC_FA_(i2d_OCSP_REQUEST) \
    LFUNC_FA_(OCSP_REQUEST_it) \
    LFUNC_FA_(OCSP_SIGNATURE_new) \
    LFUNC_FA_(OCSP_SIGNATURE_free) \
    LFUNC_FA_(d2i_OCSP_SIGNATURE) \
    LFUNC_FA_(i2d_OCSP_SIGNATURE) \
    LFUNC_FA_(OCSP_SIGNATURE_it) \
    LFUNC_FA_(OCSP_REQINFO_new) \
    LFUNC_FA_(OCSP_REQINFO_free) \
    LFUNC_FA_(d2i_OCSP_REQINFO) \
    LFUNC_FA_(i2d_OCSP_REQINFO) \
    LFUNC_FA_(OCSP_REQINFO_it) \
    LFUNC_FA_(OCSP_CRLID_new) \
    LFUNC_FA_(OCSP_CRLID_free) \
    LFUNC_FA_(d2i_OCSP_CRLID) \
    LFUNC_FA_(i2d_OCSP_CRLID) \
    LFUNC_FA_(OCSP_CRLID_it) \
    LFUNC_FA_(OCSP_SERVICELOC_new) \
    LFUNC_FA_(OCSP_SERVICELOC_free) \
    LFUNC_FA_(d2i_OCSP_SERVICELOC) \
    LFUNC_FA_(i2d_OCSP_SERVICELOC) \
    LFUNC_FA_(OCSP_SERVICELOC_it) \
    LFUNC_FA_(OCSP_response_status_str) \
    LFUNC_FA_(OCSP_cert_status_str) \
    LFUNC_FA_(OCSP_crl_reason_str) \
    LFUNC_FA_(OCSP_REQUEST_print) \
    LFUNC_FA_(OCSP_RESPONSE_print) \
    LFUNC_FA_(OCSP_basic_verify) \
    LFUNC_FA_(ERR_load_OCSP_strings) \
    LFUNC_FA_(PEM_get_EVP_CIPHER_INFO) \
    LFUNC_FA_(PEM_do_header) \
    LFUNC_FA_(PEM_read_bio) \
    LFUNC_FA_(PEM_write_bio) \
    LFUNC_FA_(PEM_bytes_read_bio) \
    LFUNC_NULL \
    LFUNC_FA_(PEM_ASN1_read_bio) \
    LFUNC_NULL \
    LFUNC_FA_(PEM_ASN1_write_bio) \
    LFUNC_NULL \
    LFUNC_FA_(PEM_X509_INFO_read_bio) \
    LFUNC_FA_(PEM_X509_INFO_write_bio) \
    LFUNC_FA_(PEM_SealInit) \
    LFUNC_FA_(PEM_SealUpdate) \
    LFUNC_FA_(PEM_SealFinal) \
    LFUNC_FA_(PEM_SignInit) \
    LFUNC_FA_(PEM_SignUpdate) \
    LFUNC_FA_(PEM_SignFinal) \
    LFUNC_FA_(PEM_def_callback) \
    LFUNC_FA_(PEM_proc_type) \
    LFUNC_NULL \
    LFUNC_FA_(PEM_dek_info) \
    LFUNC_FA_(PEM_read_bio_X509) \
    LFUNC_FA_(PEM_write_bio_X509) \
    LFUNC_FA_(PEM_read_bio_X509_AUX) \
    LFUNC_FA_(PEM_write_bio_X509_AUX) \
    LFUNC_FA_(PEM_read_bio_X509_REQ) \
    LFUNC_NULL \
    LFUNC_FA_(PEM_write_bio_X509_REQ) \
    LFUNC_FA_(PEM_write_bio_X509_REQ_NEW) \
    LFUNC_FA_(PEM_read_bio_X509_CRL) \
    LFUNC_FA_(PEM_write_bio_X509_CRL) \
    LFUNC_FA_(PEM_read_bio_PKCS7) \
    LFUNC_FA_(PEM_write_bio_PKCS7) \
    LFUNC_FA_(PEM_read_bio_NETSCAPE_CERT_SEQUENCE) \
    LFUNC_FA_(PEM_write_bio_NETSCAPE_CERT_SEQUENCE) \
    LFUNC_FA_(PEM_read_bio_PKCS8) \
    LFUNC_FA_(PEM_write_bio_PKCS8) \
    LFUNC_FA_(PEM_read_bio_PKCS8_PRIV_KEY_INFO) \
    LFUNC_FA_(PEM_write_bio_PKCS8_PRIV_KEY_INFO) \
    LFUNC_FA_(PEM_read_bio_RSAPrivateKey) \
    LFUNC_FA_(PEM_write_bio_RSAPrivateKey) \
    LFUNC_FA_(PEM_read_bio_RSAPublicKey) \
    LFUNC_FA_(PEM_write_bio_RSAPublicKey) \
    LFUNC_FA_(PEM_read_bio_RSA_PUBKEY) \
    LFUNC_FA_(PEM_write_bio_RSA_PUBKEY) \
    LFUNC_FA_(PEM_read_bio_DSAPrivateKey) \
    LFUNC_FA_(PEM_write_bio_DSAPrivateKey) \
    LFUNC_FA_(PEM_read_bio_DSA_PUBKEY) \
    LFUNC_FA_(PEM_write_bio_DSA_PUBKEY) \
    LFUNC_FA_(PEM_read_bio_DSAparams) \
    LFUNC_FA_(PEM_write_bio_DSAparams) \
    LFUNC_FA_(PEM_read_bio_DHparams) \
    LFUNC_FA_(PEM_write_bio_DHparams) \
    LFUNC_FA_(PEM_read_bio_PrivateKey) \
    LFUNC_FA_(PEM_write_bio_PrivateKey) \
    LFUNC_FA_(PEM_read_bio_PUBKEY) \
    LFUNC_FA_(PEM_write_bio_PUBKEY) \
    LFUNC_FA_(PEM_write_bio_PKCS8PrivateKey_nid) \
    LFUNC_FA_(PEM_write_bio_PKCS8PrivateKey) \
    LFUNC_FA_(i2d_PKCS8PrivateKey_bio) \
    LFUNC_FA_(i2d_PKCS8PrivateKey_nid_bio) \
    LFUNC_FA_(d2i_PKCS8PrivateKey_bio) \
    LFUNC_FA_(ERR_load_PEM_strings) \
    LFUNC_FA_(PKCS12_x5092certbag) \
    LFUNC_FA_(PKCS12_x509crl2certbag) \
    LFUNC_FA_(PKCS12_certbag2x509) \
    LFUNC_FA_(PKCS12_certbag2x509crl) \
    LFUNC_FA_(PKCS12_item_pack_safebag) \
    LFUNC_FA_(PKCS12_MAKE_KEYBAG) \
    LFUNC_FA_(PKCS8_decrypt) \
    LFUNC_FA_(PKCS12_decrypt_skey) \
    LFUNC_FA_(PKCS8_encrypt) \
    LFUNC_FA_(PKCS12_MAKE_SHKEYBAG) \
    LFUNC_FA_(PKCS12_pack_p7data) \
    LFUNC_FA_(PKCS12_unpack_p7data) \
    LFUNC_FA_(PKCS12_pack_p7encdata) \
    LFUNC_FA_(PKCS12_unpack_p7encdata) \
    LFUNC_FA_(PKCS12_pack_authsafes) \
    LFUNC_FA_(PKCS12_unpack_authsafes) \
    LFUNC_FA_(PKCS12_add_localkeyid) \
    LFUNC_FA_(PKCS12_add_friendlyname_asc) \
    LFUNC_FA_(PKCS12_add_CSPName_asc) \
    LFUNC_FA_(PKCS12_add_friendlyname_uni) \
    LFUNC_FA_(PKCS8_add_keyusage) \
    LFUNC_FA_(PKCS12_get_attr_gen) \
    LFUNC_FA_(PKCS12_get_friendlyname) \
    LFUNC_FA_(PKCS12_pbe_crypt) \
    LFUNC_FA_(PKCS12_item_decrypt_d2i) \
    LFUNC_FA_(PKCS12_item_i2d_encrypt) \
    LFUNC_FA_(PKCS12_init) \
    LFUNC_FA_(PKCS12_key_gen_asc) \
    LFUNC_FA_(PKCS12_key_gen_uni) \
    LFUNC_FA_(PKCS12_PBE_keyivgen) \
    LFUNC_FA_(PKCS12_gen_mac) \
    LFUNC_FA_(PKCS12_verify_mac) \
    LFUNC_FA_(PKCS12_set_mac) \
    LFUNC_FA_(PKCS12_setup_mac) \
    LFUNC_FA_(OPENSSL_asc2uni) \
    LFUNC_FA_(OPENSSL_uni2asc) \
    LFUNC_FA_(PKCS12_new) \
    LFUNC_FA_(PKCS12_free) \
    LFUNC_FA_(d2i_PKCS12) \
    LFUNC_FA_(i2d_PKCS12) \
    LFUNC_FA_(PKCS12_it) \
    LFUNC_FA_(PKCS12_MAC_DATA_new) \
    LFUNC_FA_(PKCS12_MAC_DATA_free) \
    LFUNC_FA_(d2i_PKCS12_MAC_DATA) \
    LFUNC_FA_(i2d_PKCS12_MAC_DATA) \
    LFUNC_FA_(PKCS12_MAC_DATA_it) \
    LFUNC_FA_(PKCS12_SAFEBAG_new) \
    LFUNC_FA_(PKCS12_SAFEBAG_free) \
    LFUNC_FA_(d2i_PKCS12_SAFEBAG) \
    LFUNC_FA_(i2d_PKCS12_SAFEBAG) \
    LFUNC_FA_(PKCS12_SAFEBAG_it) \
    LFUNC_FA_(PKCS12_BAGS_new) \
    LFUNC_FA_(PKCS12_BAGS_free) \
    LFUNC_FA_(d2i_PKCS12_BAGS) \
    LFUNC_FA_(i2d_PKCS12_BAGS) \
    LFUNC_FA_(PKCS12_BAGS_it) \
    LFUNC_FA_(PKCS12_SAFEBAGS_it) \
    LFUNC_FA_(PKCS12_AUTHSAFES_it) \
    LFUNC_FA_(PKCS12_PBE_add) \
    LFUNC_FA_(PKCS12_parse) \
    LFUNC_FA_(PKCS12_create) \
    LFUNC_FA_(i2d_PKCS12_bio) \
    LFUNC_FA_(d2i_PKCS12_bio) \
    LFUNC_FA_(PKCS12_newpass) \
    LFUNC_FA_(ERR_load_PKCS12_strings) \
    LFUNC_FA_(PKCS7_ISSUER_AND_SERIAL_digest) \
    LFUNC_FA_(PKCS7_dup) \
    LFUNC_FA_(d2i_PKCS7_bio) \
    LFUNC_FA_(i2d_PKCS7_bio) \
    LFUNC_FA_(PKCS7_ISSUER_AND_SERIAL_new) \
    LFUNC_FA_(PKCS7_ISSUER_AND_SERIAL_free) \
    LFUNC_FA_(d2i_PKCS7_ISSUER_AND_SERIAL) \
    LFUNC_FA_(i2d_PKCS7_ISSUER_AND_SERIAL) \
    LFUNC_FA_(PKCS7_ISSUER_AND_SERIAL_it) \
    LFUNC_FA_(PKCS7_SIGNER_INFO_new) \
    LFUNC_FA_(PKCS7_SIGNER_INFO_free) \
    LFUNC_FA_(d2i_PKCS7_SIGNER_INFO) \
    LFUNC_FA_(i2d_PKCS7_SIGNER_INFO) \
    LFUNC_FA_(PKCS7_SIGNER_INFO_it) \
    LFUNC_FA_(PKCS7_RECIP_INFO_new) \
    LFUNC_FA_(PKCS7_RECIP_INFO_free) \
    LFUNC_FA_(d2i_PKCS7_RECIP_INFO) \
    LFUNC_FA_(i2d_PKCS7_RECIP_INFO) \
    LFUNC_FA_(PKCS7_RECIP_INFO_it) \
    LFUNC_FA_(PKCS7_SIGNED_new) \
    LFUNC_FA_(PKCS7_SIGNED_free) \
    LFUNC_FA_(d2i_PKCS7_SIGNED) \
    LFUNC_FA_(i2d_PKCS7_SIGNED) \
    LFUNC_FA_(PKCS7_SIGNED_it) \
    LFUNC_FA_(PKCS7_ENC_CONTENT_new) \
    LFUNC_FA_(PKCS7_ENC_CONTENT_free) \
    LFUNC_FA_(d2i_PKCS7_ENC_CONTENT) \
    LFUNC_FA_(i2d_PKCS7_ENC_CONTENT) \
    LFUNC_FA_(PKCS7_ENC_CONTENT_it) \
    LFUNC_FA_(PKCS7_ENVELOPE_new) \
    LFUNC_FA_(PKCS7_ENVELOPE_free) \
    LFUNC_FA_(d2i_PKCS7_ENVELOPE) \
    LFUNC_FA_(i2d_PKCS7_ENVELOPE) \
    LFUNC_FA_(PKCS7_ENVELOPE_it) \
    LFUNC_FA_(PKCS7_SIGN_ENVELOPE_new) \
    LFUNC_FA_(PKCS7_SIGN_ENVELOPE_free) \
    LFUNC_FA_(d2i_PKCS7_SIGN_ENVELOPE) \
    LFUNC_FA_(i2d_PKCS7_SIGN_ENVELOPE) \
    LFUNC_FA_(PKCS7_SIGN_ENVELOPE_it) \
    LFUNC_FA_(PKCS7_DIGEST_new) \
    LFUNC_FA_(PKCS7_DIGEST_free) \
    LFUNC_FA_(d2i_PKCS7_DIGEST) \
    LFUNC_FA_(i2d_PKCS7_DIGEST) \
    LFUNC_FA_(PKCS7_DIGEST_it) \
    LFUNC_FA_(PKCS7_ENCRYPT_new) \
    LFUNC_FA_(PKCS7_ENCRYPT_free) \
    LFUNC_FA_(d2i_PKCS7_ENCRYPT) \
    LFUNC_FA_(i2d_PKCS7_ENCRYPT) \
    LFUNC_FA_(PKCS7_ENCRYPT_it) \
    LFUNC_FA_(PKCS7_new) \
    LFUNC_FA_(PKCS7_free) \
    LFUNC_FA_(d2i_PKCS7) \
    LFUNC_FA_(i2d_PKCS7) \
    LFUNC_FA_(PKCS7_it) \
    LFUNC_FA_(PKCS7_ATTR_SIGN_it) \
    LFUNC_FA_(PKCS7_ATTR_VERIFY_it) \
    LFUNC_FA_(PKCS7_ctrl) \
    LFUNC_FA_(PKCS7_set_type) \
    LFUNC_FA_(PKCS7_set_content) \
    LFUNC_FA_(PKCS7_SIGNER_INFO_set) \
    LFUNC_FA_(PKCS7_add_signer) \
    LFUNC_FA_(PKCS7_add_certificate) \
    LFUNC_FA_(PKCS7_add_crl) \
    LFUNC_FA_(PKCS7_content_new) \
    LFUNC_FA_(PKCS7_dataVerify) \
    LFUNC_FA_(PKCS7_signatureVerify) \
    LFUNC_FA_(PKCS7_dataInit) \
    LFUNC_FA_(PKCS7_dataFinal) \
    LFUNC_FA_(PKCS7_dataDecode) \
    LFUNC_FA_(PKCS7_add_signature) \
    LFUNC_FA_(PKCS7_cert_from_signer_info) \
    LFUNC_FA_(PKCS7_get_signer_info) \
    LFUNC_FA_(PKCS7_add_recipient) \
    LFUNC_FA_(PKCS7_add_recipient_info) \
    LFUNC_FA_(PKCS7_RECIP_INFO_set) \
    LFUNC_FA_(PKCS7_set_cipher) \
    LFUNC_FA_(PKCS7_get_issuer_and_serial) \
    LFUNC_FA_(PKCS7_digest_from_attributes) \
    LFUNC_FA_(PKCS7_add_signed_attribute) \
    LFUNC_FA_(PKCS7_add_attribute) \
    LFUNC_FA_(PKCS7_get_attribute) \
    LFUNC_FA_(PKCS7_get_signed_attribute) \
    LFUNC_FA_(PKCS7_set_signed_attributes) \
    LFUNC_FA_(PKCS7_set_attributes) \
    LFUNC_FA_(PKCS7_sign) \
    LFUNC_FA_(PKCS7_verify) \
    LFUNC_FA_(PKCS7_get0_signers) \
    LFUNC_FA_(PKCS7_encrypt) \
    LFUNC_FA_(PKCS7_decrypt) \
    LFUNC_FA_(PKCS7_add_attrib_smimecap) \
    LFUNC_FA_(PKCS7_get_smimecap) \
    LFUNC_FA_(PKCS7_simple_smimecap) \
    LFUNC_FA_(SMIME_write_PKCS7) \
    LFUNC_FA_(SMIME_read_PKCS7) \
    LFUNC_FA_(SMIME_crlf_copy) \
    LFUNC_FA_(SMIME_text) \
    LFUNC_FA_(ERR_load_PKCS7_strings) \
    LFUNC_FA_(RAND_set_rand_method) \
    LFUNC_FA_(RAND_get_rand_method) \
    LFUNC_FA_(RAND_SSLeay) \
    LFUNC_FA_(RAND_cleanup) \
    LFUNC_FA_(RAND_bytes) \
    LFUNC_FA_(RAND_pseudo_bytes) \
    LFUNC_FA_(RAND_seed) \
    LFUNC_FA_(RAND_add) \
    LFUNC_FA_(RAND_load_file) \
    LFUNC_FA_(RAND_write_file) \
    LFUNC_FA_(RAND_file_name) \
    LFUNC_FA_(RAND_status) \
    LFUNC_FA_(RAND_query_egd_bytes) \
    LFUNC_FA_(RAND_egd) \
    LFUNC_FA_(RAND_egd_bytes) \
    LFUNC_FA_(RAND_poll) \
    LFUNC_FA_(ERR_load_RAND_strings) \
    LFUNC_FA_(SSL_CTX_set_msg_callback) \
    LFUNC_FA_(SSL_set_msg_callback) \
    LFUNC_FA_(SSL_CTX_sessions) \
    LFUNC_FA_(SSL_get_finished) \
    LFUNC_FA_(SSL_get_peer_finished) \
    LFUNC_FA_(BIO_f_ssl) \
    LFUNC_FA_(BIO_new_ssl) \
    LFUNC_FA_(BIO_new_ssl_connect) \
    LFUNC_FA_(BIO_new_buffer_ssl_connect) \
    LFUNC_FA_(BIO_ssl_copy_session_id) \
    LFUNC_FA_(BIO_ssl_shutdown) \
    LFUNC_FA_(SSL_CTX_set_cipher_list) \
    LFUNC_FA_(SSL_CTX_new) \
    LFUNC_FA_(SSL_CTX_free) \
    LFUNC_FA_(SSL_CTX_set_timeout) \
    LFUNC_FA_(SSL_CTX_get_timeout) \
    LFUNC_FA_(SSL_CTX_get_cert_store) \
    LFUNC_FA_(SSL_CTX_set_cert_store) \
    LFUNC_FA_(SSL_want) \
    LFUNC_FA_(SSL_clear) \
    LFUNC_FA_(SSL_CTX_flush_sessions) \
    LFUNC_FA_(SSL_get_current_cipher) \
    LFUNC_FA_(SSL_CIPHER_get_bits) \
    LFUNC_FA_(SSL_CIPHER_get_version) \
    LFUNC_FA_(SSL_CIPHER_get_name) \
    LFUNC_FA_(SSL_CIPHER_get_mac) \
    LFUNC_FA_(SSL_CIPHER_get_encryption) \
    LFUNC_FA_(SSL_CIPHER_get_authentication) \
    LFUNC_FA_(SSL_CIPHER_get_key_exchange) \
    LFUNC_FA_(SSL_CIPHER_get_export) \
    LFUNC_FA_(SSL_get_fd) \
    LFUNC_FA_(SSL_get_rfd) \
    LFUNC_FA_(SSL_get_wfd) \
    LFUNC_FA_(SSL_get_cipher_list) \
    LFUNC_FA_(SSL_get_shared_ciphers) \
    LFUNC_FA_(SSL_get_read_ahead) \
    LFUNC_FA_(SSL_pending) \
    LFUNC_FA_(SSL_set_fd) \
    LFUNC_FA_(SSL_set_rfd) \
    LFUNC_FA_(SSL_set_wfd) \
    LFUNC_FA_(SSL_set_bio) \
    LFUNC_FA_(SSL_get_rbio) \
    LFUNC_FA_(SSL_get_wbio) \
    LFUNC_FA_(SSL_set_cipher_list) \
    LFUNC_FA_(SSL_set_read_ahead) \
    LFUNC_FA_(SSL_get_verify_mode) \
    LFUNC_FA_(SSL_get_verify_depth) \
    LFUNC_FA_(SSL_get_verify_callback) \
    LFUNC_FA_(SSL_set_verify) \
    LFUNC_FA_(SSL_set_verify_depth) \
    LFUNC_FA_(SSL_use_RSAPrivateKey) \
    LFUNC_FA_(SSL_use_RSAPrivateKey_ASN1) \
    LFUNC_FA_(SSL_use_PrivateKey) \
    LFUNC_FA_(SSL_use_PrivateKey_ASN1) \
    LFUNC_FA_(SSL_use_certificate) \
    LFUNC_FA_(SSL_use_certificate_ASN1) \
    LFUNC_FA_(SSL_use_RSAPrivateKey_file) \
    LFUNC_FA_(SSL_use_PrivateKey_file) \
    LFUNC_FA_(SSL_use_certificate_file) \
    LFUNC_FA_(SSL_CTX_use_RSAPrivateKey_file) \
    LFUNC_FA_(SSL_CTX_use_PrivateKey_file) \
    LFUNC_FA_(SSL_CTX_use_certificate_file) \
    LFUNC_FA_(SSL_CTX_use_certificate_chain_file) \
    LFUNC_FA_(SSL_load_client_CA_file) \
    LFUNC_FA_(SSL_add_file_cert_subjects_to_stack) \
    LFUNC_FA_(SSL_add_dir_cert_subjects_to_stack) \
    LFUNC_FA_(SSL_load_error_strings) \
    LFUNC_FA_(SSL_state_string) \
    LFUNC_FA_(SSL_rstate_string) \
    LFUNC_FA_(SSL_state_string_long) \
    LFUNC_FA_(SSL_rstate_string_long) \
    LFUNC_FA_(SSL_SESSION_get_time) \
    LFUNC_FA_(SSL_SESSION_set_time) \
    LFUNC_FA_(SSL_SESSION_get_timeout) \
    LFUNC_FA_(SSL_SESSION_set_timeout) \
    LFUNC_FA_(SSL_copy_session_id) \
    LFUNC_FA_(SSL_SESSION_new) \
    LFUNC_FA_(SSL_SESSION_print) \
    LFUNC_NULL \
    LFUNC_FA_(SSL_SESSION_free) \
    LFUNC_FA_(i2d_SSL_SESSION) \
    LFUNC_FA_(SSL_set_session) \
    LFUNC_FA_(SSL_CTX_add_session) \
    LFUNC_FA_(SSL_CTX_remove_session) \
    LFUNC_FA_(SSL_CTX_set_generate_session_id) \
    LFUNC_FA_(SSL_set_generate_session_id) \
    LFUNC_FA_(SSL_has_matching_session_id) \
    LFUNC_FA_(d2i_SSL_SESSION) \
    LFUNC_FA_(SSL_get_peer_certificate) \
    LFUNC_FA_(SSL_get_peer_cert_chain) \
    LFUNC_FA_(SSL_CTX_get_verify_mode) \
    LFUNC_FA_(SSL_CTX_get_verify_depth) \
    LFUNC_FA_(SSL_CTX_get_verify_callback) \
    LFUNC_FA_(SSL_CTX_set_verify) \
    LFUNC_FA_(SSL_CTX_set_verify_depth) \
    LFUNC_FA_(SSL_CTX_set_cert_verify_callback) \
    LFUNC_FA_(SSL_CTX_use_RSAPrivateKey) \
    LFUNC_FA_(SSL_CTX_use_RSAPrivateKey_ASN1) \
    LFUNC_FA_(SSL_CTX_use_PrivateKey) \
    LFUNC_FA_(SSL_CTX_use_PrivateKey_ASN1) \
    LFUNC_FA_(SSL_CTX_use_certificate) \
    LFUNC_FA_(SSL_CTX_use_certificate_ASN1) \
    LFUNC_FA_(SSL_CTX_set_default_passwd_cb) \
    LFUNC_FA_(SSL_CTX_set_default_passwd_cb_userdata) \
    LFUNC_FA_(SSL_CTX_check_private_key) \
    LFUNC_FA_(SSL_check_private_key) \
    LFUNC_FA_(SSL_CTX_set_session_id_context) \
    LFUNC_FA_(SSL_new) \
    LFUNC_FA_(SSL_set_session_id_context) \
    LFUNC_FA_(SSL_CTX_set_purpose) \
    LFUNC_FA_(SSL_set_purpose) \
    LFUNC_FA_(SSL_CTX_set_trust) \
    LFUNC_FA_(SSL_set_trust) \
    LFUNC_FA_(SSL_free) \
    LFUNC_FA_(SSL_accept) \
    LFUNC_FA_(SSL_connect) \
    LFUNC_FA_(SSL_read) \
    LFUNC_FA_(SSL_peek) \
    LFUNC_FA_(SSL_write) \
    LFUNC_FA_(SSL_ctrl) \
    LFUNC_FA_(SSL_callback_ctrl) \
    LFUNC_FA_(SSL_CTX_ctrl) \
    LFUNC_FA_(SSL_CTX_callback_ctrl) \
    LFUNC_FA_(SSL_get_error) \
    LFUNC_FA_(SSL_get_version) \
    LFUNC_FA_(SSL_CTX_set_ssl_version) \
    LFUNC_FA_(SSLv2_method) \
    LFUNC_FA_(SSLv2_server_method) \
    LFUNC_FA_(SSLv2_client_method) \
    LFUNC_FA_(SSLv3_method) \
    LFUNC_FA_(SSLv3_server_method) \
    LFUNC_FA_(SSLv3_client_method) \
    LFUNC_FA_(SSLv23_method) \
    LFUNC_FA_(SSLv23_server_method) \
    LFUNC_FA_(SSLv23_client_method) \
    LFUNC_FA_(TLSv1_method) \
    LFUNC_FA_(TLSv1_server_method) \
    LFUNC_FA_(TLSv1_client_method) \
    LFUNC_FA_(SSL_get_ciphers) \
    LFUNC_FA_(SSL_do_handshake) \
    LFUNC_FA_(SSL_renegotiate) \
    LFUNC_FA_(SSL_renegotiate_pending) \
    LFUNC_FA_(SSL_shutdown) \
    LFUNC_FA_(SSL_get_ssl_method) \
    LFUNC_FA_(SSL_set_ssl_method) \
    LFUNC_FA_(SSL_alert_type_string_long) \
    LFUNC_FA_(SSL_alert_type_string) \
    LFUNC_FA_(SSL_alert_desc_string_long) \
    LFUNC_FA_(SSL_alert_desc_string) \
    LFUNC_FA_(SSL_set_client_CA_list) \
    LFUNC_FA_(SSL_CTX_set_client_CA_list) \
    LFUNC_FA_(SSL_get_client_CA_list) \
    LFUNC_FA_(SSL_CTX_get_client_CA_list) \
    LFUNC_FA_(SSL_add_client_CA) \
    LFUNC_FA_(SSL_CTX_add_client_CA) \
    LFUNC_FA_(SSL_set_connect_state) \
    LFUNC_FA_(SSL_set_accept_state) \
    LFUNC_FA_(SSL_get_default_timeout) \
    LFUNC_FA_(SSL_library_init) \
    LFUNC_FA_(SSL_CIPHER_description) \
    LFUNC_FA_(SSL_dup_CA_list) \
    LFUNC_FA_(SSL_dup) \
    LFUNC_FA_(SSL_get_certificate) \
    LFUNC_FA_(SSL_get_privatekey) \
    LFUNC_FA_(SSL_CTX_set_quiet_shutdown) \
    LFUNC_FA_(SSL_CTX_get_quiet_shutdown) \
    LFUNC_FA_(SSL_set_quiet_shutdown) \
    LFUNC_FA_(SSL_get_quiet_shutdown) \
    LFUNC_FA_(SSL_set_shutdown) \
    LFUNC_FA_(SSL_get_shutdown) \
    LFUNC_FA_(SSL_version) \
    LFUNC_FA_(SSL_CTX_set_default_verify_paths) \
    LFUNC_FA_(SSL_CTX_load_verify_locations) \
    LFUNC_FA_(SSL_get_session) \
    LFUNC_FA_(SSL_get1_session) \
    LFUNC_FA_(SSL_get_SSL_CTX) \
    LFUNC_FA_(SSL_set_info_callback) \
    LFUNC_FA_(SSL_get_info_callback) \
    LFUNC_FA_(SSL_state) \
    LFUNC_FA_(SSL_set_verify_result) \
    LFUNC_FA_(SSL_get_verify_result) \
    LFUNC_FA_(SSL_set_ex_data) \
    LFUNC_FA_(SSL_get_ex_data) \
    LFUNC_FA_(SSL_get_ex_new_index) \
    LFUNC_FA_(SSL_SESSION_set_ex_data) \
    LFUNC_FA_(SSL_SESSION_get_ex_data) \
    LFUNC_FA_(SSL_SESSION_get_ex_new_index) \
    LFUNC_FA_(SSL_CTX_set_ex_data) \
    LFUNC_FA_(SSL_CTX_get_ex_data) \
    LFUNC_FA_(SSL_CTX_get_ex_new_index) \
    LFUNC_FA_(SSL_get_ex_data_X509_STORE_CTX_idx) \
    LFUNC_FA_(SSL_CTX_set_tmp_rsa_callback) \
    LFUNC_FA_(SSL_set_tmp_rsa_callback) \
    LFUNC_FA_(SSL_CTX_set_tmp_dh_callback) \
    LFUNC_FA_(SSL_set_tmp_dh_callback) \
    LFUNC_FA_(SSL_COMP_add_compression_method) \
    LFUNC_FA_(ERR_load_SSL_strings) \
    LFUNC_FA_(sk_num) \
    LFUNC_FA_(sk_value) \
    LFUNC_FA_(sk_set) \
    LFUNC_FA_(sk_new) \
    LFUNC_FA_(sk_new_null) \
    LFUNC_FA_(sk_free) \
    LFUNC_FA_(sk_pop_free) \
    LFUNC_FA_(sk_insert) \
    LFUNC_FA_(sk_delete) \
    LFUNC_FA_(sk_delete_ptr) \
    LFUNC_FA_(sk_find) \
    LFUNC_FA_(sk_push) \
    LFUNC_FA_(sk_unshift) \
    LFUNC_FA_(sk_shift) \
    LFUNC_FA_(sk_pop) \
    LFUNC_FA_(sk_zero) \
    LFUNC_FA_(sk_set_cmp_func) \
    LFUNC_FA_(sk_dup) \
    LFUNC_FA_(sk_sort) \
    LFUNC_FA_(FIPS_mode) \
    LFUNC_FA_(sk_is_sorted) \
    LFUNC_FA_(TXT_DB_read) \
    LFUNC_FA_(TXT_DB_write) \
    LFUNC_FA_(TXT_DB_create_index) \
    LFUNC_FA_(TXT_DB_free) \
    LFUNC_FA_(TXT_DB_get_by_index) \
    LFUNC_FA_(TXT_DB_insert) \
    LFUNC_FA_(UI_new) \
    LFUNC_FA_(UI_new_method) \
    LFUNC_FA_(UI_free) \
    LFUNC_FA_(UI_add_input_string) \
    LFUNC_FA_(UI_dup_input_string) \
    LFUNC_FA_(UI_add_verify_string) \
    LFUNC_FA_(UI_dup_verify_string) \
    LFUNC_FA_(UI_add_input_boolean) \
    LFUNC_FA_(UI_dup_input_boolean) \
    LFUNC_FA_(UI_add_info_string) \
    LFUNC_FA_(UI_dup_info_string) \
    LFUNC_FA_(UI_add_error_string) \
    LFUNC_FA_(UI_dup_error_string) \
    LFUNC_FA_(UI_construct_prompt) \
    LFUNC_FA_(UI_add_user_data) \
    LFUNC_FA_(UI_get0_user_data) \
    LFUNC_FA_(UI_get0_result) \
    LFUNC_FA_(UI_process) \
    LFUNC_FA_(UI_ctrl) \
    LFUNC_FA_(UI_get_ex_new_index) \
    LFUNC_FA_(UI_set_ex_data) \
    LFUNC_FA_(UI_get_ex_data) \
    LFUNC_FA_(UI_set_default_method) \
    LFUNC_FA_(UI_get_default_method) \
    LFUNC_FA_(UI_get_method) \
    LFUNC_FA_(UI_set_method) \
    LFUNC_FA_(UI_OpenSSL) \
    LFUNC_FA_(UI_create_method) \
    LFUNC_FA_(UI_destroy_method) \
    LFUNC_FA_(UI_method_set_opener) \
    LFUNC_FA_(UI_method_set_writer) \
    LFUNC_FA_(UI_method_set_flusher) \
    LFUNC_FA_(UI_method_set_reader) \
    LFUNC_FA_(UI_method_set_closer) \
    LFUNC_FA_(UI_method_get_opener) \
    LFUNC_FA_(UI_method_get_writer) \
    LFUNC_FA_(UI_method_get_flusher) \
    LFUNC_FA_(UI_method_get_reader) \
    LFUNC_FA_(UI_method_get_closer) \
    LFUNC_FA_(UI_get_string_type) \
    LFUNC_FA_(UI_get_input_flags) \
    LFUNC_FA_(UI_get0_output_string) \
    LFUNC_FA_(UI_get0_action_string) \
    LFUNC_FA_(UI_get0_result_string) \
    LFUNC_FA_(UI_get0_test_string) \
    LFUNC_FA_(UI_get_result_minsize) \
    LFUNC_FA_(UI_get_result_maxsize) \
    LFUNC_FA_(UI_set_result) \
    LFUNC_FA_(UI_UTIL_read_pw_string) \
    LFUNC_FA_(UI_UTIL_read_pw) \
    LFUNC_FA_(ERR_load_UI_strings) \
    LFUNC_FA_(_ossl_old_des_read_pw_string) \
    LFUNC_FA_(_ossl_old_des_read_pw) \
    LFUNC_FA_(X509_verify_cert_error_string) \
    LFUNC_FA_(X509_verify) \
    LFUNC_FA_(X509_REQ_verify) \
    LFUNC_FA_(X509_CRL_verify) \
    LFUNC_FA_(NETSCAPE_SPKI_verify) \
    LFUNC_FA_(NETSCAPE_SPKI_b64_decode) \
    LFUNC_FA_(NETSCAPE_SPKI_b64_encode) \
    LFUNC_FA_(NETSCAPE_SPKI_get_pubkey) \
    LFUNC_FA_(NETSCAPE_SPKI_set_pubkey) \
    LFUNC_FA_(NETSCAPE_SPKI_print) \
    LFUNC_FA_(X509_signature_print) \
    LFUNC_FA_(X509_sign) \
    LFUNC_FA_(X509_REQ_sign) \
    LFUNC_FA_(X509_CRL_sign) \
    LFUNC_FA_(NETSCAPE_SPKI_sign) \
    LFUNC_FA_(X509_pubkey_digest) \
    LFUNC_FA_(X509_digest) \
    LFUNC_FA_(X509_CRL_digest) \
    LFUNC_FA_(X509_REQ_digest) \
    LFUNC_FA_(X509_NAME_digest) \
    LFUNC_FA_(d2i_X509_bio) \
    LFUNC_FA_(i2d_X509_bio) \
    LFUNC_FA_(d2i_X509_CRL_bio) \
    LFUNC_FA_(i2d_X509_CRL_bio) \
    LFUNC_FA_(d2i_X509_REQ_bio) \
    LFUNC_FA_(i2d_X509_REQ_bio) \
    LFUNC_FA_(d2i_RSAPrivateKey_bio) \
    LFUNC_FA_(i2d_RSAPrivateKey_bio) \
    LFUNC_FA_(d2i_RSAPublicKey_bio) \
    LFUNC_FA_(i2d_RSAPublicKey_bio) \
    LFUNC_FA_(d2i_RSA_PUBKEY_bio) \
    LFUNC_FA_(i2d_RSA_PUBKEY_bio) \
    LFUNC_FA_(d2i_DSA_PUBKEY_bio) \
    LFUNC_FA_(i2d_DSA_PUBKEY_bio) \
    LFUNC_FA_(d2i_DSAPrivateKey_bio) \
    LFUNC_FA_(i2d_DSAPrivateKey_bio) \
    LFUNC_FA_(d2i_PKCS8_bio) \
    LFUNC_FA_(i2d_PKCS8_bio) \
    LFUNC_FA_(d2i_PKCS8_PRIV_KEY_INFO_bio) \
    LFUNC_FA_(i2d_PKCS8_PRIV_KEY_INFO_bio) \
    LFUNC_FA_(i2d_PKCS8PrivateKeyInfo_bio) \
    LFUNC_FA_(i2d_PrivateKey_bio) \
    LFUNC_FA_(d2i_PrivateKey_bio) \
    LFUNC_FA_(i2d_PUBKEY_bio) \
    LFUNC_FA_(d2i_PUBKEY_bio) \
    LFUNC_FA_(X509_dup) \
    LFUNC_FA_(X509_ATTRIBUTE_dup) \
    LFUNC_FA_(X509_EXTENSION_dup) \
    LFUNC_FA_(X509_CRL_dup) \
    LFUNC_FA_(X509_REQ_dup) \
    LFUNC_FA_(X509_ALGOR_dup) \
    LFUNC_FA_(X509_NAME_dup) \
    LFUNC_FA_(X509_NAME_ENTRY_dup) \
    LFUNC_FA_(X509_cmp_time) \
    LFUNC_FA_(X509_cmp_current_time) \
    LFUNC_FA_(X509_time_adj) \
    LFUNC_FA_(X509_gmtime_adj) \
    LFUNC_FA_(X509_get_default_cert_area) \
    LFUNC_FA_(X509_get_default_cert_dir) \
    LFUNC_FA_(X509_get_default_cert_file) \
    LFUNC_FA_(X509_get_default_cert_dir_env) \
    LFUNC_FA_(X509_get_default_cert_file_env) \
    LFUNC_FA_(X509_get_default_private_dir) \
    LFUNC_FA_(X509_to_X509_REQ) \
    LFUNC_FA_(X509_REQ_to_X509) \
    LFUNC_FA_(X509_ALGOR_new) \
    LFUNC_FA_(X509_ALGOR_free) \
    LFUNC_FA_(d2i_X509_ALGOR) \
    LFUNC_FA_(i2d_X509_ALGOR) \
    LFUNC_FA_(X509_ALGOR_it) \
    LFUNC_FA_(X509_VAL_new) \
    LFUNC_FA_(X509_VAL_free) \
    LFUNC_FA_(d2i_X509_VAL) \
    LFUNC_FA_(i2d_X509_VAL) \
    LFUNC_FA_(X509_VAL_it) \
    LFUNC_FA_(X509_PUBKEY_new) \
    LFUNC_FA_(X509_PUBKEY_free) \
    LFUNC_FA_(d2i_X509_PUBKEY) \
    LFUNC_FA_(i2d_X509_PUBKEY) \
    LFUNC_FA_(X509_PUBKEY_it) \
    LFUNC_FA_(X509_PUBKEY_set) \
    LFUNC_FA_(X509_PUBKEY_get) \
    LFUNC_FA_(X509_get_pubkey_parameters) \
    LFUNC_FA_(i2d_PUBKEY) \
    LFUNC_FA_(d2i_PUBKEY) \
    LFUNC_FA_(i2d_RSA_PUBKEY) \
    LFUNC_FA_(d2i_RSA_PUBKEY) \
    LFUNC_FA_(i2d_DSA_PUBKEY) \
    LFUNC_FA_(d2i_DSA_PUBKEY) \
    LFUNC_FA_(X509_SIG_new) \
    LFUNC_FA_(X509_SIG_free) \
    LFUNC_FA_(d2i_X509_SIG) \
    LFUNC_FA_(i2d_X509_SIG) \
    LFUNC_FA_(X509_SIG_it) \
    LFUNC_FA_(X509_REQ_INFO_new) \
    LFUNC_FA_(X509_REQ_INFO_free) \
    LFUNC_FA_(d2i_X509_REQ_INFO) \
    LFUNC_FA_(i2d_X509_REQ_INFO) \
    LFUNC_FA_(X509_REQ_INFO_it) \
    LFUNC_FA_(X509_REQ_new) \
    LFUNC_FA_(X509_REQ_free) \
    LFUNC_FA_(d2i_X509_REQ) \
    LFUNC_FA_(i2d_X509_REQ) \
    LFUNC_FA_(X509_REQ_it) \
    LFUNC_FA_(X509_ATTRIBUTE_new) \
    LFUNC_FA_(X509_ATTRIBUTE_free) \
    LFUNC_FA_(d2i_X509_ATTRIBUTE) \
    LFUNC_FA_(i2d_X509_ATTRIBUTE) \
    LFUNC_FA_(X509_ATTRIBUTE_it) \
    LFUNC_FA_(X509_ATTRIBUTE_create) \
    LFUNC_FA_(X509_EXTENSION_new) \
    LFUNC_FA_(X509_EXTENSION_free) \
    LFUNC_FA_(d2i_X509_EXTENSION) \
    LFUNC_FA_(i2d_X509_EXTENSION) \
    LFUNC_FA_(X509_EXTENSION_it) \
    LFUNC_FA_(X509_NAME_ENTRY_new) \
    LFUNC_FA_(X509_NAME_ENTRY_free) \
    LFUNC_FA_(d2i_X509_NAME_ENTRY) \
    LFUNC_FA_(i2d_X509_NAME_ENTRY) \
    LFUNC_FA_(X509_NAME_ENTRY_it) \
    LFUNC_FA_(X509_NAME_new) \
    LFUNC_FA_(X509_NAME_free) \
    LFUNC_FA_(d2i_X509_NAME) \
    LFUNC_FA_(i2d_X509_NAME) \
    LFUNC_FA_(X509_NAME_it) \
    LFUNC_FA_(X509_NAME_set) \
    LFUNC_FA_(X509_CINF_new) \
    LFUNC_FA_(X509_CINF_free) \
    LFUNC_FA_(d2i_X509_CINF) \
    LFUNC_FA_(i2d_X509_CINF) \
    LFUNC_FA_(X509_CINF_it) \
    LFUNC_FA_(X509_new) \
    LFUNC_FA_(X509_free) \
    LFUNC_FA_(d2i_X509) \
    LFUNC_FA_(i2d_X509) \
    LFUNC_FA_(X509_it) \
    LFUNC_FA_(X509_CERT_AUX_new) \
    LFUNC_FA_(X509_CERT_AUX_free) \
    LFUNC_FA_(d2i_X509_CERT_AUX) \
    LFUNC_FA_(i2d_X509_CERT_AUX) \
    LFUNC_FA_(X509_CERT_AUX_it) \
    LFUNC_FA_(X509_get_ex_new_index) \
    LFUNC_FA_(X509_set_ex_data) \
    LFUNC_FA_(X509_get_ex_data) \
    LFUNC_FA_(i2d_X509_AUX) \
    LFUNC_FA_(d2i_X509_AUX) \
    LFUNC_FA_(X509_alias_set1) \
    LFUNC_FA_(X509_keyid_set1) \
    LFUNC_FA_(X509_alias_get0) \
    LFUNC_FA_(X509_TRUST_set_default) \
    LFUNC_FA_(X509_TRUST_set) \
    LFUNC_FA_(X509_add1_trust_object) \
    LFUNC_FA_(X509_add1_reject_object) \
    LFUNC_FA_(X509_trust_clear) \
    LFUNC_FA_(X509_reject_clear) \
    LFUNC_FA_(X509_REVOKED_new) \
    LFUNC_FA_(X509_REVOKED_free) \
    LFUNC_FA_(d2i_X509_REVOKED) \
    LFUNC_FA_(i2d_X509_REVOKED) \
    LFUNC_FA_(X509_REVOKED_it) \
    LFUNC_FA_(X509_CRL_INFO_new) \
    LFUNC_FA_(X509_CRL_INFO_free) \
    LFUNC_FA_(d2i_X509_CRL_INFO) \
    LFUNC_FA_(i2d_X509_CRL_INFO) \
    LFUNC_FA_(X509_CRL_INFO_it) \
    LFUNC_FA_(X509_CRL_new) \
    LFUNC_FA_(X509_CRL_free) \
    LFUNC_FA_(d2i_X509_CRL) \
    LFUNC_FA_(i2d_X509_CRL) \
    LFUNC_FA_(X509_CRL_it) \
    LFUNC_FA_(X509_CRL_add0_revoked) \
    LFUNC_FA_(X509_PKEY_new) \
    LFUNC_FA_(X509_PKEY_free) \
    LFUNC_FA_(i2d_X509_PKEY) \
    LFUNC_FA_(d2i_X509_PKEY) \
    LFUNC_FA_(NETSCAPE_SPKI_new) \
    LFUNC_FA_(NETSCAPE_SPKI_free) \
    LFUNC_FA_(d2i_NETSCAPE_SPKI) \
    LFUNC_FA_(i2d_NETSCAPE_SPKI) \
    LFUNC_FA_(NETSCAPE_SPKI_it) \
    LFUNC_FA_(NETSCAPE_SPKAC_new) \
    LFUNC_FA_(NETSCAPE_SPKAC_free) \
    LFUNC_FA_(d2i_NETSCAPE_SPKAC) \
    LFUNC_FA_(i2d_NETSCAPE_SPKAC) \
    LFUNC_FA_(NETSCAPE_SPKAC_it) \
    LFUNC_FA_(NETSCAPE_CERT_SEQUENCE_new) \
    LFUNC_FA_(NETSCAPE_CERT_SEQUENCE_free) \
    LFUNC_FA_(d2i_NETSCAPE_CERT_SEQUENCE) \
    LFUNC_FA_(i2d_NETSCAPE_CERT_SEQUENCE) \
    LFUNC_FA_(NETSCAPE_CERT_SEQUENCE_it) \
    LFUNC_FA_(X509_INFO_new) \
    LFUNC_FA_(X509_INFO_free) \
    LFUNC_FA_(X509_NAME_oneline) \
    LFUNC_FA_(ASN1_verify) \
    LFUNC_FA_(ASN1_digest) \
    LFUNC_FA_(ASN1_sign) \
    LFUNC_FA_(ASN1_item_digest) \
    LFUNC_FA_(ASN1_item_verify) \
    LFUNC_FA_(ASN1_item_sign) \
    LFUNC_FA_(X509_set_version) \
    LFUNC_FA_(X509_set_serialNumber) \
    LFUNC_FA_(X509_get_serialNumber) \
    LFUNC_FA_(X509_set_issuer_name) \
    LFUNC_FA_(X509_get_issuer_name) \
    LFUNC_FA_(X509_set_subject_name) \
    LFUNC_FA_(X509_get_subject_name) \
    LFUNC_FA_(X509_set_notBefore) \
    LFUNC_FA_(X509_set_notAfter) \
    LFUNC_FA_(X509_set_pubkey) \
    LFUNC_FA_(X509_get_pubkey) \
    LFUNC_FA_(X509_get0_pubkey_bitstr) \
    LFUNC_FA_(X509_certificate_type) \
    LFUNC_FA_(X509_REQ_set_version) \
    LFUNC_FA_(X509_REQ_set_subject_name) \
    LFUNC_FA_(X509_REQ_set_pubkey) \
    LFUNC_FA_(X509_REQ_get_pubkey) \
    LFUNC_FA_(X509_REQ_extension_nid) \
    LFUNC_FA_(X509_REQ_get_extension_nids) \
    LFUNC_FA_(X509_REQ_set_extension_nids) \
    LFUNC_FA_(X509_REQ_get_extensions) \
    LFUNC_FA_(X509_REQ_add_extensions_nid) \
    LFUNC_FA_(X509_REQ_add_extensions) \
    LFUNC_FA_(X509_REQ_get_attr_count) \
    LFUNC_FA_(X509_REQ_get_attr_by_NID) \
    LFUNC_FA_(X509_REQ_get_attr_by_OBJ) \
    LFUNC_FA_(X509_REQ_get_attr) \
    LFUNC_FA_(X509_REQ_delete_attr) \
    LFUNC_FA_(X509_REQ_add1_attr) \
    LFUNC_FA_(X509_REQ_add1_attr_by_OBJ) \
    LFUNC_FA_(X509_REQ_add1_attr_by_NID) \
    LFUNC_FA_(X509_REQ_add1_attr_by_txt) \
    LFUNC_FA_(X509_CRL_set_version) \
    LFUNC_FA_(X509_CRL_set_issuer_name) \
    LFUNC_FA_(X509_CRL_set_lastUpdate) \
    LFUNC_FA_(X509_CRL_set_nextUpdate) \
    LFUNC_FA_(X509_CRL_sort) \
    LFUNC_FA_(X509_REVOKED_set_serialNumber) \
    LFUNC_FA_(X509_REVOKED_set_revocationDate) \
    LFUNC_FA_(X509_check_private_key) \
    LFUNC_FA_(X509_issuer_and_serial_cmp) \
    LFUNC_FA_(X509_issuer_and_serial_hash) \
    LFUNC_FA_(X509_issuer_name_cmp) \
    LFUNC_FA_(X509_issuer_name_hash) \
    LFUNC_FA_(X509_subject_name_cmp) \
    LFUNC_FA_(X509_subject_name_hash) \
    LFUNC_FA_(X509_cmp) \
    LFUNC_FA_(X509_NAME_cmp) \
    LFUNC_FA_(X509_NAME_hash) \
    LFUNC_FA_(X509_CRL_cmp) \
    LFUNC_FA_(X509_NAME_print) \
    LFUNC_FA_(X509_NAME_print_ex) \
    LFUNC_FA_(X509_print_ex) \
    LFUNC_FA_(X509_print) \
    LFUNC_FA_(X509_ocspid_print) \
    LFUNC_FA_(X509_CERT_AUX_print) \
    LFUNC_FA_(X509_CRL_print) \
    LFUNC_FA_(X509_REQ_print_ex) \
    LFUNC_FA_(X509_REQ_print) \
    LFUNC_FA_(X509_NAME_entry_count) \
    LFUNC_FA_(X509_NAME_get_text_by_NID) \
    LFUNC_FA_(X509_NAME_get_text_by_OBJ) \
    LFUNC_FA_(X509_NAME_get_index_by_NID) \
    LFUNC_FA_(X509_NAME_get_index_by_OBJ) \
    LFUNC_FA_(X509_NAME_get_entry) \
    LFUNC_FA_(X509_NAME_delete_entry) \
    LFUNC_FA_(X509_NAME_add_entry) \
    LFUNC_FA_(X509_NAME_add_entry_by_OBJ) \
    LFUNC_FA_(X509_NAME_add_entry_by_NID) \
    LFUNC_FA_(X509_NAME_ENTRY_create_by_txt) \
    LFUNC_FA_(X509_NAME_ENTRY_create_by_NID) \
    LFUNC_FA_(X509_NAME_add_entry_by_txt) \
    LFUNC_FA_(X509_NAME_ENTRY_create_by_OBJ) \
    LFUNC_FA_(X509_NAME_ENTRY_set_object) \
    LFUNC_FA_(X509_NAME_ENTRY_set_data) \
    LFUNC_FA_(X509_NAME_ENTRY_get_object) \
    LFUNC_FA_(X509_NAME_ENTRY_get_data) \
    LFUNC_FA_(X509v3_get_ext_count) \
    LFUNC_FA_(X509v3_get_ext_by_NID) \
    LFUNC_FA_(X509v3_get_ext_by_OBJ) \
    LFUNC_FA_(X509v3_get_ext_by_critical) \
    LFUNC_FA_(X509v3_get_ext) \
    LFUNC_FA_(X509v3_delete_ext) \
    LFUNC_FA_(X509v3_add_ext) \
    LFUNC_FA_(X509_get_ext_count) \
    LFUNC_FA_(X509_get_ext_by_NID) \
    LFUNC_FA_(X509_get_ext_by_OBJ) \
    LFUNC_FA_(X509_get_ext_by_critical) \
    LFUNC_FA_(X509_get_ext) \
    LFUNC_FA_(X509_delete_ext) \
    LFUNC_FA_(X509_add_ext) \
    LFUNC_FA_(X509_get_ext_d2i) \
    LFUNC_FA_(X509_add1_ext_i2d) \
    LFUNC_FA_(X509_CRL_get_ext_count) \
    LFUNC_FA_(X509_CRL_get_ext_by_NID) \
    LFUNC_FA_(X509_CRL_get_ext_by_OBJ) \
    LFUNC_FA_(X509_CRL_get_ext_by_critical) \
    LFUNC_FA_(X509_CRL_get_ext) \
    LFUNC_FA_(X509_CRL_delete_ext) \
    LFUNC_FA_(X509_CRL_add_ext) \
    LFUNC_FA_(X509_CRL_get_ext_d2i) \
    LFUNC_FA_(X509_CRL_add1_ext_i2d) \
    LFUNC_FA_(X509_REVOKED_get_ext_count) \
    LFUNC_FA_(X509_REVOKED_get_ext_by_NID) \
    LFUNC_FA_(X509_REVOKED_get_ext_by_OBJ) \
    LFUNC_FA_(X509_REVOKED_get_ext_by_critical) \
    LFUNC_FA_(X509_REVOKED_get_ext) \
    LFUNC_FA_(X509_REVOKED_delete_ext) \
    LFUNC_FA_(X509_REVOKED_add_ext) \
    LFUNC_FA_(X509_REVOKED_get_ext_d2i) \
    LFUNC_FA_(X509_REVOKED_add1_ext_i2d) \
    LFUNC_FA_(X509_EXTENSION_create_by_NID) \
    LFUNC_FA_(X509_EXTENSION_create_by_OBJ) \
    LFUNC_FA_(X509_EXTENSION_set_object) \
    LFUNC_FA_(X509_EXTENSION_set_critical) \
    LFUNC_FA_(X509_EXTENSION_set_data) \
    LFUNC_FA_(X509_EXTENSION_get_object) \
    LFUNC_FA_(X509_EXTENSION_get_data) \
    LFUNC_FA_(X509_EXTENSION_get_critical) \
    LFUNC_FA_(X509at_get_attr_count) \
    LFUNC_FA_(X509at_get_attr_by_NID) \
    LFUNC_FA_(X509at_get_attr_by_OBJ) \
    LFUNC_FA_(X509at_get_attr) \
    LFUNC_FA_(X509at_delete_attr) \
    LFUNC_FA_(X509at_add1_attr) \
    LFUNC_FA_(X509at_add1_attr_by_OBJ) \
    LFUNC_FA_(X509at_add1_attr_by_NID) \
    LFUNC_FA_(X509at_add1_attr_by_txt) \
    LFUNC_FA_(X509_ATTRIBUTE_create_by_NID) \
    LFUNC_FA_(X509_ATTRIBUTE_create_by_OBJ) \
    LFUNC_FA_(X509_ATTRIBUTE_create_by_txt) \
    LFUNC_FA_(X509_ATTRIBUTE_set1_object) \
    LFUNC_FA_(X509_ATTRIBUTE_set1_data) \
    LFUNC_FA_(X509_ATTRIBUTE_get0_data) \
    LFUNC_FA_(X509_ATTRIBUTE_count) \
    LFUNC_FA_(X509_ATTRIBUTE_get0_object) \
    LFUNC_FA_(X509_ATTRIBUTE_get0_type) \
    LFUNC_FA_(X509_verify_cert) \
    LFUNC_FA_(X509_find_by_issuer_and_serial) \
    LFUNC_FA_(X509_find_by_subject) \
    LFUNC_FA_(PBEPARAM_new) \
    LFUNC_FA_(PBEPARAM_free) \
    LFUNC_FA_(d2i_PBEPARAM) \
    LFUNC_FA_(i2d_PBEPARAM) \
    LFUNC_FA_(PBEPARAM_it) \
    LFUNC_FA_(PBE2PARAM_new) \
    LFUNC_FA_(PBE2PARAM_free) \
    LFUNC_FA_(d2i_PBE2PARAM) \
    LFUNC_FA_(i2d_PBE2PARAM) \
    LFUNC_FA_(PBE2PARAM_it) \
    LFUNC_FA_(PBKDF2PARAM_new) \
    LFUNC_FA_(PBKDF2PARAM_free) \
    LFUNC_FA_(d2i_PBKDF2PARAM) \
    LFUNC_FA_(i2d_PBKDF2PARAM) \
    LFUNC_FA_(PBKDF2PARAM_it) \
    LFUNC_FA_(PKCS5_pbe_set) \
    LFUNC_FA_(PKCS5_pbe2_set) \
    LFUNC_FA_(PKCS8_PRIV_KEY_INFO_new) \
    LFUNC_FA_(PKCS8_PRIV_KEY_INFO_free) \
    LFUNC_FA_(d2i_PKCS8_PRIV_KEY_INFO) \
    LFUNC_FA_(i2d_PKCS8_PRIV_KEY_INFO) \
    LFUNC_FA_(PKCS8_PRIV_KEY_INFO_it) \
    LFUNC_FA_(EVP_PKCS82PKEY) \
    LFUNC_FA_(EVP_PKEY2PKCS8) \
    LFUNC_FA_(EVP_PKEY2PKCS8_broken) \
    LFUNC_FA_(PKCS8_set_broken) \
    LFUNC_FA_(X509_check_trust) \
    LFUNC_FA_(X509_TRUST_get_count) \
    LFUNC_FA_(X509_TRUST_get0) \
    LFUNC_FA_(X509_TRUST_get_by_id) \
    LFUNC_FA_(X509_TRUST_add) \
    LFUNC_FA_(X509_TRUST_cleanup) \
    LFUNC_FA_(X509_TRUST_get_flags) \
    LFUNC_FA_(X509_TRUST_get0_name) \
    LFUNC_FA_(X509_TRUST_get_trust) \
    LFUNC_FA_(ERR_load_X509_strings) \
    LFUNC_FA_(X509_OBJECT_idx_by_subject) \
    LFUNC_FA_(X509_OBJECT_retrieve_by_subject) \
    LFUNC_FA_(X509_OBJECT_retrieve_match) \
    LFUNC_FA_(X509_OBJECT_up_ref_count) \
    LFUNC_FA_(X509_OBJECT_free_contents) \
    LFUNC_FA_(X509_STORE_new) \
    LFUNC_FA_(X509_STORE_free) \
    LFUNC_FA_(X509_STORE_set_flags) \
    LFUNC_FA_(X509_STORE_set_purpose) \
    LFUNC_FA_(X509_STORE_set_trust) \
    LFUNC_FA_(X509_STORE_CTX_new) \
    LFUNC_FA_(X509_STORE_CTX_get1_issuer) \
    LFUNC_FA_(X509_STORE_CTX_free) \
    LFUNC_FA_(X509_STORE_CTX_init) \
    LFUNC_FA_(X509_STORE_CTX_trusted_stack) \
    LFUNC_FA_(X509_STORE_CTX_cleanup) \
    LFUNC_FA_(X509_STORE_add_lookup) \
    LFUNC_FA_(X509_LOOKUP_hash_dir) \
    LFUNC_FA_(X509_LOOKUP_file) \
    LFUNC_FA_(X509_STORE_add_cert) \
    LFUNC_FA_(X509_STORE_add_crl) \
    LFUNC_FA_(X509_STORE_get_by_subject) \
    LFUNC_FA_(X509_LOOKUP_ctrl) \
    LFUNC_FA_(X509_load_cert_file) \
    LFUNC_FA_(X509_load_crl_file) \
    LFUNC_FA_(X509_load_cert_crl_file) \
    LFUNC_FA_(X509_LOOKUP_new) \
    LFUNC_FA_(X509_LOOKUP_free) \
    LFUNC_FA_(X509_LOOKUP_init) \
    LFUNC_FA_(X509_LOOKUP_by_subject) \
    LFUNC_FA_(X509_LOOKUP_by_issuer_serial) \
    LFUNC_FA_(X509_LOOKUP_by_fingerprint) \
    LFUNC_FA_(X509_LOOKUP_by_alias) \
    LFUNC_FA_(X509_LOOKUP_shutdown) \
    LFUNC_FA_(X509_STORE_load_locations) \
    LFUNC_FA_(X509_STORE_set_default_paths) \
    LFUNC_FA_(X509_STORE_CTX_get_ex_new_index) \
    LFUNC_FA_(X509_STORE_CTX_set_ex_data) \
    LFUNC_FA_(X509_STORE_CTX_get_ex_data) \
    LFUNC_FA_(X509_STORE_CTX_get_error) \
    LFUNC_FA_(X509_STORE_CTX_set_error) \
    LFUNC_FA_(X509_STORE_CTX_get_error_depth) \
    LFUNC_FA_(X509_STORE_CTX_get_current_cert) \
    LFUNC_FA_(X509_STORE_CTX_get_chain) \
    LFUNC_FA_(X509_STORE_CTX_get1_chain) \
    LFUNC_FA_(X509_STORE_CTX_set_cert) \
    LFUNC_FA_(X509_STORE_CTX_set_chain) \
    LFUNC_FA_(X509_STORE_CTX_set_purpose) \
    LFUNC_FA_(X509_STORE_CTX_set_trust) \
    LFUNC_FA_(X509_STORE_CTX_purpose_inherit) \
    LFUNC_FA_(X509_STORE_CTX_set_flags) \
    LFUNC_FA_(X509_STORE_CTX_set_time) \
    LFUNC_FA_(X509_STORE_CTX_set_verify_cb) \
    LFUNC_FA_(BASIC_CONSTRAINTS_new) \
    LFUNC_FA_(BASIC_CONSTRAINTS_free) \
    LFUNC_FA_(d2i_BASIC_CONSTRAINTS) \
    LFUNC_FA_(i2d_BASIC_CONSTRAINTS) \
    LFUNC_FA_(BASIC_CONSTRAINTS_it) \
    LFUNC_FA_(SXNET_new) \
    LFUNC_FA_(SXNET_free) \
    LFUNC_FA_(d2i_SXNET) \
    LFUNC_FA_(i2d_SXNET) \
    LFUNC_FA_(SXNET_it) \
    LFUNC_FA_(SXNETID_new) \
    LFUNC_FA_(SXNETID_free) \
    LFUNC_FA_(d2i_SXNETID) \
    LFUNC_FA_(i2d_SXNETID) \
    LFUNC_FA_(SXNETID_it) \
    LFUNC_FA_(SXNET_add_id_asc) \
    LFUNC_FA_(SXNET_add_id_ulong) \
    LFUNC_FA_(SXNET_add_id_INTEGER) \
    LFUNC_FA_(SXNET_get_id_asc) \
    LFUNC_FA_(SXNET_get_id_ulong) \
    LFUNC_FA_(SXNET_get_id_INTEGER) \
    LFUNC_FA_(AUTHORITY_KEYID_new) \
    LFUNC_FA_(AUTHORITY_KEYID_free) \
    LFUNC_FA_(d2i_AUTHORITY_KEYID) \
    LFUNC_FA_(i2d_AUTHORITY_KEYID) \
    LFUNC_FA_(AUTHORITY_KEYID_it) \
    LFUNC_FA_(PKEY_USAGE_PERIOD_new) \
    LFUNC_FA_(PKEY_USAGE_PERIOD_free) \
    LFUNC_FA_(d2i_PKEY_USAGE_PERIOD) \
    LFUNC_FA_(i2d_PKEY_USAGE_PERIOD) \
    LFUNC_FA_(PKEY_USAGE_PERIOD_it) \
    LFUNC_FA_(GENERAL_NAME_new) \
    LFUNC_FA_(GENERAL_NAME_free) \
    LFUNC_FA_(d2i_GENERAL_NAME) \
    LFUNC_FA_(i2d_GENERAL_NAME) \
    LFUNC_FA_(GENERAL_NAME_it) \
    LFUNC_FA_(i2v_GENERAL_NAME) \
    LFUNC_FA_(GENERAL_NAME_print) \
    LFUNC_FA_(GENERAL_NAMES_new) \
    LFUNC_FA_(GENERAL_NAMES_free) \
    LFUNC_FA_(d2i_GENERAL_NAMES) \
    LFUNC_FA_(i2d_GENERAL_NAMES) \
    LFUNC_FA_(GENERAL_NAMES_it) \
    LFUNC_FA_(i2v_GENERAL_NAMES) \
    LFUNC_FA_(v2i_GENERAL_NAMES) \
    LFUNC_FA_(OTHERNAME_new) \
    LFUNC_FA_(OTHERNAME_free) \
    LFUNC_FA_(d2i_OTHERNAME) \
    LFUNC_FA_(i2d_OTHERNAME) \
    LFUNC_FA_(OTHERNAME_it) \
    LFUNC_FA_(EDIPARTYNAME_new) \
    LFUNC_FA_(EDIPARTYNAME_free) \
    LFUNC_FA_(d2i_EDIPARTYNAME) \
    LFUNC_FA_(i2d_EDIPARTYNAME) \
    LFUNC_FA_(EDIPARTYNAME_it) \
    LFUNC_FA_(i2s_ASN1_OCTET_STRING) \
    LFUNC_FA_(s2i_ASN1_OCTET_STRING) \
    LFUNC_FA_(EXTENDED_KEY_USAGE_new) \
    LFUNC_FA_(EXTENDED_KEY_USAGE_free) \
    LFUNC_FA_(d2i_EXTENDED_KEY_USAGE) \
    LFUNC_FA_(i2d_EXTENDED_KEY_USAGE) \
    LFUNC_FA_(EXTENDED_KEY_USAGE_it) \
    LFUNC_FA_(i2a_ACCESS_DESCRIPTION) \
    LFUNC_FA_(CERTIFICATEPOLICIES_new) \
    LFUNC_FA_(CERTIFICATEPOLICIES_free) \
    LFUNC_FA_(d2i_CERTIFICATEPOLICIES) \
    LFUNC_FA_(i2d_CERTIFICATEPOLICIES) \
    LFUNC_FA_(CERTIFICATEPOLICIES_it) \
    LFUNC_FA_(POLICYINFO_new) \
    LFUNC_FA_(POLICYINFO_free) \
    LFUNC_FA_(d2i_POLICYINFO) \
    LFUNC_FA_(i2d_POLICYINFO) \
    LFUNC_FA_(POLICYINFO_it) \
    LFUNC_FA_(POLICYQUALINFO_new) \
    LFUNC_FA_(POLICYQUALINFO_free) \
    LFUNC_FA_(d2i_POLICYQUALINFO) \
    LFUNC_FA_(i2d_POLICYQUALINFO) \
    LFUNC_FA_(POLICYQUALINFO_it) \
    LFUNC_FA_(USERNOTICE_new) \
    LFUNC_FA_(USERNOTICE_free) \
    LFUNC_FA_(d2i_USERNOTICE) \
    LFUNC_FA_(i2d_USERNOTICE) \
    LFUNC_FA_(USERNOTICE_it) \
    LFUNC_FA_(NOTICEREF_new) \
    LFUNC_FA_(NOTICEREF_free) \
    LFUNC_FA_(d2i_NOTICEREF) \
    LFUNC_FA_(i2d_NOTICEREF) \
    LFUNC_FA_(NOTICEREF_it) \
    LFUNC_FA_(CRL_DIST_POINTS_new) \
    LFUNC_FA_(CRL_DIST_POINTS_free) \
    LFUNC_FA_(d2i_CRL_DIST_POINTS) \
    LFUNC_FA_(i2d_CRL_DIST_POINTS) \
    LFUNC_FA_(CRL_DIST_POINTS_it) \
    LFUNC_FA_(DIST_POINT_new) \
    LFUNC_FA_(DIST_POINT_free) \
    LFUNC_FA_(d2i_DIST_POINT) \
    LFUNC_FA_(i2d_DIST_POINT) \
    LFUNC_FA_(DIST_POINT_it) \
    LFUNC_FA_(DIST_POINT_NAME_new) \
    LFUNC_FA_(DIST_POINT_NAME_free) \
    LFUNC_FA_(d2i_DIST_POINT_NAME) \
    LFUNC_FA_(i2d_DIST_POINT_NAME) \
    LFUNC_FA_(DIST_POINT_NAME_it) \
    LFUNC_FA_(ACCESS_DESCRIPTION_new) \
    LFUNC_FA_(ACCESS_DESCRIPTION_free) \
    LFUNC_FA_(d2i_ACCESS_DESCRIPTION) \
    LFUNC_FA_(i2d_ACCESS_DESCRIPTION) \
    LFUNC_FA_(ACCESS_DESCRIPTION_it) \
    LFUNC_FA_(AUTHORITY_INFO_ACCESS_new) \
    LFUNC_FA_(AUTHORITY_INFO_ACCESS_free) \
    LFUNC_FA_(d2i_AUTHORITY_INFO_ACCESS) \
    LFUNC_FA_(i2d_AUTHORITY_INFO_ACCESS) \
    LFUNC_FA_(AUTHORITY_INFO_ACCESS_it) \
    LFUNC_FA_(v2i_GENERAL_NAME) \
    LFUNC_FA_(X509V3_conf_free) \
    LFUNC_FA_(X509V3_EXT_nconf_nid) \
    LFUNC_FA_(X509V3_EXT_nconf) \
    LFUNC_FA_(X509V3_EXT_add_nconf_sk) \
    LFUNC_FA_(X509V3_EXT_add_nconf) \
    LFUNC_FA_(X509V3_EXT_REQ_add_nconf) \
    LFUNC_FA_(X509V3_EXT_CRL_add_nconf) \
    LFUNC_FA_(X509V3_EXT_conf_nid) \
    LFUNC_FA_(X509V3_EXT_conf) \
    LFUNC_FA_(X509V3_EXT_add_conf) \
    LFUNC_FA_(X509V3_EXT_REQ_add_conf) \
    LFUNC_FA_(X509V3_EXT_CRL_add_conf) \
    LFUNC_FA_(X509V3_add_value_bool_nf) \
    LFUNC_FA_(X509V3_get_value_bool) \
    LFUNC_FA_(X509V3_get_value_int) \
    LFUNC_FA_(X509V3_set_nconf) \
    LFUNC_FA_(X509V3_set_conf_lhash) \
    LFUNC_FA_(X509V3_get_string) \
    LFUNC_FA_(X509V3_get_section) \
    LFUNC_FA_(X509V3_string_free) \
    LFUNC_FA_(X509V3_section_free) \
    LFUNC_FA_(X509V3_set_ctx) \
    LFUNC_FA_(X509V3_add_value) \
    LFUNC_FA_(X509V3_add_value_uchar) \
    LFUNC_FA_(X509V3_add_value_bool) \
    LFUNC_FA_(X509V3_add_value_int) \
    LFUNC_FA_(i2s_ASN1_INTEGER) \
    LFUNC_FA_(s2i_ASN1_INTEGER) \
    LFUNC_FA_(i2s_ASN1_ENUMERATED) \
    LFUNC_FA_(i2s_ASN1_ENUMERATED_TABLE) \
    LFUNC_FA_(X509V3_EXT_add) \
    LFUNC_FA_(X509V3_EXT_add_list) \
    LFUNC_FA_(X509V3_EXT_add_alias) \
    LFUNC_FA_(X509V3_EXT_cleanup) \
    LFUNC_FA_(X509V3_EXT_get) \
    LFUNC_FA_(X509V3_EXT_get_nid) \
    LFUNC_FA_(X509V3_add_standard_extensions) \
    LFUNC_FA_(X509V3_parse_list) \
    LFUNC_FA_(X509V3_EXT_d2i) \
    LFUNC_FA_(X509V3_get_d2i) \
    LFUNC_FA_(X509V3_EXT_i2d) \
    LFUNC_FA_(X509V3_add1_i2d) \
    LFUNC_FA_(hex_to_string) \
    LFUNC_FA_(string_to_hex) \
    LFUNC_FA_(name_cmp) \
    LFUNC_FA_(X509V3_EXT_val_prn) \
    LFUNC_FA_(X509V3_EXT_print) \
    LFUNC_FA_(X509V3_extensions_print) \
    LFUNC_FA_(X509_check_purpose) \
    LFUNC_FA_(X509_supported_extension) \
    LFUNC_FA_(X509_PURPOSE_set) \
    LFUNC_FA_(X509_check_issued) \
    LFUNC_FA_(X509_PURPOSE_get_count) \
    LFUNC_FA_(X509_PURPOSE_get0) \
    LFUNC_FA_(X509_PURPOSE_get_by_sname) \
    LFUNC_FA_(X509_PURPOSE_get_by_id) \
    LFUNC_FA_(X509_PURPOSE_add) \
    LFUNC_FA_(X509_PURPOSE_get0_name) \
    LFUNC_FA_(X509_PURPOSE_get0_sname) \
    LFUNC_FA_(X509_PURPOSE_get_trust) \
    LFUNC_FA_(X509_PURPOSE_cleanup) \
    LFUNC_FA_(X509_PURPOSE_get_id) \
    LFUNC_FA_(X509_get1_email) \
    LFUNC_FA_(X509_REQ_get1_email) \
    LFUNC_FA_(X509_email_free) \
    LFUNC_FA_(ERR_load_X509V3_strings) \
    LFUNC_FA_(AES_options) \
    LFUNC_FA_(AES_set_encrypt_key) \
    LFUNC_FA_(AES_set_decrypt_key) \
    LFUNC_FA_(AES_encrypt) \
    LFUNC_FA_(AES_decrypt) \
    LFUNC_FA_(AES_ecb_encrypt) \
    LFUNC_FA_(AES_cbc_encrypt) \
    LFUNC_FA_(AES_cfb128_encrypt) \
    LFUNC_FA_(AES_cfb1_encrypt) \
    LFUNC_FA_(AES_cfb8_encrypt) \
    LFUNC_FA_(AES_ofb128_encrypt) \
    LFUNC_FA_(AES_ctr128_encrypt) \
    LFUNC_FA_(BF_set_key) \
    LFUNC_FA_(BF_encrypt) \
    LFUNC_FA_(BF_decrypt) \
    LFUNC_FA_(BF_ecb_encrypt) \
    LFUNC_FA_(BF_cbc_encrypt) \
    LFUNC_FA_(BF_cfb64_encrypt) \
    LFUNC_FA_(BF_ofb64_encrypt) \
    LFUNC_FA_(BF_options) \
    LFUNC_FA_(CAST_set_key) \
    LFUNC_FA_(CAST_ecb_encrypt) \
    LFUNC_FA_(CAST_encrypt) \
    LFUNC_FA_(CAST_decrypt) \
    LFUNC_FA_(CAST_cbc_encrypt) \
    LFUNC_FA_(CAST_cfb64_encrypt) \
    LFUNC_FA_(CAST_ofb64_encrypt) \
    LFUNC_FA_(DES_ecb3_encrypt) \
    LFUNC_FA_(DES_cbc_cksum) \
    LFUNC_FA_(DES_cbc_encrypt) \
    LFUNC_FA_(DES_ncbc_encrypt) \
    LFUNC_FA_(DES_xcbc_encrypt) \
    LFUNC_FA_(DES_cfb_encrypt) \
    LFUNC_FA_(DES_ecb_encrypt) \
    LFUNC_FA_(DES_encrypt1) \
    LFUNC_FA_(DES_encrypt2) \
    LFUNC_FA_(DES_encrypt3) \
    LFUNC_FA_(DES_decrypt3) \
    LFUNC_FA_(DES_ede3_cbc_encrypt) \
    LFUNC_FA_(DES_ede3_cbcm_encrypt) \
    LFUNC_FA_(DES_ede3_cfb64_encrypt) \
    LFUNC_FA_(DES_ede3_cfb_encrypt) \
    LFUNC_FA_(DES_ede3_ofb64_encrypt) \
    LFUNC_FA_(DES_enc_read) \
    LFUNC_FA_(DES_enc_write) \
    LFUNC_FA_(DES_fcrypt) \
    LFUNC_FA_(DES_crypt) \
    LFUNC_FA_(DES_ofb_encrypt) \
    LFUNC_FA_(DES_pcbc_encrypt) \
    LFUNC_FA_(DES_quad_cksum) \
    LFUNC_FA_(DES_random_key) \
    LFUNC_FA_(DES_set_odd_parity) \
    LFUNC_FA_(DES_check_key_parity) \
    LFUNC_FA_(DES_is_weak_key) \
    LFUNC_FA_(DES_set_key) \
    LFUNC_FA_(DES_key_sched) \
    LFUNC_FA_(DES_set_key_checked) \
    LFUNC_FA_(DES_set_key_unchecked) \
    LFUNC_FA_(DES_string_to_key) \
    LFUNC_FA_(DES_string_to_2keys) \
    LFUNC_FA_(DES_cfb64_encrypt) \
    LFUNC_FA_(DES_ofb64_encrypt) \
    LFUNC_FA_(DES_read_password) \
    LFUNC_FA_(DES_read_2passwords) \
    LFUNC_FA_(_ossl_old_des_options) \
    LFUNC_FA_(_ossl_old_des_ecb3_encrypt) \
    LFUNC_FA_(_ossl_old_des_cbc_cksum) \
    LFUNC_FA_(_ossl_old_des_cbc_encrypt) \
    LFUNC_FA_(_ossl_old_des_ncbc_encrypt) \
    LFUNC_FA_(_ossl_old_des_xcbc_encrypt) \
    LFUNC_FA_(_ossl_old_des_cfb_encrypt) \
    LFUNC_FA_(_ossl_old_des_ecb_encrypt) \
    LFUNC_FA_(_ossl_old_des_encrypt) \
    LFUNC_FA_(_ossl_old_des_encrypt2) \
    LFUNC_FA_(_ossl_old_des_encrypt3) \
    LFUNC_FA_(_ossl_old_des_decrypt3) \
    LFUNC_FA_(_ossl_old_des_ede3_cbc_encrypt) \
    LFUNC_FA_(_ossl_old_des_ede3_cfb64_encrypt) \
    LFUNC_FA_(_ossl_old_des_ede3_ofb64_encrypt) \
    LFUNC_FA_(_ossl_old_des_enc_read) \
    LFUNC_FA_(_ossl_old_des_enc_write) \
    LFUNC_FA_(_ossl_old_des_fcrypt) \
    LFUNC_FA_(_ossl_old_des_crypt) \
    LFUNC_FA_(_ossl_old_crypt) \
    LFUNC_FA_(_ossl_old_des_ofb_encrypt) \
    LFUNC_FA_(_ossl_old_des_pcbc_encrypt) \
    LFUNC_FA_(_ossl_old_des_quad_cksum) \
    LFUNC_FA_(_ossl_old_des_random_seed) \
    LFUNC_FA_(_ossl_old_des_random_key) \
    LFUNC_FA_(_ossl_old_des_read_password) \
    LFUNC_FA_(_ossl_old_des_read_2passwords) \
    LFUNC_FA_(_ossl_old_des_set_odd_parity) \
    LFUNC_FA_(_ossl_old_des_is_weak_key) \
    LFUNC_FA_(_ossl_old_des_set_key) \
    LFUNC_FA_(_ossl_old_des_key_sched) \
    LFUNC_FA_(_ossl_old_des_string_to_key) \
    LFUNC_FA_(_ossl_old_des_string_to_2keys) \
    LFUNC_FA_(_ossl_old_des_cfb64_encrypt) \
    LFUNC_FA_(_ossl_old_des_ofb64_encrypt) \
    LFUNC_FA_(_ossl_096_des_random_seed) \
    LFUNC_FA_(DH_OpenSSL) \
    LFUNC_FA_(DH_set_default_method) \
    LFUNC_FA_(DH_get_default_method) \
    LFUNC_FA_(DH_set_method) \
    LFUNC_FA_(DH_new_method) \
    LFUNC_FA_(DH_new) \
    LFUNC_FA_(DH_free) \
    LFUNC_FA_(DH_up_ref) \
    LFUNC_FA_(DH_size) \
    LFUNC_FA_(DH_get_ex_new_index) \
    LFUNC_FA_(DH_set_ex_data) \
    LFUNC_FA_(DH_get_ex_data) \
    LFUNC_FA_(DH_generate_parameters) \
    LFUNC_FA_(DH_check) \
    LFUNC_FA_(DH_generate_key) \
    LFUNC_FA_(DH_compute_key) \
    LFUNC_FA_(d2i_DHparams) \
    LFUNC_FA_(i2d_DHparams) \
    LFUNC_FA_(DHparams_print) \
    LFUNC_FA_(ERR_load_DH_strings) \
    LFUNC_FA_(DSA_SIG_new) \
    LFUNC_FA_(DSA_SIG_free) \
    LFUNC_FA_(i2d_DSA_SIG) \
    LFUNC_FA_(d2i_DSA_SIG) \
    LFUNC_FA_(DSA_do_sign) \
    LFUNC_FA_(DSA_do_verify) \
    LFUNC_FA_(DSA_OpenSSL) \
    LFUNC_FA_(DSA_set_default_method) \
    LFUNC_FA_(DSA_get_default_method) \
    LFUNC_FA_(DSA_set_method) \
    LFUNC_FA_(DSA_new) \
    LFUNC_FA_(DSA_new_method) \
    LFUNC_FA_(DSA_free) \
    LFUNC_FA_(DSA_up_ref) \
    LFUNC_FA_(DSA_size) \
    LFUNC_FA_(DSA_sign_setup) \
    LFUNC_FA_(DSA_sign) \
    LFUNC_FA_(DSA_verify) \
    LFUNC_FA_(DSA_get_ex_new_index) \
    LFUNC_FA_(DSA_set_ex_data) \
    LFUNC_FA_(DSA_get_ex_data) \
    LFUNC_FA_(d2i_DSAPublicKey) \
    LFUNC_FA_(d2i_DSAPrivateKey) \
    LFUNC_FA_(d2i_DSAparams) \
    LFUNC_FA_(DSA_generate_parameters) \
    LFUNC_FA_(DSA_generate_key) \
    LFUNC_FA_(i2d_DSAPublicKey) \
    LFUNC_FA_(i2d_DSAPrivateKey) \
    LFUNC_FA_(i2d_DSAparams) \
    LFUNC_FA_(DSAparams_print) \
    LFUNC_FA_(DSA_print) \
    LFUNC_FA_(DSA_dup_DH) \
    LFUNC_FA_(ERR_load_DSA_strings) \
    LFUNC_FA_(idea_options) \
    LFUNC_FA_(idea_ecb_encrypt) \
    LFUNC_FA_(idea_set_encrypt_key) \
    LFUNC_FA_(idea_set_decrypt_key) \
    LFUNC_FA_(idea_cbc_encrypt) \
    LFUNC_FA_(idea_cfb64_encrypt) \
    LFUNC_FA_(idea_ofb64_encrypt) \
    LFUNC_FA_(idea_encrypt) \
    LFUNC_FA_(MD2_options) \
    LFUNC_FA_(MD2_Init) \
    LFUNC_FA_(MD2_Update) \
    LFUNC_FA_(MD2_Final) \
    LFUNC_FA_(MD2) \
    LFUNC_FA_(MD4_Init) \
    LFUNC_FA_(MD4_Update) \
    LFUNC_FA_(MD4_Final) \
    LFUNC_FA_(MD4) \
    LFUNC_FA_(MD4_Transform) \
    LFUNC_FA_(MD5_Init) \
    LFUNC_FA_(MD5_Update) \
    LFUNC_FA_(MD5_Final) \
    LFUNC_FA_(MD5) \
    LFUNC_FA_(MD5_Transform) \
    LFUNC_FA_(MDC2_Init) \
    LFUNC_FA_(MDC2_Update) \
    LFUNC_FA_(MDC2_Final) \
    LFUNC_FA_(MDC2) \
    LFUNC_FA_(RC2_set_key) \
    LFUNC_FA_(RC2_ecb_encrypt) \
    LFUNC_FA_(RC2_encrypt) \
    LFUNC_FA_(RC2_decrypt) \
    LFUNC_FA_(RC2_cbc_encrypt) \
    LFUNC_FA_(RC2_cfb64_encrypt) \
    LFUNC_FA_(RC2_ofb64_encrypt) \
    LFUNC_FA_(RC4_options) \
    LFUNC_FA_(RC4_set_key) \
    LFUNC_FA_(RC4) \
    LFUNC_FA_(RC5_32_set_key) \
    LFUNC_FA_(RC5_32_ecb_encrypt) \
    LFUNC_FA_(RC5_32_encrypt) \
    LFUNC_FA_(RC5_32_decrypt) \
    LFUNC_FA_(RC5_32_cbc_encrypt) \
    LFUNC_FA_(RC5_32_cfb64_encrypt) \
    LFUNC_FA_(RC5_32_ofb64_encrypt) \
    LFUNC_FA_(RIPEMD160_Init) \
    LFUNC_FA_(RIPEMD160_Update) \
    LFUNC_FA_(RIPEMD160_Final) \
    LFUNC_FA_(RIPEMD160) \
    LFUNC_FA_(RIPEMD160_Transform) \
    LFUNC_FA_(RSA_new) \
    LFUNC_FA_(RSA_new_method) \
    LFUNC_FA_(RSA_size) \
    LFUNC_FA_(RSA_generate_key) \
    LFUNC_FA_(RSA_check_key) \
    LFUNC_FA_(RSA_public_encrypt) \
    LFUNC_FA_(RSA_private_encrypt) \
    LFUNC_FA_(RSA_public_decrypt) \
    LFUNC_FA_(RSA_private_decrypt) \
    LFUNC_FA_(RSA_free) \
    LFUNC_FA_(RSA_up_ref) \
    LFUNC_FA_(RSA_flags) \
    LFUNC_FA_(RSA_set_default_method) \
    LFUNC_FA_(RSA_get_default_method) \
    LFUNC_FA_(RSA_get_method) \
    LFUNC_FA_(RSA_set_method) \
    LFUNC_FA_(RSA_memory_lock) \
    LFUNC_FA_(RSA_PKCS1_SSLeay) \
    LFUNC_FA_(RSA_null_method) \
    LFUNC_FA_(d2i_RSAPublicKey) \
    LFUNC_FA_(i2d_RSAPublicKey) \
    LFUNC_FA_(RSAPublicKey_it) \
    LFUNC_FA_(d2i_RSAPrivateKey) \
    LFUNC_FA_(i2d_RSAPrivateKey) \
    LFUNC_FA_(RSAPrivateKey_it) \
    LFUNC_FA_(RSA_print) \
    LFUNC_FA_(i2d_RSA_NET) \
    LFUNC_FA_(d2i_RSA_NET) \
    LFUNC_FA_(i2d_Netscape_RSA) \
    LFUNC_FA_(d2i_Netscape_RSA) \
    LFUNC_FA_(RSA_sign) \
    LFUNC_FA_(RSA_verify) \
    LFUNC_FA_(RSA_sign_ASN1_OCTET_STRING) \
    LFUNC_FA_(RSA_verify_ASN1_OCTET_STRING) \
    LFUNC_FA_(RSA_blinding_on) \
    LFUNC_FA_(RSA_blinding_off) \
    LFUNC_FA_(RSA_padding_add_PKCS1_type_1) \
    LFUNC_FA_(RSA_padding_check_PKCS1_type_1) \
    LFUNC_FA_(RSA_padding_add_PKCS1_type_2) \
    LFUNC_FA_(RSA_padding_check_PKCS1_type_2) \
    LFUNC_FA_(RSA_padding_add_PKCS1_OAEP) \
    LFUNC_FA_(RSA_padding_check_PKCS1_OAEP) \
    LFUNC_FA_(RSA_padding_add_SSLv23) \
    LFUNC_FA_(RSA_padding_check_SSLv23) \
    LFUNC_FA_(RSA_padding_add_none) \
    LFUNC_FA_(RSA_padding_check_none) \
    LFUNC_FA_(RSA_get_ex_new_index) \
    LFUNC_FA_(RSA_set_ex_data) \
    LFUNC_FA_(RSA_get_ex_data) \
    LFUNC_FA_(RSAPublicKey_dup) \
    LFUNC_FA_(RSAPrivateKey_dup) \
    LFUNC_FA_(ERR_load_RSA_strings) \
    LFUNC_FA_(SHA_Init) \
    LFUNC_FA_(SHA_Update) \
    LFUNC_FA_(SHA_Final) \
    LFUNC_FA_(SHA) \
    LFUNC_FA_(SHA_Transform) \
    LFUNC_FA_(SHA1_Init) \
    LFUNC_FA_(SHA1_Update) \
    LFUNC_FA_(SHA1_Final) \
    LFUNC_FA_(SHA1) \
    LFUNC_FA_(SHA1_Transform) \
    LFUNC_FA_(UI_read_string_lib) \
    LFUNC_FA_(UI_write_string_lib) \
    LFUNC_FA_(HMAC_CTX_set_flags) \
    LFUNC_FA_(private_RC4_set_key) \
    LFUNC_FA_(X509_check_ca) \
    LFUNC_FA_(PROXY_POLICY_new) \
    LFUNC_FA_(PROXY_POLICY_free) \
    LFUNC_FA_(d2i_PROXY_POLICY) \
    LFUNC_FA_(i2d_PROXY_POLICY) \
    LFUNC_FA_(PROXY_POLICY_it) \
    LFUNC_FA_(PROXY_CERT_INFO_EXTENSION_new) \
    LFUNC_FA_(PROXY_CERT_INFO_EXTENSION_free) \
    LFUNC_FA_(d2i_PROXY_CERT_INFO_EXTENSION) \
    LFUNC_FA_(i2d_PROXY_CERT_INFO_EXTENSION) \
    LFUNC_FA_(PROXY_CERT_INFO_EXTENSION_it) \
    LFUNC_FA_(BN_mod_exp_mont_consttime) \
    LFUNC_FA_(BN_MONT_CTX_set_locked) \
    LFUNC_FA_(PKCS1_MGF1) \
    LFUNC_FA_(RSA_padding_add_X931) \
    LFUNC_FA_(RSA_padding_check_X931) \
    LFUNC_FA_(RSA_X931_hash_id) \
    LFUNC_FA_(RSA_verify_PKCS1_PSS) \
    LFUNC_FA_(RSA_padding_add_PKCS1_PSS) \
    LFUNC_FA_(EVP_sha224) \
    LFUNC_FA_(EVP_sha256) \
    LFUNC_FA_(EVP_sha384) \
    LFUNC_FA_(EVP_sha512) \
    LFUNC_FA_(BN_GF2m_add) \
    LFUNC_FA_(BN_GF2m_arr2poly) \
    LFUNC_FA_(BN_GF2m_mod) \
    LFUNC_FA_(BN_GF2m_mod_mul) \
    LFUNC_FA_(BN_GF2m_mod_sqr) \
    LFUNC_FA_(BN_GF2m_mod_inv) \
    LFUNC_FA_(BN_GF2m_mod_div) \
    LFUNC_FA_(BN_GF2m_mod_exp) \
    LFUNC_FA_(BN_GF2m_mod_sqrt) \
    LFUNC_FA_(BN_GF2m_mod_solve_quad) \
    LFUNC_FA_(BN_generate_prime_ex) \
    LFUNC_FA_(BN_is_prime_ex) \
    LFUNC_FA_(BN_set_negative) \
    LFUNC_FA_(EC_GROUP_get_degree) \
    LFUNC_FA_(EC_GF2m_simple_method) \
    LFUNC_FA_(EC_GROUP_set_curve_GF2m) \
    LFUNC_FA_(EC_GROUP_get_curve_GF2m) \
    LFUNC_FA_(EC_POINT_set_affine_coordinates_GF2m) \
    LFUNC_FA_(EC_POINT_get_affine_coordinates_GF2m) \
    LFUNC_FA_(EC_get_builtin_curves) \
    LFUNC_FA_(EC_GROUP_new_by_curve_name) \
    LFUNC_FA_(EC_GROUP_check) \
    LFUNC_FA_(ENGINE_cleanup) \
    LFUNC_FA_(DSA_generate_parameters_ex) \
    LFUNC_FA_(EVP_ecdsa) \
    LFUNC_FA_(EC_KEY_new_by_curve_name) \
    LFUNC_FA_(EC_KEY_generate_key) \
    LFUNC_FA_(EC_KEY_free) \
    LFUNC_FA_(ECDSA_SIG_free) \
    LFUNC_FA_(ECDSA_do_sign) \
    LFUNC_FA_(ECDSA_do_verify) \
    LFUNC_FA_(EC_KEY_new) \
    LFUNC_FA_(EC_KEY_set_group) \
    LFUNC_FA_(EC_KEY_get0_group) \
    LFUNC_FA_(EC_KEY_check_key) \
    LFUNC_FA_(ECDSA_size) \
    LFUNC_FA_(ECDSA_sign) \
    LFUNC_FA_(ECDSA_verify) \
    LFUNC_FA_(d2i_ECDSA_SIG) \
    LFUNC_FA_(i2d_ECDSA_SIG) \
    LFUNC_FA_(DH_generate_parameters_ex) \
    LFUNC_FA_(EC_METHOD_get_field_type) \
    LFUNC_FA_(EC_KEY_get0_public_key) \
    LFUNC_FA_(ECDH_compute_key) \
    LFUNC_FA_(EC_KEY_get0_private_key) \
    LFUNC_FA_(ENGINE_get_first) \
    LFUNC_FA_(ENGINE_get_id) \
    LFUNC_FA_(ENGINE_get_name) \
    LFUNC_FA_(ENGINE_get_next) \
    LFUNC_FA_(ENGINE_free) \
    LFUNC_FA_(ENGINE_new) \
    LFUNC_FA_(ENGINE_set_id) \
    LFUNC_FA_(ENGINE_set_name) \
    LFUNC_FA_(ENGINE_add) \
    LFUNC_FA_(ENGINE_remove) \
    LFUNC_FA_(ENGINE_load_builtin_engines) \
    LFUNC_FA_(ENGINE_register_all_ciphers) \
    LFUNC_FA_(EVP_CIPHER_nid) \
    LFUNC_FA_(EVP_MD_type) \
    LFUNC_FA_(ENGINE_register_all_digests) \
    LFUNC_FA_(BIO_test_flags) \
    LFUNC_FA_(SSL_COMP_get_compression_methods) \
    LFUNC_FA_(RSA_generate_key_ex) \
    LFUNC_FA_(X509_VERIFY_PARAM_free) \
    LFUNC_FA_(X509_STORE_set1_param) \
    LFUNC_FA_(ASN1_generate_nconf) \
    LFUNC_FA_(PEM_read_bio_ECPKParameters) \
    LFUNC_FA_(EC_KEY_dup) \
    LFUNC_FA_(BIO_set_callback) \
    LFUNC_FA_(BIO_set_callback_arg) \
    LFUNC_FA_(EVP_MD_CTX_set_flags) \
    LFUNC_FA_(BIO_set_flags) \
    LFUNC_FA_(EVP_CIPHER_CTX_set_flags) \
    LFUNC_FA_(EVP_CIPHER_iv_length) \
    LFUNC_FA_(X509_REQ_check_private_key) \
    LFUNC_FA_(PEM_read_bio_EC_PUBKEY) \
    LFUNC_FA_(PEM_read_bio_ECPrivateKey) \
    LFUNC_FA_(PEM_write_bio_EC_PUBKEY) \
    LFUNC_FA_(d2i_EC_PUBKEY_bio) \
    LFUNC_FA_(EC_KEY_set_asn1_flag) \
    LFUNC_FA_(EC_KEY_set_conv_form) \
    LFUNC_FA_(EC_KEY_print) \
    LFUNC_FA_(d2i_ECPrivateKey_bio) \
    LFUNC_FA_(i2d_EC_PUBKEY_bio) \
    LFUNC_FA_(PEM_write_bio_ECPrivateKey) \
    LFUNC_FA_(PEM_write_bio_ECPKParameters) \
    LFUNC_FA_(i2d_ECPrivateKey_bio) \
    LFUNC_FA_(i2d_ECPKParameters) \
    LFUNC_FA_(EC_GROUP_set_asn1_flag) \
    LFUNC_FA_(EC_GROUP_set_point_conversion_form) \
    LFUNC_FA_(EC_GROUP_get_point_conversion_form) \
    LFUNC_FA_(ECPKParameters_print) \
    LFUNC_FA_(EC_GROUP_set_seed) \
    LFUNC_FA_(d2i_ECPKParameters) \
    LFUNC_FA_(EC_POINT_point2bn) \
    LFUNC_FA_(X509_get1_ocsp) \
    LFUNC_FA_(SSL_get_servername) \
    LFUNC_FA_(SSL_set_SSL_CTX) \
    LFUNC_FA_(SSL_CTX_set_cookie_generate_cb) \
    LFUNC_FA_(SSL_CTX_set_cookie_verify_cb) \
    LFUNC_FA_(SSL_CTX_set_info_callback) \
    LFUNC_FA_(DTLSv1_server_method) \
    LFUNC_FA_(BIO_new_dgram) \
    LFUNC_FA_(SSL_get_servername_type) \
    LFUNC_FA_(SSL_get_current_compression) \
    LFUNC_FA_(SSL_get_current_expansion) \
    LFUNC_FA_(SSL_COMP_get_name) \
    LFUNC_FA_(ENGINE_by_id) \
    LFUNC_FA_(SSL_CTX_set_client_cert_engine) \
    LFUNC_FA_(DTLSv1_client_method) \
    LFUNC_FA_(DTLSv1_method) \
    LFUNC_FA_(SHA256) \
    LFUNC_FA_(SHA512) \
    LFUNC_FA_(AES_ige_encrypt) \
    LFUNC_FA_(EC_KEY_precompute_mult) \
    LFUNC_FA_(ENGINE_load_private_key) \
    LFUNC_FA_(ENGINE_load_public_key) \
    LFUNC_FA_(ENGINE_ctrl_cmd) \
    LFUNC_FA_(ENGINE_set_default) \
    LFUNC_FA_(ENGINE_ctrl) \
    LFUNC_FA_(ENGINE_register_all_complete) \
    LFUNC_FA_(ENGINE_ctrl_cmd_string) \
    LFUNC_FA_(X509_VERIFY_PARAM_add0_policy) \
    LFUNC_FA_(X509_VERIFY_PARAM_set_purpose) \
    LFUNC_FA_(X509_VERIFY_PARAM_set_flags) \
    LFUNC_FA_(X509_VERIFY_PARAM_new) \
    LFUNC_FA_(X509_POLICY_NODE_print) \
    LFUNC_FA_(X509_STORE_CTX_get0_policy_tree) \
    LFUNC_FA_(X509_STORE_CTX_get_explicit_policy) \
    LFUNC_FA_(X509_policy_tree_get0_policies) \
    LFUNC_FA_(X509_policy_tree_get0_user_policies) \
    LFUNC_FA_(BIO_get_callback_arg) \
    LFUNC_FA_(EVP_PKEY_add1_attr_by_NID) \
    LFUNC_FA_(ENGINE_get_RSA) \
    LFUNC_FA_(ENGINE_get_DSA) \
    LFUNC_FA_(ENGINE_get_DH) \
    LFUNC_FA_(ENGINE_get_RAND) \
    LFUNC_FA_(ENGINE_get_ciphers) \
    LFUNC_FA_(ENGINE_get_digests) \
    LFUNC_FA_(ENGINE_init) \
    LFUNC_FA_(ENGINE_finish) \
    LFUNC_FA_(OCSP_sendreq_new) \
    LFUNC_FA_(OCSP_sendreq_nbio) \
    LFUNC_FA_(OCSP_REQ_CTX_free) \
    LFUNC_FA_(SSL_CTX_use_psk_identity_hint) \
    LFUNC_FA_(SSL_CTX_set_psk_client_callback) \
    LFUNC_FA_(SSL_get_psk_identity_hint) \
    LFUNC_FA_(SSL_set_psk_server_callback) \
    LFUNC_FA_(SSL_use_psk_identity_hint) \
    LFUNC_FA_(SSL_set_psk_client_callback) \
    LFUNC_FA_(SSL_CTX_set_psk_server_callback) \
    LFUNC_FA_(SSL_get_psk_identity) \
    LFUNC_FA_(SSL_set_session_ticket_ext) \
    LFUNC_FA_(SSL_set_session_secret_cb) \
    LFUNC_FA_(SSL_set_session_ticket_ext_cb) \
    LFUNC_FA_(SSL_set1_param) \
    LFUNC_FA_(SSL_CTX_set1_param) \
    LFUNC_FA_(SSL_renegotiate_abbreviated) \
    LFUNC_FA_(TLSv1_1_method) \
    LFUNC_FA_(TLSv1_1_client_method) \
    LFUNC_FA_(TLSv1_1_server_method) \
    LFUNC_FA_(SSL_CTX_set_srp_client_pwd_callback) \
    LFUNC_FA_(SSL_get_srp_g) \
    LFUNC_FA_(SSL_CTX_set_srp_username_callback) \
    LFUNC_FA_(SSL_get_srp_userinfo) \
    LFUNC_FA_(SSL_set_srp_server_param) \
    LFUNC_FA_(SSL_set_srp_server_param_pw) \
    LFUNC_FA_(SSL_get_srp_N) \
    LFUNC_FA_(SSL_get_srp_username) \
    LFUNC_FA_(SSL_CTX_set_srp_password) \
    LFUNC_FA_(SSL_CTX_set_srp_strength) \
    LFUNC_FA_(SSL_CTX_set_srp_verify_param_callback) \
    LFUNC_FA_(SSL_CTX_set_srp_cb_arg) \
    LFUNC_FA_(SSL_CTX_set_srp_username) \
    LFUNC_FA_(SSL_CTX_SRP_CTX_init) \
    LFUNC_FA_(SRP_Calc_A_param) \
    LFUNC_FA_(SRP_generate_server_master_secret) \
    LFUNC_FA_(SSL_CTX_SRP_CTX_free) \
    LFUNC_FA_(SRP_generate_client_master_secret) \
    LFUNC_FA_(SSL_srp_server_param_with_username) \
    LFUNC_FA_(SSL_SRP_CTX_free) \
    LFUNC_FA_(SSL_set_debug) \
    LFUNC_FA_(SSL_SESSION_get0_peer) \
    LFUNC_FA_(TLSv1_2_client_method) \
    LFUNC_FA_(SSL_SESSION_set1_id_context) \
    LFUNC_FA_(TLSv1_2_server_method) \
    LFUNC_FA_(SSL_cache_hit) \
    LFUNC_FA_(SSL_set_state) \
    LFUNC_FA_(SSL_CIPHER_get_id) \
    LFUNC_FA_(TLSv1_2_method) \
    LFUNC_FA_(SSL_export_keying_material) \
    LFUNC_FA_(SSL_set_tlsext_use_srtp) \
    LFUNC_FA_(SSL_CTX_set_next_protos_advertised_cb) \
    LFUNC_FA_(SSL_get0_next_proto_negotiated) \
    LFUNC_FA_(SSL_get_selected_srtp_profile) \
    LFUNC_FA_(SSL_CTX_set_tlsext_use_srtp) \
    LFUNC_FA_(SSL_select_next_proto) \
    LFUNC_FA_(SSL_get_srtp_profiles) \
    LFUNC_FA_(SSL_CTX_set_next_proto_select_cb) \
    LFUNC_FA_(SSL_SESSION_get_compress_id) \
    LFUNC_FA_(SSL_CTX_set_tmp_ecdh_callback) \
    LFUNC_FA_(SSL_set_tmp_ecdh_callback) \
    LFUNC_FA_(SSL_SRP_CTX_init) \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_FA_(DES_options) \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_FA_(ERR_load_ENGINE_strings) \
    LFUNC_FA_(ENGINE_set_DSA) \
    LFUNC_FA_(ENGINE_get_finish_function) \
    LFUNC_FA_(ENGINE_get_default_RSA) \
    LFUNC_FA_(ENGINE_set_DH) \
    LFUNC_FA_(ENGINE_get_init_function) \
    LFUNC_FA_(ENGINE_set_init_function) \
    LFUNC_FA_(ENGINE_set_default_DSA) \
    LFUNC_FA_(ENGINE_get_last) \
    LFUNC_FA_(ENGINE_get_prev) \
    LFUNC_FA_(ENGINE_get_default_DH) \
    LFUNC_FA_(ENGINE_set_finish_function) \
    LFUNC_FA_(ENGINE_set_RSA) \
    LFUNC_FA_(ENGINE_set_default_RAND) \
    LFUNC_FA_(ENGINE_get_default_DSA) \
    LFUNC_FA_(ENGINE_set_default_RSA) \
    LFUNC_FA_(ENGINE_get_default_RAND) \
    LFUNC_FA_(ENGINE_set_RAND) \
    LFUNC_FA_(ENGINE_set_default_DH) \
    LFUNC_FA_(ENGINE_get_ctrl_function) \
    LFUNC_FA_(ENGINE_set_ctrl_function) \
    LFUNC_FA_(ENGINE_unregister_ciphers) \
    LFUNC_FA_(ENGINE_unregister_RSA) \
    LFUNC_FA_(ENGINE_register_all_RAND) \
    LFUNC_FA_(ENGINE_load_dynamic) \
    LFUNC_FA_(ENGINE_get_digest_engine) \
    LFUNC_FA_(ENGINE_register_DH) \
    LFUNC_FA_(ENGINE_register_RAND) \
    LFUNC_FA_(ENGINE_load_cryptodev) \
    LFUNC_FA_(ENGINE_register_ciphers) \
    LFUNC_FA_(ENGINE_load_ubsec) \
    LFUNC_FA_(ENGINE_load_openssl) \
    LFUNC_FA_(ENGINE_get_cmd_defns) \
    LFUNC_FA_(ENGINE_set_load_privkey_function) \
    LFUNC_FA_(ENGINE_set_default_digests) \
    LFUNC_FA_(ENGINE_register_RSA) \
    LFUNC_FA_(ENGINE_unregister_DSA) \
    LFUNC_FA_(ENGINE_set_ciphers) \
    LFUNC_FA_(RAND_set_rand_engine) \
    LFUNC_FA_(ENGINE_get_digest) \
    LFUNC_FA_(ENGINE_get_cipher) \
    LFUNC_FA_(ENGINE_cmd_is_executable) \
    LFUNC_FA_(ENGINE_register_DSA) \
    LFUNC_FA_(ENGINE_set_load_pubkey_function) \
    LFUNC_FA_(ENGINE_get_load_pubkey_function) \
    LFUNC_FA_(ENGINE_register_all_RSA) \
    LFUNC_FA_(ENGINE_unregister_digests) \
    LFUNC_FA_(ENGINE_get_ex_new_index) \
    LFUNC_FA_(ENGINE_get_ex_data) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_set_cmd_defns) \
    LFUNC_FA_(ENGINE_register_digests) \
    LFUNC_FA_(ENGINE_register_all_DH) \
    LFUNC_FA_(ENGINE_get_flags) \
    LFUNC_FA_(ENGINE_unregister_DH) \
    LFUNC_FA_(ENGINE_register_all_DSA) \
    LFUNC_FA_(ENGINE_set_digests) \
    LFUNC_FA_(ENGINE_register_complete) \
    LFUNC_FA_(ENGINE_set_ex_data) \
    LFUNC_FA_(ENGINE_set_destroy_function) \
    LFUNC_FA_(ENGINE_get_cipher_engine) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_load_cswift) \
    LFUNC_FA_(ENGINE_set_default_ciphers) \
    LFUNC_FA_(ENGINE_unregister_RAND) \
    LFUNC_FA_(ENGINE_load_nuron) \
    LFUNC_FA_(ENGINE_set_table_flags) \
    LFUNC_FA_(ENGINE_load_chil) \
    LFUNC_FA_(ENGINE_get_destroy_function) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_load_atalla) \
    LFUNC_FA_(ENGINE_get_table_flags) \
    LFUNC_FA_(ENGINE_set_flags) \
    LFUNC_FA_(ENGINE_get_load_privkey_function) \
    LFUNC_FA_(ENGINE_set_default_string) \
    LFUNC_FA_(ENGINE_add_conf_module) \
    LFUNC_FA_(ENGINE_load_aep) \
    LFUNC_FA_(ENGINE_load_sureware) \
    LFUNC_FA_(ENGINE_load_4758cca) \
    LFUNC_FA_(ENGINE_up_ref) \
    LFUNC_FA_(ENGINE_set_STORE) \
    LFUNC_FA_(ENGINE_register_ECDSA) \
    LFUNC_FA_(BN_BLINDING_get_thread_id) \
    LFUNC_FA_(EC_GROUP_get_trinomial_basis) \
    LFUNC_FA_(ECDH_get_default_method) \
    LFUNC_FA_(ENGINE_register_ECDH) \
    LFUNC_FA_(SHA512_Update) \
    LFUNC_FA_(i2d_ECPrivateKey) \
    LFUNC_FA_(BN_GF2m_mod_exp_arr) \
    LFUNC_FA_(BN_GF2m_mod_mul_arr) \
    LFUNC_FA_(o2i_ECPublicKey) \
    LFUNC_FA_(EC_KEY_copy) \
    LFUNC_NULL \
    LFUNC_FA_(EC_GROUP_check_discriminant) \
    LFUNC_FA_(i2o_ECPublicKey) \
    LFUNC_FA_(EC_GROUP_new_curve_GF2m) \
    LFUNC_FA_(ENGINE_unregister_STORE) \
    LFUNC_FA_(EVP_PKEY_get1_EC_KEY) \
    LFUNC_FA_(ENGINE_get_default_ECDH) \
    LFUNC_FA_(EC_KEY_get_conv_form) \
    LFUNC_FA_(ENGINE_get_static_state) \
    LFUNC_FA_(ECDSA_SIG_new) \
    LFUNC_FA_(EC_POINT_bn2point) \
    LFUNC_FA_(EC_KEY_get_key_method_data) \
    LFUNC_FA_(ECDSA_sign_ex) \
    LFUNC_FA_(EC_GROUP_get_pentanomial_basis) \
    LFUNC_FA_(ECDSA_sign_setup) \
    LFUNC_FA_(BN_GF2m_mod_solve_quad_arr) \
    LFUNC_FA_(EC_KEY_up_ref) \
    LFUNC_FA_(d2i_EC_PUBKEY) \
    LFUNC_FA_(EC_GROUP_have_precompute_mult) \
    LFUNC_NULL \
    LFUNC_FA_(BN_GF2m_mod_arr) \
    LFUNC_FA_(ECDH_get_ex_data) \
    LFUNC_FA_(ENGINE_unregister_ECDH) \
    LFUNC_FA_(ECDH_OpenSSL) \
    LFUNC_FA_(EC_POINT_dup) \
    LFUNC_FA_(EVP_PKEY_set1_EC_KEY) \
    LFUNC_FA_(BN_GF2m_mod_sqrt_arr) \
    LFUNC_NULL \
    LFUNC_FA_(EC_KEY_set_private_key) \
    LFUNC_FA_(BN_GF2m_poly2arr) \
    LFUNC_FA_(i2d_ECParameters) \
    LFUNC_FA_(ENGINE_set_ECDH) \
    LFUNC_FA_(SHA256_Init) \
    LFUNC_FA_(ECDSA_get_ex_data) \
    LFUNC_FA_(SHA224) \
    LFUNC_NULL \
    LFUNC_FA_(EC_GROUP_get_seed_len) \
    LFUNC_FA_(i2d_EC_PUBKEY) \
    LFUNC_FA_(ECDSA_get_default_method) \
    LFUNC_FA_(EC_GFp_nist_method) \
    LFUNC_FA_(ENGINE_load_padlock) \
    LFUNC_FA_(EC_GROUP_set_curve_name) \
    LFUNC_FA_(BN_GF2m_mod_sqr_arr) \
    LFUNC_FA_(BIO_s_datagram) \
    LFUNC_FA_(ENGINE_set_default_ECDSA) \
    LFUNC_FA_(ECDH_set_default_method) \
    LFUNC_FA_(SHA384_Update) \
    LFUNC_FA_(EC_KEY_insert_key_method_data) \
    LFUNC_FA_(SHA224_Final) \
    LFUNC_FA_(SHA224_Update) \
    LFUNC_FA_(d2i_ECPrivateKey) \
    LFUNC_FA_(ENGINE_register_all_STORE) \
    LFUNC_FA_(SHA512_Final) \
    LFUNC_FA_(EC_GROUP_get_asn1_flag) \
    LFUNC_FA_(ECDH_get_ex_new_index) \
    LFUNC_FA_(EC_GROUP_get0_seed) \
    LFUNC_FA_(BN_GF2m_mod_div_arr) \
    LFUNC_FA_(ENGINE_set_ECDSA) \
    LFUNC_NULL \
    LFUNC_FA_(ECDH_set_method) \
    LFUNC_FA_(ECDH_set_ex_data) \
    LFUNC_NULL \
    LFUNC_FA_(ECDSA_OpenSSL) \
    LFUNC_FA_(EC_KEY_get_enc_flags) \
    LFUNC_FA_(ECDSA_set_default_method) \
    LFUNC_FA_(EC_POINT_set_compressed_coordinates_GF2m) \
    LFUNC_FA_(EC_GROUP_cmp) \
    LFUNC_FA_(SHA224_Init) \
    LFUNC_NULL \
    LFUNC_FA_(SHA512_Init) \
    LFUNC_FA_(ERR_load_ECDSA_strings) \
    LFUNC_FA_(EC_GROUP_get_basis_type) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_register_all_ECDH) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_register_all_ECDSA) \
    LFUNC_FA_(EC_GROUP_dup) \
    LFUNC_FA_(ENGINE_get_default_ECDSA) \
    LFUNC_FA_(SHA256_Transform) \
    LFUNC_FA_(EC_KEY_set_enc_flags) \
    LFUNC_FA_(EC_POINT_point2hex) \
    LFUNC_FA_(ENGINE_get_STORE) \
    LFUNC_FA_(ECDSA_do_sign_ex) \
    LFUNC_NULL \
    LFUNC_FA_(SHA512_Transform) \
    LFUNC_NULL \
    LFUNC_FA_(EC_KEY_set_public_key) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_register_STORE) \
    LFUNC_NULL \
    LFUNC_FA_(EC_GROUP_get_curve_name) \
    LFUNC_NULL \
    LFUNC_FA_(SHA256_Final) \
    LFUNC_FA_(ENGINE_get_ECDH) \
    LFUNC_FA_(ENGINE_get_ECDSA) \
    LFUNC_FA_(ERR_load_ECDH_strings) \
    LFUNC_FA_(ECDSA_set_method) \
    LFUNC_FA_(d2i_ECParameters) \
    LFUNC_FA_(SHA384_Init) \
    LFUNC_FA_(ECDSA_set_ex_data) \
    LFUNC_FA_(SHA384_Final) \
    LFUNC_FA_(ECDSA_get_ex_new_index) \
    LFUNC_FA_(SHA384) \
    LFUNC_NULL \
    LFUNC_FA_(ENGINE_set_default_ECDH) \
    LFUNC_FA_(EC_POINT_hex2point) \
    LFUNC_FA_(SHA256_Update) \
    LFUNC_FA_(BN_GF2m_mod_inv_arr) \
    LFUNC_FA_(ENGINE_unregister_ECDSA) \
    LFUNC_FA_(BN_BLINDING_set_thread_id) \
    LFUNC_FA_(DH_check_pub_key) \
    LFUNC_FA_(Camellia_cbc_encrypt) \
    LFUNC_FA_(Camellia_cfb128_encrypt) \
    LFUNC_FA_(Camellia_cfb1_encrypt) \
    LFUNC_FA_(Camellia_cfb8_encrypt) \
    LFUNC_FA_(Camellia_ctr128_encrypt) \
    LFUNC_FA_(Camellia_decrypt) \
    LFUNC_FA_(Camellia_ecb_encrypt) \
    LFUNC_FA_(Camellia_encrypt) \
    LFUNC_FA_(Camellia_ofb128_encrypt) \
    LFUNC_FA_(Camellia_set_key) \
    LFUNC_FA_(EVP_camellia_128_cbc) \
    LFUNC_FA_(EVP_camellia_128_cfb128) \
    LFUNC_FA_(EVP_camellia_128_cfb1) \
    LFUNC_FA_(EVP_camellia_128_cfb8) \
    LFUNC_FA_(EVP_camellia_128_ecb) \
    LFUNC_FA_(EVP_camellia_128_ofb) \
    LFUNC_FA_(EVP_camellia_192_cbc) \
    LFUNC_FA_(EVP_camellia_192_cfb128) \
    LFUNC_FA_(EVP_camellia_192_cfb1) \
    LFUNC_FA_(EVP_camellia_192_cfb8) \
    LFUNC_FA_(EVP_camellia_192_ecb) \
    LFUNC_FA_(EVP_camellia_192_ofb) \
    LFUNC_FA_(EVP_camellia_256_cbc) \
    LFUNC_FA_(EVP_camellia_256_cfb128) \
    LFUNC_FA_(EVP_camellia_256_cfb1) \
    LFUNC_FA_(EVP_camellia_256_cfb8) \
    LFUNC_FA_(EVP_camellia_256_ecb) \
    LFUNC_FA_(EVP_camellia_256_ofb) \
    LFUNC_FA_(AES_bi_ige_encrypt) \
    LFUNC_FA_(SEED_decrypt) \
    LFUNC_FA_(SEED_encrypt) \
    LFUNC_FA_(SEED_cbc_encrypt) \
    LFUNC_FA_(EVP_seed_ofb) \
    LFUNC_FA_(SEED_cfb128_encrypt) \
    LFUNC_FA_(SEED_ofb128_encrypt) \
    LFUNC_FA_(EVP_seed_cbc) \
    LFUNC_FA_(SEED_ecb_encrypt) \
    LFUNC_FA_(EVP_seed_ecb) \
    LFUNC_FA_(SEED_set_key) \
    LFUNC_FA_(EVP_seed_cfb128) \
    LFUNC_FA_(AES_unwrap_key) \
    LFUNC_FA_(AES_wrap_key) \
    LFUNC_FA_(CMS_ReceiptRequest_free) \
    LFUNC_NULL \
    LFUNC_FA_(CMS_add0_CertificateChoices) \
    LFUNC_FA_(CMS_unsigned_add1_attr_by_OBJ) \
    LFUNC_FA_(ERR_load_CMS_strings) \
    LFUNC_FA_(CMS_sign_receipt) \
    LFUNC_FA_(i2d_CMS_ContentInfo) \
    LFUNC_FA_(CMS_signed_delete_attr) \
    LFUNC_FA_(d2i_CMS_bio) \
    LFUNC_FA_(CMS_unsigned_get_attr_by_NID) \
    LFUNC_FA_(CMS_verify) \
    LFUNC_FA_(SMIME_read_CMS) \
    LFUNC_FA_(CMS_decrypt_set1_key) \
    LFUNC_FA_(CMS_SignerInfo_get0_algs) \
    LFUNC_FA_(CMS_add1_cert) \
    LFUNC_FA_(CMS_set_detached) \
    LFUNC_FA_(CMS_encrypt) \
    LFUNC_FA_(CMS_EnvelopedData_create) \
    LFUNC_FA_(CMS_uncompress) \
    LFUNC_FA_(CMS_add0_crl) \
    LFUNC_FA_(CMS_SignerInfo_verify_content) \
    LFUNC_FA_(CMS_unsigned_get0_data_by_OBJ) \
    LFUNC_FA_(PEM_write_bio_CMS) \
    LFUNC_FA_(CMS_unsigned_get_attr) \
    LFUNC_FA_(CMS_RecipientInfo_ktri_cert_cmp) \
    LFUNC_FA_(CMS_RecipientInfo_ktri_get0_algs) \
    LFUNC_FA_(CMS_ContentInfo_free) \
    LFUNC_FA_(CMS_final) \
    LFUNC_FA_(CMS_add_simple_smimecap) \
    LFUNC_FA_(CMS_SignerInfo_verify) \
    LFUNC_FA_(CMS_data) \
    LFUNC_FA_(d2i_CMS_ReceiptRequest) \
    LFUNC_FA_(CMS_compress) \
    LFUNC_FA_(CMS_digest_create) \
    LFUNC_FA_(CMS_SignerInfo_cert_cmp) \
    LFUNC_FA_(CMS_SignerInfo_sign) \
    LFUNC_FA_(CMS_data_create) \
    LFUNC_FA_(i2d_CMS_bio) \
    LFUNC_FA_(CMS_EncryptedData_set1_key) \
    LFUNC_FA_(CMS_decrypt) \
    LFUNC_FA_(CMS_unsigned_delete_attr) \
    LFUNC_FA_(CMS_unsigned_get_attr_count) \
    LFUNC_FA_(CMS_add_smimecap) \
    LFUNC_NULL \
    LFUNC_FA_(CMS_signed_get_attr_by_OBJ) \
    LFUNC_FA_(d2i_CMS_ContentInfo) \
    LFUNC_FA_(CMS_add_standard_smimecap) \
    LFUNC_FA_(CMS_ContentInfo_new) \
    LFUNC_FA_(CMS_RecipientInfo_type) \
    LFUNC_FA_(CMS_get0_type) \
    LFUNC_FA_(CMS_is_detached) \
    LFUNC_FA_(CMS_sign) \
    LFUNC_FA_(CMS_signed_add1_attr) \
    LFUNC_FA_(CMS_unsigned_get_attr_by_OBJ) \
    LFUNC_FA_(SMIME_write_CMS) \
    LFUNC_FA_(CMS_EncryptedData_decrypt) \
    LFUNC_FA_(CMS_get0_RecipientInfos) \
    LFUNC_FA_(CMS_add0_RevocationInfoChoice) \
    LFUNC_FA_(CMS_decrypt_set1_pkey) \
    LFUNC_FA_(CMS_SignerInfo_set1_signer_cert) \
    LFUNC_FA_(CMS_get0_signers) \
    LFUNC_FA_(CMS_ReceiptRequest_get0_values) \
    LFUNC_FA_(CMS_signed_get0_data_by_OBJ) \
    LFUNC_FA_(CMS_get0_SignerInfos) \
    LFUNC_FA_(CMS_add0_cert) \
    LFUNC_FA_(CMS_EncryptedData_encrypt) \
    LFUNC_FA_(CMS_digest_verify) \
    LFUNC_FA_(CMS_set1_signers_certs) \
    LFUNC_FA_(CMS_signed_get_attr) \
    LFUNC_FA_(CMS_RecipientInfo_set0_key) \
    LFUNC_FA_(CMS_SignedData_init) \
    LFUNC_FA_(CMS_RecipientInfo_kekri_get0_id) \
    LFUNC_FA_(CMS_verify_receipt) \
    LFUNC_FA_(PEM_read_bio_CMS) \
    LFUNC_FA_(CMS_get1_crls) \
    LFUNC_FA_(CMS_add0_recipient_key) \
    LFUNC_FA_(CMS_ReceiptRequest_new) \
    LFUNC_FA_(CMS_get0_content) \
    LFUNC_FA_(CMS_get1_ReceiptRequest) \
    LFUNC_FA_(CMS_signed_add1_attr_by_OBJ) \
    LFUNC_FA_(CMS_RecipientInfo_kekri_id_cmp) \
    LFUNC_FA_(CMS_add1_ReceiptRequest) \
    LFUNC_FA_(CMS_SignerInfo_get0_signer_id) \
    LFUNC_FA_(CMS_unsigned_add1_attr_by_NID) \
    LFUNC_FA_(CMS_unsigned_add1_attr) \
    LFUNC_FA_(CMS_signed_get_attr_by_NID) \
    LFUNC_FA_(CMS_get1_certs) \
    LFUNC_FA_(CMS_signed_add1_attr_by_NID) \
    LFUNC_FA_(CMS_unsigned_add1_attr_by_txt) \
    LFUNC_FA_(CMS_dataFinal) \
    LFUNC_FA_(CMS_RecipientInfo_ktri_get0_signer_id) \
    LFUNC_FA_(i2d_CMS_ReceiptRequest) \
    LFUNC_FA_(CMS_add1_recipient_cert) \
    LFUNC_FA_(CMS_dataInit) \
    LFUNC_FA_(CMS_signed_add1_attr_by_txt) \
    LFUNC_FA_(CMS_RecipientInfo_decrypt) \
    LFUNC_FA_(CMS_signed_get_attr_count) \
    LFUNC_FA_(CMS_get0_eContentType) \
    LFUNC_FA_(CMS_set1_eContentType) \
    LFUNC_FA_(CMS_ReceiptRequest_create0) \
    LFUNC_FA_(CMS_add1_signer) \
    LFUNC_FA_(CMS_RecipientInfo_set0_pkey) \
    LFUNC_FA_(ENGINE_set_load_ssl_client_cert_function) \
    LFUNC_FA_(ENGINE_get_ssl_client_cert_function) \
    LFUNC_FA_(ENGINE_load_ssl_client_cert) \
    LFUNC_FA_(ENGINE_load_capi) \
    LFUNC_FA_(ENGINE_register_pkey_meths) \
    LFUNC_FA_(ENGINE_get_pkey_asn1_meth_engine) \
    LFUNC_FA_(WHIRLPOOL_Init) \
    LFUNC_FA_(WHIRLPOOL) \
    LFUNC_FA_(ENGINE_get_pkey_asn1_meth) \
    LFUNC_FA_(ENGINE_get_pkey_meth) \
    LFUNC_FA_(BIO_new_CMS) \
    LFUNC_FA_(ENGINE_set_default_pkey_asn1_meths) \
    LFUNC_FA_(WHIRLPOOL_BitUpdate) \
    LFUNC_FA_(i2d_CMS_bio_stream) \
    LFUNC_FA_(CMS_stream) \
    LFUNC_FA_(ENGINE_pkey_asn1_find_str) \
    LFUNC_FA_(ENGINE_get_pkey_meths) \
    LFUNC_FA_(ENGINE_register_pkey_asn1_meths) \
    LFUNC_FA_(ENGINE_set_default_pkey_meths) \
    LFUNC_FA_(HMAC_CTX_copy) \
    LFUNC_FA_(ENGINE_get_pkey_asn1_meths) \
    LFUNC_FA_(EVP_whirlpool) \
    LFUNC_FA_(ENGINE_register_all_pkey_meths) \
    LFUNC_FA_(WHIRLPOOL_Final) \
    LFUNC_FA_(ENGINE_get_pkey_asn1_meth_str) \
    LFUNC_FA_(ENGINE_register_all_pkey_asn1_meths) \
    LFUNC_FA_(CMS_ContentInfo_print_ctx) \
    LFUNC_FA_(CMS_add1_crl) \
    LFUNC_FA_(ENGINE_set_pkey_asn1_meths) \
    LFUNC_FA_(ENGINE_get_pkey_meth_engine) \
    LFUNC_FA_(WHIRLPOOL_Update) \
    LFUNC_FA_(PEM_write_bio_CMS_stream) \
    LFUNC_FA_(ENGINE_unregister_pkey_meths) \
    LFUNC_FA_(ENGINE_unregister_pkey_asn1_meths) \
    LFUNC_FA_(ENGINE_set_pkey_meths) \
    LFUNC_FA_(DSAparams_dup) \
    LFUNC_FA_(DHparams_dup) \
    LFUNC_FA_(X509_issuer_name_hash_old) \
    LFUNC_FA_(X509_subject_name_hash_old) \
    LFUNC_FA_(SRP_VBASE_get_by_user) \
    LFUNC_FA_(SRP_Calc_server_key) \
    LFUNC_FA_(SRP_create_verifier) \
    LFUNC_FA_(SRP_create_verifier_BN) \
    LFUNC_FA_(SRP_Calc_u) \
    LFUNC_FA_(SRP_VBASE_free) \
    LFUNC_FA_(SRP_Calc_client_key) \
    LFUNC_FA_(SRP_get_default_gN) \
    LFUNC_FA_(SRP_Calc_x) \
    LFUNC_FA_(SRP_Calc_B) \
    LFUNC_FA_(SRP_VBASE_new) \
    LFUNC_FA_(SRP_check_known_gN_param) \
    LFUNC_FA_(SRP_Calc_A) \
    LFUNC_FA_(SRP_Verify_A_mod_N) \
    LFUNC_FA_(SRP_VBASE_init) \
    LFUNC_FA_(SRP_Verify_B_mod_N) \
    LFUNC_FA_(EC_KEY_set_public_key_affine_coordinates) \
    LFUNC_FA_(EVP_aes_192_ctr) \
    LFUNC_FA_(EVP_aes_128_ctr) \
    LFUNC_FA_(EVP_aes_256_ctr) \
    LFUNC_FA_(EC_KEY_get_flags) \
    LFUNC_FA_(EVP_aes_128_xts) \
    LFUNC_FA_(private_AES_set_decrypt_key) \
    LFUNC_FA_(EVP_aes_256_xts) \
    LFUNC_FA_(EVP_aes_128_gcm) \
    LFUNC_FA_(EC_KEY_clear_flags) \
    LFUNC_FA_(EC_KEY_set_flags) \
    LFUNC_FA_(EVP_aes_256_ccm) \
    LFUNC_FA_(private_AES_set_encrypt_key) \
    LFUNC_FA_(EVP_aes_128_ccm) \
    LFUNC_FA_(EVP_aes_192_gcm) \
    LFUNC_FA_(EVP_aes_256_gcm) \
    LFUNC_FA_(EVP_aes_192_ccm) \
    LFUNC_FA_(EVP_rc4_hmac_md5) \
    LFUNC_FA_(EVP_aes_128_cbc_hmac_sha1) \
    LFUNC_FA_(ENGINE_load_rdrand) \
    LFUNC_FA_(ENGINE_load_rsax) \
    LFUNC_FA_(EVP_aes_256_cbc_hmac_sha1) \
    LFUNC_FA_(CMS_add0_recipient_password) \
    LFUNC_FA_(CMS_decrypt_set1_password) \
    LFUNC_FA_(CMS_RecipientInfo_set0_password) \
    LFUNC_FA_(X509_REQ_sign_ctx) \
    LFUNC_FA_(X509_CRL_sign_ctx) \
    LFUNC_FA_(X509_signature_dump) \
    LFUNC_FA_(X509_sign_ctx) \
    LFUNC_FA_(ASN1_item_sign_ctx) \
    LFUNC_FA_(OPENSSL_cpuid_setup) \
    LFUNC_FA_(ERR_remove_thread_state) \
    LFUNC_FA_(X509_STORE_CTX_set0_crls) \
    LFUNC_FA_(SSL_SESSION_get_id) \
    LFUNC_FA_(SSL_CTX_sess_set_new_cb) \
    LFUNC_FA_(SSL_CTX_sess_get_get_cb) \
    LFUNC_FA_(SSL_CTX_sess_set_get_cb) \
    LFUNC_FA_(SSL_CTX_get_info_callback) \
    LFUNC_FA_(SSL_CTX_set_client_cert_cb) \
    LFUNC_FA_(SSL_CTX_sess_set_remove_cb) \
    LFUNC_FA_(SSL_CTX_sess_get_new_cb) \
    LFUNC_FA_(SSL_CTX_get_client_cert_cb) \
    LFUNC_FA_(SSL_CTX_sess_get_remove_cb) \
    LFUNC_FA_(PEM_write_bio_SSL_SESSION) \
    LFUNC_NULL \
    LFUNC_FA_(PEM_read_bio_SSL_SESSION) \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_NULL \
    LFUNC_FA_(FIPS_mode_set) \
    LFUNC_FA_(BN_X931_generate_Xpq) \
    LFUNC_FA_(BN_get0_nist_prime_384) \
    LFUNC_FA_(ERR_set_mark) \
    LFUNC_FA_(BN_BLINDING_invert_ex) \
    LFUNC_FA_(NAME_CONSTRAINTS_free) \
    LFUNC_FA_(X509_STORE_CTX_set0_param) \
    LFUNC_FA_(POLICY_CONSTRAINTS_free) \
    LFUNC_FA_(BN_nist_mod_192) \
    LFUNC_FA_(GENERAL_SUBTREE_free) \
    LFUNC_FA_(PKCS12_add_safe) \
    LFUNC_FA_(BN_get0_nist_prime_192) \
    LFUNC_FA_(X509_keyid_get0) \
    LFUNC_FA_(pitem_new) \
    LFUNC_FA_(X509_policy_node_get0_parent) \
    LFUNC_FA_(a2i_IPADDRESS) \
    LFUNC_FA_(X509_STORE_CTX_set_depth) \
    LFUNC_FA_(X509_VERIFY_PARAM_inherit) \
    LFUNC_FA_(pqueue_iterator) \
    LFUNC_FA_(X509_VERIFY_PARAM_set_depth) \
    LFUNC_FA_(EVP_PKEY_add1_attr_by_txt) \
    LFUNC_FA_(BN_BLINDING_set_flags) \
    LFUNC_FA_(X509_VERIFY_PARAM_set1_policies) \
    LFUNC_FA_(X509_VERIFY_PARAM_set1_name) \
    LFUNC_FA_(POLICY_MAPPING_free) \
    LFUNC_FA_(pqueue_print) \
    LFUNC_FA_(PEM_write_bio_X509_CERT_PAIR) \
    LFUNC_FA_(EVP_PKEY_cmp) \
    LFUNC_FA_(X509_policy_level_node_count) \
    LFUNC_FA_(EVP_PKEY_get_attr) \
    LFUNC_FA_(GENERAL_SUBTREE_new) \
    LFUNC_FA_(X509_policy_node_get0_qualifiers) \
    LFUNC_FA_(pqueue_find) \
    LFUNC_FA_(pqueue_peek) \
    LFUNC_FA_(X509_policy_node_get0_policy) \
    LFUNC_FA_(PKCS12_add_safes) \
    LFUNC_FA_(BN_BLINDING_convert_ex) \
    LFUNC_FA_(X509_policy_tree_free) \
    LFUNC_FA_(OPENSSL_ia32cap_loc) \
    LFUNC_FA_(BN_get0_nist_prime_224) \
    LFUNC_FA_(BN_GENCB_call) \
    LFUNC_FA_(NAME_CONSTRAINTS_new) \
    LFUNC_FA_(ECParameters_print) \
    LFUNC_FA_(BUF_memdup) \
    LFUNC_FA_(X509_VERIFY_PARAM_set_trust) \
    LFUNC_FA_(EVP_PKEY_get_attr_count) \
    LFUNC_FA_(X509_STORE_CTX_get0_param) \
    LFUNC_NULL \
    LFUNC_FA_(X509_STORE_set_depth) \
    LFUNC_FA_(BUF_strndup) \
    LFUNC_FA_(ASN1_put_eoc) \
    LFUNC_FA_(X509_VERIFY_PARAM_table_cleanup) \
    LFUNC_FA_(RSA_setup_blinding) \
    LFUNC_FA_(sk_find_ex) \
    LFUNC_FA_(POLICY_CONSTRAINTS_new) \
    LFUNC_FA_(X509_VERIFY_PARAM_get_depth) \
    LFUNC_FA_(ASN1_item_ndef_i2d) \
    LFUNC_FA_(ERR_pop_to_mark) \
    LFUNC_FA_(X509_policy_level_get0_node) \
    LFUNC_FA_(i2d_PKCS7_NDEF) \
    LFUNC_FA_(ASN1_generate_v3) \
    LFUNC_FA_(X509_policy_tree_level_count) \
    LFUNC_FA_(X509_CERT_PAIR_free) \
    LFUNC_FA_(BN_nist_mod_224) \
    LFUNC_FA_(BIO_dgram_non_fatal_error) \
    LFUNC_FA_(v2i_ASN1_BIT_STRING) \
    LFUNC_FA_(X509_STORE_CTX_set_default) \
    LFUNC_FA_(X509_VERIFY_PARAM_set1) \
    LFUNC_FA_(v2i_GENERAL_NAME_ex) \
    LFUNC_FA_(BN_nist_mod_521) \
    LFUNC_FA_(X509_policy_tree_get0_level) \
    LFUNC_FA_(ASN1_const_check_infinite_end) \
    LFUNC_FA_(EVP_PKEY_delete_attr) \
    LFUNC_FA_(BN_get0_nist_prime_256) \
    LFUNC_FA_(i2v_ASN1_BIT_STRING) \
    LFUNC_FA_(BN_nist_mod_384) \
    LFUNC_FA_(i2d_X509_CERT_PAIR) \
    LFUNC_FA_(pqueue_pop) \
    LFUNC_FA_(EVP_PKEY_get_attr_by_OBJ) \
    LFUNC_FA_(X509_VERIFY_PARAM_lookup) \
    LFUNC_FA_(X509_CERT_PAIR_new) \
    LFUNC_FA_(X509V3_NAME_from_section) \
    LFUNC_FA_(EVP_PKEY_add1_attr) \
    LFUNC_NULL \
    LFUNC_FA_(BIO_dump_indent_cb) \
    LFUNC_FA_(d2i_X509_CERT_PAIR) \
    LFUNC_FA_(asn1_const_Finish) \
    LFUNC_FA_(BN_nist_mod_256) \
    LFUNC_FA_(X509_VERIFY_PARAM_add0_table) \
    LFUNC_FA_(pqueue_free) \
    LFUNC_FA_(BN_BLINDING_create_param) \
    LFUNC_FA_(BN_get0_nist_prime_521) \
    LFUNC_FA_(BN_is_prime_fasttest_ex) \
    LFUNC_FA_(X509_policy_check) \
    LFUNC_FA_(EVP_PKEY_get_attr_by_NID) \
    LFUNC_FA_(BN_BLINDING_get_flags) \
    LFUNC_FA_(PKCS12_add_cert) \
    LFUNC_FA_(EVP_CIPHER_CTX_rand_key) \
    LFUNC_FA_(a2i_IPADDRESS_NC) \
    LFUNC_FA_(PKCS7_set_digest) \
    LFUNC_FA_(POLICY_MAPPING_new) \
    LFUNC_FA_(PKCS7_set0_type_other) \
    LFUNC_FA_(PEM_read_bio_X509_CERT_PAIR) \
    LFUNC_FA_(pqueue_next) \
    LFUNC_FA_(EVP_PKEY_add1_attr_by_OBJ) \
    LFUNC_FA_(X509_VERIFY_PARAM_set_time) \
    LFUNC_FA_(pqueue_new) \
    LFUNC_FA_(PKCS12_add_key) \
    LFUNC_FA_(DSO_merge) \
    LFUNC_FA_(BIO_dump_cb) \
    LFUNC_FA_(pqueue_insert) \
    LFUNC_FA_(pitem_free) \
    LFUNC_FA_(get_rfc3526_prime_8192) \
    LFUNC_FA_(X509_VERIFY_PARAM_clear_flags) \
    LFUNC_FA_(get_rfc2409_prime_1024) \
    LFUNC_FA_(get_rfc3526_prime_2048) \
    LFUNC_FA_(get_rfc3526_prime_6144) \
    LFUNC_FA_(get_rfc3526_prime_1536) \
    LFUNC_FA_(get_rfc3526_prime_3072) \
    LFUNC_FA_(get_rfc3526_prime_4096) \
    LFUNC_FA_(get_rfc2409_prime_768) \
    LFUNC_FA_(X509_VERIFY_PARAM_get_flags) \
    LFUNC_FA_(EVP_CIPHER_CTX_new) \
    LFUNC_FA_(EVP_CIPHER_CTX_free) \
    LFUNC_FA_(a2i_ipadd) \
    LFUNC_FA_(EVP_CIPHER_block_size) \
    LFUNC_FA_(EVP_CIPHER_CTX_set_app_data) \
    LFUNC_FA_(BIO_method_type) \
    LFUNC_FA_(EVP_CIPHER_CTX_nid) \
    LFUNC_FA_(EVP_CIPHER_CTX_key_length) \
    LFUNC_FA_(EVP_MD_size) \
    LFUNC_FA_(EVP_MD_CTX_test_flags) \
    LFUNC_FA_(BIO_clear_flags) \
    LFUNC_FA_(EVP_MD_pkey_type) \
    LFUNC_FA_(EVP_MD_CTX_clear_flags) \
    LFUNC_FA_(EVP_CIPHER_flags) \
    LFUNC_FA_(BIO_get_callback) \
    LFUNC_FA_(EVP_CIPHER_key_length) \
    LFUNC_FA_(EVP_Cipher) \
    LFUNC_FA_(EVP_CIPHER_CTX_block_size) \
    LFUNC_FA_(EVP_CIPHER_CTX_cipher) \
    LFUNC_FA_(EVP_CIPHER_CTX_get_app_data) \
    LFUNC_FA_(EVP_MD_block_size) \
    LFUNC_FA_(EVP_CIPHER_CTX_flags) \
    LFUNC_FA_(EVP_MD_CTX_md) \
    LFUNC_FA_(BIO_method_name) \
    LFUNC_FA_(EVP_CIPHER_CTX_iv_length) \
    LFUNC_FA_(CRYPTO_memcmp) \
    LFUNC_FA_(BN_consttime_swap) \
    LFUNC_FA_(i2d_X509_EXTENSIONS) \
    LFUNC_FA_(d2i_X509_EXTENSIONS) \
    LFUNC_FA_(X509_ALGOR_get0) \
    LFUNC_FA_(X509_ALGOR_set0) \
    LFUNC_FA_(X509at_get0_data_by_OBJ) \
    LFUNC_FA_(ASN1_TYPE_set1) \
    LFUNC_FA_(ASN1_STRING_set0) \
    LFUNC_FA_(i2d_X509_ALGORS) \
    LFUNC_FA_(COMP_zlib_cleanup) \
    LFUNC_FA_(d2i_X509_ALGORS) \
    LFUNC_FA_(SMIME_read_ASN1) \
    LFUNC_FA_(OPENSSL_isservice) \
    LFUNC_FA_(EVP_CIPHER_CTX_clear_flags) \
    LFUNC_FA_(BN_X931_generate_prime_ex) \
    LFUNC_FA_(EVP_CIPHER_CTX_test_flags) \
    LFUNC_FA_(EVP_add_alg_module) \
    LFUNC_FA_(BN_X931_derive_prime_ex) \
    LFUNC_FA_(OPENSSL_init) \
    LFUNC_FA_(CRYPTO_strdup) \
    LFUNC_FA_(pqueue_size) \
    LFUNC_FA_(i2d_TS_ACCURACY) \
    LFUNC_NULL \
    LFUNC_FA_(i2d_TS_MSG_IMPRINT) \
    LFUNC_FA_(EVP_PKEY_print_public) \
    LFUNC_FA_(EVP_PKEY_CTX_new) \
    LFUNC_FA_(i2d_TS_TST_INFO) \
    LFUNC_FA_(EVP_PKEY_asn1_find) \
    LFUNC_FA_(DSO_METHOD_beos) \
    LFUNC_FA_(TS_CONF_load_cert) \
    LFUNC_FA_(TS_REQ_get_ext) \
    LFUNC_FA_(EVP_PKEY_sign_init) \
    LFUNC_FA_(ASN1_item_print) \
    LFUNC_FA_(TS_TST_INFO_set_nonce) \
    LFUNC_FA_(TS_RESP_dup) \
    LFUNC_FA_(EVP_PKEY_asn1_add0) \
    LFUNC_FA_(PKCS7_add0_attrib_signing_time) \
    LFUNC_NULL \
    LFUNC_FA_(BIO_asn1_get_prefix) \
    LFUNC_FA_(TS_TST_INFO_set_time) \
    LFUNC_FA_(EVP_PKEY_meth_set_decrypt) \
    LFUNC_FA_(EVP_PKEY_set_type_str) \
    LFUNC_FA_(EVP_PKEY_CTX_get_keygen_info) \
    LFUNC_FA_(TS_REQ_set_policy_id) \
    LFUNC_NULL \
    LFUNC_FA_(TS_RESP_set_status_info) \
    LFUNC_FA_(EVP_PKEY_keygen) \
    LFUNC_FA_(EVP_DigestSignInit) \
    LFUNC_FA_(TS_ACCURACY_set_millis) \
    LFUNC_FA_(TS_REQ_dup) \
    LFUNC_FA_(GENERAL_NAME_dup) \
    LFUNC_FA_(X509_STORE_get1_crls) \
    LFUNC_FA_(EVP_PKEY_asn1_new) \
    LFUNC_FA_(BIO_new_NDEF) \
    LFUNC_FA_(TS_MSG_IMPRINT_set_algo) \
    LFUNC_FA_(i2d_TS_TST_INFO_bio) \
    LFUNC_FA_(TS_TST_INFO_set_ordering) \
    LFUNC_FA_(TS_TST_INFO_get_ext_by_OBJ) \
    LFUNC_FA_(CRYPTO_THREADID_set_pointer) \
    LFUNC_FA_(TS_CONF_get_tsa_section) \
    LFUNC_FA_(SMIME_write_ASN1) \
    LFUNC_FA_(TS_RESP_CTX_set_signer_key) \
    LFUNC_FA_(EVP_PKEY_encrypt_old) \
    LFUNC_FA_(EVP_PKEY_encrypt_init) \
    LFUNC_FA_(CRYPTO_THREADID_cpy) \
    LFUNC_FA_(ASN1_PCTX_get_cert_flags) \
    LFUNC_FA_(i2d_ESS_SIGNING_CERT) \
    LFUNC_FA_(TS_CONF_load_key) \
    LFUNC_FA_(i2d_ASN1_SEQUENCE_ANY) \
    LFUNC_FA_(d2i_TS_MSG_IMPRINT_bio) \
    LFUNC_FA_(EVP_PKEY_asn1_set_public) \
    LFUNC_FA_(b2i_PublicKey_bio) \
    LFUNC_FA_(BIO_asn1_set_prefix) \
    LFUNC_FA_(EVP_PKEY_new_mac_key) \
    LFUNC_FA_(CRYPTO_THREADID_cmp) \
    LFUNC_FA_(TS_REQ_ext_free) \
    LFUNC_FA_(EVP_PKEY_asn1_set_free) \
    LFUNC_FA_(EVP_PKEY_get0_asn1) \
    LFUNC_FA_(d2i_NETSCAPE_X509) \
    LFUNC_FA_(EVP_PKEY_verify_recover_init) \
    LFUNC_FA_(EVP_PKEY_CTX_set_data) \
    LFUNC_FA_(EVP_PKEY_keygen_init) \
    LFUNC_FA_(TS_RESP_CTX_set_status_info) \
    LFUNC_FA_(TS_MSG_IMPRINT_get_algo) \
    LFUNC_FA_(TS_REQ_print_bio) \
    LFUNC_FA_(EVP_PKEY_CTX_ctrl_str) \
    LFUNC_FA_(EVP_PKEY_get_default_digest_nid) \
    LFUNC_FA_(PEM_write_bio_PKCS7_stream) \
    LFUNC_FA_(TS_MSG_IMPRINT_print_bio) \
    LFUNC_FA_(BN_asc2bn) \
    LFUNC_FA_(TS_REQ_get_policy_id) \
    LFUNC_FA_(d2i_TS_ACCURACY) \
    LFUNC_FA_(DSO_global_lookup) \
    LFUNC_FA_(TS_CONF_set_tsa_name) \
    LFUNC_FA_(i2d_ASN1_SET_ANY) \
    LFUNC_FA_(ASN1_PCTX_get_flags) \
    LFUNC_FA_(TS_TST_INFO_get_ext_by_NID) \
    LFUNC_FA_(TS_RESP_new) \
    LFUNC_FA_(ESS_CERT_ID_dup) \
    LFUNC_FA_(TS_STATUS_INFO_dup) \
    LFUNC_FA_(TS_REQ_delete_ext) \
    LFUNC_FA_(EVP_DigestVerifyFinal) \
    LFUNC_FA_(EVP_PKEY_print_params) \
    LFUNC_FA_(TS_REQ_get_msg_imprint) \
    LFUNC_FA_(OBJ_find_sigid_by_algs) \
    LFUNC_FA_(TS_TST_INFO_get_serial) \
    LFUNC_FA_(TS_REQ_get_nonce) \
    LFUNC_FA_(X509_PUBKEY_set0_param) \
    LFUNC_FA_(EVP_PKEY_CTX_set0_keygen_info) \
    LFUNC_FA_(DIST_POINT_set_dpname) \
    LFUNC_FA_(i2d_ISSUING_DIST_POINT) \
    LFUNC_FA_(EVP_PKEY_CTX_get_data) \
    LFUNC_FA_(TS_STATUS_INFO_print_bio) \
    LFUNC_FA_(EVP_PKEY_derive_init) \
    LFUNC_FA_(d2i_TS_TST_INFO) \
    LFUNC_FA_(EVP_PKEY_asn1_add_alias) \
    LFUNC_FA_(d2i_TS_RESP_bio) \
    LFUNC_FA_(OTHERNAME_cmp) \
    LFUNC_FA_(GENERAL_NAME_set0_value) \
    LFUNC_FA_(PKCS7_RECIP_INFO_get0_alg) \
    LFUNC_FA_(TS_RESP_CTX_new) \
    LFUNC_FA_(TS_RESP_set_tst_info) \
    LFUNC_FA_(PKCS7_final) \
    LFUNC_FA_(EVP_PKEY_base_id) \
    LFUNC_FA_(TS_RESP_CTX_set_signer_cert) \
    LFUNC_FA_(TS_REQ_set_msg_imprint) \
    LFUNC_FA_(EVP_PKEY_CTX_ctrl) \
    LFUNC_FA_(TS_CONF_set_digests) \
    LFUNC_FA_(d2i_TS_MSG_IMPRINT) \
    LFUNC_FA_(EVP_PKEY_meth_set_ctrl) \
    LFUNC_FA_(TS_REQ_get_ext_by_NID) \
    LFUNC_FA_(PKCS5_pbe_set0_algor) \
    LFUNC_FA_(BN_BLINDING_thread_id) \
    LFUNC_FA_(TS_ACCURACY_new) \
    LFUNC_FA_(X509_CRL_METHOD_free) \
    LFUNC_FA_(ASN1_PCTX_get_nm_flags) \
    LFUNC_FA_(EVP_PKEY_meth_set_sign) \
    LFUNC_FA_(CRYPTO_THREADID_current) \
    LFUNC_FA_(EVP_PKEY_decrypt_init) \
    LFUNC_FA_(NETSCAPE_X509_free) \
    LFUNC_FA_(i2b_PVK_bio) \
    LFUNC_FA_(EVP_PKEY_print_private) \
    LFUNC_FA_(GENERAL_NAME_get0_value) \
    LFUNC_FA_(b2i_PVK_bio) \
    LFUNC_FA_(ASN1_UTCTIME_adj) \
    LFUNC_FA_(TS_TST_INFO_new) \
    LFUNC_FA_(EVP_MD_do_all_sorted) \
    LFUNC_FA_(TS_CONF_set_default_engine) \
    LFUNC_FA_(TS_ACCURACY_set_seconds) \
    LFUNC_FA_(TS_TST_INFO_get_time) \
    LFUNC_FA_(PKCS8_pkey_get0) \
    LFUNC_FA_(EVP_PKEY_asn1_get0) \
    LFUNC_FA_(OBJ_add_sigid) \
    LFUNC_FA_(PKCS7_SIGNER_INFO_sign) \
    LFUNC_FA_(EVP_PKEY_paramgen_init) \
    LFUNC_FA_(EVP_PKEY_sign) \
    LFUNC_FA_(OBJ_sigid_free) \
    LFUNC_FA_(EVP_PKEY_meth_set_init) \
    LFUNC_FA_(d2i_ESS_ISSUER_SERIAL) \
    LFUNC_FA_(ISSUING_DIST_POINT_new) \
    LFUNC_FA_(ASN1_TIME_adj) \
    LFUNC_FA_(TS_OBJ_print_bio) \
    LFUNC_FA_(EVP_PKEY_meth_set_verify_recover) \
    LFUNC_FA_(TS_RESP_get_status_info) \
    LFUNC_FA_(EVP_PKEY_CTX_set_cb) \
    LFUNC_FA_(PKCS7_to_TS_TST_INFO) \
    LFUNC_FA_(ASN1_PCTX_get_oid_flags) \
    LFUNC_FA_(TS_TST_INFO_add_ext) \
    LFUNC_FA_(EVP_PKEY_meth_set_derive) \
    LFUNC_NULL \
    LFUNC_FA_(i2d_TS_MSG_IMPRINT_bio) \
    LFUNC_FA_(TS_RESP_CTX_set_accuracy) \
    LFUNC_FA_(TS_REQ_set_nonce) \
    LFUNC_FA_(ESS_CERT_ID_new) \
    LFUNC_FA_(TS_REQ_get_ext_count) \
    LFUNC_FA_(BUF_reverse) \
    LFUNC_FA_(TS_TST_INFO_print_bio) \
    LFUNC_FA_(d2i_ISSUING_DIST_POINT) \
    LFUNC_FA_(i2b_PrivateKey_bio) \
    LFUNC_FA_(i2d_TS_RESP) \
    LFUNC_FA_(b2i_PublicKey) \
    LFUNC_FA_(TS_VERIFY_CTX_cleanup) \
    LFUNC_FA_(TS_STATUS_INFO_free) \
    LFUNC_FA_(TS_RESP_verify_token) \
    LFUNC_FA_(OBJ_bsearch_ex_) \
    LFUNC_FA_(ASN1_bn_print) \
    LFUNC_FA_(EVP_PKEY_asn1_get_count) \
    LFUNC_FA_(ASN1_PCTX_set_nm_flags) \
    LFUNC_FA_(EVP_DigestVerifyInit) \
    LFUNC_FA_(TS_TST_INFO_get_policy_id) \
    LFUNC_FA_(TS_REQ_get_cert_req) \
    LFUNC_FA_(X509_CRL_set_meth_data) \
    LFUNC_FA_(PKCS8_pkey_set0) \
    LFUNC_FA_(ASN1_STRING_copy) \
    LFUNC_NULL \
    LFUNC_FA_(X509_CRL_match) \
    LFUNC_FA_(EVP_PKEY_asn1_set_private) \
    LFUNC_FA_(TS_TST_INFO_get_ext_d2i) \
    LFUNC_FA_(TS_RESP_CTX_add_policy) \
    LFUNC_FA_(d2i_TS_RESP) \
    LFUNC_FA_(TS_CONF_load_certs) \
    LFUNC_FA_(TS_TST_INFO_get_msg_imprint) \
    LFUNC_FA_(ERR_load_TS_strings) \
    LFUNC_FA_(TS_TST_INFO_get_version) \
    LFUNC_FA_(EVP_PKEY_CTX_dup) \
    LFUNC_FA_(EVP_PKEY_meth_set_verify) \
    LFUNC_FA_(i2b_PublicKey_bio) \
    LFUNC_FA_(TS_CONF_set_certs) \
    LFUNC_FA_(EVP_PKEY_asn1_get0_info) \
    LFUNC_FA_(TS_VERIFY_CTX_free) \
    LFUNC_FA_(TS_REQ_get_ext_by_critical) \
    LFUNC_FA_(TS_RESP_CTX_set_serial_cb) \
    LFUNC_FA_(X509_CRL_get_meth_data) \
    LFUNC_FA_(TS_RESP_CTX_set_time_cb) \
    LFUNC_FA_(TS_MSG_IMPRINT_get_msg) \
    LFUNC_FA_(TS_TST_INFO_ext_free) \
    LFUNC_FA_(TS_REQ_get_version) \
    LFUNC_FA_(TS_REQ_add_ext) \
    LFUNC_FA_(EVP_PKEY_CTX_set_app_data) \
    LFUNC_FA_(OBJ_bsearch_) \
    LFUNC_FA_(EVP_PKEY_meth_set_verifyctx) \
    LFUNC_FA_(i2d_PKCS7_bio_stream) \
    LFUNC_FA_(CRYPTO_THREADID_set_numeric) \
    LFUNC_FA_(PKCS7_sign_add_signer) \
    LFUNC_FA_(d2i_TS_TST_INFO_bio) \
    LFUNC_FA_(TS_TST_INFO_get_ordering) \
    LFUNC_FA_(TS_RESP_print_bio) \
    LFUNC_FA_(TS_TST_INFO_get_exts) \
    LFUNC_FA_(PKCS5_pbe2_set_iv) \
    LFUNC_FA_(b2i_PrivateKey) \
    LFUNC_FA_(EVP_PKEY_CTX_get_app_data) \
    LFUNC_FA_(TS_REQ_set_cert_req) \
    LFUNC_FA_(CRYPTO_THREADID_set_callback) \
    LFUNC_FA_(TS_CONF_set_serial) \
    LFUNC_FA_(TS_TST_INFO_free) \
    LFUNC_NULL \
    LFUNC_FA_(TS_RESP_verify_response) \
    LFUNC_FA_(i2d_ESS_ISSUER_SERIAL) \
    LFUNC_FA_(TS_ACCURACY_get_seconds) \
    LFUNC_FA_(EVP_CIPHER_do_all) \
    LFUNC_FA_(b2i_PrivateKey_bio) \
    LFUNC_FA_(OCSP_CERTID_dup) \
    LFUNC_FA_(X509_PUBKEY_get0_param) \
    LFUNC_FA_(TS_MSG_IMPRINT_dup) \
    LFUNC_FA_(PKCS7_print_ctx) \
    LFUNC_FA_(i2d_TS_REQ_bio) \
    LFUNC_FA_(EVP_PKEY_asn1_set_param) \
    LFUNC_FA_(EVP_PKEY_meth_set_encrypt) \
    LFUNC_FA_(ASN1_PCTX_set_flags) \
    LFUNC_FA_(i2d_ESS_CERT_ID) \
    LFUNC_FA_(TS_VERIFY_CTX_new) \
    LFUNC_FA_(TS_RESP_CTX_set_extension_cb) \
    LFUNC_FA_(TS_RESP_CTX_set_status_info_cond) \
    LFUNC_FA_(EVP_PKEY_verify) \
    LFUNC_FA_(X509_CRL_METHOD_new) \
    LFUNC_FA_(EVP_DigestSignFinal) \
    LFUNC_FA_(TS_RESP_CTX_set_def_policy) \
    LFUNC_FA_(TS_RESP_create_response) \
    LFUNC_FA_(PKCS7_SIGNER_INFO_get0_algs) \
    LFUNC_FA_(TS_TST_INFO_get_nonce) \
    LFUNC_FA_(EVP_PKEY_decrypt_old) \
    LFUNC_FA_(TS_TST_INFO_set_policy_id) \
    LFUNC_FA_(TS_CONF_set_ess_cert_id_chain) \
    LFUNC_FA_(EVP_PKEY_CTX_get0_pkey) \
    LFUNC_FA_(d2i_TS_REQ) \
    LFUNC_FA_(EVP_PKEY_asn1_find_str) \
    LFUNC_FA_(BIO_f_asn1) \
    LFUNC_FA_(ESS_SIGNING_CERT_new) \
    LFUNC_FA_(EVP_PBE_find) \
    LFUNC_FA_(X509_CRL_get0_by_cert) \
    LFUNC_FA_(EVP_PKEY_derive) \
    LFUNC_FA_(i2d_TS_REQ) \
    LFUNC_FA_(TS_TST_INFO_delete_ext) \
    LFUNC_FA_(ESS_ISSUER_SERIAL_free) \
    LFUNC_FA_(ASN1_PCTX_set_str_flags) \
    LFUNC_FA_(TS_CONF_set_signer_key) \
    LFUNC_FA_(TS_ACCURACY_get_millis) \
    LFUNC_FA_(TS_RESP_get_token) \
    LFUNC_FA_(TS_ACCURACY_dup) \
    LFUNC_FA_(X509_CRL_set_default_method) \
    LFUNC_FA_(CRYPTO_THREADID_hash) \
    LFUNC_FA_(TS_RESP_free) \
    LFUNC_FA_(ISSUING_DIST_POINT_free) \
    LFUNC_FA_(ESS_ISSUER_SERIAL_new) \
    LFUNC_FA_(PKCS7_add1_attrib_digest) \
    LFUNC_FA_(TS_RESP_CTX_add_md) \
    LFUNC_FA_(TS_TST_INFO_dup) \
    LFUNC_FA_(PEM_write_bio_Parameters) \
    LFUNC_FA_(TS_TST_INFO_get_accuracy) \
    LFUNC_FA_(X509_CRL_get0_by_serial) \
    LFUNC_FA_(TS_TST_INFO_set_version) \
    LFUNC_FA_(TS_RESP_CTX_get_tst_info) \
    LFUNC_FA_(TS_RESP_verify_signature) \
    LFUNC_FA_(CRYPTO_THREADID_get_callback) \
    LFUNC_FA_(TS_TST_INFO_get_tsa) \
    LFUNC_FA_(TS_STATUS_INFO_new) \
    LFUNC_FA_(EVP_PKEY_CTX_get_cb) \
    LFUNC_FA_(TS_REQ_get_ext_d2i) \
    LFUNC_FA_(GENERAL_NAME_set0_othername) \
    LFUNC_FA_(TS_TST_INFO_get_ext_count) \
    LFUNC_FA_(TS_RESP_CTX_get_request) \
    LFUNC_FA_(i2d_NETSCAPE_X509) \
    LFUNC_FA_(EVP_PKEY_meth_set_signctx) \
    LFUNC_FA_(EVP_PKEY_asn1_copy) \
    LFUNC_FA_(ASN1_TYPE_cmp) \
    LFUNC_FA_(EVP_CIPHER_do_all_sorted) \
    LFUNC_FA_(EVP_PKEY_CTX_free) \
    LFUNC_NULL \
    LFUNC_FA_(X509_STORE_get1_certs) \
    LFUNC_FA_(EVP_PKEY_CTX_get_operation) \
    LFUNC_FA_(d2i_ESS_SIGNING_CERT) \
    LFUNC_FA_(TS_CONF_set_ordering) \
    LFUNC_FA_(EVP_PBE_alg_add_type) \
    LFUNC_FA_(TS_REQ_set_version) \
    LFUNC_FA_(EVP_PKEY_get0) \
    LFUNC_FA_(BIO_asn1_set_suffix) \
    LFUNC_FA_(i2d_TS_STATUS_INFO) \
    LFUNC_FA_(EVP_MD_do_all) \
    LFUNC_FA_(TS_TST_INFO_set_accuracy) \
    LFUNC_FA_(PKCS7_add_attrib_content_type) \
    LFUNC_FA_(EVP_PKEY_meth_add0) \
    LFUNC_FA_(TS_TST_INFO_set_tsa) \
    LFUNC_FA_(EVP_PKEY_meth_new) \
    LFUNC_FA_(TS_CONF_set_accuracy) \
    LFUNC_FA_(ASN1_PCTX_set_oid_flags) \
    LFUNC_FA_(ESS_SIGNING_CERT_dup) \
    LFUNC_FA_(d2i_TS_REQ_bio) \
    LFUNC_FA_(X509_time_adj_ex) \
    LFUNC_FA_(TS_RESP_CTX_add_flags) \
    LFUNC_FA_(d2i_TS_STATUS_INFO) \
    LFUNC_FA_(TS_MSG_IMPRINT_set_msg) \
    LFUNC_FA_(BIO_asn1_get_suffix) \
    LFUNC_FA_(TS_REQ_free) \
    LFUNC_FA_(EVP_PKEY_meth_free) \
    LFUNC_FA_(TS_REQ_get_exts) \
    LFUNC_FA_(TS_RESP_CTX_set_clock_precision_digits) \
    LFUNC_FA_(TS_RESP_CTX_add_failure_info) \
    LFUNC_FA_(i2d_TS_RESP_bio) \
    LFUNC_FA_(EVP_PKEY_CTX_get0_peerkey) \
    LFUNC_FA_(TS_REQ_new) \
    LFUNC_FA_(TS_MSG_IMPRINT_new) \
    LFUNC_FA_(EVP_PKEY_meth_find) \
    LFUNC_FA_(EVP_PKEY_id) \
    LFUNC_FA_(TS_TST_INFO_set_serial) \
    LFUNC_FA_(a2i_GENERAL_NAME) \
    LFUNC_FA_(TS_CONF_set_crypto_device) \
    LFUNC_FA_(EVP_PKEY_verify_init) \
    LFUNC_FA_(TS_CONF_set_policies) \
    LFUNC_FA_(ASN1_PCTX_new) \
    LFUNC_FA_(ESS_CERT_ID_free) \
    LFUNC_FA_(TS_MSG_IMPRINT_free) \
    LFUNC_FA_(TS_VERIFY_CTX_init) \
    LFUNC_FA_(PKCS7_stream) \
    LFUNC_FA_(TS_RESP_CTX_set_certs) \
    LFUNC_FA_(TS_CONF_set_def_policy) \
    LFUNC_FA_(ASN1_GENERALIZEDTIME_adj) \
    LFUNC_FA_(NETSCAPE_X509_new) \
    LFUNC_FA_(TS_ACCURACY_free) \
    LFUNC_FA_(TS_RESP_get_tst_info) \
    LFUNC_FA_(EVP_PKEY_derive_set_peer) \
    LFUNC_FA_(PEM_read_bio_Parameters) \
    LFUNC_FA_(TS_CONF_set_clock_precision_digits) \
    LFUNC_FA_(ESS_ISSUER_SERIAL_dup) \
    LFUNC_FA_(TS_ACCURACY_get_micros) \
    LFUNC_FA_(ASN1_PCTX_get_str_flags) \
    LFUNC_FA_(NAME_CONSTRAINTS_check) \
    LFUNC_FA_(ASN1_BIT_STRING_check) \
    LFUNC_FA_(X509_check_akid) \
    LFUNC_FA_(ASN1_PCTX_free) \
    LFUNC_FA_(PEM_write_bio_ASN1_stream) \
    LFUNC_FA_(i2d_ASN1_bio_stream) \
    LFUNC_FA_(TS_X509_ALGOR_print_bio) \
    LFUNC_FA_(EVP_PKEY_meth_set_cleanup) \
    LFUNC_FA_(EVP_PKEY_asn1_free) \
    LFUNC_FA_(ESS_SIGNING_CERT_free) \
    LFUNC_FA_(TS_TST_INFO_set_msg_imprint) \
    LFUNC_FA_(GENERAL_NAME_cmp) \
    LFUNC_FA_(d2i_ASN1_SET_ANY) \
    LFUNC_NULL \
    LFUNC_FA_(d2i_ASN1_SEQUENCE_ANY) \
    LFUNC_FA_(GENERAL_NAME_get0_otherName) \
    LFUNC_FA_(d2i_ESS_CERT_ID) \
    LFUNC_FA_(OBJ_find_sigid_algs) \
    LFUNC_FA_(EVP_PKEY_meth_set_keygen) \
    LFUNC_FA_(PKCS5_PBKDF2_HMAC) \
    LFUNC_FA_(EVP_PKEY_paramgen) \
    LFUNC_FA_(EVP_PKEY_meth_set_paramgen) \
    LFUNC_FA_(BIO_new_PKCS7) \
    LFUNC_FA_(EVP_PKEY_verify_recover) \
    LFUNC_FA_(TS_ext_print_bio) \
    LFUNC_FA_(TS_ASN1_INTEGER_print_bio) \
    LFUNC_FA_(check_defer) \
    LFUNC_FA_(DSO_pathbyaddr) \
    LFUNC_FA_(EVP_PKEY_set_type) \
    LFUNC_FA_(TS_ACCURACY_set_micros) \
    LFUNC_FA_(TS_REQ_to_TS_VERIFY_CTX) \
    LFUNC_FA_(EVP_PKEY_meth_set_copy) \
    LFUNC_FA_(ASN1_PCTX_set_cert_flags) \
    LFUNC_FA_(TS_TST_INFO_get_ext) \
    LFUNC_FA_(EVP_PKEY_asn1_set_ctrl) \
    LFUNC_FA_(TS_TST_INFO_get_ext_by_critical) \
    LFUNC_FA_(EVP_PKEY_CTX_new_id) \
    LFUNC_FA_(TS_REQ_get_ext_by_OBJ) \
    LFUNC_FA_(TS_CONF_set_signer_cert) \
    LFUNC_FA_(X509_NAME_hash_old) \
    LFUNC_FA_(ASN1_TIME_set_string) \
    LFUNC_FA_(EVP_MD_flags) \
    LFUNC_FA_(TS_RESP_CTX_free) \
    LFUNC_FA_(OCSP_REQ_CTX_add1_header) \
    LFUNC_FA_(OCSP_REQ_CTX_set1_req) \
    LFUNC_FA_(X509_STORE_set_verify_cb) \
    LFUNC_FA_(X509_STORE_CTX_get0_current_crl) \
    LFUNC_FA_(X509_STORE_CTX_get0_parent_ctx) \
    LFUNC_FA_(X509_STORE_CTX_get0_current_issuer) \
    LFUNC_FA_(EVP_CIPHER_CTX_copy) \
    LFUNC_FA_(UI_method_get_prompt_constructor) \
    LFUNC_FA_(UI_method_set_prompt_constructor) \
    LFUNC_FA_(EVP_read_pw_string_min) \
    LFUNC_FA_(CRYPTO_cts128_encrypt) \
    LFUNC_FA_(CRYPTO_cts128_decrypt_block) \
    LFUNC_FA_(CRYPTO_cfb128_1_encrypt) \
    LFUNC_FA_(CRYPTO_cbc128_encrypt) \
    LFUNC_FA_(CRYPTO_ctr128_encrypt) \
    LFUNC_FA_(CRYPTO_ofb128_encrypt) \
    LFUNC_FA_(CRYPTO_cts128_decrypt) \
    LFUNC_FA_(CRYPTO_cts128_encrypt_block) \
    LFUNC_FA_(CRYPTO_cbc128_decrypt) \
    LFUNC_FA_(CRYPTO_cfb128_encrypt) \
    LFUNC_FA_(CRYPTO_cfb128_8_encrypt) \
    LFUNC_FA_(OPENSSL_strcasecmp) \
    LFUNC_FA_(OPENSSL_memcmp) \
    LFUNC_FA_(OPENSSL_strncasecmp) \
    LFUNC_FA_(OPENSSL_gmtime) \
    LFUNC_FA_(OPENSSL_gmtime_adj) \
    LFUNC_FA_(EVP_PKEY_meth_get0_info) \
    LFUNC_FA_(EVP_PKEY_meth_copy) \
    LFUNC_FA_(RSA_padding_add_PKCS1_PSS_mgf1) \
    LFUNC_FA_(RSA_verify_PKCS1_PSS_mgf1) \
    LFUNC_FA_(X509_ALGOR_set_md) \
    LFUNC_FA_(CMAC_CTX_copy) \
    LFUNC_FA_(CMAC_CTX_free) \
    LFUNC_FA_(CMAC_CTX_get0_cipher_ctx) \
    LFUNC_FA_(CMAC_CTX_cleanup) \
    LFUNC_FA_(CMAC_Init) \
    LFUNC_FA_(CMAC_Update) \
    LFUNC_FA_(CMAC_resume) \
    LFUNC_FA_(CMAC_CTX_new) \
    LFUNC_FA_(CMAC_Final) \
    LFUNC_FA_(CRYPTO_ctr128_encrypt_ctr32) \
    LFUNC_FA_(CRYPTO_gcm128_release) \
    LFUNC_FA_(CRYPTO_ccm128_decrypt_ccm64) \
    LFUNC_FA_(CRYPTO_ccm128_encrypt) \
    LFUNC_FA_(CRYPTO_gcm128_encrypt) \
    LFUNC_FA_(CRYPTO_xts128_encrypt) \
    LFUNC_FA_(CRYPTO_nistcts128_decrypt_block) \
    LFUNC_FA_(CRYPTO_gcm128_setiv) \
    LFUNC_FA_(CRYPTO_nistcts128_encrypt) \
    LFUNC_FA_(CRYPTO_gcm128_tag) \
    LFUNC_FA_(CRYPTO_ccm128_encrypt_ccm64) \
    LFUNC_FA_(CRYPTO_ccm128_setiv) \
    LFUNC_FA_(CRYPTO_nistcts128_encrypt_block) \
    LFUNC_FA_(CRYPTO_gcm128_aad) \
    LFUNC_FA_(CRYPTO_ccm128_init) \
    LFUNC_FA_(CRYPTO_nistcts128_decrypt) \
    LFUNC_FA_(CRYPTO_gcm128_new) \
    LFUNC_FA_(CRYPTO_ccm128_tag) \
    LFUNC_FA_(CRYPTO_ccm128_decrypt) \
    LFUNC_FA_(CRYPTO_ccm128_aad) \
    LFUNC_FA_(CRYPTO_gcm128_init) \
    LFUNC_FA_(CRYPTO_gcm128_decrypt) \
    LFUNC_FA_(CRYPTO_gcm128_decrypt_ctr32) \
    LFUNC_FA_(CRYPTO_gcm128_encrypt_ctr32) \
    LFUNC_FA_(CRYPTO_gcm128_finish) \
    LFUNC_FA_(PKCS5_pbkdf2_set) \
    LFUNC_FA_(RSA_PSS_PARAMS_new) \
    LFUNC_FA_(d2i_RSA_PSS_PARAMS) \
    LFUNC_FA_(RSA_PSS_PARAMS_free) \
    LFUNC_FA_(i2d_RSA_PSS_PARAMS) \
    LFUNC_FA_(OPENSSL_stderr) \
    LFUNC_VA_(OPENSSL_showfatal) \
    LFUNC_FA_(POLICY_MAPPING_it) \
    LFUNC_FA_(NAME_CONSTRAINTS_it) \
    LFUNC_FA_(ASN1_OCTET_STRING_NDEF_it) \
    LFUNC_FA_(X509_CERT_PAIR_it) \
    LFUNC_FA_(POLICY_CONSTRAINTS_it) \
    LFUNC_FA_(POLICY_MAPPINGS_it) \
    LFUNC_FA_(GENERAL_SUBTREE_it) \
    LFUNC_FA_(X509_EXTENSIONS_it) \
    LFUNC_FA_(X509_ALGORS_it) \
    LFUNC_FA_(CMS_ContentInfo_it) \
    LFUNC_FA_(CMS_ReceiptRequest_it) \
    LFUNC_FA_(ASN1_SEQUENCE_ANY_it) \
    LFUNC_FA_(ASN1_SET_ANY_it) \
    LFUNC_FA_(NETSCAPE_X509_it) \
    LFUNC_FA_(ISSUING_DIST_POINT_it) \
    LFUNC_FA_(RSA_PSS_PARAMS_it) \
    LFUNC_FA_(_shadow_DES_rw_mode) \
    LFUNC_FA_(_shadow_DES_check_key) \
    LFUNC_FA_(ENGINE_load_gost)

/****************************************************************************/

#if defined(__amigaos4__)

struct LibraryHeader * LibInit    (struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec);
BPTR                   LibExpunge (struct LibraryManagerInterface *Self);
struct LibraryHeader * LibOpen    (struct LibraryManagerInterface *Self, ULONG version);
BPTR                   LibClose   (struct LibraryManagerInterface *Self);
LONG                   LibNull    (void);

#define RTF_EXTRA RTF_NATIVE

#elif defined(__MORPHOS__)

struct LibraryHeader * LibInit   (struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb);
BPTR                   LibExpunge(void);
struct LibraryHeader * LibOpen   (void);
BPTR                   LibClose  (void);
LONG                   LibNull   (void);

#define RTF_EXTRA (RTF_EXTENDED | RTF_PPC)

#elif defined(__AROS__)

#include <aros/libcall.h>

#define AmiSSL_LibOpen LibOpen
#define AmiSSL_LibClose LibClose
#define AmiSSL_LibExpunge LibExpunge

AROS_UFP3 (struct LibraryHeader *, LibInit,
                  AROS_UFPA(struct LibraryHeader *, base, D0),
                  AROS_UFPA(BPTR, librarySegment, A0),
                  AROS_UFPA(struct ExecBase *, sb, A6)
);
AROS_LD1 (struct LibraryHeader *, LibOpen,
                 AROS_LPA (UNUSED ULONG, version, D0),
                 struct LibraryHeader *, base, 1, AmiSSL
);
AROS_LD0 (BPTR, LibClose,
                 struct LibraryHeader *, base, 2, AmiSSL
);
AROS_LD1(BPTR, LibExpunge,
                AROS_LPA(UNUSED struct LibraryHeader *, __extrabase, D0),
                struct LibraryHeader *, base, 3, AmiSSL
);

#define RTF_EXTRA RTF_EXTENDED

#else

struct LibraryHeader * LIBFUNC LibInit    (REG(d0, struct LibraryHeader *lh), REG(a0, BPTR Segment), REG(a6, struct ExecBase *sb));
BPTR                   LIBFUNC LibExpunge (REG(a6, struct LibraryHeader *base));
struct LibraryHeader * LIBFUNC LibOpen    (REG(d0, ULONG version), REG(a6, struct LibraryHeader *base));
BPTR                   LIBFUNC LibClose   (REG(a6, struct LibraryHeader *base));
LONG                           LibNull    (void);

#define RTF_EXTRA 0

#endif

/****************************************************************************/

LONG LibNull(VOID)
{
  return(0);
}

/****************************************************************************/

#if defined(__amigaos4__)
/* ------------------- OS4 Manager Interface ------------------------ */
STATIC uint32 _manager_Obtain(struct LibraryManagerInterface *Self)
{
  uint32 res;
  __asm__ __volatile__(
  "1: lwarx  %0,0,%1\n"
  "   addic  %0,%0,1\n"
  "   stwcx. %0,0,%1\n"
  "   bne-   1b"
  : "=&r" (res)
  : "r" (&Self->Data.RefCount)
  : "cc", "memory");

  return res;
}

STATIC uint32 _manager_Release(struct LibraryManagerInterface *Self)
{
  uint32 res;
  __asm__ __volatile__(
  "1: lwarx  %0,0,%1\n"
  "   addic  %0,%0,-1\n"
  "   stwcx. %0,0,%1\n"
  "   bne-   1b"
  : "=&r" (res)
  : "r" (&Self->Data.RefCount)
  : "cc", "memory");

  return res;
}

STATIC CONST_APTR lib_manager_vectors[] =
{
  (CONST_APTR)_manager_Obtain,
  (CONST_APTR)_manager_Release,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)LibOpen,
  (CONST_APTR)LibClose,
  (CONST_APTR)LibExpunge,
  (CONST_APTR)NULL,
  (CONST_APTR)-1
};

STATIC CONST struct TagItem lib_managerTags[] =
{
  { MIT_Name,         (Tag)"__library" },
  { MIT_VectorTable,  (Tag)lib_manager_vectors },
  { MIT_Version,      1 },
  { TAG_DONE,         0 }
};

/* ------------------- Library Interface(s) ------------------------ */

ULONG LibObtain(UNUSED struct Interface *Self)
{
  return 0;
}

ULONG LibRelease(UNUSED struct Interface *Self)
{
  return 0;
}

STATIC CONST_APTR main_vectors[] =
{
  (CONST_APTR)LibObtain,
  (CONST_APTR)LibRelease,
  (CONST_APTR)NULL,
  (CONST_APTR)NULL,
  (CONST_APTR)libvector,
  (CONST_APTR)-1
};

STATIC CONST struct TagItem mainTags[] =
{
  { MIT_Name,         (Tag)"main" },
  { MIT_VectorTable,  (Tag)main_vectors },
  { MIT_Version,      1 },
  { TAG_DONE,         0 }
};

STATIC CONST_APTR libInterfaces[] =
{
  (CONST_APTR)lib_managerTags,
  (CONST_APTR)mainTags,
  (CONST_APTR)NULL
};

// Our libraries always have to carry a 68k jump table with it, so
// lets define it here as extern, as we are going to link it to
// our binary here.
#ifndef NO_VECTABLE68K
extern CONST APTR main_VecTable68K[];
#endif

STATIC CONST struct TagItem libCreateTags[] =
{
  { CLT_DataSize,   sizeof(struct LibraryHeader) },
  { CLT_InitFunc,   (Tag)LibInit },
  { CLT_Interfaces, (Tag)libInterfaces },
  #ifndef NO_VECTABLE68K
  { CLT_Vector68K,  (Tag)main_VecTable68K },
  #endif
  { TAG_DONE,       0 }
};
#define LibInitTab libCreateTags

#else

#if defined(__AROS__)
  #ifdef AROS_ABI_V1
    #define SLIB_ENTRY(FUNC, LIB, NUM) AROS_SLIB_ENTRY(FUNC, LIB, NUM)
  #else
    #define SLIB_ENTRY(FUNC, LIB, NUM) AROS_SLIB_ENTRY(FUNC, LIB)
  #endif
#endif /* __AROS__ */

#ifndef SLIB_ENTRY
  #define SLIB_ENTRY(FUNC, LIB, NUM) FUNC
#endif /* !SLIB_ENTRY */

STATIC FORCED_CONST APTR LibVectors[] =
{
  #ifdef __MORPHOS__
  (APTR)FUNCARRAY_32BIT_NATIVE,
  #endif
  (APTR)SLIB_ENTRY(LibOpen, AmiSSL, 1),
  (APTR)SLIB_ENTRY(LibClose, AmiSSL, 2),
  (APTR)SLIB_ENTRY(LibExpunge, AmiSSL, 3),
  (APTR)LibNull,
  libvector,
  (APTR)-1
};

STATIC FORCED_CONST IPTR LibInitTab[] =
{
  sizeof(struct LibraryHeader),
  (IPTR)LibVectors,
  (IPTR)NULL,
  (IPTR)LibInit
};

#endif

/****************************************************************************/

static FORCED_CONST USED_VAR struct Resident ROMTag =
{
  RTC_MATCHWORD,
  (struct Resident *)&ROMTag,
  (struct Resident *)(&ROMTag + 1),
  RTF_AUTOINIT | RTF_EXTRA,     // The Library should be set up according to the given table.
  LIB_VERSION,
  NT_LIBRARY,
  0,
  (char *)UserLibName,
  (char *)UserLibID+6,          // +6 to skip '$VER: '
  (APTR)LibInitTab,             // This table is for initializing the Library.
  #if defined(__MORPHOS__) || defined(__AROS__)
  LIB_REVISION,
  0
  #endif
};

#if defined(__MORPHOS__)
/*
 * To tell the loader that this is a new emulppc elf and not
 * one for the ppc.library.
 * ** IMPORTANT **
 */
const USED_VAR ULONG __abox__ = 1;

#endif /* __MORPHOS */

/****************************************************************************/

#if defined(MIN_STACKSIZE) && !defined(__amigaos4__)

/* generic StackSwap() function which calls function() surrounded by
   StackSwap() calls */

#if defined(__MORPHOS__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                     ULONG (*function)(struct LibraryHeader *),
                     struct LibraryHeader *arg)
{
   struct PPCStackSwapArgs swapargs;

   swapargs.Args[0] = (ULONG)arg;

   return NewPPCStackSwap(stack, function, &swapargs);
}
#elif defined(__AROS__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                             ULONG (*function)(struct LibraryHeader *),
                             struct LibraryHeader *arg)
{
   struct StackSwapArgs swapargs;

   swapargs.Args[0] = (IPTR)arg;

   return NewStackSwap(stack, function, &swapargs);
}
#elif defined(__amigaos3__)
ULONG stackswap_call(struct StackSwapStruct *stack,
                     ULONG (*function)(struct LibraryHeader *),
                     struct LibraryHeader *arg);

#if 0
asm(".text                       \n\
     .even                       \n\
     .globl _stackswap_call      \n\
   _stackswap_call:              \n\
      moveml d2-d3/a2-a3/a6,sp@- \n\
      movel sp@(24),d3           \n\
      movel sp@(28),a2           \n\
      movel sp@(32),d2           \n\
      movel d2,a3                \n\
      movel a3@(36),a6           \n\
      movel d3,a0                \n\
      jsr a6@(-732:W)            \n\
      movel d2,sp@-              \n\
      jbsr a2@                   \n\
      movel d0,d2                \n\
      addql #4,sp                \n\
      movel a3@(36),a6           \n\
      movel d3,a0                \n\
      jsr a6@(-732:W)            \n\
      movel d2,d0                \n\
      moveml sp@+,d2-d3/a2-a3/a6 \n\
      rts");
#else
asm(".text                    \n\
     .even                    \n\
     .globl _stackswap_call   \n\
   _stackswap_call:           \n\
      moveml #0x3022,sp@-     \n\
      movel sp@(20),d3        \n\
      movel sp@(24),a2        \n\
      movel sp@(28),d2        \n\
      movel a4@(_SysBase:W),a6\n\
      movel d3,a0             \n\
      jsr a6@(-732:W)         \n\
      movel d2,sp@-           \n\
      jbsr a2@                \n\
      movel d0,d2             \n\
      addql #4,sp             \n\
      movel a4@(_SysBase:W),a6\n\
      movel d3,a0             \n\
      jsr a6@(-732:W)         \n\
      movel d2,d0             \n\
      moveml sp@+,#0x440c     \n\
      rts");
#endif
#define stackPtr() ({register unsigned char *sp __asm("sp");sp;})
#else
#error Bogus operating system
#endif

BOOL callLibFunction(ULONG (*function)(struct LibraryHeader *), struct LibraryHeader *arg)
{
  BOOL success = FALSE;
  struct Task *tc;
  ULONG stackleft;

  // retrieve the task structure for the
  // current task
  tc = FindTask(NULL); // retrieve the task structure for the current task

  #if defined(__MORPHOS__)
  ULONG stacksize;
  ULONG stackused;
  // In MorphOS we have two stacks. One for PPC code and another for 68k code.
  // We are only interested in the PPC stack.
  NewGetTaskAttrsA(tc, &stacksize, sizeof(ULONG), TASKINFOTYPE_STACKSIZE, NULL);
  NewGetTaskAttrsA(tc, &stackused, sizeof(ULONG), TASKINFOTYPE_USEDSTACKSIZE, NULL);
  stackleft = stacksize - stackused;
  #elif defined(stackPtr)
  stackleft = stackPtr() - (UBYTE *)tc->tc_SPLower;
  #else
  // on all other systems we query via SPUpper-SPLower calculation
  stackleft = (UBYTE *)tc->tc_SPUpper - (UBYTE *)tc->tc_SPLower;
  #endif

  // Swap stacks only if current stack is insufficient
  if(stackleft < MIN_STACKSIZE)
  {
    struct MyStackSwapStruct {
      struct StackSwapStruct ctrl;
      UBYTE stack[MIN_STACKSIZE];
    } *stack;

    stack = AllocVec(sizeof(*stack), MEMF_PUBLIC);
    if(stack != NULL)
    {
      // perform the StackSwap
      stack->ctrl.stk_Lower = &stack->stack[0];
      stack->ctrl.stk_Pointer = &stack->stack[MIN_STACKSIZE];
      #if defined(__AROS__)
      // AROS uses an APTR type for stk_Upper
      stack->ctrl.stk_Upper = stack->ctrl.stk_Pointer;
      #else
      // all other systems use ULONG
      stack->ctrl.stk_Upper = (ULONG)stack->ctrl.stk_Pointer;
      #endif

      kprintf("call with swapped stack\n");
      // call routine but with embedding it into a [NewPPC]StackSwap()
      success = stackswap_call(&stack->ctrl, function, arg);
      kprintf("done\n");

      FreeVec(stack);
    }
  }
  else
  {
    kprintf("call directly\n");
    success = function(arg);
    kprintf("done\n");
  }

  return success;
}
#else // MIN_STACKSIZE && !__amigaos4__
#define callLibFunction(func, arg) func(arg)
#endif // MIN_STACKSIZE && !__amigaos4__

/****************************************************************************/

#if defined(__amigaos3__)
void __datadata_relocs(void);
void __data_size(void);
void __bss_size(void);
void __a4_init(void);
void _stext(void);
void _etext(void);
void _sdata(void);
void _edata(void);
void _bss_start(void);
void _end(void);

INLINE APTR __GetDataSeg(void)
{
  APTR res;

//__asm volatile ("lea ___a4_init-0x7ffe,%0" : "=a" (res));
//__asm volatile ("movel #___a4_init,%0" : "=a" (res));
//__asm volatile ("subl #32766,%0" : "=a" (res));
//res = (APTR)((ULONG)&__a4_init - 0x7ffeu);
  res = (APTR)&_sdata;

  return res;
}

INLINE ULONG __GetDataSize(void)
{
  ULONG res;

//__asm volatile ("movel #___data_size,%0" : "=r" (res));
//__asm volatile ("subl #__sdata,%0" : "=r" (res));
  res = (ULONG)&_edata - (ULONG)&_sdata;

  return res;
}

INLINE ULONG __GetDataSize2(void)
{
  ULONG res;

//__asm volatile ("movel #___data_size,%0" : "=r" (res));
  res = (ULONG)&__data_size;

  return res;
}

INLINE ULONG __GetDataBSSSize(void)
{
  ULONG res;

//__asm volatile ("movel #___data_size,%0; addl #___bss_size,%0" : "=r" (res));
  res = (ULONG)&__data_size + (ULONG)&__bss_size;

  return res;
}


INLINE APTR __GetBSSSeg(void)
{
  APTR res;

//__asm volatile ("lea ___a4_init,%0" : "=a" (res));
  res = &__a4_init;

  return res;
}

INLINE ULONG __GetBSSSize(void)
{
  ULONG res;

//__asm volatile ("movel #___bss_size,%0" : "=r" (res));
//__asm volatile ("subl #__bss_start,%0" : "=r" (res));
  res = (ULONG)&_end - (ULONG)&_bss_start;

  return res;
}

INLINE APTR __GetA4(void)
{
  APTR res;

  __asm volatile ("movel a4,%0" : "=r" (res));

  return res;
}
#endif // __amigaos3__

#if defined(__amigaos4__)
struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecIFace *pIExec)
{
  struct ExecBase *sb = (struct ExecBase *)pIExec->Data.LibBase;
  IExec = pIExec;
#elif defined(__MORPHOS__)
struct LibraryHeader * LibInit(struct LibraryHeader *base, BPTR librarySegment, struct ExecBase *sb)
{
#elif defined(__AROS__)
AROS_UFH3(struct LibraryHeader *, LibInit,
                 AROS_UFHA(struct LibraryHeader *, base, D0),
                 AROS_UFHA(BPTR, librarySegment, A0),
                 AROS_UFHA(struct ExecBase *, sb, A6)
)
{
  AROS_USERFUNC_INIT
#else
struct LibraryHeader * LIBFUNC LibInit(REG(d0, struct LibraryHeader *base), REG(a0, BPTR librarySegment), REG(a6, struct ExecBase *sb))
{
#endif

  SysBase = (APTR)sb;

  // cleanup the library header structure beginning with the
  // library base.
  base->libBase.lib_Node.ln_Type = NT_LIBRARY;
  base->libBase.lib_Node.ln_Pri  = 0;
  base->libBase.lib_Node.ln_Name = (char *)UserLibName;
  base->libBase.lib_Flags        = LIBF_CHANGED | LIBF_SUMUSED;
  base->libBase.lib_Version      = LIB_VERSION;
  base->libBase.lib_Revision     = LIB_REVISION;
  base->libBase.lib_IdString     = (char *)(UserLibID+6);

  // set some important member variables
  base->sysBase = &sb->LibNode;
  base->segList = librarySegment;

  // if LibInit() is called with librarySegment == 0 then we
  // can skip all the library init stuff and return the base pointer right away.
  if(base->segList != 0)
  {
    kprintf("LIBINIT(%08lx, %08lx, %08lx)\n", base, librarySegment, sb);

    #if defined(__amigaos3__)
    kprintf("data %08lx %ld\n", __GetDataSeg(), __GetDataSize());
    kprintf("bss %08lx %ld\n", __GetBSSSeg(), __GetBSSSize());
    #endif

    // make sure that this is really a 68020+ machine if optimized for 020+
    #if _M68060 || _M68040 || _M68030 || _M68020 || __mc68020 || __mc68030 || __mc68040 || __mc68060
    if((SysBase->AttnFlags & AFF_68020) == 0)
    {
      DeleteLibrary(&base->libBase);
      return(NULL);
    }
    #endif

    #if defined(__amigaos4__) && defined(__NEWLIB__)
    if((NewlibBase = OpenLibrary("newlib.library", 3)) &&
       GETINTERFACE(INewlib, NewlibBase))
    #endif
    {
      BOOL success;

      #if defined(DEBUG)
      // this must be called ahead of any debug output, otherwise we get stuck
      InitDebug();
      #endif
      D(DBF_STARTUP, "LibInit()");

      InitSemaphore(&base->libSem);

      #if defined(__amigaos3__) && defined(__CLIB2__)
      MathIeeeDoubBasBase = OpenLibrary("mathieeedoubbas.library", 37);
      MathIeeeDoubTransBase = OpenLibrary("mathieeedoubtrans.library", 37);
      #endif

      #if defined(MULTIBASE)
      #if defined(__amigaos3__)
      base->parent   = base;
      base->dataSeg  = __GetDataSeg();
      base->dataSize = __GetDataBSSSize();
      #endif /* __amigaos3__ */
      #if defined(__amigaos4__)
      if((DOSBase = OpenLibrary("dos.library", 52)))
        IDOS = (struct DOSIFace *)GetInterface(DOSBase, "main", 1, NULL);

      if((base->ElfBase = OpenLibrary("elf.library",52)))
        base->IElf = (struct ElfIFace *)GetInterface(base->ElfBase,"main",1,NULL);

      if(IDOS != NULL && base->IElf != NULL)
      {
        GetSegListInfoTags(base->segList, GSLI_ElfHandle, &base->elfHandle, TAG_DONE);
        if(base->elfHandle && (base->elfHandle = (base->IElf->OpenElfTags)(OET_ElfHandle, base->elfHandle, TAG_DONE)))
        {
          base->parent = base;
          kprintf("OpenElfTags success!\n");
        }
        else
          kprintf("OpenElfTags NO success!\n");
      }
      #endif /* __amigaos4__ */
      #if defined(BASEREL)
      #if defined(__amigaos3__)
      base->a4 = __GetA4();//__GetBSSSeg();
      kprintf("a4 %08lx\n", base->a4);
      #endif /* __amigaos3__ */
      #endif /* BASEREL */
      #endif /* MULTIBASE */

      #if defined(__amigaos3__) && defined(__CLIB2__)
      __MathIeeeDoubBasBase = MathIeeeDoubBasBase;
      __MathIeeeDoubTransBase = MathIeeeDoubTransBase;
      __ctor_math_init();
      #endif

      // set the global base
      #if defined(DEBUG)
      globalBase = base;
      #endif

      // If we are not running on AmigaOS4 (no stackswap required) we go and
      // do an explicit StackSwap() in case the user wants to make sure we
      // have enough stack for his user functions
      #if defined(DEBUG)
      kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
      kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
      kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
      #endif
      success = callLibFunction(initBase, base);
      #if defined(DEBUG)
      kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
      kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
      #endif

      // check if everything worked out fine
      if(success != FALSE)
      {
        // everything was successfully so lets
        // set the initialized value and contiue
        // with the class open phase
        kprintf("success: %08lx\n", base);

        #if defined(__amigaos3__) && 0
        kprintf(".data size %ld %08lx %08lx\n", __data_size, __data_size, &__data_size);
        kprintf(".bss size  %ld %08lx %08lx\n", __bss_size, __bss_size, &__bss_size);
        kprintf("dbsize     %ld %08lx\n", __dbsize(), __dbsize());
        kprintf("a4_init    %08lx %08lx\n", __a4_init, &__a4_init);
        kprintf("relocs     %08lx %08lx\n", __datadata_relocs, &__datadata_relocs);
        kprintf("stext      %08lx %08lx\n", _stext, &_stext);
        kprintf("etext      %08lx %08lx\n", _etext, &_etext);
        kprintf("sdata      %08lx %08lx\n", _sdata, &_sdata);
        kprintf("edata      %08lx %08lx\n", _edata, &_edata);
        kprintf("data size  %08lx %ld\n", (char *)&_edata - (char *)&_sdata, (char *)&_edata - (char *)&_sdata);
        #endif

        // return the library base as success
        return base;
      }
      else
        callLibFunction(freeBase, base);

      #if defined(__amigaos3__) && defined(__CLIB2__)
      CloseLibrary(MathIeeeDoubTransBase);
      MathIeeeDoubTransBase = NULL;
      __MathIeeeDoubTransBase = NULL;

      CloseLibrary(MathIeeeDoubBasBase);
      MathIeeeDoubBasBase = NULL;
      __MathIeeeDoubBasBase = NULL;
      #endif

      #if defined(__amigaos4__) && defined(__NEWLIB__)
      if(NewlibBase)
      {
        DROPINTERFACE(INewlib);
        CloseLibrary(NewlibBase);
        NewlibBase = NULL;
      }
      #endif
    }

    kprintf("failure\n");

    DeleteLibrary(&base->libBase);
    return NULL;
  }
  else
  {
    kprintf("segList == NULL, libbase: %08lx\n", base);
    return base;
  }
#ifdef __AROS__
    AROS_USERFUNC_EXIT
#endif
}

/****************************************************************************/

STATIC BPTR LibDelete(struct LibraryHeader *base)
{
  BPTR rc;

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  // remove the library base from exec's lib list in advance
  Remove((struct Node *)base);

  // make sure we have enough stack here
  callLibFunction(freeBase, base);

  #if defined(__amigaos4__) && defined(__NEWLIB__)
  if(NewlibBase)
  {
    DROPINTERFACE(INewlib);
    CloseLibrary(NewlibBase);
    NewlibBase = NULL;
  }
  #endif

  // make sure the system deletes the library as well.
  rc = base->segList;
  DeleteLibrary(&base->libBase);

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  return rc;
}

#if defined(__amigaos4__)
BPTR LibExpunge(struct LibraryManagerInterface *Self)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
BPTR LibExpunge(void)
{
  struct LibraryHeader *base = (struct LibraryHeader*)REG_A6;
#elif defined(__AROS__)
AROS_LH1(BPTR, LibExpunge,
  AROS_LHA(UNUSED struct LibraryHeader *, __extrabase, D0),
  struct LibraryHeader *, base, 3, AmiSSL
)
{
  AROS_LIBFUNC_INIT
#else
BPTR LIBFUNC LibExpunge(REG(a6, struct LibraryHeader *base))
{
#endif
  BPTR rc;
  #if defined(MULTIBASE)
  struct LibraryHeader *child = base;
  base = base->parent;
  #endif

  D(DBF_STARTUP, "LibExpunge(): %ld", base->libBase.lib_OpenCnt);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  // in case our open counter is still > 0, we have
  // to set the late expunge flag and return immediately
  if(base->libBase.lib_OpenCnt
#ifdef MULTIBASE
     || base != child
#endif // MULTIBASE
    )
  {
    base->libBase.lib_Flags |= LIBF_DELEXP;
    rc = 0;
  }
  else
  {
    #if defined(__amigaos4__) && defined(MULTIBASE)
    struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);

    kprintf("AmiSSL: expunge\n");
    LIB___UserLibExpunge((__BASE_OR_IFACE_TYPE)extlib->MainIFace);

    (base->IElf->CloseElfTags)(base->elfHandle, CET_ReClose, TRUE, TAG_DONE);
    DropInterface((struct Interface *)base->IElf);
    CloseLibrary((struct Library *)base->ElfBase);
    #else
    kprintf("AmiSSL: expunge\n");
    LIB___UserLibExpunge((__BASE_OR_IFACE_TYPE)base);
    #endif

    rc = LibDelete(base);
  }
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);

  return rc;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(__amigaos4__)
struct LibraryHeader * LibOpen(struct LibraryManagerInterface *Self, ULONG version UNUSED)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
struct LibraryHeader * LibOpen(void)
{
  struct LibraryHeader *base = (struct LibraryHeader*)REG_A6;
#elif defined(__AROS__)
AROS_LH1(struct LibraryHeader *, LibOpen,
                AROS_LHA(UNUSED ULONG, version, D0),
                struct LibraryHeader *, base, 1, AmiSSL
)
{
  AROS_LIBFUNC_INIT
#else
struct LibraryHeader * LIBFUNC LibOpen(REG(d0, UNUSED ULONG version), REG(a6, struct LibraryHeader *base))
{
#endif
  struct LibraryHeader *res = NULL;
  #if defined(MULTIBASE)
  struct LibraryHeader *child = NULL;
  #endif

  kprintf("LIBOPEN(%ld, %08lx), opencnt: %ld\n", version, base, base->libBase.lib_OpenCnt);

  D(DBF_STARTUP, "LibOpen(): %ld", base->libBase.lib_OpenCnt);
  #if defined(DEBUG)
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
  #endif

  // LibOpen(), LibClose() and LibExpunge() are called while the system is in
  // Forbid() state. That means that these functions should be quick and should
  // not break this Forbid()!! Therefore the open counter should be increased
  // as the very first instruction during LibOpen(), because a ClassOpen()
  // which breaks a Forbid() and another task calling LibExpunge() will cause
  // to expunge this library while it is not yet fully initialized. A crash
  // is unavoidable then. Even the semaphore does not guarantee 100% protection
  // against such a race condition, because waiting for the semaphore to be
  // obtained will effectively break the Forbid()!

  // increase the open counter ahead of anything else
  base->libBase.lib_OpenCnt++;

  // delete the late expunge flag
  base->libBase.lib_Flags &= ~LIBF_DELEXP;

  // protect
  ObtainSemaphore(&base->libSem);

  #if defined(MULTIBASE)
  #if defined(__amigaos4__)
  child = (struct LibraryHeader *)CreateLibrary((struct TagItem *)LibInitTab);
  #else
  child = (struct LibraryHeader *)MakeLibrary((APTR)&LibVectors[0], NULL, NULL, sizeof(*child) + base->dataSize, 0);
  #endif
  kprintf("%s/%ld child %08lx\n", __FUNCTION__, __LINE__, child);

  if(child != NULL)
  {
    #if defined(__amigaos3__)
    unsigned char *dataSeg;
    ULONG *relocs;
    ULONG numRelocs;
    #endif

    child->libBase.lib_OpenCnt++;

    // lets clone the child library header
    child->libBase.lib_Node.ln_Type = NT_LIBRARY;
    child->libBase.lib_Node.ln_Pri  = 0;
    child->libBase.lib_Node.ln_Name = base->libBase.lib_Node.ln_Name;
    child->libBase.lib_Flags        = LIBF_CHANGED | LIBF_SUMUSED;
    child->libBase.lib_Version      = base->libBase.lib_Version;
    child->libBase.lib_Revision     = base->libBase.lib_Revision;
    child->libBase.lib_IdString     = base->libBase.lib_IdString;

    InitSemaphore(&child->libSem);
    child->parent   = base;

    #if defined(__amigaos4__)
    {
      uint32 offset;
      if((child->baserelData = (base->IElf->CopyDataSegment)(base->elfHandle, &offset)))
      {
        struct ExtendedLibrary *extlib;
        kprintf("AmiSSL: Env vector: %08x\n", child->baserelData);

        extlib = (struct ExtendedLibrary *)((ULONG)child + child->libBase.lib_PosSize);
        extlib->MainIFace->Data.EnvironmentVector = child->baserelData + offset;
        kprintf("AmiSSL: Environment vector: %08x\n",extlib->MainIFace->Data.EnvironmentVector);
        if(!LIB___UserLibInit((__BASE_OR_IFACE_TYPE)extlib->MainIFace))
        {
          kprintf("AmiSSL: Returning libBase: %08lx\n", child);
        }
        else
        {
          kprintf("AmiSSL: != 0 returned by __UserLibInit()\n");

          (base->IElf->FreeDataSegmentCopy)(base->elfHandle, child->baserelData);
        }
      }
    }
    #else
    child->dataSize = base->dataSize;
    dataSeg = (unsigned char *)(child + 1);
    CopyMem(base->dataSeg, dataSeg, base->dataSize);
    relocs = &((ULONG *)__datadata_relocs)[1];
    numRelocs = relocs[-1];
    kprintf("relocate %ld offsets\n", numRelocs);
    if(numRelocs != 0)
    {
      ULONG dist = (unsigned char *)base->dataSeg - dataSeg;

      do
      {
        ((ULONG *)dataSeg)[*relocs++] -= dist;
      }
      while(--numRelocs != 0);
    }
    dataSeg += 0x7ffeu;
    child->dataSeg = dataSeg;
    kprintf("Calling __UserLibInit(%08lx)\n", child);
    LIB___UserLibInit((__BASE_OR_IFACE_TYPE)child);
    #endif // !__amigaos4__

    // assume openBase won't fail
    base->libBase.lib_OpenCnt++;

    // make sure we have enough stack here
    callLibFunction(openBase, child);

    res = child;
  }

  base->libBase.lib_OpenCnt--;
  #else // MULTIBASE

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  // make sure we have enough stack here
  callLibFunction(openBase, base);

  res = base;
  #endif // MULTIBASE

  // unprotect
  ReleaseSemaphore(&base->libSem);

  #if defined(DEBUG)
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
  #endif

  return res;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(__amigaos4__)
BPTR LibClose(struct LibraryManagerInterface *Self)
{
  struct LibraryHeader *base = (struct LibraryHeader *)Self->Data.LibBase;
#elif defined(__MORPHOS__)
BPTR LibClose(void)
{
  struct LibraryHeader *base = (struct LibraryHeader *)REG_A6;
#elif defined(__AROS__)
AROS_LH0(BPTR, LibClose,
                struct LibraryHeader *, base, 2, AmiSSL
)
{
  AROS_LIBFUNC_INIT
#else
BPTR LIBFUNC LibClose(REG(a6, struct LibraryHeader *base))
{
#endif
  BPTR rc = 0;

  D(DBF_STARTUP, "LibClose(): %ld", base->libBase.lib_OpenCnt);
  #if defined(DEBUG)
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
  #endif

  // free all our private data and stuff.
  ObtainSemaphore(&base->libSem);

  // make sure we have enough stack here
  callLibFunction(closeBase, base);

  // unprotect
  ReleaseSemaphore(&base->libSem);

  // decrease the open counter
  base->libBase.lib_OpenCnt--;

  // in case the open counter is == 0 we can
  // make sure that we free everything
  if(base->libBase.lib_OpenCnt == 0)
  {
    #ifdef MULTIBASE
    struct LibraryHeader *parent = base->parent;
    BOOL exp_lib = (base->libBase.lib_Flags & LIBF_DELEXP) != 0 ? 1 : 0;

    /* release child base */
    #if !defined(__amigaos4__)
    FreeMem((UBYTE *)base-base->libBase.lib_NegSize, base->libBase.lib_NegSize+sizeof(*base)+base->dataSize);
    #endif

    parent->libBase.lib_OpenCnt--;
    if(exp_lib)
    {
      if(parent->libBase.lib_OpenCnt == 0)
      {
        #if defined(__amigaos4__)
        struct ExtendedLibrary *extlib = (struct ExtendedLibrary *)((ULONG)base + base->libBase.lib_PosSize);

        LIB___UserLibCleanup((__BASE_OR_IFACE_TYPE)extlib->MainIFace);
        (parent->IElf->FreeDataSegmentCopy)(parent->elfHandle, base->baserelData);
        base->baserelData = NULL;
        #else

        LIB___UserLibCleanup((__BASE_OR_IFACE_TYPE)base);

        #endif

        rc = LibDelete(parent);
      }
      else
      {
        parent->libBase.lib_Flags |= LIBF_DELEXP;
      }
    }
    #else

    // in case the late expunge flag is set we go and
    // expunge the library base right now
    if((base->libBase.lib_Flags & LIBF_DELEXP) != 0)
      rc = LibDelete(base);

    #endif
  }

  #if defined(DEBUG)
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
  #endif

  return rc;
#ifdef __AROS__
  AROS_LIBFUNC_EXIT
#endif
}

/****************************************************************************/

#if defined(BASEREL)
#if defined(__amigaos4__)
void __baserel_get_addr(struct Interface *self);

asm (" \n\
  .text               \n\
  .globl __baserel_get_addr    \n\
__baserel_get_addr:    \n\
  lwz     2,48(3) /* Fetch EnvironmentVector from struct Interface * */  \n\
  blr    \n\
");
#endif /* __amigaos4__ */
#endif /* BASEREL */
