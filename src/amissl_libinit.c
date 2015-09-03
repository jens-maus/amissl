#include <exec/execbase.h>
#include <exec/semaphores.h>
#include <exec/resident.h>
#include <proto/exec.h>

#if defined(__amigaos4__)
#include <proto/elf.h>
#include <proto/dos.h>
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

struct LibraryHeader *globalBase = NULL;

#define LIBNAME        "amissl_v" MKSTR(VERSIONNAME) ".library"
#define LIB_VERSION    VERSION
#define LIB_REVISION   AMISSLREVISION
#define LIB_REV_STRING "$VER: " LIBNAME " " MKSTR(VERSION) "." MKSTR(AMISSLREVISION) " (" MKSTR(AMISSLDATE) ") " MKSTR(LIBCPU) " version\r\n"

static const char UserLibName[] = LIBNAME;
static const char UserLibID[]   = LIB_REV_STRING;

/****************************************************************************/

#define libvector LFUNC_FAS(InternalInitAmiSSL) \
	                LFUNC_FA_(InitAmiSSLA) \
	                LFUNC_VA_(InitAmiSSL) \
	                LFUNC_FA_(CleanupAmiSSLA) \
	                LFUNC_VA_(CleanupAmiSSL) \
    , \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    LFUNC(ASN1_TYPE_new), \
    LFUNC(ASN1_TYPE_free), \
    LFUNC(d2i_ASN1_TYPE), \
    LFUNC(i2d_ASN1_TYPE), \
    LFUNC(ASN1_ANY_it), \
    LFUNC(ASN1_TYPE_get), \
    LFUNC(ASN1_TYPE_set), \
    LFUNC(ASN1_OBJECT_new), \
    LFUNC(ASN1_OBJECT_free), \
    LFUNC(i2d_ASN1_OBJECT), \
    LFUNC(c2i_ASN1_OBJECT), \
    LFUNC(d2i_ASN1_OBJECT), \
    LFUNC(ASN1_OBJECT_it), \
    LFUNC(ASN1_STRING_new), \
    LFUNC(ASN1_STRING_free), \
    LFUNC(ASN1_STRING_dup), \
    LFUNC(ASN1_STRING_type_new), \
    LFUNC(ASN1_STRING_cmp), \
    LFUNC(ASN1_STRING_set), \
    LFUNC(ASN1_STRING_length), \
    LFUNC(ASN1_STRING_length_set), \
    LFUNC(ASN1_STRING_type), \
    LFUNC(ASN1_STRING_data), \
    LFUNC(ASN1_BIT_STRING_new), \
    LFUNC(ASN1_BIT_STRING_free), \
    LFUNC(d2i_ASN1_BIT_STRING), \
    LFUNC(i2d_ASN1_BIT_STRING), \
    LFUNC(ASN1_BIT_STRING_it), \
    LFUNC(i2c_ASN1_BIT_STRING), \
    LFUNC(c2i_ASN1_BIT_STRING), \
    LFUNC(ASN1_BIT_STRING_set), \
    LFUNC(ASN1_BIT_STRING_set_bit), \
    LFUNC(ASN1_BIT_STRING_get_bit), \
    LFUNC(ASN1_BIT_STRING_name_print), \
    LFUNC(ASN1_BIT_STRING_num_asc), \
    LFUNC(ASN1_BIT_STRING_set_asc), \
    LFUNC(i2d_ASN1_BOOLEAN), \
    LFUNC(d2i_ASN1_BOOLEAN), \
    LFUNC(ASN1_INTEGER_new), \
    LFUNC(ASN1_INTEGER_free), \
    LFUNC(d2i_ASN1_INTEGER), \
    LFUNC(i2d_ASN1_INTEGER), \
    LFUNC(ASN1_INTEGER_it), \
    LFUNC(i2c_ASN1_INTEGER), \
    LFUNC(c2i_ASN1_INTEGER), \
    LFUNC(d2i_ASN1_UINTEGER), \
    LFUNC(ASN1_INTEGER_dup), \
    LFUNC(ASN1_INTEGER_cmp), \
    LFUNC(ASN1_ENUMERATED_new), \
    LFUNC(ASN1_ENUMERATED_free), \
    LFUNC(d2i_ASN1_ENUMERATED), \
    LFUNC(i2d_ASN1_ENUMERATED), \
    LFUNC(ASN1_ENUMERATED_it), \
    LFUNC(ASN1_UTCTIME_check), \
    LFUNC(ASN1_UTCTIME_set), \
    LFUNC(ASN1_UTCTIME_set_string), \
    LFUNC(ASN1_UTCTIME_cmp_time_t), \
    LFUNC(ASN1_GENERALIZEDTIME_check), \
    LFUNC(ASN1_GENERALIZEDTIME_set), \
    LFUNC(ASN1_GENERALIZEDTIME_set_string), \
    LFUNC(ASN1_OCTET_STRING_new), \
    LFUNC(ASN1_OCTET_STRING_free), \
    LFUNC(d2i_ASN1_OCTET_STRING), \
    LFUNC(i2d_ASN1_OCTET_STRING), \
    LFUNC(ASN1_OCTET_STRING_it), \
    LFUNC(ASN1_OCTET_STRING_dup), \
    LFUNC(ASN1_OCTET_STRING_cmp), \
    LFUNC(ASN1_OCTET_STRING_set), \
    LFUNC(ASN1_VISIBLESTRING_new), \
    LFUNC(ASN1_VISIBLESTRING_free), \
    LFUNC(d2i_ASN1_VISIBLESTRING), \
    LFUNC(i2d_ASN1_VISIBLESTRING), \
    LFUNC(ASN1_VISIBLESTRING_it), \
    LFUNC(ASN1_UNIVERSALSTRING_new), \
    LFUNC(ASN1_UNIVERSALSTRING_free), \
    LFUNC(d2i_ASN1_UNIVERSALSTRING), \
    LFUNC(i2d_ASN1_UNIVERSALSTRING), \
    LFUNC(ASN1_UNIVERSALSTRING_it), \
    LFUNC(ASN1_UTF8STRING_new), \
    LFUNC(ASN1_UTF8STRING_free), \
    LFUNC(d2i_ASN1_UTF8STRING), \
    LFUNC(i2d_ASN1_UTF8STRING), \
    LFUNC(ASN1_UTF8STRING_it), \
    LFUNC(ASN1_NULL_new), \
    LFUNC(ASN1_NULL_free), \
    LFUNC(d2i_ASN1_NULL), \
    LFUNC(i2d_ASN1_NULL), \
    LFUNC(ASN1_NULL_it), \
    LFUNC(ASN1_BMPSTRING_new), \
    LFUNC(ASN1_BMPSTRING_free), \
    LFUNC(d2i_ASN1_BMPSTRING), \
    LFUNC(i2d_ASN1_BMPSTRING), \
    LFUNC(ASN1_BMPSTRING_it), \
    LFUNC(UTF8_getc), \
    LFUNC(UTF8_putc), \
    LFUNC(ASN1_PRINTABLE_new), \
    LFUNC(ASN1_PRINTABLE_free), \
    LFUNC(d2i_ASN1_PRINTABLE), \
    LFUNC(i2d_ASN1_PRINTABLE), \
    LFUNC(ASN1_PRINTABLE_it), \
    LFUNC(DIRECTORYSTRING_new), \
    LFUNC(DIRECTORYSTRING_free), \
    LFUNC(d2i_DIRECTORYSTRING), \
    LFUNC(i2d_DIRECTORYSTRING), \
    LFUNC(DIRECTORYSTRING_it), \
    LFUNC(DISPLAYTEXT_new), \
    LFUNC(DISPLAYTEXT_free), \
    LFUNC(d2i_DISPLAYTEXT), \
    LFUNC(i2d_DISPLAYTEXT), \
    LFUNC(DISPLAYTEXT_it), \
    LFUNC(ASN1_PRINTABLESTRING_new), \
    LFUNC(ASN1_PRINTABLESTRING_free), \
    LFUNC(d2i_ASN1_PRINTABLESTRING), \
    LFUNC(i2d_ASN1_PRINTABLESTRING), \
    LFUNC(ASN1_PRINTABLESTRING_it), \
    LFUNC(ASN1_T61STRING_new), \
    LFUNC(ASN1_T61STRING_free), \
    LFUNC(d2i_ASN1_T61STRING), \
    LFUNC(i2d_ASN1_T61STRING), \
    LFUNC(ASN1_T61STRING_it), \
    LFUNC(ASN1_IA5STRING_new), \
    LFUNC(ASN1_IA5STRING_free), \
    LFUNC(d2i_ASN1_IA5STRING), \
    LFUNC(i2d_ASN1_IA5STRING), \
    LFUNC(ASN1_IA5STRING_it), \
    LFUNC(ASN1_GENERALSTRING_new), \
    LFUNC(ASN1_GENERALSTRING_free), \
    LFUNC(d2i_ASN1_GENERALSTRING), \
    LFUNC(i2d_ASN1_GENERALSTRING), \
    LFUNC(ASN1_GENERALSTRING_it), \
    LFUNC(ASN1_UTCTIME_new), \
    LFUNC(ASN1_UTCTIME_free), \
    LFUNC(d2i_ASN1_UTCTIME), \
    LFUNC(i2d_ASN1_UTCTIME), \
    LFUNC(ASN1_UTCTIME_it), \
    LFUNC(ASN1_GENERALIZEDTIME_new), \
    LFUNC(ASN1_GENERALIZEDTIME_free), \
    LFUNC(d2i_ASN1_GENERALIZEDTIME), \
    LFUNC(i2d_ASN1_GENERALIZEDTIME), \
    LFUNC(ASN1_GENERALIZEDTIME_it), \
    LFUNC(ASN1_TIME_new), \
    LFUNC(ASN1_TIME_free), \
    LFUNC(d2i_ASN1_TIME), \
    LFUNC(i2d_ASN1_TIME), \
    LFUNC(ASN1_TIME_it), \
    LFUNC(ASN1_TIME_set), \
    LFUNC(ASN1_TIME_check), \
    LFUNC(ASN1_TIME_to_generalizedtime), \
    LFUNC(i2d_ASN1_SET), \
    LFUNC(d2i_ASN1_SET), \
    LFUNC(i2a_ASN1_INTEGER), \
    LFUNC(a2i_ASN1_INTEGER), \
    LFUNC(i2a_ASN1_ENUMERATED), \
    LFUNC(a2i_ASN1_ENUMERATED), \
    LFUNC(i2a_ASN1_OBJECT), \
    LFUNC(a2i_ASN1_STRING), \
    LFUNC(i2a_ASN1_STRING), \
    LFUNC(i2t_ASN1_OBJECT), \
    LFUNC(a2d_ASN1_OBJECT), \
    LFUNC(ASN1_OBJECT_create), \
    LFUNC(ASN1_INTEGER_set), \
    LFUNC(ASN1_INTEGER_get), \
    LFUNC(BN_to_ASN1_INTEGER), \
    LFUNC(ASN1_INTEGER_to_BN), \
    LFUNC(ASN1_ENUMERATED_set), \
    LFUNC(ASN1_ENUMERATED_get), \
    LFUNC(BN_to_ASN1_ENUMERATED), \
    LFUNC(ASN1_ENUMERATED_to_BN), \
    LFUNC(ASN1_PRINTABLE_type), \
    LFUNC(i2d_ASN1_bytes), \
    LFUNC(d2i_ASN1_bytes), \
    LFUNC(ASN1_tag2bit), \
    LFUNC(d2i_ASN1_type_bytes), \
    LFUNC(asn1_Finish), \
    LFUNC(ASN1_get_object), \
    LFUNC(ASN1_check_infinite_end), \
    LFUNC(ASN1_put_object), \
    LFUNC(ASN1_object_size), \
    LFUNC(ASN1_dup), \
    LFUNC(ASN1_item_dup), \
    LFUNC(ASN1_STRING_to_UTF8), \
    LFUNC(ASN1_d2i_bio), \
    LFUNC(ASN1_item_d2i_bio), \
    LFUNC(ASN1_i2d_bio), \
    LFUNC(ASN1_item_i2d_bio), \
    LFUNC(ASN1_UTCTIME_print), \
    LFUNC(ASN1_GENERALIZEDTIME_print), \
    LFUNC(ASN1_TIME_print), \
    LFUNC(ASN1_STRING_print), \
    LFUNC(ASN1_STRING_print_ex), \
    LFUNC(ASN1_parse), \
    LFUNC(ASN1_parse_dump), \
    LFUNC(ASN1_tag2str), \
    LFUNC(ASN1_UNIVERSALSTRING_to_string), \
    LFUNC(ASN1_TYPE_set_octetstring), \
    LFUNC(ASN1_TYPE_get_octetstring), \
    LFUNC(ASN1_TYPE_set_int_octetstring), \
    LFUNC(ASN1_TYPE_get_int_octetstring), \
    LFUNC(ASN1_seq_unpack), \
    LFUNC(ASN1_seq_pack), \
    LFUNC(ASN1_unpack_string), \
    LFUNC(ASN1_item_unpack), \
    LFUNC(ASN1_pack_string), \
    LFUNC(ASN1_item_pack), \
    LFUNC(ASN1_STRING_set_default_mask), \
    LFUNC(ASN1_STRING_set_default_mask_asc), \
    LFUNC(ASN1_STRING_get_default_mask), \
    LFUNC(ASN1_mbstring_copy), \
    LFUNC(ASN1_mbstring_ncopy), \
    LFUNC(ASN1_STRING_set_by_NID), \
    LFUNC(ASN1_STRING_TABLE_get), \
    LFUNC(ASN1_STRING_TABLE_add), \
    LFUNC(ASN1_STRING_TABLE_cleanup), \
    LFUNC(ASN1_item_new), \
    LFUNC(ASN1_item_free), \
    LFUNC(ASN1_item_d2i), \
    LFUNC(ASN1_item_i2d), \
    LFUNC(ASN1_add_oid_module), \
    LFUNC(ERR_load_ASN1_strings), \
    LFUNC(asn1_GetSequence), \
    LFUNC(asn1_add_error), \
    LFUNC(ASN1_BOOLEAN_it), \
    LFUNC(ASN1_TBOOLEAN_it), \
    LFUNC(ASN1_FBOOLEAN_it), \
    LFUNC(ASN1_SEQUENCE_it), \
    LFUNC(CBIGNUM_it), \
    LFUNC(BIGNUM_it), \
    LFUNC(LONG_it), \
    LFUNC(ZLONG_it), \
    LFUNC(ASN1_item_ex_new), \
    LFUNC(ASN1_item_ex_free), \
    LFUNC(ASN1_template_new), \
    LFUNC(ASN1_primitive_new), \
    LFUNC(ASN1_template_free), \
    LFUNC(ASN1_template_d2i), \
    LFUNC(ASN1_item_ex_d2i), \
    LFUNC(ASN1_item_ex_i2d), \
    LFUNC(ASN1_template_i2d), \
    LFUNC(ASN1_primitive_free), \
    LFUNC(asn1_ex_i2c), \
    LFUNC(asn1_ex_c2i), \
    LFUNC(asn1_get_choice_selector), \
    LFUNC(asn1_set_choice_selector), \
    LFUNC(asn1_get_field_ptr), \
    LFUNC(asn1_do_adb), \
    LFUNC(asn1_do_lock), \
    LFUNC(asn1_enc_init), \
    LFUNC(asn1_enc_free), \
    LFUNC(asn1_enc_restore), \
    LFUNC(asn1_enc_save), \
    LFUNC(BIO_ctrl_pending), \
    LFUNC(BIO_ctrl_wpending), \
    LFUNC(BIO_ctrl_get_write_guarantee), \
    LFUNC(BIO_ctrl_get_read_request), \
    LFUNC(BIO_ctrl_reset_read_request), \
    LFUNC(BIO_set_ex_data), \
    LFUNC(BIO_get_ex_data), \
    LFUNC(BIO_get_ex_new_index), \
    LFUNC(BIO_number_read), \
    LFUNC(BIO_number_written), \
    LFUNC(BIO_s_file), \
    LFUNC(BIO_new_file), \
    LFUNC(BIO_new_fp_amiga), \
    LFUNC(BIO_new), \
    LFUNC(BIO_set), \
    LFUNC(BIO_free), \
    LFUNC(BIO_vfree), \
    LFUNC(BIO_read), \
    LFUNC(BIO_gets), \
    LFUNC(BIO_write), \
    LFUNC(BIO_puts), \
    LFUNC(BIO_indent), \
    LFUNC(BIO_ctrl), \
    LFUNC(BIO_callback_ctrl), \
    LFUNC(BIO_ptr_ctrl), \
    LFUNC(BIO_int_ctrl), \
    LFUNC(BIO_push), \
    LFUNC(BIO_pop), \
    LFUNC(BIO_free_all), \
    LFUNC(BIO_find_type), \
    LFUNC(BIO_next), \
    LFUNC(BIO_get_retry_BIO), \
    LFUNC(BIO_get_retry_reason), \
    LFUNC(BIO_dup_chain), \
    LFUNC(BIO_nread0), \
    LFUNC(BIO_nread), \
    LFUNC(BIO_nwrite0), \
    LFUNC(BIO_nwrite), \
    LFUNC(BIO_debug_callback), \
    LFUNC(BIO_s_mem), \
    LFUNC(BIO_new_mem_buf), \
    LFUNC(BIO_s_socket), \
    LFUNC(BIO_s_connect), \
    LFUNC(BIO_s_accept), \
    LFUNC(BIO_s_fd), \
    LFUNC(BIO_s_log), \
    LFUNC(BIO_s_bio), \
    LFUNC(BIO_s_null), \
    LFUNC(BIO_f_null), \
    LFUNC(BIO_f_buffer), \
    LFUNC(BIO_f_nbio_test), \
    LFUNC(BIO_sock_should_retry), \
    LFUNC(BIO_sock_non_fatal_error), \
    LFUNC(BIO_fd_should_retry), \
    LFUNC(BIO_fd_non_fatal_error), \
    LFUNC(BIO_dump), \
    LFUNC(BIO_dump_indent), \
    LFUNC(BIO_gethostbyname), \
    LFUNC(BIO_sock_error), \
    LFUNC(BIO_socket_ioctl), \
    LFUNC(BIO_socket_nbio), \
    LFUNC(BIO_get_port), \
    LFUNC(BIO_get_host_ip), \
    LFUNC(BIO_get_accept_socket), \
    LFUNC(BIO_accept), \
    LFUNC(BIO_sock_init), \
    LFUNC(BIO_sock_cleanup), \
    LFUNC(BIO_set_tcp_ndelay), \
    LFUNC(BIO_new_socket), \
    LFUNC(BIO_new_fd), \
    LFUNC(BIO_new_connect), \
    LFUNC(BIO_new_accept), \
    LFUNC(BIO_new_bio_pair), \
    LFUNC(BIO_copy_next_retry), \
    LFUNC(BIO_vprintf), \
    LFUNC(BIO_vsnprintf), \
    LFUNC(ERR_load_BIO_strings), \
    LFUNC(BN_value_one), \
    LFUNC(BN_options), \
    LFUNC(BN_CTX_new), \
    LFUNC(BN_CTX_init), \
    LFUNC(BN_CTX_free), \
    LFUNC(BN_CTX_start), \
    LFUNC(BN_CTX_get), \
    LFUNC(BN_CTX_end), \
    LFUNC(BN_rand), \
    LFUNC(BN_pseudo_rand), \
    LFUNC(BN_rand_range), \
    LFUNC(BN_pseudo_rand_range), \
    LFUNC(BN_num_bits), \
    LFUNC(BN_num_bits_word), \
    LFUNC(BN_new), \
    LFUNC(BN_init), \
    LFUNC(BN_clear_free), \
    LFUNC(BN_copy), \
    LFUNC(BN_swap), \
    LFUNC(BN_bin2bn), \
    LFUNC(BN_bn2bin), \
    LFUNC(BN_mpi2bn), \
    LFUNC(BN_bn2mpi), \
    LFUNC(BN_sub), \
    LFUNC(BN_usub), \
    LFUNC(BN_uadd), \
    LFUNC(BN_add), \
    LFUNC(BN_mul), \
    LFUNC(BN_sqr), \
    LFUNC(BN_div), \
    LFUNC(BN_nnmod), \
    LFUNC(BN_mod_add), \
    LFUNC(BN_mod_add_quick), \
    LFUNC(BN_mod_sub), \
    LFUNC(BN_mod_sub_quick), \
    LFUNC(BN_mod_mul), \
    LFUNC(BN_mod_sqr), \
    LFUNC(BN_mod_lshift1), \
    LFUNC(BN_mod_lshift1_quick), \
    LFUNC(BN_mod_lshift), \
    LFUNC(BN_mod_lshift_quick), \
    LFUNC(BN_mod_word), \
    LFUNC(BN_div_word), \
    LFUNC(BN_mul_word), \
    LFUNC(BN_add_word), \
    LFUNC(BN_sub_word), \
    LFUNC(BN_set_word), \
    LFUNC(BN_get_word), \
    LFUNC(BN_cmp), \
    LFUNC(BN_free), \
    LFUNC(BN_is_bit_set), \
    LFUNC(BN_lshift), \
    LFUNC(BN_lshift1), \
    LFUNC(BN_exp), \
    LFUNC(BN_mod_exp), \
    LFUNC(BN_mod_exp_mont), \
    LFUNC(BN_mod_exp_mont_word), \
    LFUNC(BN_mod_exp2_mont), \
    LFUNC(BN_mod_exp_simple), \
    LFUNC(BN_mask_bits), \
    LFUNC(BN_print), \
    LFUNC(BN_reciprocal), \
    LFUNC(BN_rshift), \
    LFUNC(BN_rshift1), \
    LFUNC(BN_clear), \
    LFUNC(BN_dup), \
    LFUNC(BN_ucmp), \
    LFUNC(BN_set_bit), \
    LFUNC(BN_clear_bit), \
    LFUNC(BN_bn2hex), \
    LFUNC(BN_bn2dec), \
    LFUNC(BN_hex2bn), \
    LFUNC(BN_dec2bn), \
    LFUNC(BN_gcd), \
    LFUNC(BN_kronecker), \
    LFUNC(BN_mod_inverse), \
    LFUNC(BN_mod_sqrt), \
    LFUNC(BN_generate_prime), \
    LFUNC(BN_is_prime), \
    LFUNC(BN_is_prime_fasttest), \
    LFUNC(BN_MONT_CTX_new), \
    LFUNC(BN_MONT_CTX_init), \
    LFUNC(BN_mod_mul_montgomery), \
    LFUNC(BN_from_montgomery), \
    LFUNC(BN_MONT_CTX_free), \
    LFUNC(BN_MONT_CTX_set), \
    LFUNC(BN_MONT_CTX_copy), \
    LFUNC(BN_BLINDING_new), \
    LFUNC(BN_BLINDING_free), \
    LFUNC(BN_BLINDING_update), \
    LFUNC(BN_BLINDING_convert), \
    LFUNC(BN_BLINDING_invert), \
    LFUNC(BN_set_params), \
    LFUNC(BN_get_params), \
    LFUNC(BN_RECP_CTX_init), \
    LFUNC(BN_RECP_CTX_new), \
    LFUNC(BN_RECP_CTX_free), \
    LFUNC(BN_RECP_CTX_set), \
    LFUNC(BN_mod_mul_reciprocal), \
    LFUNC(BN_mod_exp_recp), \
    LFUNC(BN_div_recp), \
    LFUNC(bn_expand2), \
    LFUNC(bn_dup_expand), \
    LFUNC(bn_mul_add_words), \
    LFUNC(bn_mul_words), \
    LFUNC(bn_sqr_words), \
    LFUNC(bn_div_words), \
    LFUNC(bn_add_words), \
    LFUNC(bn_sub_words), \
    LFUNC(BN_bntest_rand), \
    LFUNC(ERR_load_BN_strings), \
    LFUNC(BUF_MEM_new), \
    LFUNC(BUF_MEM_free), \
    LFUNC(BUF_MEM_grow), \
    LFUNC(BUF_MEM_grow_clean), \
    LFUNC(BUF_strdup), \
    LFUNC(BUF_strlcpy), \
    LFUNC(BUF_strlcat), \
    LFUNC(ERR_load_BUF_strings), \
    LFUNC(COMP_CTX_new), \
    LFUNC(COMP_CTX_free), \
    LFUNC(COMP_compress_block), \
    LFUNC(COMP_expand_block), \
    LFUNC(COMP_rle), \
    LFUNC(COMP_zlib), \
    LFUNC(ERR_load_COMP_strings), \
    LFUNC(CONF_set_default_method), \
    LFUNC(CONF_set_nconf), \
    LFUNC(CONF_load), \
    LFUNC(CONF_load_bio), \
    LFUNC(CONF_get_section), \
    LFUNC(CONF_get_string), \
    LFUNC(CONF_get_number), \
    LFUNC(CONF_free), \
    LFUNC(CONF_dump_bio), \
    LFUNC(OPENSSL_config), \
    LFUNC(OPENSSL_no_config), \
    LFUNC(NCONF_new), \
    LFUNC(NCONF_default), \
    LFUNC(NCONF_WIN32), \
    LFUNC(NCONF_free), \
    LFUNC(NCONF_free_data), \
    LFUNC(NCONF_load), \
    LFUNC(NCONF_load_bio), \
    LFUNC(NCONF_get_section), \
    LFUNC(NCONF_get_string), \
    LFUNC(NCONF_get_number_e), \
    LFUNC(NCONF_dump_bio), \
    LFUNC(CONF_modules_load), \
    LFUNC(CONF_modules_load_file), \
    LFUNC(CONF_modules_unload), \
    LFUNC(CONF_modules_finish), \
    LFUNC(CONF_modules_free), \
    LFUNC(CONF_module_add), \
    LFUNC(CONF_imodule_get_name), \
    LFUNC(CONF_imodule_get_value), \
    LFUNC(CONF_imodule_get_usr_data), \
    LFUNC(CONF_imodule_set_usr_data), \
    LFUNC(CONF_imodule_get_module), \
    LFUNC(CONF_imodule_get_flags), \
    LFUNC(CONF_imodule_set_flags), \
    LFUNC(CONF_module_get_usr_data), \
    LFUNC(CONF_module_set_usr_data), \
    LFUNC(CONF_get1_default_config_file), \
    LFUNC(CONF_parse_list), \
    LFUNC(OPENSSL_load_builtin_modules), \
    LFUNC(ERR_load_CONF_strings), \
    LFUNC(_CONF_new_section), \
    LFUNC(_CONF_get_section), \
    LFUNC(_CONF_get_section_values), \
    LFUNC(_CONF_add_string), \
    LFUNC(_CONF_get_string), \
    LFUNC(_CONF_new_data), \
    LFUNC(_CONF_free_data), \
    LFUNC(CRYPTO_mem_ctrl), \
    LFUNC(CRYPTO_is_mem_check_on), \
    LFUNC(SSLeay_version), \
    LFUNC(SSLeay), \
    LFUNC(OPENSSL_issetugid), \
    LFUNC(CRYPTO_get_ex_data_implementation), \
    LFUNC(CRYPTO_set_ex_data_implementation), \
    LFUNC(CRYPTO_ex_data_new_class), \
    LFUNC(CRYPTO_get_ex_new_index), \
    LFUNC(CRYPTO_new_ex_data), \
    LFUNC(CRYPTO_dup_ex_data), \
    LFUNC(CRYPTO_free_ex_data), \
    LFUNC(CRYPTO_set_ex_data), \
    LFUNC(CRYPTO_get_ex_data), \
    LFUNC(CRYPTO_cleanup_all_ex_data), \
    LFUNC(CRYPTO_get_new_lockid), \
    LFUNC(CRYPTO_num_locks), \
    LFUNC(CRYPTO_lock), \
    LFUNC(CRYPTO_set_locking_callback), \
    LFUNC(CRYPTO_get_locking_callback), \
    LFUNC(CRYPTO_set_add_lock_callback), \
    LFUNC(CRYPTO_get_add_lock_callback), \
    LFUNC(CRYPTO_set_id_callback), \
    LFUNC(CRYPTO_get_id_callback), \
    LFUNC(CRYPTO_thread_id), \
    LFUNC(CRYPTO_get_lock_name), \
    LFUNC(CRYPTO_add_lock), \
    LFUNC(CRYPTO_get_new_dynlockid), \
    LFUNC(CRYPTO_destroy_dynlockid), \
    LFUNC(CRYPTO_get_dynlock_value), \
    LFUNC(CRYPTO_set_dynlock_create_callback), \
    LFUNC(CRYPTO_set_dynlock_lock_callback), \
    LFUNC(CRYPTO_set_dynlock_destroy_callback), \
    LFUNC(CRYPTO_get_dynlock_create_callback), \
    LFUNC(CRYPTO_get_dynlock_lock_callback), \
    LFUNC(CRYPTO_get_dynlock_destroy_callback), \
    LFUNC(CRYPTO_set_mem_functions), \
    LFUNC(CRYPTO_set_locked_mem_functions), \
    LFUNC(CRYPTO_set_mem_ex_functions), \
    LFUNC(CRYPTO_set_locked_mem_ex_functions), \
    LFUNC(CRYPTO_set_mem_debug_functions), \
    LFUNC(CRYPTO_get_mem_functions), \
    LFUNC(CRYPTO_get_locked_mem_functions), \
    LFUNC(CRYPTO_get_mem_ex_functions), \
    LFUNC(CRYPTO_get_locked_mem_ex_functions), \
    LFUNC(CRYPTO_get_mem_debug_functions), \
    LFUNC(CRYPTO_malloc_locked), \
    LFUNC(CRYPTO_free_locked), \
    LFUNC(CRYPTO_malloc), \
    LFUNC(CRYPTO_free), \
    LFUNC(CRYPTO_realloc), \
    LFUNC(CRYPTO_realloc_clean), \
    LFUNC(CRYPTO_remalloc), \
    LFUNC(OPENSSL_cleanse), \
    LFUNC(CRYPTO_set_mem_debug_options), \
    LFUNC(CRYPTO_get_mem_debug_options), \
    LFUNC(CRYPTO_push_info_), \
    LFUNC(CRYPTO_pop_info), \
    LFUNC(CRYPTO_remove_all_info), \
    LFUNC(CRYPTO_dbg_malloc), \
    LFUNC(CRYPTO_dbg_realloc), \
    LFUNC(CRYPTO_dbg_free), \
    LFUNC(CRYPTO_dbg_set_options), \
    LFUNC(CRYPTO_dbg_get_options), \
    LFUNC(CRYPTO_mem_leaks), \
    LFUNC(CRYPTO_mem_leaks_cb), \
    LFUNC(OpenSSLDie), \
    LFUNC(ERR_load_CRYPTO_strings), \
    LFUNC(DSO_new), \
    LFUNC(DSO_new_method), \
    LFUNC(DSO_free), \
    LFUNC(DSO_flags), \
    LFUNC(DSO_up_ref), \
    LFUNC(DSO_ctrl), \
    LFUNC(DSO_set_name_converter), \
    LFUNC(DSO_get_filename), \
    LFUNC(DSO_set_filename), \
    LFUNC(DSO_convert_filename), \
    LFUNC(DSO_get_loaded_filename), \
    LFUNC(DSO_set_default_method), \
    LFUNC(DSO_get_default_method), \
    LFUNC(DSO_get_method), \
    LFUNC(DSO_set_method), \
    LFUNC(DSO_load), \
    LFUNC(DSO_bind_var), \
    LFUNC(DSO_bind_func), \
    LFUNC(DSO_METHOD_openssl), \
    LFUNC(DSO_METHOD_null), \
    LFUNC(DSO_METHOD_dlfcn), \
    LFUNC(DSO_METHOD_dl), \
    LFUNC(DSO_METHOD_win32), \
    LFUNC(DSO_METHOD_vms), \
    LFUNC(ERR_load_DSO_strings), \
    LFUNC(EC_GFp_simple_method), \
    LFUNC(EC_GFp_mont_method), \
    LFUNC(EC_GROUP_new), \
    LFUNC(EC_GROUP_free), \
    LFUNC(EC_GROUP_clear_free), \
    LFUNC(EC_GROUP_copy), \
    LFUNC(EC_GROUP_method_of), \
    LFUNC(EC_GROUP_set_curve_GFp), \
    LFUNC(EC_GROUP_get_curve_GFp), \
    LFUNC(EC_GROUP_new_curve_GFp), \
    LFUNC(EC_GROUP_set_generator), \
    LFUNC(EC_GROUP_get0_generator), \
    LFUNC(EC_GROUP_get_order), \
    LFUNC(EC_GROUP_get_cofactor), \
    LFUNC(EC_POINT_new), \
    LFUNC(EC_POINT_free), \
    LFUNC(EC_POINT_clear_free), \
    LFUNC(EC_POINT_copy), \
    LFUNC(EC_POINT_method_of), \
    LFUNC(EC_POINT_set_to_infinity), \
    LFUNC(EC_POINT_set_Jprojective_coordinates_GFp), \
    LFUNC(EC_POINT_get_Jprojective_coordinates_GFp), \
    LFUNC(EC_POINT_set_affine_coordinates_GFp), \
    LFUNC(EC_POINT_get_affine_coordinates_GFp), \
    LFUNC(EC_POINT_set_compressed_coordinates_GFp), \
    LFUNC(EC_POINT_point2oct), \
    LFUNC(EC_POINT_oct2point), \
    LFUNC(EC_POINT_add), \
    LFUNC(EC_POINT_dbl), \
    LFUNC(EC_POINT_invert), \
    LFUNC(EC_POINT_is_at_infinity), \
    LFUNC(EC_POINT_is_on_curve), \
    LFUNC(EC_POINT_cmp), \
    LFUNC(EC_POINT_make_affine), \
    LFUNC(EC_POINTs_make_affine), \
    LFUNC(EC_POINTs_mul), \
    LFUNC(EC_POINT_mul), \
    LFUNC(EC_GROUP_precompute_mult), \
    LFUNC(ERR_load_EC_strings), \
    LFUNC(ERR_put_error), \
    LFUNC(ERR_set_error_data), \
    LFUNC(ERR_get_error), \
    LFUNC(ERR_get_error_line), \
    LFUNC(ERR_get_error_line_data), \
    LFUNC(ERR_peek_error), \
    LFUNC(ERR_peek_error_line), \
    LFUNC(ERR_peek_error_line_data), \
    LFUNC(ERR_peek_last_error), \
    LFUNC(ERR_peek_last_error_line), \
    LFUNC(ERR_peek_last_error_line_data), \
    LFUNC(ERR_clear_error), \
    LFUNC(ERR_error_string), \
    LFUNC(ERR_error_string_n), \
    LFUNC(ERR_lib_error_string), \
    LFUNC(ERR_func_error_string), \
    LFUNC(ERR_reason_error_string), \
    LFUNC(ERR_print_errors_cb), \
    LFUNC(ERR_print_errors), \
    NULL, \
    LFUNC(ERR_load_strings), \
    LFUNC(ERR_unload_strings), \
    LFUNC(ERR_load_ERR_strings), \
    LFUNC(ERR_load_crypto_strings), \
    LFUNC(ERR_free_strings), \
    LFUNC(ERR_remove_state), \
    LFUNC(ERR_get_state), \
    LFUNC(ERR_get_string_table), \
    LFUNC(ERR_get_err_state_table), \
    LFUNC(ERR_release_err_state_table), \
    LFUNC(ERR_get_next_error_library), \
    LFUNC(ERR_get_implementation), \
    LFUNC(ERR_set_implementation), \
    LFUNC(EVP_MD_CTX_init), \
    LFUNC(EVP_MD_CTX_cleanup), \
    LFUNC(EVP_MD_CTX_create), \
    LFUNC(EVP_MD_CTX_destroy), \
    LFUNC(EVP_MD_CTX_copy_ex), \
    LFUNC(EVP_DigestInit_ex), \
    LFUNC(EVP_DigestUpdate), \
    LFUNC(EVP_DigestFinal_ex), \
    LFUNC(EVP_Digest), \
    LFUNC(EVP_MD_CTX_copy), \
    LFUNC(EVP_DigestInit), \
    LFUNC(EVP_DigestFinal), \
    LFUNC(EVP_read_pw_string), \
    LFUNC(EVP_set_pw_prompt), \
    LFUNC(EVP_get_pw_prompt), \
    LFUNC(EVP_BytesToKey), \
    LFUNC(EVP_EncryptInit), \
    LFUNC(EVP_EncryptInit_ex), \
    LFUNC(EVP_EncryptUpdate), \
    LFUNC(EVP_EncryptFinal_ex), \
    LFUNC(EVP_EncryptFinal), \
    LFUNC(EVP_DecryptInit), \
    LFUNC(EVP_DecryptInit_ex), \
    LFUNC(EVP_DecryptUpdate), \
    LFUNC(EVP_DecryptFinal), \
    LFUNC(EVP_DecryptFinal_ex), \
    LFUNC(EVP_CipherInit), \
    LFUNC(EVP_CipherInit_ex), \
    LFUNC(EVP_CipherUpdate), \
    LFUNC(EVP_CipherFinal), \
    LFUNC(EVP_CipherFinal_ex), \
    LFUNC(EVP_SignFinal), \
    LFUNC(EVP_VerifyFinal), \
    LFUNC(EVP_OpenInit), \
    LFUNC(EVP_OpenFinal), \
    LFUNC(EVP_SealInit), \
    LFUNC(EVP_SealFinal), \
    LFUNC(EVP_EncodeInit), \
    LFUNC(EVP_EncodeUpdate), \
    LFUNC(EVP_EncodeFinal), \
    LFUNC(EVP_EncodeBlock), \
    LFUNC(EVP_DecodeInit), \
    LFUNC(EVP_DecodeUpdate), \
    LFUNC(EVP_DecodeFinal), \
    LFUNC(EVP_DecodeBlock), \
    LFUNC(EVP_CIPHER_CTX_init), \
    LFUNC(EVP_CIPHER_CTX_cleanup), \
    LFUNC(EVP_CIPHER_CTX_set_key_length), \
    LFUNC(EVP_CIPHER_CTX_set_padding), \
    LFUNC(EVP_CIPHER_CTX_ctrl), \
    LFUNC(BIO_f_md), \
    LFUNC(BIO_f_base64), \
    LFUNC(BIO_f_cipher), \
    LFUNC(BIO_f_reliable), \
    LFUNC(BIO_set_cipher), \
    LFUNC(EVP_md_null), \
    LFUNC(EVP_md2), \
    LFUNC(EVP_md4), \
    LFUNC(EVP_md5), \
    LFUNC(EVP_sha), \
    LFUNC(EVP_sha1), \
    LFUNC(EVP_dss), \
    LFUNC(EVP_dss1), \
    LFUNC(EVP_mdc2), \
    LFUNC(EVP_ripemd160), \
    LFUNC(EVP_enc_null), \
    LFUNC(EVP_des_ecb), \
    LFUNC(EVP_des_ede), \
    LFUNC(EVP_des_ede3), \
    LFUNC(EVP_des_ede_ecb), \
    LFUNC(EVP_des_ede3_ecb), \
    LFUNC(EVP_des_cfb64), \
    LFUNC(EVP_des_cfb1), \
    LFUNC(EVP_des_cfb8), \
    LFUNC(EVP_des_ede_cfb64), \
    LFUNC(EVP_des_ede3_cfb64), \
    LFUNC(EVP_des_ede3_cfb1), \
    LFUNC(EVP_des_ede3_cfb8), \
    LFUNC(EVP_des_ofb), \
    LFUNC(EVP_des_ede_ofb), \
    LFUNC(EVP_des_ede3_ofb), \
    LFUNC(EVP_des_cbc), \
    LFUNC(EVP_des_ede_cbc), \
    LFUNC(EVP_des_ede3_cbc), \
    LFUNC(EVP_desx_cbc), \
    LFUNC(EVP_rc4), \
    LFUNC(EVP_rc4_40), \
    LFUNC(EVP_idea_ecb), \
    LFUNC(EVP_idea_cfb64), \
    LFUNC(EVP_idea_ofb), \
    LFUNC(EVP_idea_cbc), \
    LFUNC(EVP_rc2_ecb), \
    LFUNC(EVP_rc2_cbc), \
    LFUNC(EVP_rc2_40_cbc), \
    LFUNC(EVP_rc2_64_cbc), \
    LFUNC(EVP_rc2_cfb64), \
    LFUNC(EVP_rc2_ofb), \
    LFUNC(EVP_bf_ecb), \
    LFUNC(EVP_bf_cbc), \
    LFUNC(EVP_bf_cfb64), \
    LFUNC(EVP_bf_ofb), \
    LFUNC(EVP_cast5_ecb), \
    LFUNC(EVP_cast5_cbc), \
    LFUNC(EVP_cast5_cfb64), \
    LFUNC(EVP_cast5_ofb), \
    LFUNC(EVP_rc5_32_12_16_cbc), \
    LFUNC(EVP_rc5_32_12_16_ecb), \
    LFUNC(EVP_rc5_32_12_16_cfb64), \
    LFUNC(EVP_rc5_32_12_16_ofb), \
    LFUNC(EVP_aes_128_ecb), \
    LFUNC(EVP_aes_128_cbc), \
    LFUNC(EVP_aes_128_cfb1), \
    LFUNC(EVP_aes_128_cfb8), \
    LFUNC(EVP_aes_128_cfb128), \
    LFUNC(EVP_aes_128_ofb), \
    LFUNC(EVP_aes_192_ecb), \
    LFUNC(EVP_aes_192_cbc), \
    LFUNC(EVP_aes_192_cfb1), \
    LFUNC(EVP_aes_192_cfb8), \
    LFUNC(EVP_aes_192_cfb128), \
    LFUNC(EVP_aes_192_ofb), \
    LFUNC(EVP_aes_256_ecb), \
    LFUNC(EVP_aes_256_cbc), \
    LFUNC(EVP_aes_256_cfb1), \
    LFUNC(EVP_aes_256_cfb8), \
    LFUNC(EVP_aes_256_cfb128), \
    LFUNC(EVP_aes_256_ofb), \
    LFUNC(OPENSSL_add_all_algorithms_noconf), \
    LFUNC(OPENSSL_add_all_algorithms_conf), \
    LFUNC(OpenSSL_add_all_ciphers), \
    LFUNC(OpenSSL_add_all_digests), \
    LFUNC(EVP_add_cipher), \
    LFUNC(EVP_add_digest), \
    LFUNC(EVP_get_cipherbyname), \
    LFUNC(EVP_get_digestbyname), \
    LFUNC(EVP_cleanup), \
    LFUNC(EVP_PKEY_decrypt), \
    LFUNC(EVP_PKEY_encrypt), \
    LFUNC(EVP_PKEY_type), \
    LFUNC(EVP_PKEY_bits), \
    LFUNC(EVP_PKEY_size), \
    LFUNC(EVP_PKEY_assign), \
    LFUNC(EVP_PKEY_set1_RSA), \
    LFUNC(EVP_PKEY_get1_RSA), \
    LFUNC(EVP_PKEY_set1_DSA), \
    LFUNC(EVP_PKEY_get1_DSA), \
    LFUNC(EVP_PKEY_set1_DH), \
    LFUNC(EVP_PKEY_get1_DH), \
    LFUNC(EVP_PKEY_new), \
    LFUNC(EVP_PKEY_free), \
    LFUNC(d2i_PublicKey), \
    LFUNC(i2d_PublicKey), \
    LFUNC(d2i_PrivateKey), \
    LFUNC(d2i_AutoPrivateKey), \
    LFUNC(i2d_PrivateKey), \
    LFUNC(EVP_PKEY_copy_parameters), \
    LFUNC(EVP_PKEY_missing_parameters), \
    LFUNC(EVP_PKEY_save_parameters), \
    LFUNC(EVP_PKEY_cmp_parameters), \
    LFUNC(EVP_CIPHER_type), \
    LFUNC(EVP_CIPHER_param_to_asn1), \
    LFUNC(EVP_CIPHER_asn1_to_param), \
    LFUNC(EVP_CIPHER_set_asn1_iv), \
    LFUNC(EVP_CIPHER_get_asn1_iv), \
    LFUNC(PKCS5_PBE_keyivgen), \
    LFUNC(PKCS5_PBKDF2_HMAC_SHA1), \
    LFUNC(PKCS5_v2_PBE_keyivgen), \
    LFUNC(PKCS5_PBE_add), \
    LFUNC(EVP_PBE_CipherInit), \
    LFUNC(EVP_PBE_alg_add), \
    LFUNC(EVP_PBE_cleanup), \
    LFUNC(ERR_load_EVP_strings), \
    LFUNC(HMAC_CTX_init), \
    LFUNC(HMAC_CTX_cleanup), \
    LFUNC(HMAC_Init), \
    LFUNC(HMAC_Init_ex), \
    LFUNC(HMAC_Update), \
    LFUNC(HMAC_Final), \
    LFUNC(HMAC), \
    LFUNC(KRB5_ENCDATA_new), \
    LFUNC(KRB5_ENCDATA_free), \
    LFUNC(d2i_KRB5_ENCDATA), \
    LFUNC(i2d_KRB5_ENCDATA), \
    LFUNC(KRB5_ENCDATA_it), \
    LFUNC(KRB5_PRINCNAME_new), \
    LFUNC(KRB5_PRINCNAME_free), \
    LFUNC(d2i_KRB5_PRINCNAME), \
    LFUNC(i2d_KRB5_PRINCNAME), \
    LFUNC(KRB5_PRINCNAME_it), \
    LFUNC(KRB5_TKTBODY_new), \
    LFUNC(KRB5_TKTBODY_free), \
    LFUNC(d2i_KRB5_TKTBODY), \
    LFUNC(i2d_KRB5_TKTBODY), \
    LFUNC(KRB5_TKTBODY_it), \
    LFUNC(KRB5_APREQBODY_new), \
    LFUNC(KRB5_APREQBODY_free), \
    LFUNC(d2i_KRB5_APREQBODY), \
    LFUNC(i2d_KRB5_APREQBODY), \
    LFUNC(KRB5_APREQBODY_it), \
    LFUNC(KRB5_TICKET_new), \
    LFUNC(KRB5_TICKET_free), \
    LFUNC(d2i_KRB5_TICKET), \
    LFUNC(i2d_KRB5_TICKET), \
    LFUNC(KRB5_TICKET_it), \
    LFUNC(KRB5_APREQ_new), \
    LFUNC(KRB5_APREQ_free), \
    LFUNC(d2i_KRB5_APREQ), \
    LFUNC(i2d_KRB5_APREQ), \
    LFUNC(KRB5_APREQ_it), \
    LFUNC(KRB5_CHECKSUM_new), \
    LFUNC(KRB5_CHECKSUM_free), \
    LFUNC(d2i_KRB5_CHECKSUM), \
    LFUNC(i2d_KRB5_CHECKSUM), \
    LFUNC(KRB5_CHECKSUM_it), \
    LFUNC(KRB5_ENCKEY_new), \
    LFUNC(KRB5_ENCKEY_free), \
    LFUNC(d2i_KRB5_ENCKEY), \
    LFUNC(i2d_KRB5_ENCKEY), \
    LFUNC(KRB5_ENCKEY_it), \
    LFUNC(KRB5_AUTHDATA_new), \
    LFUNC(KRB5_AUTHDATA_free), \
    LFUNC(d2i_KRB5_AUTHDATA), \
    LFUNC(i2d_KRB5_AUTHDATA), \
    LFUNC(KRB5_AUTHDATA_it), \
    LFUNC(KRB5_AUTHENTBODY_new), \
    LFUNC(KRB5_AUTHENTBODY_free), \
    LFUNC(d2i_KRB5_AUTHENTBODY), \
    LFUNC(i2d_KRB5_AUTHENTBODY), \
    LFUNC(KRB5_AUTHENTBODY_it), \
    LFUNC(KRB5_AUTHENT_new), \
    LFUNC(KRB5_AUTHENT_free), \
    LFUNC(d2i_KRB5_AUTHENT), \
    LFUNC(i2d_KRB5_AUTHENT), \
    LFUNC(KRB5_AUTHENT_it), \
    LFUNC(lh_new), \
    LFUNC(lh_free), \
    LFUNC(lh_insert), \
    LFUNC(lh_delete), \
    LFUNC(lh_retrieve), \
    LFUNC(lh_doall), \
    LFUNC(lh_doall_arg), \
    LFUNC(lh_strhash), \
    LFUNC(lh_num_items), \
    LFUNC(lh_stats_bio), \
    LFUNC(lh_node_stats_bio), \
    LFUNC(lh_node_usage_stats_bio), \
    LFUNC(OBJ_NAME_init), \
    LFUNC(OBJ_NAME_new_index), \
    LFUNC(OBJ_NAME_get), \
    LFUNC(OBJ_NAME_add), \
    LFUNC(OBJ_NAME_remove), \
    LFUNC(OBJ_NAME_cleanup), \
    LFUNC(OBJ_NAME_do_all), \
    LFUNC(OBJ_NAME_do_all_sorted), \
    LFUNC(OBJ_dup), \
    LFUNC(OBJ_nid2obj), \
    LFUNC(OBJ_nid2ln), \
    LFUNC(OBJ_nid2sn), \
    LFUNC(OBJ_obj2nid), \
    LFUNC(OBJ_txt2obj), \
    LFUNC(OBJ_obj2txt), \
    LFUNC(OBJ_txt2nid), \
    LFUNC(OBJ_ln2nid), \
    LFUNC(OBJ_sn2nid), \
    LFUNC(OBJ_cmp), \
    LFUNC(OBJ_new_nid), \
    LFUNC(OBJ_add_object), \
    LFUNC(OBJ_create), \
    LFUNC(OBJ_cleanup), \
    LFUNC(OBJ_create_objects), \
    LFUNC(ERR_load_OBJ_strings), \
    LFUNC(OCSP_sendreq_bio), \
    LFUNC(OCSP_cert_to_id), \
    LFUNC(OCSP_cert_id_new), \
    LFUNC(OCSP_request_add0_id), \
    LFUNC(OCSP_request_add1_nonce), \
    LFUNC(OCSP_basic_add1_nonce), \
    LFUNC(OCSP_check_nonce), \
    LFUNC(OCSP_copy_nonce), \
    LFUNC(OCSP_request_set1_name), \
    LFUNC(OCSP_request_add1_cert), \
    LFUNC(OCSP_request_sign), \
    LFUNC(OCSP_response_status), \
    LFUNC(OCSP_response_get1_basic), \
    LFUNC(OCSP_resp_count), \
    LFUNC(OCSP_resp_get0), \
    LFUNC(OCSP_resp_find), \
    LFUNC(OCSP_single_get0_status), \
    LFUNC(OCSP_resp_find_status), \
    LFUNC(OCSP_check_validity), \
    LFUNC(OCSP_request_verify), \
    LFUNC(OCSP_parse_url), \
    LFUNC(OCSP_id_issuer_cmp), \
    LFUNC(OCSP_id_cmp), \
    LFUNC(OCSP_request_onereq_count), \
    LFUNC(OCSP_request_onereq_get0), \
    LFUNC(OCSP_onereq_get0_id), \
    LFUNC(OCSP_id_get0_info), \
    LFUNC(OCSP_request_is_signed), \
    LFUNC(OCSP_response_create), \
    LFUNC(OCSP_basic_add1_status), \
    LFUNC(OCSP_basic_add1_cert), \
    LFUNC(OCSP_basic_sign), \
    LFUNC(OCSP_crlID_new), \
    LFUNC(OCSP_accept_responses_new), \
    LFUNC(OCSP_archive_cutoff_new), \
    LFUNC(OCSP_url_svcloc_new), \
    LFUNC(OCSP_REQUEST_get_ext_count), \
    LFUNC(OCSP_REQUEST_get_ext_by_NID), \
    LFUNC(OCSP_REQUEST_get_ext_by_OBJ), \
    LFUNC(OCSP_REQUEST_get_ext_by_critical), \
    LFUNC(OCSP_REQUEST_get_ext), \
    LFUNC(OCSP_REQUEST_delete_ext), \
    LFUNC(OCSP_REQUEST_get1_ext_d2i), \
    LFUNC(OCSP_REQUEST_add1_ext_i2d), \
    LFUNC(OCSP_REQUEST_add_ext), \
    LFUNC(OCSP_ONEREQ_get_ext_count), \
    LFUNC(OCSP_ONEREQ_get_ext_by_NID), \
    LFUNC(OCSP_ONEREQ_get_ext_by_OBJ), \
    LFUNC(OCSP_ONEREQ_get_ext_by_critical), \
    LFUNC(OCSP_ONEREQ_get_ext), \
    LFUNC(OCSP_ONEREQ_delete_ext), \
    LFUNC(OCSP_ONEREQ_get1_ext_d2i), \
    LFUNC(OCSP_ONEREQ_add1_ext_i2d), \
    LFUNC(OCSP_ONEREQ_add_ext), \
    LFUNC(OCSP_BASICRESP_get_ext_count), \
    LFUNC(OCSP_BASICRESP_get_ext_by_NID), \
    LFUNC(OCSP_BASICRESP_get_ext_by_OBJ), \
    LFUNC(OCSP_BASICRESP_get_ext_by_critical), \
    LFUNC(OCSP_BASICRESP_get_ext), \
    LFUNC(OCSP_BASICRESP_delete_ext), \
    LFUNC(OCSP_BASICRESP_get1_ext_d2i), \
    LFUNC(OCSP_BASICRESP_add1_ext_i2d), \
    LFUNC(OCSP_BASICRESP_add_ext), \
    LFUNC(OCSP_SINGLERESP_get_ext_count), \
    LFUNC(OCSP_SINGLERESP_get_ext_by_NID), \
    LFUNC(OCSP_SINGLERESP_get_ext_by_OBJ), \
    LFUNC(OCSP_SINGLERESP_get_ext_by_critical), \
    LFUNC(OCSP_SINGLERESP_get_ext), \
    LFUNC(OCSP_SINGLERESP_delete_ext), \
    LFUNC(OCSP_SINGLERESP_get1_ext_d2i), \
    LFUNC(OCSP_SINGLERESP_add1_ext_i2d), \
    LFUNC(OCSP_SINGLERESP_add_ext), \
    LFUNC(OCSP_SINGLERESP_new), \
    LFUNC(OCSP_SINGLERESP_free), \
    LFUNC(d2i_OCSP_SINGLERESP), \
    LFUNC(i2d_OCSP_SINGLERESP), \
    LFUNC(OCSP_SINGLERESP_it), \
    LFUNC(OCSP_CERTSTATUS_new), \
    LFUNC(OCSP_CERTSTATUS_free), \
    LFUNC(d2i_OCSP_CERTSTATUS), \
    LFUNC(i2d_OCSP_CERTSTATUS), \
    LFUNC(OCSP_CERTSTATUS_it), \
    LFUNC(OCSP_REVOKEDINFO_new), \
    LFUNC(OCSP_REVOKEDINFO_free), \
    LFUNC(d2i_OCSP_REVOKEDINFO), \
    LFUNC(i2d_OCSP_REVOKEDINFO), \
    LFUNC(OCSP_REVOKEDINFO_it), \
    LFUNC(OCSP_BASICRESP_new), \
    LFUNC(OCSP_BASICRESP_free), \
    LFUNC(d2i_OCSP_BASICRESP), \
    LFUNC(i2d_OCSP_BASICRESP), \
    LFUNC(OCSP_BASICRESP_it), \
    LFUNC(OCSP_RESPDATA_new), \
    LFUNC(OCSP_RESPDATA_free), \
    LFUNC(d2i_OCSP_RESPDATA), \
    LFUNC(i2d_OCSP_RESPDATA), \
    LFUNC(OCSP_RESPDATA_it), \
    LFUNC(OCSP_RESPID_new), \
    LFUNC(OCSP_RESPID_free), \
    LFUNC(d2i_OCSP_RESPID), \
    LFUNC(i2d_OCSP_RESPID), \
    LFUNC(OCSP_RESPID_it), \
    LFUNC(OCSP_RESPONSE_new), \
    LFUNC(OCSP_RESPONSE_free), \
    LFUNC(d2i_OCSP_RESPONSE), \
    LFUNC(i2d_OCSP_RESPONSE), \
    LFUNC(OCSP_RESPONSE_it), \
    LFUNC(OCSP_RESPBYTES_new), \
    LFUNC(OCSP_RESPBYTES_free), \
    LFUNC(d2i_OCSP_RESPBYTES), \
    LFUNC(i2d_OCSP_RESPBYTES), \
    LFUNC(OCSP_RESPBYTES_it), \
    LFUNC(OCSP_ONEREQ_new), \
    LFUNC(OCSP_ONEREQ_free), \
    LFUNC(d2i_OCSP_ONEREQ), \
    LFUNC(i2d_OCSP_ONEREQ), \
    LFUNC(OCSP_ONEREQ_it), \
    LFUNC(OCSP_CERTID_new), \
    LFUNC(OCSP_CERTID_free), \
    LFUNC(d2i_OCSP_CERTID), \
    LFUNC(i2d_OCSP_CERTID), \
    LFUNC(OCSP_CERTID_it), \
    LFUNC(OCSP_REQUEST_new), \
    LFUNC(OCSP_REQUEST_free), \
    LFUNC(d2i_OCSP_REQUEST), \
    LFUNC(i2d_OCSP_REQUEST), \
    LFUNC(OCSP_REQUEST_it), \
    LFUNC(OCSP_SIGNATURE_new), \
    LFUNC(OCSP_SIGNATURE_free), \
    LFUNC(d2i_OCSP_SIGNATURE), \
    LFUNC(i2d_OCSP_SIGNATURE), \
    LFUNC(OCSP_SIGNATURE_it), \
    LFUNC(OCSP_REQINFO_new), \
    LFUNC(OCSP_REQINFO_free), \
    LFUNC(d2i_OCSP_REQINFO), \
    LFUNC(i2d_OCSP_REQINFO), \
    LFUNC(OCSP_REQINFO_it), \
    LFUNC(OCSP_CRLID_new), \
    LFUNC(OCSP_CRLID_free), \
    LFUNC(d2i_OCSP_CRLID), \
    LFUNC(i2d_OCSP_CRLID), \
    LFUNC(OCSP_CRLID_it), \
    LFUNC(OCSP_SERVICELOC_new), \
    LFUNC(OCSP_SERVICELOC_free), \
    LFUNC(d2i_OCSP_SERVICELOC), \
    LFUNC(i2d_OCSP_SERVICELOC), \
    LFUNC(OCSP_SERVICELOC_it), \
    LFUNC(OCSP_response_status_str), \
    LFUNC(OCSP_cert_status_str), \
    LFUNC(OCSP_crl_reason_str), \
    LFUNC(OCSP_REQUEST_print), \
    LFUNC(OCSP_RESPONSE_print), \
    LFUNC(OCSP_basic_verify), \
    LFUNC(ERR_load_OCSP_strings), \
    LFUNC(PEM_get_EVP_CIPHER_INFO), \
    LFUNC(PEM_do_header), \
    LFUNC(PEM_read_bio), \
    LFUNC(PEM_write_bio), \
    LFUNC(PEM_bytes_read_bio), \
    NULL, \
    LFUNC(PEM_ASN1_read_bio), \
    NULL, \
    LFUNC(PEM_ASN1_write_bio), \
    NULL, \
    LFUNC(PEM_X509_INFO_read_bio), \
    LFUNC(PEM_X509_INFO_write_bio), \
    LFUNC(PEM_SealInit), \
    LFUNC(PEM_SealUpdate), \
    LFUNC(PEM_SealFinal), \
    LFUNC(PEM_SignInit), \
    LFUNC(PEM_SignUpdate), \
    LFUNC(PEM_SignFinal), \
    LFUNC(PEM_def_callback), \
    LFUNC(PEM_proc_type), \
    NULL, \
    LFUNC(PEM_dek_info), \
    LFUNC(PEM_read_bio_X509), \
    LFUNC(PEM_write_bio_X509), \
    LFUNC(PEM_read_bio_X509_AUX), \
    LFUNC(PEM_write_bio_X509_AUX), \
    LFUNC(PEM_read_bio_X509_REQ), \
    NULL, \
    LFUNC(PEM_write_bio_X509_REQ), \
    LFUNC(PEM_write_bio_X509_REQ_NEW), \
    LFUNC(PEM_read_bio_X509_CRL), \
    LFUNC(PEM_write_bio_X509_CRL), \
    LFUNC(PEM_read_bio_PKCS7), \
    LFUNC(PEM_write_bio_PKCS7), \
    LFUNC(PEM_read_bio_NETSCAPE_CERT_SEQUENCE), \
    LFUNC(PEM_write_bio_NETSCAPE_CERT_SEQUENCE), \
    LFUNC(PEM_read_bio_PKCS8), \
    LFUNC(PEM_write_bio_PKCS8), \
    LFUNC(PEM_read_bio_PKCS8_PRIV_KEY_INFO), \
    LFUNC(PEM_write_bio_PKCS8_PRIV_KEY_INFO), \
    LFUNC(PEM_read_bio_RSAPrivateKey), \
    LFUNC(PEM_write_bio_RSAPrivateKey), \
    LFUNC(PEM_read_bio_RSAPublicKey), \
    LFUNC(PEM_write_bio_RSAPublicKey), \
    LFUNC(PEM_read_bio_RSA_PUBKEY), \
    LFUNC(PEM_write_bio_RSA_PUBKEY), \
    LFUNC(PEM_read_bio_DSAPrivateKey), \
    LFUNC(PEM_write_bio_DSAPrivateKey), \
    LFUNC(PEM_read_bio_DSA_PUBKEY), \
    LFUNC(PEM_write_bio_DSA_PUBKEY), \
    LFUNC(PEM_read_bio_DSAparams), \
    LFUNC(PEM_write_bio_DSAparams), \
    LFUNC(PEM_read_bio_DHparams), \
    LFUNC(PEM_write_bio_DHparams), \
    LFUNC(PEM_read_bio_PrivateKey), \
    LFUNC(PEM_write_bio_PrivateKey), \
    LFUNC(PEM_read_bio_PUBKEY), \
    LFUNC(PEM_write_bio_PUBKEY), \
    LFUNC(PEM_write_bio_PKCS8PrivateKey_nid), \
    LFUNC(PEM_write_bio_PKCS8PrivateKey), \
    LFUNC(i2d_PKCS8PrivateKey_bio), \
    LFUNC(i2d_PKCS8PrivateKey_nid_bio), \
    LFUNC(d2i_PKCS8PrivateKey_bio), \
    LFUNC(ERR_load_PEM_strings), \
    LFUNC(PKCS12_x5092certbag), \
    LFUNC(PKCS12_x509crl2certbag), \
    LFUNC(PKCS12_certbag2x509), \
    LFUNC(PKCS12_certbag2x509crl), \
    LFUNC(PKCS12_item_pack_safebag), \
    LFUNC(PKCS12_MAKE_KEYBAG), \
    LFUNC(PKCS8_decrypt), \
    LFUNC(PKCS12_decrypt_skey), \
    LFUNC(PKCS8_encrypt), \
    LFUNC(PKCS12_MAKE_SHKEYBAG), \
    LFUNC(PKCS12_pack_p7data), \
    LFUNC(PKCS12_unpack_p7data), \
    LFUNC(PKCS12_pack_p7encdata), \
    LFUNC(PKCS12_unpack_p7encdata), \
    LFUNC(PKCS12_pack_authsafes), \
    LFUNC(PKCS12_unpack_authsafes), \
    LFUNC(PKCS12_add_localkeyid), \
    LFUNC(PKCS12_add_friendlyname_asc), \
    LFUNC(PKCS12_add_CSPName_asc), \
    LFUNC(PKCS12_add_friendlyname_uni), \
    LFUNC(PKCS8_add_keyusage), \
    LFUNC(PKCS12_get_attr_gen), \
    LFUNC(PKCS12_get_friendlyname), \
    LFUNC(PKCS12_pbe_crypt), \
    LFUNC(PKCS12_item_decrypt_d2i), \
    LFUNC(PKCS12_item_i2d_encrypt), \
    LFUNC(PKCS12_init), \
    LFUNC(PKCS12_key_gen_asc), \
    LFUNC(PKCS12_key_gen_uni), \
    LFUNC(PKCS12_PBE_keyivgen), \
    LFUNC(PKCS12_gen_mac), \
    LFUNC(PKCS12_verify_mac), \
    LFUNC(PKCS12_set_mac), \
    LFUNC(PKCS12_setup_mac), \
    LFUNC(OPENSSL_asc2uni), \
    LFUNC(OPENSSL_uni2asc), \
    LFUNC(PKCS12_new), \
    LFUNC(PKCS12_free), \
    LFUNC(d2i_PKCS12), \
    LFUNC(i2d_PKCS12), \
    LFUNC(PKCS12_it), \
    LFUNC(PKCS12_MAC_DATA_new), \
    LFUNC(PKCS12_MAC_DATA_free), \
    LFUNC(d2i_PKCS12_MAC_DATA), \
    LFUNC(i2d_PKCS12_MAC_DATA), \
    LFUNC(PKCS12_MAC_DATA_it), \
    LFUNC(PKCS12_SAFEBAG_new), \
    LFUNC(PKCS12_SAFEBAG_free), \
    LFUNC(d2i_PKCS12_SAFEBAG), \
    LFUNC(i2d_PKCS12_SAFEBAG), \
    LFUNC(PKCS12_SAFEBAG_it), \
    LFUNC(PKCS12_BAGS_new), \
    LFUNC(PKCS12_BAGS_free), \
    LFUNC(d2i_PKCS12_BAGS), \
    LFUNC(i2d_PKCS12_BAGS), \
    LFUNC(PKCS12_BAGS_it), \
    LFUNC(PKCS12_SAFEBAGS_it), \
    LFUNC(PKCS12_AUTHSAFES_it), \
    LFUNC(PKCS12_PBE_add), \
    LFUNC(PKCS12_parse), \
    LFUNC(PKCS12_create), \
    LFUNC(i2d_PKCS12_bio), \
    LFUNC(d2i_PKCS12_bio), \
    LFUNC(PKCS12_newpass), \
    LFUNC(ERR_load_PKCS12_strings), \
    LFUNC(PKCS7_ISSUER_AND_SERIAL_digest), \
    LFUNC(PKCS7_dup), \
    LFUNC(d2i_PKCS7_bio), \
    LFUNC(i2d_PKCS7_bio), \
    LFUNC(PKCS7_ISSUER_AND_SERIAL_new), \
    LFUNC(PKCS7_ISSUER_AND_SERIAL_free), \
    LFUNC(d2i_PKCS7_ISSUER_AND_SERIAL), \
    LFUNC(i2d_PKCS7_ISSUER_AND_SERIAL), \
    LFUNC(PKCS7_ISSUER_AND_SERIAL_it), \
    LFUNC(PKCS7_SIGNER_INFO_new), \
    LFUNC(PKCS7_SIGNER_INFO_free), \
    LFUNC(d2i_PKCS7_SIGNER_INFO), \
    LFUNC(i2d_PKCS7_SIGNER_INFO), \
    LFUNC(PKCS7_SIGNER_INFO_it), \
    LFUNC(PKCS7_RECIP_INFO_new), \
    LFUNC(PKCS7_RECIP_INFO_free), \
    LFUNC(d2i_PKCS7_RECIP_INFO), \
    LFUNC(i2d_PKCS7_RECIP_INFO), \
    LFUNC(PKCS7_RECIP_INFO_it), \
    LFUNC(PKCS7_SIGNED_new), \
    LFUNC(PKCS7_SIGNED_free), \
    LFUNC(d2i_PKCS7_SIGNED), \
    LFUNC(i2d_PKCS7_SIGNED), \
    LFUNC(PKCS7_SIGNED_it), \
    LFUNC(PKCS7_ENC_CONTENT_new), \
    LFUNC(PKCS7_ENC_CONTENT_free), \
    LFUNC(d2i_PKCS7_ENC_CONTENT), \
    LFUNC(i2d_PKCS7_ENC_CONTENT), \
    LFUNC(PKCS7_ENC_CONTENT_it), \
    LFUNC(PKCS7_ENVELOPE_new), \
    LFUNC(PKCS7_ENVELOPE_free), \
    LFUNC(d2i_PKCS7_ENVELOPE), \
    LFUNC(i2d_PKCS7_ENVELOPE), \
    LFUNC(PKCS7_ENVELOPE_it), \
    LFUNC(PKCS7_SIGN_ENVELOPE_new), \
    LFUNC(PKCS7_SIGN_ENVELOPE_free), \
    LFUNC(d2i_PKCS7_SIGN_ENVELOPE), \
    LFUNC(i2d_PKCS7_SIGN_ENVELOPE), \
    LFUNC(PKCS7_SIGN_ENVELOPE_it), \
    LFUNC(PKCS7_DIGEST_new), \
    LFUNC(PKCS7_DIGEST_free), \
    LFUNC(d2i_PKCS7_DIGEST), \
    LFUNC(i2d_PKCS7_DIGEST), \
    LFUNC(PKCS7_DIGEST_it), \
    LFUNC(PKCS7_ENCRYPT_new), \
    LFUNC(PKCS7_ENCRYPT_free), \
    LFUNC(d2i_PKCS7_ENCRYPT), \
    LFUNC(i2d_PKCS7_ENCRYPT), \
    LFUNC(PKCS7_ENCRYPT_it), \
    LFUNC(PKCS7_new), \
    LFUNC(PKCS7_free), \
    LFUNC(d2i_PKCS7), \
    LFUNC(i2d_PKCS7), \
    LFUNC(PKCS7_it), \
    LFUNC(PKCS7_ATTR_SIGN_it), \
    LFUNC(PKCS7_ATTR_VERIFY_it), \
    LFUNC(PKCS7_ctrl), \
    LFUNC(PKCS7_set_type), \
    LFUNC(PKCS7_set_content), \
    LFUNC(PKCS7_SIGNER_INFO_set), \
    LFUNC(PKCS7_add_signer), \
    LFUNC(PKCS7_add_certificate), \
    LFUNC(PKCS7_add_crl), \
    LFUNC(PKCS7_content_new), \
    LFUNC(PKCS7_dataVerify), \
    LFUNC(PKCS7_signatureVerify), \
    LFUNC(PKCS7_dataInit), \
    LFUNC(PKCS7_dataFinal), \
    LFUNC(PKCS7_dataDecode), \
    LFUNC(PKCS7_add_signature), \
    LFUNC(PKCS7_cert_from_signer_info), \
    LFUNC(PKCS7_get_signer_info), \
    LFUNC(PKCS7_add_recipient), \
    LFUNC(PKCS7_add_recipient_info), \
    LFUNC(PKCS7_RECIP_INFO_set), \
    LFUNC(PKCS7_set_cipher), \
    LFUNC(PKCS7_get_issuer_and_serial), \
    LFUNC(PKCS7_digest_from_attributes), \
    LFUNC(PKCS7_add_signed_attribute), \
    LFUNC(PKCS7_add_attribute), \
    LFUNC(PKCS7_get_attribute), \
    LFUNC(PKCS7_get_signed_attribute), \
    LFUNC(PKCS7_set_signed_attributes), \
    LFUNC(PKCS7_set_attributes), \
    LFUNC(PKCS7_sign), \
    LFUNC(PKCS7_verify), \
    LFUNC(PKCS7_get0_signers), \
    LFUNC(PKCS7_encrypt), \
    LFUNC(PKCS7_decrypt), \
    LFUNC(PKCS7_add_attrib_smimecap), \
    LFUNC(PKCS7_get_smimecap), \
    LFUNC(PKCS7_simple_smimecap), \
    LFUNC(SMIME_write_PKCS7), \
    LFUNC(SMIME_read_PKCS7), \
    LFUNC(SMIME_crlf_copy), \
    LFUNC(SMIME_text), \
    LFUNC(ERR_load_PKCS7_strings), \
    LFUNC(RAND_set_rand_method), \
    LFUNC(RAND_get_rand_method), \
    LFUNC(RAND_SSLeay), \
    LFUNC(RAND_cleanup), \
    LFUNC(RAND_bytes), \
    LFUNC(RAND_pseudo_bytes), \
    LFUNC(RAND_seed), \
    LFUNC(RAND_add), \
    LFUNC(RAND_load_file), \
    LFUNC(RAND_write_file), \
    LFUNC(RAND_file_name), \
    LFUNC(RAND_status), \
    LFUNC(RAND_query_egd_bytes), \
    LFUNC(RAND_egd), \
    LFUNC(RAND_egd_bytes), \
    LFUNC(RAND_poll), \
    LFUNC(ERR_load_RAND_strings), \
    LFUNC(SSL_CTX_set_msg_callback), \
    LFUNC(SSL_set_msg_callback), \
    LFUNC(SSL_CTX_sessions), \
    LFUNC(SSL_get_finished), \
    LFUNC(SSL_get_peer_finished), \
    LFUNC(BIO_f_ssl), \
    LFUNC(BIO_new_ssl), \
    LFUNC(BIO_new_ssl_connect), \
    LFUNC(BIO_new_buffer_ssl_connect), \
    LFUNC(BIO_ssl_copy_session_id), \
    LFUNC(BIO_ssl_shutdown), \
    LFUNC(SSL_CTX_set_cipher_list), \
    LFUNC(SSL_CTX_new), \
    LFUNC(SSL_CTX_free), \
    LFUNC(SSL_CTX_set_timeout), \
    LFUNC(SSL_CTX_get_timeout), \
    LFUNC(SSL_CTX_get_cert_store), \
    LFUNC(SSL_CTX_set_cert_store), \
    LFUNC(SSL_want), \
    LFUNC(SSL_clear), \
    LFUNC(SSL_CTX_flush_sessions), \
    LFUNC(SSL_get_current_cipher), \
    LFUNC(SSL_CIPHER_get_bits), \
    LFUNC(SSL_CIPHER_get_version), \
    LFUNC(SSL_CIPHER_get_name), \
    LFUNC(SSL_CIPHER_get_mac), \
    LFUNC(SSL_CIPHER_get_encryption), \
    LFUNC(SSL_CIPHER_get_authentication), \
    LFUNC(SSL_CIPHER_get_key_exchange), \
    LFUNC(SSL_CIPHER_get_export), \
    LFUNC(SSL_get_fd), \
    LFUNC(SSL_get_rfd), \
    LFUNC(SSL_get_wfd), \
    LFUNC(SSL_get_cipher_list), \
    LFUNC(SSL_get_shared_ciphers), \
    LFUNC(SSL_get_read_ahead), \
    LFUNC(SSL_pending), \
    LFUNC(SSL_set_fd), \
    LFUNC(SSL_set_rfd), \
    LFUNC(SSL_set_wfd), \
    LFUNC(SSL_set_bio), \
    LFUNC(SSL_get_rbio), \
    LFUNC(SSL_get_wbio), \
    LFUNC(SSL_set_cipher_list), \
    LFUNC(SSL_set_read_ahead), \
    LFUNC(SSL_get_verify_mode), \
    LFUNC(SSL_get_verify_depth), \
    LFUNC(SSL_get_verify_callback), \
    LFUNC(SSL_set_verify), \
    LFUNC(SSL_set_verify_depth), \
    LFUNC(SSL_use_RSAPrivateKey), \
    LFUNC(SSL_use_RSAPrivateKey_ASN1), \
    LFUNC(SSL_use_PrivateKey), \
    LFUNC(SSL_use_PrivateKey_ASN1), \
    LFUNC(SSL_use_certificate), \
    LFUNC(SSL_use_certificate_ASN1), \
    LFUNC(SSL_use_RSAPrivateKey_file), \
    LFUNC(SSL_use_PrivateKey_file), \
    LFUNC(SSL_use_certificate_file), \
    LFUNC(SSL_CTX_use_RSAPrivateKey_file), \
    LFUNC(SSL_CTX_use_PrivateKey_file), \
    LFUNC(SSL_CTX_use_certificate_file), \
    LFUNC(SSL_CTX_use_certificate_chain_file), \
    LFUNC(SSL_load_client_CA_file), \
    LFUNC(SSL_add_file_cert_subjects_to_stack), \
    LFUNC(SSL_add_dir_cert_subjects_to_stack), \
    LFUNC(SSL_load_error_strings), \
    LFUNC(SSL_state_string), \
    LFUNC(SSL_rstate_string), \
    LFUNC(SSL_state_string_long), \
    LFUNC(SSL_rstate_string_long), \
    LFUNC(SSL_SESSION_get_time), \
    LFUNC(SSL_SESSION_set_time), \
    LFUNC(SSL_SESSION_get_timeout), \
    LFUNC(SSL_SESSION_set_timeout), \
    LFUNC(SSL_copy_session_id), \
    LFUNC(SSL_SESSION_new), \
    LFUNC(SSL_SESSION_print), \
    NULL, \
    LFUNC(SSL_SESSION_free), \
    LFUNC(i2d_SSL_SESSION), \
    LFUNC(SSL_set_session), \
    LFUNC(SSL_CTX_add_session), \
    LFUNC(SSL_CTX_remove_session), \
    LFUNC(SSL_CTX_set_generate_session_id), \
    LFUNC(SSL_set_generate_session_id), \
    LFUNC(SSL_has_matching_session_id), \
    LFUNC(d2i_SSL_SESSION), \
    LFUNC(SSL_get_peer_certificate), \
    LFUNC(SSL_get_peer_cert_chain), \
    LFUNC(SSL_CTX_get_verify_mode), \
    LFUNC(SSL_CTX_get_verify_depth), \
    LFUNC(SSL_CTX_get_verify_callback), \
    LFUNC(SSL_CTX_set_verify), \
    LFUNC(SSL_CTX_set_verify_depth), \
    LFUNC(SSL_CTX_set_cert_verify_callback), \
    LFUNC(SSL_CTX_use_RSAPrivateKey), \
    LFUNC(SSL_CTX_use_RSAPrivateKey_ASN1), \
    LFUNC(SSL_CTX_use_PrivateKey), \
    LFUNC(SSL_CTX_use_PrivateKey_ASN1), \
    LFUNC(SSL_CTX_use_certificate), \
    LFUNC(SSL_CTX_use_certificate_ASN1), \
    LFUNC(SSL_CTX_set_default_passwd_cb), \
    LFUNC(SSL_CTX_set_default_passwd_cb_userdata), \
    LFUNC(SSL_CTX_check_private_key), \
    LFUNC(SSL_check_private_key), \
    LFUNC(SSL_CTX_set_session_id_context), \
    LFUNC(SSL_new), \
    LFUNC(SSL_set_session_id_context), \
    LFUNC(SSL_CTX_set_purpose), \
    LFUNC(SSL_set_purpose), \
    LFUNC(SSL_CTX_set_trust), \
    LFUNC(SSL_set_trust), \
    LFUNC(SSL_free), \
    LFUNC(SSL_accept), \
    LFUNC(SSL_connect), \
    LFUNC(SSL_read), \
    LFUNC(SSL_peek), \
    LFUNC(SSL_write), \
    LFUNC(SSL_ctrl), \
    LFUNC(SSL_callback_ctrl), \
    LFUNC(SSL_CTX_ctrl), \
    LFUNC(SSL_CTX_callback_ctrl), \
    LFUNC(SSL_get_error), \
    LFUNC(SSL_get_version), \
    LFUNC(SSL_CTX_set_ssl_version), \
    LFUNC(SSLv2_method), \
    LFUNC(SSLv2_server_method), \
    LFUNC(SSLv2_client_method), \
    LFUNC(SSLv3_method), \
    LFUNC(SSLv3_server_method), \
    LFUNC(SSLv3_client_method), \
    LFUNC(SSLv23_method), \
    LFUNC(SSLv23_server_method), \
    LFUNC(SSLv23_client_method), \
    LFUNC(TLSv1_method), \
    LFUNC(TLSv1_server_method), \
    LFUNC(TLSv1_client_method), \
    LFUNC(SSL_get_ciphers), \
    LFUNC(SSL_do_handshake), \
    LFUNC(SSL_renegotiate), \
    LFUNC(SSL_renegotiate_pending), \
    LFUNC(SSL_shutdown), \
    LFUNC(SSL_get_ssl_method), \
    LFUNC(SSL_set_ssl_method), \
    LFUNC(SSL_alert_type_string_long), \
    LFUNC(SSL_alert_type_string), \
    LFUNC(SSL_alert_desc_string_long), \
    LFUNC(SSL_alert_desc_string), \
    LFUNC(SSL_set_client_CA_list), \
    LFUNC(SSL_CTX_set_client_CA_list), \
    LFUNC(SSL_get_client_CA_list), \
    LFUNC(SSL_CTX_get_client_CA_list), \
    LFUNC(SSL_add_client_CA), \
    LFUNC(SSL_CTX_add_client_CA), \
    LFUNC(SSL_set_connect_state), \
    LFUNC(SSL_set_accept_state), \
    LFUNC(SSL_get_default_timeout), \
    LFUNC(SSL_library_init), \
    LFUNC(SSL_CIPHER_description), \
    LFUNC(SSL_dup_CA_list), \
    LFUNC(SSL_dup), \
    LFUNC(SSL_get_certificate), \
    LFUNC(SSL_get_privatekey), \
    LFUNC(SSL_CTX_set_quiet_shutdown), \
    LFUNC(SSL_CTX_get_quiet_shutdown), \
    LFUNC(SSL_set_quiet_shutdown), \
    LFUNC(SSL_get_quiet_shutdown), \
    LFUNC(SSL_set_shutdown), \
    LFUNC(SSL_get_shutdown), \
    LFUNC(SSL_version), \
    LFUNC(SSL_CTX_set_default_verify_paths), \
    LFUNC(SSL_CTX_load_verify_locations), \
    LFUNC(SSL_get_session), \
    LFUNC(SSL_get1_session), \
    LFUNC(SSL_get_SSL_CTX), \
    LFUNC(SSL_set_info_callback), \
    LFUNC(SSL_get_info_callback), \
    LFUNC(SSL_state), \
    LFUNC(SSL_set_verify_result), \
    LFUNC(SSL_get_verify_result), \
    LFUNC(SSL_set_ex_data), \
    LFUNC(SSL_get_ex_data), \
    LFUNC(SSL_get_ex_new_index), \
    LFUNC(SSL_SESSION_set_ex_data), \
    LFUNC(SSL_SESSION_get_ex_data), \
    LFUNC(SSL_SESSION_get_ex_new_index), \
    LFUNC(SSL_CTX_set_ex_data), \
    LFUNC(SSL_CTX_get_ex_data), \
    LFUNC(SSL_CTX_get_ex_new_index), \
    LFUNC(SSL_get_ex_data_X509_STORE_CTX_idx), \
    LFUNC(SSL_CTX_set_tmp_rsa_callback), \
    LFUNC(SSL_set_tmp_rsa_callback), \
    LFUNC(SSL_CTX_set_tmp_dh_callback), \
    LFUNC(SSL_set_tmp_dh_callback), \
    LFUNC(SSL_COMP_add_compression_method), \
    LFUNC(ERR_load_SSL_strings), \
    LFUNC(sk_num), \
    LFUNC(sk_value), \
    LFUNC(sk_set), \
    LFUNC(sk_new), \
    LFUNC(sk_new_null), \
    LFUNC(sk_free), \
    LFUNC(sk_pop_free), \
    LFUNC(sk_insert), \
    LFUNC(sk_delete), \
    LFUNC(sk_delete_ptr), \
    LFUNC(sk_find), \
    LFUNC(sk_push), \
    LFUNC(sk_unshift), \
    LFUNC(sk_shift), \
    LFUNC(sk_pop), \
    LFUNC(sk_zero), \
    LFUNC(sk_set_cmp_func), \
    LFUNC(sk_dup), \
    LFUNC(sk_sort), \
    LFUNC(FIPS_mode), \
    LFUNC(sk_is_sorted), \
    LFUNC(TXT_DB_read), \
    LFUNC(TXT_DB_write), \
    LFUNC(TXT_DB_create_index), \
    LFUNC(TXT_DB_free), \
    LFUNC(TXT_DB_get_by_index), \
    LFUNC(TXT_DB_insert), \
    LFUNC(UI_new), \
    LFUNC(UI_new_method), \
    LFUNC(UI_free), \
    LFUNC(UI_add_input_string), \
    LFUNC(UI_dup_input_string), \
    LFUNC(UI_add_verify_string), \
    LFUNC(UI_dup_verify_string), \
    LFUNC(UI_add_input_boolean), \
    LFUNC(UI_dup_input_boolean), \
    LFUNC(UI_add_info_string), \
    LFUNC(UI_dup_info_string), \
    LFUNC(UI_add_error_string), \
    LFUNC(UI_dup_error_string), \
    LFUNC(UI_construct_prompt), \
    LFUNC(UI_add_user_data), \
    LFUNC(UI_get0_user_data), \
    LFUNC(UI_get0_result), \
    LFUNC(UI_process), \
    LFUNC(UI_ctrl), \
    LFUNC(UI_get_ex_new_index), \
    LFUNC(UI_set_ex_data), \
    LFUNC(UI_get_ex_data), \
    LFUNC(UI_set_default_method), \
    LFUNC(UI_get_default_method), \
    LFUNC(UI_get_method), \
    LFUNC(UI_set_method), \
    LFUNC(UI_OpenSSL), \
    LFUNC(UI_create_method), \
    LFUNC(UI_destroy_method), \
    LFUNC(UI_method_set_opener), \
    LFUNC(UI_method_set_writer), \
    LFUNC(UI_method_set_flusher), \
    LFUNC(UI_method_set_reader), \
    LFUNC(UI_method_set_closer), \
    LFUNC(UI_method_get_opener), \
    LFUNC(UI_method_get_writer), \
    LFUNC(UI_method_get_flusher), \
    LFUNC(UI_method_get_reader), \
    LFUNC(UI_method_get_closer), \
    LFUNC(UI_get_string_type), \
    LFUNC(UI_get_input_flags), \
    LFUNC(UI_get0_output_string), \
    LFUNC(UI_get0_action_string), \
    LFUNC(UI_get0_result_string), \
    LFUNC(UI_get0_test_string), \
    LFUNC(UI_get_result_minsize), \
    LFUNC(UI_get_result_maxsize), \
    LFUNC(UI_set_result), \
    LFUNC(UI_UTIL_read_pw_string), \
    LFUNC(UI_UTIL_read_pw), \
    LFUNC(ERR_load_UI_strings), \
    LFUNC(_ossl_old_des_read_pw_string), \
    LFUNC(_ossl_old_des_read_pw), \
    LFUNC(X509_verify_cert_error_string), \
    LFUNC(X509_verify), \
    LFUNC(X509_REQ_verify), \
    LFUNC(X509_CRL_verify), \
    LFUNC(NETSCAPE_SPKI_verify), \
    LFUNC(NETSCAPE_SPKI_b64_decode), \
    LFUNC(NETSCAPE_SPKI_b64_encode), \
    LFUNC(NETSCAPE_SPKI_get_pubkey), \
    LFUNC(NETSCAPE_SPKI_set_pubkey), \
    LFUNC(NETSCAPE_SPKI_print), \
    LFUNC(X509_signature_print), \
    LFUNC(X509_sign), \
    LFUNC(X509_REQ_sign), \
    LFUNC(X509_CRL_sign), \
    LFUNC(NETSCAPE_SPKI_sign), \
    LFUNC(X509_pubkey_digest), \
    LFUNC(X509_digest), \
    LFUNC(X509_CRL_digest), \
    LFUNC(X509_REQ_digest), \
    LFUNC(X509_NAME_digest), \
    LFUNC(d2i_X509_bio), \
    LFUNC(i2d_X509_bio), \
    LFUNC(d2i_X509_CRL_bio), \
    LFUNC(i2d_X509_CRL_bio), \
    LFUNC(d2i_X509_REQ_bio), \
    LFUNC(i2d_X509_REQ_bio), \
    LFUNC(d2i_RSAPrivateKey_bio), \
    LFUNC(i2d_RSAPrivateKey_bio), \
    LFUNC(d2i_RSAPublicKey_bio), \
    LFUNC(i2d_RSAPublicKey_bio), \
    LFUNC(d2i_RSA_PUBKEY_bio), \
    LFUNC(i2d_RSA_PUBKEY_bio), \
    LFUNC(d2i_DSA_PUBKEY_bio), \
    LFUNC(i2d_DSA_PUBKEY_bio), \
    LFUNC(d2i_DSAPrivateKey_bio), \
    LFUNC(i2d_DSAPrivateKey_bio), \
    LFUNC(d2i_PKCS8_bio), \
    LFUNC(i2d_PKCS8_bio), \
    LFUNC(d2i_PKCS8_PRIV_KEY_INFO_bio), \
    LFUNC(i2d_PKCS8_PRIV_KEY_INFO_bio), \
    LFUNC(i2d_PKCS8PrivateKeyInfo_bio), \
    LFUNC(i2d_PrivateKey_bio), \
    LFUNC(d2i_PrivateKey_bio), \
    LFUNC(i2d_PUBKEY_bio), \
    LFUNC(d2i_PUBKEY_bio), \
    LFUNC(X509_dup), \
    LFUNC(X509_ATTRIBUTE_dup), \
    LFUNC(X509_EXTENSION_dup), \
    LFUNC(X509_CRL_dup), \
    LFUNC(X509_REQ_dup), \
    LFUNC(X509_ALGOR_dup), \
    LFUNC(X509_NAME_dup), \
    LFUNC(X509_NAME_ENTRY_dup), \
    LFUNC(X509_cmp_time), \
    LFUNC(X509_cmp_current_time), \
    LFUNC(X509_time_adj), \
    LFUNC(X509_gmtime_adj), \
    LFUNC(X509_get_default_cert_area), \
    LFUNC(X509_get_default_cert_dir), \
    LFUNC(X509_get_default_cert_file), \
    LFUNC(X509_get_default_cert_dir_env), \
    LFUNC(X509_get_default_cert_file_env), \
    LFUNC(X509_get_default_private_dir), \
    LFUNC(X509_to_X509_REQ), \
    LFUNC(X509_REQ_to_X509), \
    LFUNC(X509_ALGOR_new), \
    LFUNC(X509_ALGOR_free), \
    LFUNC(d2i_X509_ALGOR), \
    LFUNC(i2d_X509_ALGOR), \
    LFUNC(X509_ALGOR_it), \
    LFUNC(X509_VAL_new), \
    LFUNC(X509_VAL_free), \
    LFUNC(d2i_X509_VAL), \
    LFUNC(i2d_X509_VAL), \
    LFUNC(X509_VAL_it), \
    LFUNC(X509_PUBKEY_new), \
    LFUNC(X509_PUBKEY_free), \
    LFUNC(d2i_X509_PUBKEY), \
    LFUNC(i2d_X509_PUBKEY), \
    LFUNC(X509_PUBKEY_it), \
    LFUNC(X509_PUBKEY_set), \
    LFUNC(X509_PUBKEY_get), \
    LFUNC(X509_get_pubkey_parameters), \
    LFUNC(i2d_PUBKEY), \
    LFUNC(d2i_PUBKEY), \
    LFUNC(i2d_RSA_PUBKEY), \
    LFUNC(d2i_RSA_PUBKEY), \
    LFUNC(i2d_DSA_PUBKEY), \
    LFUNC(d2i_DSA_PUBKEY), \
    LFUNC(X509_SIG_new), \
    LFUNC(X509_SIG_free), \
    LFUNC(d2i_X509_SIG), \
    LFUNC(i2d_X509_SIG), \
    LFUNC(X509_SIG_it), \
    LFUNC(X509_REQ_INFO_new), \
    LFUNC(X509_REQ_INFO_free), \
    LFUNC(d2i_X509_REQ_INFO), \
    LFUNC(i2d_X509_REQ_INFO), \
    LFUNC(X509_REQ_INFO_it), \
    LFUNC(X509_REQ_new), \
    LFUNC(X509_REQ_free), \
    LFUNC(d2i_X509_REQ), \
    LFUNC(i2d_X509_REQ), \
    LFUNC(X509_REQ_it), \
    LFUNC(X509_ATTRIBUTE_new), \
    LFUNC(X509_ATTRIBUTE_free), \
    LFUNC(d2i_X509_ATTRIBUTE), \
    LFUNC(i2d_X509_ATTRIBUTE), \
    LFUNC(X509_ATTRIBUTE_it), \
    LFUNC(X509_ATTRIBUTE_create), \
    LFUNC(X509_EXTENSION_new), \
    LFUNC(X509_EXTENSION_free), \
    LFUNC(d2i_X509_EXTENSION), \
    LFUNC(i2d_X509_EXTENSION), \
    LFUNC(X509_EXTENSION_it), \
    LFUNC(X509_NAME_ENTRY_new), \
    LFUNC(X509_NAME_ENTRY_free), \
    LFUNC(d2i_X509_NAME_ENTRY), \
    LFUNC(i2d_X509_NAME_ENTRY), \
    LFUNC(X509_NAME_ENTRY_it), \
    LFUNC(X509_NAME_new), \
    LFUNC(X509_NAME_free), \
    LFUNC(d2i_X509_NAME), \
    LFUNC(i2d_X509_NAME), \
    LFUNC(X509_NAME_it), \
    LFUNC(X509_NAME_set), \
    LFUNC(X509_CINF_new), \
    LFUNC(X509_CINF_free), \
    LFUNC(d2i_X509_CINF), \
    LFUNC(i2d_X509_CINF), \
    LFUNC(X509_CINF_it), \
    LFUNC(X509_new), \
    LFUNC(X509_free), \
    LFUNC(d2i_X509), \
    LFUNC(i2d_X509), \
    LFUNC(X509_it), \
    LFUNC(X509_CERT_AUX_new), \
    LFUNC(X509_CERT_AUX_free), \
    LFUNC(d2i_X509_CERT_AUX), \
    LFUNC(i2d_X509_CERT_AUX), \
    LFUNC(X509_CERT_AUX_it), \
    LFUNC(X509_get_ex_new_index), \
    LFUNC(X509_set_ex_data), \
    LFUNC(X509_get_ex_data), \
    LFUNC(i2d_X509_AUX), \
    LFUNC(d2i_X509_AUX), \
    LFUNC(X509_alias_set1), \
    LFUNC(X509_keyid_set1), \
    LFUNC(X509_alias_get0), \
    LFUNC(X509_TRUST_set_default), \
    LFUNC(X509_TRUST_set), \
    LFUNC(X509_add1_trust_object), \
    LFUNC(X509_add1_reject_object), \
    LFUNC(X509_trust_clear), \
    LFUNC(X509_reject_clear), \
    LFUNC(X509_REVOKED_new), \
    LFUNC(X509_REVOKED_free), \
    LFUNC(d2i_X509_REVOKED), \
    LFUNC(i2d_X509_REVOKED), \
    LFUNC(X509_REVOKED_it), \
    LFUNC(X509_CRL_INFO_new), \
    LFUNC(X509_CRL_INFO_free), \
    LFUNC(d2i_X509_CRL_INFO), \
    LFUNC(i2d_X509_CRL_INFO), \
    LFUNC(X509_CRL_INFO_it), \
    LFUNC(X509_CRL_new), \
    LFUNC(X509_CRL_free), \
    LFUNC(d2i_X509_CRL), \
    LFUNC(i2d_X509_CRL), \
    LFUNC(X509_CRL_it), \
    LFUNC(X509_CRL_add0_revoked), \
    LFUNC(X509_PKEY_new), \
    LFUNC(X509_PKEY_free), \
    LFUNC(i2d_X509_PKEY), \
    LFUNC(d2i_X509_PKEY), \
    LFUNC(NETSCAPE_SPKI_new), \
    LFUNC(NETSCAPE_SPKI_free), \
    LFUNC(d2i_NETSCAPE_SPKI), \
    LFUNC(i2d_NETSCAPE_SPKI), \
    LFUNC(NETSCAPE_SPKI_it), \
    LFUNC(NETSCAPE_SPKAC_new), \
    LFUNC(NETSCAPE_SPKAC_free), \
    LFUNC(d2i_NETSCAPE_SPKAC), \
    LFUNC(i2d_NETSCAPE_SPKAC), \
    LFUNC(NETSCAPE_SPKAC_it), \
    LFUNC(NETSCAPE_CERT_SEQUENCE_new), \
    LFUNC(NETSCAPE_CERT_SEQUENCE_free), \
    LFUNC(d2i_NETSCAPE_CERT_SEQUENCE), \
    LFUNC(i2d_NETSCAPE_CERT_SEQUENCE), \
    LFUNC(NETSCAPE_CERT_SEQUENCE_it), \
    LFUNC(X509_INFO_new), \
    LFUNC(X509_INFO_free), \
    LFUNC(X509_NAME_oneline), \
    LFUNC(ASN1_verify), \
    LFUNC(ASN1_digest), \
    LFUNC(ASN1_sign), \
    LFUNC(ASN1_item_digest), \
    LFUNC(ASN1_item_verify), \
    LFUNC(ASN1_item_sign), \
    LFUNC(X509_set_version), \
    LFUNC(X509_set_serialNumber), \
    LFUNC(X509_get_serialNumber), \
    LFUNC(X509_set_issuer_name), \
    LFUNC(X509_get_issuer_name), \
    LFUNC(X509_set_subject_name), \
    LFUNC(X509_get_subject_name), \
    LFUNC(X509_set_notBefore), \
    LFUNC(X509_set_notAfter), \
    LFUNC(X509_set_pubkey), \
    LFUNC(X509_get_pubkey), \
    LFUNC(X509_get0_pubkey_bitstr), \
    LFUNC(X509_certificate_type), \
    LFUNC(X509_REQ_set_version), \
    LFUNC(X509_REQ_set_subject_name), \
    LFUNC(X509_REQ_set_pubkey), \
    LFUNC(X509_REQ_get_pubkey), \
    LFUNC(X509_REQ_extension_nid), \
    LFUNC(X509_REQ_get_extension_nids), \
    LFUNC(X509_REQ_set_extension_nids), \
    LFUNC(X509_REQ_get_extensions), \
    LFUNC(X509_REQ_add_extensions_nid), \
    LFUNC(X509_REQ_add_extensions), \
    LFUNC(X509_REQ_get_attr_count), \
    LFUNC(X509_REQ_get_attr_by_NID), \
    LFUNC(X509_REQ_get_attr_by_OBJ), \
    LFUNC(X509_REQ_get_attr), \
    LFUNC(X509_REQ_delete_attr), \
    LFUNC(X509_REQ_add1_attr), \
    LFUNC(X509_REQ_add1_attr_by_OBJ), \
    LFUNC(X509_REQ_add1_attr_by_NID), \
    LFUNC(X509_REQ_add1_attr_by_txt), \
    LFUNC(X509_CRL_set_version), \
    LFUNC(X509_CRL_set_issuer_name), \
    LFUNC(X509_CRL_set_lastUpdate), \
    LFUNC(X509_CRL_set_nextUpdate), \
    LFUNC(X509_CRL_sort), \
    LFUNC(X509_REVOKED_set_serialNumber), \
    LFUNC(X509_REVOKED_set_revocationDate), \
    LFUNC(X509_check_private_key), \
    LFUNC(X509_issuer_and_serial_cmp), \
    LFUNC(X509_issuer_and_serial_hash), \
    LFUNC(X509_issuer_name_cmp), \
    LFUNC(X509_issuer_name_hash), \
    LFUNC(X509_subject_name_cmp), \
    LFUNC(X509_subject_name_hash), \
    LFUNC(X509_cmp), \
    LFUNC(X509_NAME_cmp), \
    LFUNC(X509_NAME_hash), \
    LFUNC(X509_CRL_cmp), \
    LFUNC(X509_NAME_print), \
    LFUNC(X509_NAME_print_ex), \
    LFUNC(X509_print_ex), \
    LFUNC(X509_print), \
    LFUNC(X509_ocspid_print), \
    LFUNC(X509_CERT_AUX_print), \
    LFUNC(X509_CRL_print), \
    LFUNC(X509_REQ_print_ex), \
    LFUNC(X509_REQ_print), \
    LFUNC(X509_NAME_entry_count), \
    LFUNC(X509_NAME_get_text_by_NID), \
    LFUNC(X509_NAME_get_text_by_OBJ), \
    LFUNC(X509_NAME_get_index_by_NID), \
    LFUNC(X509_NAME_get_index_by_OBJ), \
    LFUNC(X509_NAME_get_entry), \
    LFUNC(X509_NAME_delete_entry), \
    LFUNC(X509_NAME_add_entry), \
    LFUNC(X509_NAME_add_entry_by_OBJ), \
    LFUNC(X509_NAME_add_entry_by_NID), \
    LFUNC(X509_NAME_ENTRY_create_by_txt), \
    LFUNC(X509_NAME_ENTRY_create_by_NID), \
    LFUNC(X509_NAME_add_entry_by_txt), \
    LFUNC(X509_NAME_ENTRY_create_by_OBJ), \
    LFUNC(X509_NAME_ENTRY_set_object), \
    LFUNC(X509_NAME_ENTRY_set_data), \
    LFUNC(X509_NAME_ENTRY_get_object), \
    LFUNC(X509_NAME_ENTRY_get_data), \
    LFUNC(X509v3_get_ext_count), \
    LFUNC(X509v3_get_ext_by_NID), \
    LFUNC(X509v3_get_ext_by_OBJ), \
    LFUNC(X509v3_get_ext_by_critical), \
    LFUNC(X509v3_get_ext), \
    LFUNC(X509v3_delete_ext), \
    LFUNC(X509v3_add_ext), \
    LFUNC(X509_get_ext_count), \
    LFUNC(X509_get_ext_by_NID), \
    LFUNC(X509_get_ext_by_OBJ), \
    LFUNC(X509_get_ext_by_critical), \
    LFUNC(X509_get_ext), \
    LFUNC(X509_delete_ext), \
    LFUNC(X509_add_ext), \
    LFUNC(X509_get_ext_d2i), \
    LFUNC(X509_add1_ext_i2d), \
    LFUNC(X509_CRL_get_ext_count), \
    LFUNC(X509_CRL_get_ext_by_NID), \
    LFUNC(X509_CRL_get_ext_by_OBJ), \
    LFUNC(X509_CRL_get_ext_by_critical), \
    LFUNC(X509_CRL_get_ext), \
    LFUNC(X509_CRL_delete_ext), \
    LFUNC(X509_CRL_add_ext), \
    LFUNC(X509_CRL_get_ext_d2i), \
    LFUNC(X509_CRL_add1_ext_i2d), \
    LFUNC(X509_REVOKED_get_ext_count), \
    LFUNC(X509_REVOKED_get_ext_by_NID), \
    LFUNC(X509_REVOKED_get_ext_by_OBJ), \
    LFUNC(X509_REVOKED_get_ext_by_critical), \
    LFUNC(X509_REVOKED_get_ext), \
    LFUNC(X509_REVOKED_delete_ext), \
    LFUNC(X509_REVOKED_add_ext), \
    LFUNC(X509_REVOKED_get_ext_d2i), \
    LFUNC(X509_REVOKED_add1_ext_i2d), \
    LFUNC(X509_EXTENSION_create_by_NID), \
    LFUNC(X509_EXTENSION_create_by_OBJ), \
    LFUNC(X509_EXTENSION_set_object), \
    LFUNC(X509_EXTENSION_set_critical), \
    LFUNC(X509_EXTENSION_set_data), \
    LFUNC(X509_EXTENSION_get_object), \
    LFUNC(X509_EXTENSION_get_data), \
    LFUNC(X509_EXTENSION_get_critical), \
    LFUNC(X509at_get_attr_count), \
    LFUNC(X509at_get_attr_by_NID), \
    LFUNC(X509at_get_attr_by_OBJ), \
    LFUNC(X509at_get_attr), \
    LFUNC(X509at_delete_attr), \
    LFUNC(X509at_add1_attr), \
    LFUNC(X509at_add1_attr_by_OBJ), \
    LFUNC(X509at_add1_attr_by_NID), \
    LFUNC(X509at_add1_attr_by_txt), \
    LFUNC(X509_ATTRIBUTE_create_by_NID), \
    LFUNC(X509_ATTRIBUTE_create_by_OBJ), \
    LFUNC(X509_ATTRIBUTE_create_by_txt), \
    LFUNC(X509_ATTRIBUTE_set1_object), \
    LFUNC(X509_ATTRIBUTE_set1_data), \
    LFUNC(X509_ATTRIBUTE_get0_data), \
    LFUNC(X509_ATTRIBUTE_count), \
    LFUNC(X509_ATTRIBUTE_get0_object), \
    LFUNC(X509_ATTRIBUTE_get0_type), \
    LFUNC(X509_verify_cert), \
    LFUNC(X509_find_by_issuer_and_serial), \
    LFUNC(X509_find_by_subject), \
    LFUNC(PBEPARAM_new), \
    LFUNC(PBEPARAM_free), \
    LFUNC(d2i_PBEPARAM), \
    LFUNC(i2d_PBEPARAM), \
    LFUNC(PBEPARAM_it), \
    LFUNC(PBE2PARAM_new), \
    LFUNC(PBE2PARAM_free), \
    LFUNC(d2i_PBE2PARAM), \
    LFUNC(i2d_PBE2PARAM), \
    LFUNC(PBE2PARAM_it), \
    LFUNC(PBKDF2PARAM_new), \
    LFUNC(PBKDF2PARAM_free), \
    LFUNC(d2i_PBKDF2PARAM), \
    LFUNC(i2d_PBKDF2PARAM), \
    LFUNC(PBKDF2PARAM_it), \
    LFUNC(PKCS5_pbe_set), \
    LFUNC(PKCS5_pbe2_set), \
    LFUNC(PKCS8_PRIV_KEY_INFO_new), \
    LFUNC(PKCS8_PRIV_KEY_INFO_free), \
    LFUNC(d2i_PKCS8_PRIV_KEY_INFO), \
    LFUNC(i2d_PKCS8_PRIV_KEY_INFO), \
    LFUNC(PKCS8_PRIV_KEY_INFO_it), \
    LFUNC(EVP_PKCS82PKEY), \
    LFUNC(EVP_PKEY2PKCS8), \
    LFUNC(EVP_PKEY2PKCS8_broken), \
    LFUNC(PKCS8_set_broken), \
    LFUNC(X509_check_trust), \
    LFUNC(X509_TRUST_get_count), \
    LFUNC(X509_TRUST_get0), \
    LFUNC(X509_TRUST_get_by_id), \
    LFUNC(X509_TRUST_add), \
    LFUNC(X509_TRUST_cleanup), \
    LFUNC(X509_TRUST_get_flags), \
    LFUNC(X509_TRUST_get0_name), \
    LFUNC(X509_TRUST_get_trust), \
    LFUNC(ERR_load_X509_strings), \
    LFUNC(X509_OBJECT_idx_by_subject), \
    LFUNC(X509_OBJECT_retrieve_by_subject), \
    LFUNC(X509_OBJECT_retrieve_match), \
    LFUNC(X509_OBJECT_up_ref_count), \
    LFUNC(X509_OBJECT_free_contents), \
    LFUNC(X509_STORE_new), \
    LFUNC(X509_STORE_free), \
    LFUNC(X509_STORE_set_flags), \
    LFUNC(X509_STORE_set_purpose), \
    LFUNC(X509_STORE_set_trust), \
    LFUNC(X509_STORE_CTX_new), \
    LFUNC(X509_STORE_CTX_get1_issuer), \
    LFUNC(X509_STORE_CTX_free), \
    LFUNC(X509_STORE_CTX_init), \
    LFUNC(X509_STORE_CTX_trusted_stack), \
    LFUNC(X509_STORE_CTX_cleanup), \
    LFUNC(X509_STORE_add_lookup), \
    LFUNC(X509_LOOKUP_hash_dir), \
    LFUNC(X509_LOOKUP_file), \
    LFUNC(X509_STORE_add_cert), \
    LFUNC(X509_STORE_add_crl), \
    LFUNC(X509_STORE_get_by_subject), \
    LFUNC(X509_LOOKUP_ctrl), \
    LFUNC(X509_load_cert_file), \
    LFUNC(X509_load_crl_file), \
    LFUNC(X509_load_cert_crl_file), \
    LFUNC(X509_LOOKUP_new), \
    LFUNC(X509_LOOKUP_free), \
    LFUNC(X509_LOOKUP_init), \
    LFUNC(X509_LOOKUP_by_subject), \
    LFUNC(X509_LOOKUP_by_issuer_serial), \
    LFUNC(X509_LOOKUP_by_fingerprint), \
    LFUNC(X509_LOOKUP_by_alias), \
    LFUNC(X509_LOOKUP_shutdown), \
    LFUNC(X509_STORE_load_locations), \
    LFUNC(X509_STORE_set_default_paths), \
    LFUNC(X509_STORE_CTX_get_ex_new_index), \
    LFUNC(X509_STORE_CTX_set_ex_data), \
    LFUNC(X509_STORE_CTX_get_ex_data), \
    LFUNC(X509_STORE_CTX_get_error), \
    LFUNC(X509_STORE_CTX_set_error), \
    LFUNC(X509_STORE_CTX_get_error_depth), \
    LFUNC(X509_STORE_CTX_get_current_cert), \
    LFUNC(X509_STORE_CTX_get_chain), \
    LFUNC(X509_STORE_CTX_get1_chain), \
    LFUNC(X509_STORE_CTX_set_cert), \
    LFUNC(X509_STORE_CTX_set_chain), \
    LFUNC(X509_STORE_CTX_set_purpose), \
    LFUNC(X509_STORE_CTX_set_trust), \
    LFUNC(X509_STORE_CTX_purpose_inherit), \
    LFUNC(X509_STORE_CTX_set_flags), \
    LFUNC(X509_STORE_CTX_set_time), \
    LFUNC(X509_STORE_CTX_set_verify_cb), \
    LFUNC(BASIC_CONSTRAINTS_new), \
    LFUNC(BASIC_CONSTRAINTS_free), \
    LFUNC(d2i_BASIC_CONSTRAINTS), \
    LFUNC(i2d_BASIC_CONSTRAINTS), \
    LFUNC(BASIC_CONSTRAINTS_it), \
    LFUNC(SXNET_new), \
    LFUNC(SXNET_free), \
    LFUNC(d2i_SXNET), \
    LFUNC(i2d_SXNET), \
    LFUNC(SXNET_it), \
    LFUNC(SXNETID_new), \
    LFUNC(SXNETID_free), \
    LFUNC(d2i_SXNETID), \
    LFUNC(i2d_SXNETID), \
    LFUNC(SXNETID_it), \
    LFUNC(SXNET_add_id_asc), \
    LFUNC(SXNET_add_id_ulong), \
    LFUNC(SXNET_add_id_INTEGER), \
    LFUNC(SXNET_get_id_asc), \
    LFUNC(SXNET_get_id_ulong), \
    LFUNC(SXNET_get_id_INTEGER), \
    LFUNC(AUTHORITY_KEYID_new), \
    LFUNC(AUTHORITY_KEYID_free), \
    LFUNC(d2i_AUTHORITY_KEYID), \
    LFUNC(i2d_AUTHORITY_KEYID), \
    LFUNC(AUTHORITY_KEYID_it), \
    LFUNC(PKEY_USAGE_PERIOD_new), \
    LFUNC(PKEY_USAGE_PERIOD_free), \
    LFUNC(d2i_PKEY_USAGE_PERIOD), \
    LFUNC(i2d_PKEY_USAGE_PERIOD), \
    LFUNC(PKEY_USAGE_PERIOD_it), \
    LFUNC(GENERAL_NAME_new), \
    LFUNC(GENERAL_NAME_free), \
    LFUNC(d2i_GENERAL_NAME), \
    LFUNC(i2d_GENERAL_NAME), \
    LFUNC(GENERAL_NAME_it), \
    LFUNC(i2v_GENERAL_NAME), \
    LFUNC(GENERAL_NAME_print), \
    LFUNC(GENERAL_NAMES_new), \
    LFUNC(GENERAL_NAMES_free), \
    LFUNC(d2i_GENERAL_NAMES), \
    LFUNC(i2d_GENERAL_NAMES), \
    LFUNC(GENERAL_NAMES_it), \
    LFUNC(i2v_GENERAL_NAMES), \
    LFUNC(v2i_GENERAL_NAMES), \
    LFUNC(OTHERNAME_new), \
    LFUNC(OTHERNAME_free), \
    LFUNC(d2i_OTHERNAME), \
    LFUNC(i2d_OTHERNAME), \
    LFUNC(OTHERNAME_it), \
    LFUNC(EDIPARTYNAME_new), \
    LFUNC(EDIPARTYNAME_free), \
    LFUNC(d2i_EDIPARTYNAME), \
    LFUNC(i2d_EDIPARTYNAME), \
    LFUNC(EDIPARTYNAME_it), \
    LFUNC(i2s_ASN1_OCTET_STRING), \
    LFUNC(s2i_ASN1_OCTET_STRING), \
    LFUNC(EXTENDED_KEY_USAGE_new), \
    LFUNC(EXTENDED_KEY_USAGE_free), \
    LFUNC(d2i_EXTENDED_KEY_USAGE), \
    LFUNC(i2d_EXTENDED_KEY_USAGE), \
    LFUNC(EXTENDED_KEY_USAGE_it), \
    LFUNC(i2a_ACCESS_DESCRIPTION), \
    LFUNC(CERTIFICATEPOLICIES_new), \
    LFUNC(CERTIFICATEPOLICIES_free), \
    LFUNC(d2i_CERTIFICATEPOLICIES), \
    LFUNC(i2d_CERTIFICATEPOLICIES), \
    LFUNC(CERTIFICATEPOLICIES_it), \
    LFUNC(POLICYINFO_new), \
    LFUNC(POLICYINFO_free), \
    LFUNC(d2i_POLICYINFO), \
    LFUNC(i2d_POLICYINFO), \
    LFUNC(POLICYINFO_it), \
    LFUNC(POLICYQUALINFO_new), \
    LFUNC(POLICYQUALINFO_free), \
    LFUNC(d2i_POLICYQUALINFO), \
    LFUNC(i2d_POLICYQUALINFO), \
    LFUNC(POLICYQUALINFO_it), \
    LFUNC(USERNOTICE_new), \
    LFUNC(USERNOTICE_free), \
    LFUNC(d2i_USERNOTICE), \
    LFUNC(i2d_USERNOTICE), \
    LFUNC(USERNOTICE_it), \
    LFUNC(NOTICEREF_new), \
    LFUNC(NOTICEREF_free), \
    LFUNC(d2i_NOTICEREF), \
    LFUNC(i2d_NOTICEREF), \
    LFUNC(NOTICEREF_it), \
    LFUNC(CRL_DIST_POINTS_new), \
    LFUNC(CRL_DIST_POINTS_free), \
    LFUNC(d2i_CRL_DIST_POINTS), \
    LFUNC(i2d_CRL_DIST_POINTS), \
    LFUNC(CRL_DIST_POINTS_it), \
    LFUNC(DIST_POINT_new), \
    LFUNC(DIST_POINT_free), \
    LFUNC(d2i_DIST_POINT), \
    LFUNC(i2d_DIST_POINT), \
    LFUNC(DIST_POINT_it), \
    LFUNC(DIST_POINT_NAME_new), \
    LFUNC(DIST_POINT_NAME_free), \
    LFUNC(d2i_DIST_POINT_NAME), \
    LFUNC(i2d_DIST_POINT_NAME), \
    LFUNC(DIST_POINT_NAME_it), \
    LFUNC(ACCESS_DESCRIPTION_new), \
    LFUNC(ACCESS_DESCRIPTION_free), \
    LFUNC(d2i_ACCESS_DESCRIPTION), \
    LFUNC(i2d_ACCESS_DESCRIPTION), \
    LFUNC(ACCESS_DESCRIPTION_it), \
    LFUNC(AUTHORITY_INFO_ACCESS_new), \
    LFUNC(AUTHORITY_INFO_ACCESS_free), \
    LFUNC(d2i_AUTHORITY_INFO_ACCESS), \
    LFUNC(i2d_AUTHORITY_INFO_ACCESS), \
    LFUNC(AUTHORITY_INFO_ACCESS_it), \
    LFUNC(v2i_GENERAL_NAME), \
    LFUNC(X509V3_conf_free), \
    LFUNC(X509V3_EXT_nconf_nid), \
    LFUNC(X509V3_EXT_nconf), \
    LFUNC(X509V3_EXT_add_nconf_sk), \
    LFUNC(X509V3_EXT_add_nconf), \
    LFUNC(X509V3_EXT_REQ_add_nconf), \
    LFUNC(X509V3_EXT_CRL_add_nconf), \
    LFUNC(X509V3_EXT_conf_nid), \
    LFUNC(X509V3_EXT_conf), \
    LFUNC(X509V3_EXT_add_conf), \
    LFUNC(X509V3_EXT_REQ_add_conf), \
    LFUNC(X509V3_EXT_CRL_add_conf), \
    LFUNC(X509V3_add_value_bool_nf), \
    LFUNC(X509V3_get_value_bool), \
    LFUNC(X509V3_get_value_int), \
    LFUNC(X509V3_set_nconf), \
    LFUNC(X509V3_set_conf_lhash), \
    LFUNC(X509V3_get_string), \
    LFUNC(X509V3_get_section), \
    LFUNC(X509V3_string_free), \
    LFUNC(X509V3_section_free), \
    LFUNC(X509V3_set_ctx), \
    LFUNC(X509V3_add_value), \
    LFUNC(X509V3_add_value_uchar), \
    LFUNC(X509V3_add_value_bool), \
    LFUNC(X509V3_add_value_int), \
    LFUNC(i2s_ASN1_INTEGER), \
    LFUNC(s2i_ASN1_INTEGER), \
    LFUNC(i2s_ASN1_ENUMERATED), \
    LFUNC(i2s_ASN1_ENUMERATED_TABLE), \
    LFUNC(X509V3_EXT_add), \
    LFUNC(X509V3_EXT_add_list), \
    LFUNC(X509V3_EXT_add_alias), \
    LFUNC(X509V3_EXT_cleanup), \
    LFUNC(X509V3_EXT_get), \
    LFUNC(X509V3_EXT_get_nid), \
    LFUNC(X509V3_add_standard_extensions), \
    LFUNC(X509V3_parse_list), \
    LFUNC(X509V3_EXT_d2i), \
    LFUNC(X509V3_get_d2i), \
    LFUNC(X509V3_EXT_i2d), \
    LFUNC(X509V3_add1_i2d), \
    LFUNC(hex_to_string), \
    LFUNC(string_to_hex), \
    LFUNC(name_cmp), \
    LFUNC(X509V3_EXT_val_prn), \
    LFUNC(X509V3_EXT_print), \
    LFUNC(X509V3_extensions_print), \
    LFUNC(X509_check_purpose), \
    LFUNC(X509_supported_extension), \
    LFUNC(X509_PURPOSE_set), \
    LFUNC(X509_check_issued), \
    LFUNC(X509_PURPOSE_get_count), \
    LFUNC(X509_PURPOSE_get0), \
    LFUNC(X509_PURPOSE_get_by_sname), \
    LFUNC(X509_PURPOSE_get_by_id), \
    LFUNC(X509_PURPOSE_add), \
    LFUNC(X509_PURPOSE_get0_name), \
    LFUNC(X509_PURPOSE_get0_sname), \
    LFUNC(X509_PURPOSE_get_trust), \
    LFUNC(X509_PURPOSE_cleanup), \
    LFUNC(X509_PURPOSE_get_id), \
    LFUNC(X509_get1_email), \
    LFUNC(X509_REQ_get1_email), \
    LFUNC(X509_email_free), \
    LFUNC(ERR_load_X509V3_strings), \
    LFUNC(AES_options), \
    LFUNC(AES_set_encrypt_key), \
    LFUNC(AES_set_decrypt_key), \
    LFUNC(AES_encrypt), \
    LFUNC(AES_decrypt), \
    LFUNC(AES_ecb_encrypt), \
    LFUNC(AES_cbc_encrypt), \
    LFUNC(AES_cfb128_encrypt), \
    LFUNC(AES_cfb1_encrypt), \
    LFUNC(AES_cfb8_encrypt), \
    LFUNC(AES_ofb128_encrypt), \
    LFUNC(AES_ctr128_encrypt), \
    LFUNC(BF_set_key), \
    LFUNC(BF_encrypt), \
    LFUNC(BF_decrypt), \
    LFUNC(BF_ecb_encrypt), \
    LFUNC(BF_cbc_encrypt), \
    LFUNC(BF_cfb64_encrypt), \
    LFUNC(BF_ofb64_encrypt), \
    LFUNC(BF_options), \
    LFUNC(CAST_set_key), \
    LFUNC(CAST_ecb_encrypt), \
    LFUNC(CAST_encrypt), \
    LFUNC(CAST_decrypt), \
    LFUNC(CAST_cbc_encrypt), \
    LFUNC(CAST_cfb64_encrypt), \
    LFUNC(CAST_ofb64_encrypt), \
    LFUNC(DES_ecb3_encrypt), \
    LFUNC(DES_cbc_cksum), \
    LFUNC(DES_cbc_encrypt), \
    LFUNC(DES_ncbc_encrypt), \
    LFUNC(DES_xcbc_encrypt), \
    LFUNC(DES_cfb_encrypt), \
    LFUNC(DES_ecb_encrypt), \
    LFUNC(DES_encrypt1), \
    LFUNC(DES_encrypt2), \
    LFUNC(DES_encrypt3), \
    LFUNC(DES_decrypt3), \
    LFUNC(DES_ede3_cbc_encrypt), \
    LFUNC(DES_ede3_cbcm_encrypt), \
    LFUNC(DES_ede3_cfb64_encrypt), \
    LFUNC(DES_ede3_cfb_encrypt), \
    LFUNC(DES_ede3_ofb64_encrypt), \
    LFUNC(DES_enc_read), \
    LFUNC(DES_enc_write), \
    LFUNC(DES_fcrypt), \
    LFUNC(DES_crypt), \
    LFUNC(DES_ofb_encrypt), \
    LFUNC(DES_pcbc_encrypt), \
    LFUNC(DES_quad_cksum), \
    LFUNC(DES_random_key), \
    LFUNC(DES_set_odd_parity), \
    LFUNC(DES_check_key_parity), \
    LFUNC(DES_is_weak_key), \
    LFUNC(DES_set_key), \
    LFUNC(DES_key_sched), \
    LFUNC(DES_set_key_checked), \
    LFUNC(DES_set_key_unchecked), \
    LFUNC(DES_string_to_key), \
    LFUNC(DES_string_to_2keys), \
    LFUNC(DES_cfb64_encrypt), \
    LFUNC(DES_ofb64_encrypt), \
    LFUNC(DES_read_password), \
    LFUNC(DES_read_2passwords), \
    LFUNC(_ossl_old_des_options), \
    LFUNC(_ossl_old_des_ecb3_encrypt), \
    LFUNC(_ossl_old_des_cbc_cksum), \
    LFUNC(_ossl_old_des_cbc_encrypt), \
    LFUNC(_ossl_old_des_ncbc_encrypt), \
    LFUNC(_ossl_old_des_xcbc_encrypt), \
    LFUNC(_ossl_old_des_cfb_encrypt), \
    LFUNC(_ossl_old_des_ecb_encrypt), \
    LFUNC(_ossl_old_des_encrypt), \
    LFUNC(_ossl_old_des_encrypt2), \
    LFUNC(_ossl_old_des_encrypt3), \
    LFUNC(_ossl_old_des_decrypt3), \
    LFUNC(_ossl_old_des_ede3_cbc_encrypt), \
    LFUNC(_ossl_old_des_ede3_cfb64_encrypt), \
    LFUNC(_ossl_old_des_ede3_ofb64_encrypt), \
    LFUNC(_ossl_old_des_enc_read), \
    LFUNC(_ossl_old_des_enc_write), \
    LFUNC(_ossl_old_des_fcrypt), \
    LFUNC(_ossl_old_des_crypt), \
    LFUNC(_ossl_old_crypt), \
    LFUNC(_ossl_old_des_ofb_encrypt), \
    LFUNC(_ossl_old_des_pcbc_encrypt), \
    LFUNC(_ossl_old_des_quad_cksum), \
    LFUNC(_ossl_old_des_random_seed), \
    LFUNC(_ossl_old_des_random_key), \
    LFUNC(_ossl_old_des_read_password), \
    LFUNC(_ossl_old_des_read_2passwords), \
    LFUNC(_ossl_old_des_set_odd_parity), \
    LFUNC(_ossl_old_des_is_weak_key), \
    LFUNC(_ossl_old_des_set_key), \
    LFUNC(_ossl_old_des_key_sched), \
    LFUNC(_ossl_old_des_string_to_key), \
    LFUNC(_ossl_old_des_string_to_2keys), \
    LFUNC(_ossl_old_des_cfb64_encrypt), \
    LFUNC(_ossl_old_des_ofb64_encrypt), \
    LFUNC(_ossl_096_des_random_seed), \
    LFUNC(DH_OpenSSL), \
    LFUNC(DH_set_default_method), \
    LFUNC(DH_get_default_method), \
    LFUNC(DH_set_method), \
    LFUNC(DH_new_method), \
    LFUNC(DH_new), \
    LFUNC(DH_free), \
    LFUNC(DH_up_ref), \
    LFUNC(DH_size), \
    LFUNC(DH_get_ex_new_index), \
    LFUNC(DH_set_ex_data), \
    LFUNC(DH_get_ex_data), \
    LFUNC(DH_generate_parameters), \
    LFUNC(DH_check), \
    LFUNC(DH_generate_key), \
    LFUNC(DH_compute_key), \
    LFUNC(d2i_DHparams), \
    LFUNC(i2d_DHparams), \
    LFUNC(DHparams_print), \
    LFUNC(ERR_load_DH_strings), \
    LFUNC(DSA_SIG_new), \
    LFUNC(DSA_SIG_free), \
    LFUNC(i2d_DSA_SIG), \
    LFUNC(d2i_DSA_SIG), \
    LFUNC(DSA_do_sign), \
    LFUNC(DSA_do_verify), \
    LFUNC(DSA_OpenSSL), \
    LFUNC(DSA_set_default_method), \
    LFUNC(DSA_get_default_method), \
    LFUNC(DSA_set_method), \
    LFUNC(DSA_new), \
    LFUNC(DSA_new_method), \
    LFUNC(DSA_free), \
    LFUNC(DSA_up_ref), \
    LFUNC(DSA_size), \
    LFUNC(DSA_sign_setup), \
    LFUNC(DSA_sign), \
    LFUNC(DSA_verify), \
    LFUNC(DSA_get_ex_new_index), \
    LFUNC(DSA_set_ex_data), \
    LFUNC(DSA_get_ex_data), \
    LFUNC(d2i_DSAPublicKey), \
    LFUNC(d2i_DSAPrivateKey), \
    LFUNC(d2i_DSAparams), \
    LFUNC(DSA_generate_parameters), \
    LFUNC(DSA_generate_key), \
    LFUNC(i2d_DSAPublicKey), \
    LFUNC(i2d_DSAPrivateKey), \
    LFUNC(i2d_DSAparams), \
    LFUNC(DSAparams_print), \
    LFUNC(DSA_print), \
    LFUNC(DSA_dup_DH), \
    LFUNC(ERR_load_DSA_strings), \
    LFUNC(idea_options), \
    LFUNC(idea_ecb_encrypt), \
    LFUNC(idea_set_encrypt_key), \
    LFUNC(idea_set_decrypt_key), \
    LFUNC(idea_cbc_encrypt), \
    LFUNC(idea_cfb64_encrypt), \
    LFUNC(idea_ofb64_encrypt), \
    LFUNC(idea_encrypt), \
    LFUNC(MD2_options), \
    LFUNC(MD2_Init), \
    LFUNC(MD2_Update), \
    LFUNC(MD2_Final), \
    LFUNC(MD2), \
    LFUNC(MD4_Init), \
    LFUNC(MD4_Update), \
    LFUNC(MD4_Final), \
    LFUNC(MD4), \
    LFUNC(MD4_Transform), \
    LFUNC(MD5_Init), \
    LFUNC(MD5_Update), \
    LFUNC(MD5_Final), \
    LFUNC(MD5), \
    LFUNC(MD5_Transform), \
    LFUNC(MDC2_Init), \
    LFUNC(MDC2_Update), \
    LFUNC(MDC2_Final), \
    LFUNC(MDC2), \
    LFUNC(RC2_set_key), \
    LFUNC(RC2_ecb_encrypt), \
    LFUNC(RC2_encrypt), \
    LFUNC(RC2_decrypt), \
    LFUNC(RC2_cbc_encrypt), \
    LFUNC(RC2_cfb64_encrypt), \
    LFUNC(RC2_ofb64_encrypt), \
    LFUNC(RC4_options), \
    LFUNC(RC4_set_key), \
    LFUNC(RC4), \
    LFUNC(RC5_32_set_key), \
    LFUNC(RC5_32_ecb_encrypt), \
    LFUNC(RC5_32_encrypt), \
    LFUNC(RC5_32_decrypt), \
    LFUNC(RC5_32_cbc_encrypt), \
    LFUNC(RC5_32_cfb64_encrypt), \
    LFUNC(RC5_32_ofb64_encrypt), \
    LFUNC(RIPEMD160_Init), \
    LFUNC(RIPEMD160_Update), \
    LFUNC(RIPEMD160_Final), \
    LFUNC(RIPEMD160), \
    LFUNC(RIPEMD160_Transform), \
    LFUNC(RSA_new), \
    LFUNC(RSA_new_method), \
    LFUNC(RSA_size), \
    LFUNC(RSA_generate_key), \
    LFUNC(RSA_check_key), \
    LFUNC(RSA_public_encrypt), \
    LFUNC(RSA_private_encrypt), \
    LFUNC(RSA_public_decrypt), \
    LFUNC(RSA_private_decrypt), \
    LFUNC(RSA_free), \
    LFUNC(RSA_up_ref), \
    LFUNC(RSA_flags), \
    LFUNC(RSA_set_default_method), \
    LFUNC(RSA_get_default_method), \
    LFUNC(RSA_get_method), \
    LFUNC(RSA_set_method), \
    LFUNC(RSA_memory_lock), \
    LFUNC(RSA_PKCS1_SSLeay), \
    LFUNC(RSA_null_method), \
    LFUNC(d2i_RSAPublicKey), \
    LFUNC(i2d_RSAPublicKey), \
    LFUNC(RSAPublicKey_it), \
    LFUNC(d2i_RSAPrivateKey), \
    LFUNC(i2d_RSAPrivateKey), \
    LFUNC(RSAPrivateKey_it), \
    LFUNC(RSA_print), \
    LFUNC(i2d_RSA_NET), \
    LFUNC(d2i_RSA_NET), \
    LFUNC(i2d_Netscape_RSA), \
    LFUNC(d2i_Netscape_RSA), \
    LFUNC(RSA_sign), \
    LFUNC(RSA_verify), \
    LFUNC(RSA_sign_ASN1_OCTET_STRING), \
    LFUNC(RSA_verify_ASN1_OCTET_STRING), \
    LFUNC(RSA_blinding_on), \
    LFUNC(RSA_blinding_off), \
    LFUNC(RSA_padding_add_PKCS1_type_1), \
    LFUNC(RSA_padding_check_PKCS1_type_1), \
    LFUNC(RSA_padding_add_PKCS1_type_2), \
    LFUNC(RSA_padding_check_PKCS1_type_2), \
    LFUNC(RSA_padding_add_PKCS1_OAEP), \
    LFUNC(RSA_padding_check_PKCS1_OAEP), \
    LFUNC(RSA_padding_add_SSLv23), \
    LFUNC(RSA_padding_check_SSLv23), \
    LFUNC(RSA_padding_add_none), \
    LFUNC(RSA_padding_check_none), \
    LFUNC(RSA_get_ex_new_index), \
    LFUNC(RSA_set_ex_data), \
    LFUNC(RSA_get_ex_data), \
    LFUNC(RSAPublicKey_dup), \
    LFUNC(RSAPrivateKey_dup), \
    LFUNC(ERR_load_RSA_strings), \
    LFUNC(SHA_Init), \
    LFUNC(SHA_Update), \
    LFUNC(SHA_Final), \
    LFUNC(SHA), \
    LFUNC(SHA_Transform), \
    LFUNC(SHA1_Init), \
    LFUNC(SHA1_Update), \
    LFUNC(SHA1_Final), \
    LFUNC(SHA1), \
    LFUNC(SHA1_Transform), \
    LFUNC(UI_read_string_lib), \
    LFUNC(UI_write_string_lib), \
    LFUNC(HMAC_CTX_set_flags), \
    LFUNC(private_RC4_set_key), \
    LFUNC(X509_check_ca), \
    LFUNC(PROXY_POLICY_new), \
    LFUNC(PROXY_POLICY_free), \
    LFUNC(d2i_PROXY_POLICY), \
    LFUNC(i2d_PROXY_POLICY), \
    LFUNC(PROXY_POLICY_it), \
    LFUNC(PROXY_CERT_INFO_EXTENSION_new), \
    LFUNC(PROXY_CERT_INFO_EXTENSION_free), \
    LFUNC(d2i_PROXY_CERT_INFO_EXTENSION), \
    LFUNC(i2d_PROXY_CERT_INFO_EXTENSION), \
    LFUNC(PROXY_CERT_INFO_EXTENSION_it), \
    LFUNC(BN_mod_exp_mont_consttime), \
    LFUNC(BN_MONT_CTX_set_locked), \
    LFUNC(PKCS1_MGF1), \
    LFUNC(RSA_padding_add_X931), \
    LFUNC(RSA_padding_check_X931), \
    LFUNC(RSA_X931_hash_id), \
    LFUNC(RSA_verify_PKCS1_PSS), \
    LFUNC(RSA_padding_add_PKCS1_PSS), \
    LFUNC(EVP_sha224), \
    LFUNC(EVP_sha256), \
    LFUNC(EVP_sha384), \
    LFUNC(EVP_sha512), \
    LFUNC(BN_GF2m_add), \
    LFUNC(BN_GF2m_arr2poly), \
    LFUNC(BN_GF2m_mod), \
    LFUNC(BN_GF2m_mod_mul), \
    LFUNC(BN_GF2m_mod_sqr), \
    LFUNC(BN_GF2m_mod_inv), \
    LFUNC(BN_GF2m_mod_div), \
    LFUNC(BN_GF2m_mod_exp), \
    LFUNC(BN_GF2m_mod_sqrt), \
    LFUNC(BN_GF2m_mod_solve_quad), \
    LFUNC(BN_generate_prime_ex), \
    LFUNC(BN_is_prime_ex), \
    LFUNC(BN_set_negative), \
    LFUNC(EC_GROUP_get_degree), \
    LFUNC(EC_GF2m_simple_method), \
    LFUNC(EC_GROUP_set_curve_GF2m), \
    LFUNC(EC_GROUP_get_curve_GF2m), \
    LFUNC(EC_POINT_set_affine_coordinates_GF2m), \
    LFUNC(EC_POINT_get_affine_coordinates_GF2m), \
    LFUNC(EC_get_builtin_curves), \
    LFUNC(EC_GROUP_new_by_curve_name), \
    LFUNC(EC_GROUP_check), \
    LFUNC(ENGINE_cleanup), \
    LFUNC(DSA_generate_parameters_ex), \
    LFUNC(EVP_ecdsa), \
    LFUNC(EC_KEY_new_by_curve_name), \
    LFUNC(EC_KEY_generate_key), \
    LFUNC(EC_KEY_free), \
    LFUNC(ECDSA_SIG_free), \
    LFUNC(ECDSA_do_sign), \
    LFUNC(ECDSA_do_verify), \
    LFUNC(EC_KEY_new), \
    LFUNC(EC_KEY_set_group), \
    LFUNC(EC_KEY_get0_group), \
    LFUNC(EC_KEY_check_key), \
    LFUNC(ECDSA_size), \
    LFUNC(ECDSA_sign), \
    LFUNC(ECDSA_verify), \
    LFUNC(d2i_ECDSA_SIG), \
    LFUNC(i2d_ECDSA_SIG), \
    LFUNC(DH_generate_parameters_ex), \
    LFUNC(EC_METHOD_get_field_type), \
    LFUNC(EC_KEY_get0_public_key), \
    LFUNC(ECDH_compute_key), \
    LFUNC(EC_KEY_get0_private_key), \
    LFUNC(ENGINE_get_first), \
    LFUNC(ENGINE_get_id), \
    LFUNC(ENGINE_get_name), \
    LFUNC(ENGINE_get_next), \
    LFUNC(ENGINE_free), \
    LFUNC(ENGINE_new), \
    LFUNC(ENGINE_set_id), \
    LFUNC(ENGINE_set_name), \
    LFUNC(ENGINE_add), \
    LFUNC(ENGINE_remove), \
    LFUNC(ENGINE_load_builtin_engines), \
    LFUNC(ENGINE_register_all_ciphers), \
    LFUNC(EVP_CIPHER_nid), \
    LFUNC(EVP_MD_type), \
    LFUNC(ENGINE_register_all_digests), \
    LFUNC(BIO_test_flags), \
    LFUNC(SSL_COMP_get_compression_methods), \
    LFUNC(RSA_generate_key_ex), \
    LFUNC(X509_VERIFY_PARAM_free), \
    LFUNC(X509_STORE_set1_param), \
    LFUNC(ASN1_generate_nconf), \
    LFUNC(PEM_read_bio_ECPKParameters), \
    LFUNC(EC_KEY_dup), \
    LFUNC(BIO_set_callback), \
    LFUNC(BIO_set_callback_arg), \
    LFUNC(EVP_MD_CTX_set_flags), \
    LFUNC(BIO_set_flags), \
    LFUNC(EVP_CIPHER_CTX_set_flags), \
    LFUNC(EVP_CIPHER_iv_length), \
    LFUNC(X509_REQ_check_private_key), \
    LFUNC(PEM_read_bio_EC_PUBKEY), \
    LFUNC(PEM_read_bio_ECPrivateKey), \
    LFUNC(PEM_write_bio_EC_PUBKEY), \
    LFUNC(d2i_EC_PUBKEY_bio), \
    LFUNC(EC_KEY_set_asn1_flag), \
    LFUNC(EC_KEY_set_conv_form), \
    LFUNC(EC_KEY_print), \
    LFUNC(d2i_ECPrivateKey_bio), \
    LFUNC(i2d_EC_PUBKEY_bio), \
    LFUNC(PEM_write_bio_ECPrivateKey), \
    LFUNC(PEM_write_bio_ECPKParameters), \
    LFUNC(i2d_ECPrivateKey_bio), \
    LFUNC(i2d_ECPKParameters), \
    LFUNC(EC_GROUP_set_asn1_flag), \
    LFUNC(EC_GROUP_set_point_conversion_form), \
    LFUNC(EC_GROUP_get_point_conversion_form), \
    LFUNC(ECPKParameters_print), \
    LFUNC(EC_GROUP_set_seed), \
    LFUNC(d2i_ECPKParameters), \
    LFUNC(EC_POINT_point2bn), \
    LFUNC(X509_get1_ocsp), \
    LFUNC(SSL_get_servername), \
    LFUNC(SSL_set_SSL_CTX), \
    LFUNC(SSL_CTX_set_cookie_generate_cb), \
    LFUNC(SSL_CTX_set_cookie_verify_cb), \
    LFUNC(SSL_CTX_set_info_callback), \
    LFUNC(DTLSv1_server_method), \
    LFUNC(BIO_new_dgram), \
    LFUNC(SSL_get_servername_type), \
    LFUNC(SSL_get_current_compression), \
    LFUNC(SSL_get_current_expansion), \
    LFUNC(SSL_COMP_get_name), \
    LFUNC(ENGINE_by_id), \
    LFUNC(SSL_CTX_set_client_cert_engine), \
    LFUNC(DTLSv1_client_method), \
    LFUNC(DTLSv1_method), \
    LFUNC(SHA256), \
    LFUNC(SHA512), \
    LFUNC(AES_ige_encrypt), \
    LFUNC(EC_KEY_precompute_mult), \
    LFUNC(ENGINE_load_private_key), \
    LFUNC(ENGINE_load_public_key), \
    LFUNC(ENGINE_ctrl_cmd), \
    LFUNC(ENGINE_set_default), \
    LFUNC(ENGINE_ctrl), \
    LFUNC(ENGINE_register_all_complete), \
    LFUNC(ENGINE_ctrl_cmd_string), \
    LFUNC(X509_VERIFY_PARAM_add0_policy), \
    LFUNC(X509_VERIFY_PARAM_set_purpose), \
    LFUNC(X509_VERIFY_PARAM_set_flags), \
    LFUNC(X509_VERIFY_PARAM_new), \
    LFUNC(X509_POLICY_NODE_print), \
    LFUNC(X509_STORE_CTX_get0_policy_tree), \
    LFUNC(X509_STORE_CTX_get_explicit_policy), \
    LFUNC(X509_policy_tree_get0_policies), \
    LFUNC(X509_policy_tree_get0_user_policies), \
    LFUNC(BIO_get_callback_arg), \
    LFUNC(EVP_PKEY_add1_attr_by_NID), \
    LFUNC(ENGINE_get_RSA), \
    LFUNC(ENGINE_get_DSA), \
    LFUNC(ENGINE_get_DH), \
    LFUNC(ENGINE_get_RAND), \
    LFUNC(ENGINE_get_ciphers), \
    LFUNC(ENGINE_get_digests), \
    LFUNC(ENGINE_init), \
    LFUNC(ENGINE_finish), \
    LFUNC(OCSP_sendreq_new), \
    LFUNC(OCSP_sendreq_nbio), \
    LFUNC(OCSP_REQ_CTX_free), \
    LFUNC(SSL_CTX_use_psk_identity_hint), \
    LFUNC(SSL_CTX_set_psk_client_callback), \
    LFUNC(SSL_get_psk_identity_hint), \
    LFUNC(SSL_set_psk_server_callback), \
    LFUNC(SSL_use_psk_identity_hint), \
    LFUNC(SSL_set_psk_client_callback), \
    LFUNC(SSL_CTX_set_psk_server_callback), \
    LFUNC(SSL_get_psk_identity), \
    LFUNC(SSL_set_session_ticket_ext), \
    LFUNC(SSL_set_session_secret_cb), \
    LFUNC(SSL_set_session_ticket_ext_cb), \
    LFUNC(SSL_set1_param), \
    LFUNC(SSL_CTX_set1_param), \
    LFUNC(SSL_renegotiate_abbreviated), \
    LFUNC(TLSv1_1_method), \
    LFUNC(TLSv1_1_client_method), \
    LFUNC(TLSv1_1_server_method), \
    LFUNC(SSL_CTX_set_srp_client_pwd_callback), \
    LFUNC(SSL_get_srp_g), \
    LFUNC(SSL_CTX_set_srp_username_callback), \
    LFUNC(SSL_get_srp_userinfo), \
    LFUNC(SSL_set_srp_server_param), \
    LFUNC(SSL_set_srp_server_param_pw), \
    LFUNC(SSL_get_srp_N), \
    LFUNC(SSL_get_srp_username), \
    LFUNC(SSL_CTX_set_srp_password), \
    LFUNC(SSL_CTX_set_srp_strength), \
    LFUNC(SSL_CTX_set_srp_verify_param_callback), \
    LFUNC(SSL_CTX_set_srp_cb_arg), \
    LFUNC(SSL_CTX_set_srp_username), \
    LFUNC(SSL_CTX_SRP_CTX_init), \
    LFUNC(SRP_Calc_A_param), \
    LFUNC(SRP_generate_server_master_secret), \
    LFUNC(SSL_CTX_SRP_CTX_free), \
    LFUNC(SRP_generate_client_master_secret), \
    LFUNC(SSL_srp_server_param_with_username), \
    LFUNC(SSL_SRP_CTX_free), \
    LFUNC(SSL_set_debug), \
    LFUNC(SSL_SESSION_get0_peer), \
    LFUNC(TLSv1_2_client_method), \
    LFUNC(SSL_SESSION_set1_id_context), \
    LFUNC(TLSv1_2_server_method), \
    LFUNC(SSL_cache_hit), \
    LFUNC(SSL_set_state), \
    LFUNC(SSL_CIPHER_get_id), \
    LFUNC(TLSv1_2_method), \
    LFUNC(SSL_export_keying_material), \
    LFUNC(SSL_set_tlsext_use_srtp), \
    LFUNC(SSL_CTX_set_next_protos_advertised_cb), \
    LFUNC(SSL_get0_next_proto_negotiated), \
    LFUNC(SSL_get_selected_srtp_profile), \
    LFUNC(SSL_CTX_set_tlsext_use_srtp), \
    LFUNC(SSL_select_next_proto), \
    LFUNC(SSL_get_srtp_profiles), \
    LFUNC(SSL_CTX_set_next_proto_select_cb), \
    LFUNC(SSL_SESSION_get_compress_id), \
    LFUNC(SSL_CTX_set_tmp_ecdh_callback), \
    LFUNC(SSL_set_tmp_ecdh_callback), \
    LFUNC(SSL_SRP_CTX_init), \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    LFUNC(DES_options), \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    LFUNC(ERR_load_ENGINE_strings), \
    LFUNC(ENGINE_set_DSA), \
    LFUNC(ENGINE_get_finish_function), \
    LFUNC(ENGINE_get_default_RSA), \
    LFUNC(ENGINE_set_DH), \
    LFUNC(ENGINE_get_init_function), \
    LFUNC(ENGINE_set_init_function), \
    LFUNC(ENGINE_set_default_DSA), \
    LFUNC(ENGINE_get_last), \
    LFUNC(ENGINE_get_prev), \
    LFUNC(ENGINE_get_default_DH), \
    LFUNC(ENGINE_set_finish_function), \
    LFUNC(ENGINE_set_RSA), \
    LFUNC(ENGINE_set_default_RAND), \
    LFUNC(ENGINE_get_default_DSA), \
    LFUNC(ENGINE_set_default_RSA), \
    LFUNC(ENGINE_get_default_RAND), \
    LFUNC(ENGINE_set_RAND), \
    LFUNC(ENGINE_set_default_DH), \
    LFUNC(ENGINE_get_ctrl_function), \
    LFUNC(ENGINE_set_ctrl_function), \
    LFUNC(ENGINE_unregister_ciphers), \
    LFUNC(ENGINE_unregister_RSA), \
    LFUNC(ENGINE_register_all_RAND), \
    LFUNC(ENGINE_load_dynamic), \
    LFUNC(ENGINE_get_digest_engine), \
    LFUNC(ENGINE_register_DH), \
    LFUNC(ENGINE_register_RAND), \
    LFUNC(ENGINE_load_cryptodev), \
    LFUNC(ENGINE_register_ciphers), \
    LFUNC(ENGINE_load_ubsec), \
    LFUNC(ENGINE_load_openssl), \
    LFUNC(ENGINE_get_cmd_defns), \
    LFUNC(ENGINE_set_load_privkey_function), \
    LFUNC(ENGINE_set_default_digests), \
    LFUNC(ENGINE_register_RSA), \
    LFUNC(ENGINE_unregister_DSA), \
    LFUNC(ENGINE_set_ciphers), \
    LFUNC(RAND_set_rand_engine), \
    LFUNC(ENGINE_get_digest), \
    LFUNC(ENGINE_get_cipher), \
    LFUNC(ENGINE_cmd_is_executable), \
    LFUNC(ENGINE_register_DSA), \
    LFUNC(ENGINE_set_load_pubkey_function), \
    LFUNC(ENGINE_get_load_pubkey_function), \
    LFUNC(ENGINE_register_all_RSA), \
    LFUNC(ENGINE_unregister_digests), \
    LFUNC(ENGINE_get_ex_new_index), \
    LFUNC(ENGINE_get_ex_data), \
    NULL, \
    LFUNC(ENGINE_set_cmd_defns), \
    LFUNC(ENGINE_register_digests), \
    LFUNC(ENGINE_register_all_DH), \
    LFUNC(ENGINE_get_flags), \
    LFUNC(ENGINE_unregister_DH), \
    LFUNC(ENGINE_register_all_DSA), \
    LFUNC(ENGINE_set_digests), \
    LFUNC(ENGINE_register_complete), \
    LFUNC(ENGINE_set_ex_data), \
    LFUNC(ENGINE_set_destroy_function), \
    LFUNC(ENGINE_get_cipher_engine), \
    NULL, \
    LFUNC(ENGINE_load_cswift), \
    LFUNC(ENGINE_set_default_ciphers), \
    LFUNC(ENGINE_unregister_RAND), \
    LFUNC(ENGINE_load_nuron), \
    LFUNC(ENGINE_set_table_flags), \
    LFUNC(ENGINE_load_chil), \
    LFUNC(ENGINE_get_destroy_function), \
    NULL, \
    LFUNC(ENGINE_load_atalla), \
    LFUNC(ENGINE_get_table_flags), \
    LFUNC(ENGINE_set_flags), \
    LFUNC(ENGINE_get_load_privkey_function), \
    LFUNC(ENGINE_set_default_string), \
    LFUNC(ENGINE_add_conf_module), \
    LFUNC(ENGINE_load_aep), \
    LFUNC(ENGINE_load_sureware), \
    LFUNC(ENGINE_load_4758cca), \
    LFUNC(ENGINE_up_ref), \
    LFUNC(ENGINE_set_STORE), \
    LFUNC(ENGINE_register_ECDSA), \
    LFUNC(BN_BLINDING_get_thread_id), \
    LFUNC(EC_GROUP_get_trinomial_basis), \
    LFUNC(ECDH_get_default_method), \
    LFUNC(ENGINE_register_ECDH), \
    LFUNC(SHA512_Update), \
    LFUNC(i2d_ECPrivateKey), \
    LFUNC(BN_GF2m_mod_exp_arr), \
    LFUNC(BN_GF2m_mod_mul_arr), \
    LFUNC(o2i_ECPublicKey), \
    LFUNC(EC_KEY_copy), \
    NULL, \
    LFUNC(EC_GROUP_check_discriminant), \
    LFUNC(i2o_ECPublicKey), \
    LFUNC(EC_GROUP_new_curve_GF2m), \
    LFUNC(ENGINE_unregister_STORE), \
    LFUNC(EVP_PKEY_get1_EC_KEY), \
    LFUNC(ENGINE_get_default_ECDH), \
    LFUNC(EC_KEY_get_conv_form), \
    LFUNC(ENGINE_get_static_state), \
    LFUNC(ECDSA_SIG_new), \
    LFUNC(EC_POINT_bn2point), \
    LFUNC(EC_KEY_get_key_method_data), \
    LFUNC(ECDSA_sign_ex), \
    LFUNC(EC_GROUP_get_pentanomial_basis), \
    LFUNC(ECDSA_sign_setup), \
    LFUNC(BN_GF2m_mod_solve_quad_arr), \
    LFUNC(EC_KEY_up_ref), \
    LFUNC(d2i_EC_PUBKEY), \
    LFUNC(EC_GROUP_have_precompute_mult), \
    NULL, \
    LFUNC(BN_GF2m_mod_arr), \
    LFUNC(ECDH_get_ex_data), \
    LFUNC(ENGINE_unregister_ECDH), \
    LFUNC(ECDH_OpenSSL), \
    LFUNC(EC_POINT_dup), \
    LFUNC(EVP_PKEY_set1_EC_KEY), \
    LFUNC(BN_GF2m_mod_sqrt_arr), \
    NULL, \
    LFUNC(EC_KEY_set_private_key), \
    LFUNC(BN_GF2m_poly2arr), \
    LFUNC(i2d_ECParameters), \
    LFUNC(ENGINE_set_ECDH), \
    LFUNC(SHA256_Init), \
    LFUNC(ECDSA_get_ex_data), \
    LFUNC(SHA224), \
    NULL, \
    LFUNC(EC_GROUP_get_seed_len), \
    LFUNC(i2d_EC_PUBKEY), \
    LFUNC(ECDSA_get_default_method), \
    LFUNC(EC_GFp_nist_method), \
    LFUNC(ENGINE_load_padlock), \
    LFUNC(EC_GROUP_set_curve_name), \
    LFUNC(BN_GF2m_mod_sqr_arr), \
    LFUNC(BIO_s_datagram), \
    LFUNC(ENGINE_set_default_ECDSA), \
    LFUNC(ECDH_set_default_method), \
    LFUNC(SHA384_Update), \
    LFUNC(EC_KEY_insert_key_method_data), \
    LFUNC(SHA224_Final), \
    LFUNC(SHA224_Update), \
    LFUNC(d2i_ECPrivateKey), \
    LFUNC(ENGINE_register_all_STORE), \
    LFUNC(SHA512_Final), \
    LFUNC(EC_GROUP_get_asn1_flag), \
    LFUNC(ECDH_get_ex_new_index), \
    LFUNC(EC_GROUP_get0_seed), \
    LFUNC(BN_GF2m_mod_div_arr), \
    LFUNC(ENGINE_set_ECDSA), \
    NULL, \
    LFUNC(ECDH_set_method), \
    LFUNC(ECDH_set_ex_data), \
    NULL, \
    LFUNC(ECDSA_OpenSSL), \
    LFUNC(EC_KEY_get_enc_flags), \
    LFUNC(ECDSA_set_default_method), \
    LFUNC(EC_POINT_set_compressed_coordinates_GF2m), \
    LFUNC(EC_GROUP_cmp), \
    LFUNC(SHA224_Init), \
    NULL, \
    LFUNC(SHA512_Init), \
    LFUNC(ERR_load_ECDSA_strings), \
    LFUNC(EC_GROUP_get_basis_type), \
    NULL, \
    LFUNC(ENGINE_register_all_ECDH), \
    NULL, \
    LFUNC(ENGINE_register_all_ECDSA), \
    LFUNC(EC_GROUP_dup), \
    LFUNC(ENGINE_get_default_ECDSA), \
    LFUNC(SHA256_Transform), \
    LFUNC(EC_KEY_set_enc_flags), \
    LFUNC(EC_POINT_point2hex), \
    LFUNC(ENGINE_get_STORE), \
    LFUNC(ECDSA_do_sign_ex), \
    NULL, \
    LFUNC(SHA512_Transform), \
    NULL, \
    LFUNC(EC_KEY_set_public_key), \
    NULL, \
    LFUNC(ENGINE_register_STORE), \
    NULL, \
    LFUNC(EC_GROUP_get_curve_name), \
    NULL, \
    LFUNC(SHA256_Final), \
    LFUNC(ENGINE_get_ECDH), \
    LFUNC(ENGINE_get_ECDSA), \
    LFUNC(ERR_load_ECDH_strings), \
    LFUNC(ECDSA_set_method), \
    LFUNC(d2i_ECParameters), \
    LFUNC(SHA384_Init), \
    LFUNC(ECDSA_set_ex_data), \
    LFUNC(SHA384_Final), \
    LFUNC(ECDSA_get_ex_new_index), \
    LFUNC(SHA384), \
    NULL, \
    LFUNC(ENGINE_set_default_ECDH), \
    LFUNC(EC_POINT_hex2point), \
    LFUNC(SHA256_Update), \
    LFUNC(BN_GF2m_mod_inv_arr), \
    LFUNC(ENGINE_unregister_ECDSA), \
    LFUNC(BN_BLINDING_set_thread_id), \
    LFUNC(DH_check_pub_key), \
    LFUNC(Camellia_cbc_encrypt), \
    LFUNC(Camellia_cfb128_encrypt), \
    LFUNC(Camellia_cfb1_encrypt), \
    LFUNC(Camellia_cfb8_encrypt), \
    LFUNC(Camellia_ctr128_encrypt), \
    LFUNC(Camellia_decrypt), \
    LFUNC(Camellia_ecb_encrypt), \
    LFUNC(Camellia_encrypt), \
    LFUNC(Camellia_ofb128_encrypt), \
    LFUNC(Camellia_set_key), \
    LFUNC(EVP_camellia_128_cbc), \
    LFUNC(EVP_camellia_128_cfb128), \
    LFUNC(EVP_camellia_128_cfb1), \
    LFUNC(EVP_camellia_128_cfb8), \
    LFUNC(EVP_camellia_128_ecb), \
    LFUNC(EVP_camellia_128_ofb), \
    LFUNC(EVP_camellia_192_cbc), \
    LFUNC(EVP_camellia_192_cfb128), \
    LFUNC(EVP_camellia_192_cfb1), \
    LFUNC(EVP_camellia_192_cfb8), \
    LFUNC(EVP_camellia_192_ecb), \
    LFUNC(EVP_camellia_192_ofb), \
    LFUNC(EVP_camellia_256_cbc), \
    LFUNC(EVP_camellia_256_cfb128), \
    LFUNC(EVP_camellia_256_cfb1), \
    LFUNC(EVP_camellia_256_cfb8), \
    LFUNC(EVP_camellia_256_ecb), \
    LFUNC(EVP_camellia_256_ofb), \
    LFUNC(AES_bi_ige_encrypt), \
    LFUNC(SEED_decrypt), \
    LFUNC(SEED_encrypt), \
    LFUNC(SEED_cbc_encrypt), \
    LFUNC(EVP_seed_ofb), \
    LFUNC(SEED_cfb128_encrypt), \
    LFUNC(SEED_ofb128_encrypt), \
    LFUNC(EVP_seed_cbc), \
    LFUNC(SEED_ecb_encrypt), \
    LFUNC(EVP_seed_ecb), \
    LFUNC(SEED_set_key), \
    LFUNC(EVP_seed_cfb128), \
    LFUNC(AES_unwrap_key), \
    LFUNC(AES_wrap_key), \
    LFUNC(CMS_ReceiptRequest_free), \
    NULL, \
    LFUNC(CMS_add0_CertificateChoices), \
    LFUNC(CMS_unsigned_add1_attr_by_OBJ), \
    LFUNC(ERR_load_CMS_strings), \
    LFUNC(CMS_sign_receipt), \
    LFUNC(i2d_CMS_ContentInfo), \
    LFUNC(CMS_signed_delete_attr), \
    LFUNC(d2i_CMS_bio), \
    LFUNC(CMS_unsigned_get_attr_by_NID), \
    LFUNC(CMS_verify), \
    LFUNC(SMIME_read_CMS), \
    LFUNC(CMS_decrypt_set1_key), \
    LFUNC(CMS_SignerInfo_get0_algs), \
    LFUNC(CMS_add1_cert), \
    LFUNC(CMS_set_detached), \
    LFUNC(CMS_encrypt), \
    LFUNC(CMS_EnvelopedData_create), \
    LFUNC(CMS_uncompress), \
    LFUNC(CMS_add0_crl), \
    LFUNC(CMS_SignerInfo_verify_content), \
    LFUNC(CMS_unsigned_get0_data_by_OBJ), \
    LFUNC(PEM_write_bio_CMS), \
    LFUNC(CMS_unsigned_get_attr), \
    LFUNC(CMS_RecipientInfo_ktri_cert_cmp), \
    LFUNC(CMS_RecipientInfo_ktri_get0_algs), \
    LFUNC(CMS_ContentInfo_free), \
    LFUNC(CMS_final), \
    LFUNC(CMS_add_simple_smimecap), \
    LFUNC(CMS_SignerInfo_verify), \
    LFUNC(CMS_data), \
    LFUNC(d2i_CMS_ReceiptRequest), \
    LFUNC(CMS_compress), \
    LFUNC(CMS_digest_create), \
    LFUNC(CMS_SignerInfo_cert_cmp), \
    LFUNC(CMS_SignerInfo_sign), \
    LFUNC(CMS_data_create), \
    LFUNC(i2d_CMS_bio), \
    LFUNC(CMS_EncryptedData_set1_key), \
    LFUNC(CMS_decrypt), \
    LFUNC(CMS_unsigned_delete_attr), \
    LFUNC(CMS_unsigned_get_attr_count), \
    LFUNC(CMS_add_smimecap), \
    NULL, \
    LFUNC(CMS_signed_get_attr_by_OBJ), \
    LFUNC(d2i_CMS_ContentInfo), \
    LFUNC(CMS_add_standard_smimecap), \
    LFUNC(CMS_ContentInfo_new), \
    LFUNC(CMS_RecipientInfo_type), \
    LFUNC(CMS_get0_type), \
    LFUNC(CMS_is_detached), \
    LFUNC(CMS_sign), \
    LFUNC(CMS_signed_add1_attr), \
    LFUNC(CMS_unsigned_get_attr_by_OBJ), \
    LFUNC(SMIME_write_CMS), \
    LFUNC(CMS_EncryptedData_decrypt), \
    LFUNC(CMS_get0_RecipientInfos), \
    LFUNC(CMS_add0_RevocationInfoChoice), \
    LFUNC(CMS_decrypt_set1_pkey), \
    LFUNC(CMS_SignerInfo_set1_signer_cert), \
    LFUNC(CMS_get0_signers), \
    LFUNC(CMS_ReceiptRequest_get0_values), \
    LFUNC(CMS_signed_get0_data_by_OBJ), \
    LFUNC(CMS_get0_SignerInfos), \
    LFUNC(CMS_add0_cert), \
    LFUNC(CMS_EncryptedData_encrypt), \
    LFUNC(CMS_digest_verify), \
    LFUNC(CMS_set1_signers_certs), \
    LFUNC(CMS_signed_get_attr), \
    LFUNC(CMS_RecipientInfo_set0_key), \
    LFUNC(CMS_SignedData_init), \
    LFUNC(CMS_RecipientInfo_kekri_get0_id), \
    LFUNC(CMS_verify_receipt), \
    LFUNC(PEM_read_bio_CMS), \
    LFUNC(CMS_get1_crls), \
    LFUNC(CMS_add0_recipient_key), \
    LFUNC(CMS_ReceiptRequest_new), \
    LFUNC(CMS_get0_content), \
    LFUNC(CMS_get1_ReceiptRequest), \
    LFUNC(CMS_signed_add1_attr_by_OBJ), \
    LFUNC(CMS_RecipientInfo_kekri_id_cmp), \
    LFUNC(CMS_add1_ReceiptRequest), \
    LFUNC(CMS_SignerInfo_get0_signer_id), \
    LFUNC(CMS_unsigned_add1_attr_by_NID), \
    LFUNC(CMS_unsigned_add1_attr), \
    LFUNC(CMS_signed_get_attr_by_NID), \
    LFUNC(CMS_get1_certs), \
    LFUNC(CMS_signed_add1_attr_by_NID), \
    LFUNC(CMS_unsigned_add1_attr_by_txt), \
    LFUNC(CMS_dataFinal), \
    LFUNC(CMS_RecipientInfo_ktri_get0_signer_id), \
    LFUNC(i2d_CMS_ReceiptRequest), \
    LFUNC(CMS_add1_recipient_cert), \
    LFUNC(CMS_dataInit), \
    LFUNC(CMS_signed_add1_attr_by_txt), \
    LFUNC(CMS_RecipientInfo_decrypt), \
    LFUNC(CMS_signed_get_attr_count), \
    LFUNC(CMS_get0_eContentType), \
    LFUNC(CMS_set1_eContentType), \
    LFUNC(CMS_ReceiptRequest_create0), \
    LFUNC(CMS_add1_signer), \
    LFUNC(CMS_RecipientInfo_set0_pkey), \
    LFUNC(ENGINE_set_load_ssl_client_cert_function), \
    LFUNC(ENGINE_get_ssl_client_cert_function), \
    LFUNC(ENGINE_load_ssl_client_cert), \
    LFUNC(ENGINE_load_capi), \
    LFUNC(ENGINE_register_pkey_meths), \
    LFUNC(ENGINE_get_pkey_asn1_meth_engine), \
    LFUNC(WHIRLPOOL_Init), \
    LFUNC(WHIRLPOOL), \
    LFUNC(ENGINE_get_pkey_asn1_meth), \
    LFUNC(ENGINE_get_pkey_meth), \
    LFUNC(BIO_new_CMS), \
    LFUNC(ENGINE_set_default_pkey_asn1_meths), \
    LFUNC(WHIRLPOOL_BitUpdate), \
    LFUNC(i2d_CMS_bio_stream), \
    LFUNC(CMS_stream), \
    LFUNC(ENGINE_pkey_asn1_find_str), \
    LFUNC(ENGINE_get_pkey_meths), \
    LFUNC(ENGINE_register_pkey_asn1_meths), \
    LFUNC(ENGINE_set_default_pkey_meths), \
    LFUNC(HMAC_CTX_copy), \
    LFUNC(ENGINE_get_pkey_asn1_meths), \
    LFUNC(EVP_whirlpool), \
    LFUNC(ENGINE_register_all_pkey_meths), \
    LFUNC(WHIRLPOOL_Final), \
    LFUNC(ENGINE_get_pkey_asn1_meth_str), \
    LFUNC(ENGINE_register_all_pkey_asn1_meths), \
    LFUNC(CMS_ContentInfo_print_ctx), \
    LFUNC(CMS_add1_crl), \
    LFUNC(ENGINE_set_pkey_asn1_meths), \
    LFUNC(ENGINE_get_pkey_meth_engine), \
    LFUNC(WHIRLPOOL_Update), \
    LFUNC(PEM_write_bio_CMS_stream), \
    LFUNC(ENGINE_unregister_pkey_meths), \
    LFUNC(ENGINE_unregister_pkey_asn1_meths), \
    LFUNC(ENGINE_set_pkey_meths), \
    LFUNC(DSAparams_dup), \
    LFUNC(DHparams_dup), \
    LFUNC(X509_issuer_name_hash_old), \
    LFUNC(X509_subject_name_hash_old), \
    LFUNC(SRP_VBASE_get_by_user), \
    LFUNC(SRP_Calc_server_key), \
    LFUNC(SRP_create_verifier), \
    LFUNC(SRP_create_verifier_BN), \
    LFUNC(SRP_Calc_u), \
    LFUNC(SRP_VBASE_free), \
    LFUNC(SRP_Calc_client_key), \
    LFUNC(SRP_get_default_gN), \
    LFUNC(SRP_Calc_x), \
    LFUNC(SRP_Calc_B), \
    LFUNC(SRP_VBASE_new), \
    LFUNC(SRP_check_known_gN_param), \
    LFUNC(SRP_Calc_A), \
    LFUNC(SRP_Verify_A_mod_N), \
    LFUNC(SRP_VBASE_init), \
    LFUNC(SRP_Verify_B_mod_N), \
    LFUNC(EC_KEY_set_public_key_affine_coordinates), \
    LFUNC(EVP_aes_192_ctr), \
    LFUNC(EVP_aes_128_ctr), \
    LFUNC(EVP_aes_256_ctr), \
    LFUNC(EC_KEY_get_flags), \
    LFUNC(EVP_aes_128_xts), \
    LFUNC(private_AES_set_decrypt_key), \
    LFUNC(EVP_aes_256_xts), \
    LFUNC(EVP_aes_128_gcm), \
    LFUNC(EC_KEY_clear_flags), \
    LFUNC(EC_KEY_set_flags), \
    LFUNC(EVP_aes_256_ccm), \
    LFUNC(private_AES_set_encrypt_key), \
    LFUNC(EVP_aes_128_ccm), \
    LFUNC(EVP_aes_192_gcm), \
    LFUNC(EVP_aes_256_gcm), \
    LFUNC(EVP_aes_192_ccm), \
    LFUNC(EVP_rc4_hmac_md5), \
    LFUNC(EVP_aes_128_cbc_hmac_sha1), \
    LFUNC(ENGINE_load_rdrand), \
    LFUNC(ENGINE_load_rsax), \
    LFUNC(EVP_aes_256_cbc_hmac_sha1), \
    LFUNC(CMS_add0_recipient_password), \
    LFUNC(CMS_decrypt_set1_password), \
    LFUNC(CMS_RecipientInfo_set0_password), \
    LFUNC(X509_REQ_sign_ctx), \
    LFUNC(X509_CRL_sign_ctx), \
    LFUNC(X509_signature_dump), \
    LFUNC(X509_sign_ctx), \
    LFUNC(ASN1_item_sign_ctx), \
    LFUNC(OPENSSL_cpuid_setup), \
    LFUNC(ERR_remove_thread_state), \
    LFUNC(X509_STORE_CTX_set0_crls), \
    LFUNC(SSL_SESSION_get_id), \
    LFUNC(SSL_CTX_sess_set_new_cb), \
    LFUNC(SSL_CTX_sess_get_get_cb), \
    LFUNC(SSL_CTX_sess_set_get_cb), \
    LFUNC(SSL_CTX_get_info_callback), \
    LFUNC(SSL_CTX_set_client_cert_cb), \
    LFUNC(SSL_CTX_sess_set_remove_cb), \
    LFUNC(SSL_CTX_sess_get_new_cb), \
    LFUNC(SSL_CTX_get_client_cert_cb), \
    LFUNC(SSL_CTX_sess_get_remove_cb), \
    LFUNC(PEM_write_bio_SSL_SESSION), \
    NULL, \
    LFUNC(PEM_read_bio_SSL_SESSION), \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    NULL, \
    LFUNC(FIPS_mode_set), \
    LFUNC(BN_X931_generate_Xpq), \
    LFUNC(BN_get0_nist_prime_384), \
    LFUNC(ERR_set_mark), \
    LFUNC(BN_BLINDING_invert_ex), \
    LFUNC(NAME_CONSTRAINTS_free), \
    LFUNC(X509_STORE_CTX_set0_param), \
    LFUNC(POLICY_CONSTRAINTS_free), \
    LFUNC(BN_nist_mod_192), \
    LFUNC(GENERAL_SUBTREE_free), \
    LFUNC(PKCS12_add_safe), \
    LFUNC(BN_get0_nist_prime_192), \
    LFUNC(X509_keyid_get0), \
    LFUNC(pitem_new), \
    LFUNC(X509_policy_node_get0_parent), \
    LFUNC(a2i_IPADDRESS), \
    LFUNC(X509_STORE_CTX_set_depth), \
    LFUNC(X509_VERIFY_PARAM_inherit), \
    LFUNC(pqueue_iterator), \
    LFUNC(X509_VERIFY_PARAM_set_depth), \
    LFUNC(EVP_PKEY_add1_attr_by_txt), \
    LFUNC(BN_BLINDING_set_flags), \
    LFUNC(X509_VERIFY_PARAM_set1_policies), \
    LFUNC(X509_VERIFY_PARAM_set1_name), \
    LFUNC(POLICY_MAPPING_free), \
    LFUNC(pqueue_print), \
    LFUNC(PEM_write_bio_X509_CERT_PAIR), \
    LFUNC(EVP_PKEY_cmp), \
    LFUNC(X509_policy_level_node_count), \
    LFUNC(EVP_PKEY_get_attr), \
    LFUNC(GENERAL_SUBTREE_new), \
    LFUNC(X509_policy_node_get0_qualifiers), \
    LFUNC(pqueue_find), \
    LFUNC(pqueue_peek), \
    LFUNC(X509_policy_node_get0_policy), \
    LFUNC(PKCS12_add_safes), \
    LFUNC(BN_BLINDING_convert_ex), \
    LFUNC(X509_policy_tree_free), \
    LFUNC(OPENSSL_ia32cap_loc), \
    LFUNC(BN_get0_nist_prime_224), \
    LFUNC(BN_GENCB_call), \
    LFUNC(NAME_CONSTRAINTS_new), \
    LFUNC(ECParameters_print), \
    LFUNC(BUF_memdup), \
    LFUNC(X509_VERIFY_PARAM_set_trust), \
    LFUNC(EVP_PKEY_get_attr_count), \
    LFUNC(X509_STORE_CTX_get0_param), \
    NULL, \
    LFUNC(X509_STORE_set_depth), \
    LFUNC(BUF_strndup), \
    LFUNC(ASN1_put_eoc), \
    LFUNC(X509_VERIFY_PARAM_table_cleanup), \
    LFUNC(RSA_setup_blinding), \
    LFUNC(sk_find_ex), \
    LFUNC(POLICY_CONSTRAINTS_new), \
    LFUNC(X509_VERIFY_PARAM_get_depth), \
    LFUNC(ASN1_item_ndef_i2d), \
    LFUNC(ERR_pop_to_mark), \
    LFUNC(X509_policy_level_get0_node), \
    LFUNC(i2d_PKCS7_NDEF), \
    LFUNC(ASN1_generate_v3), \
    LFUNC(X509_policy_tree_level_count), \
    LFUNC(X509_CERT_PAIR_free), \
    LFUNC(BN_nist_mod_224), \
    LFUNC(BIO_dgram_non_fatal_error), \
    LFUNC(v2i_ASN1_BIT_STRING), \
    LFUNC(X509_STORE_CTX_set_default), \
    LFUNC(X509_VERIFY_PARAM_set1), \
    LFUNC(v2i_GENERAL_NAME_ex), \
    LFUNC(BN_nist_mod_521), \
    LFUNC(X509_policy_tree_get0_level), \
    LFUNC(ASN1_const_check_infinite_end), \
    LFUNC(EVP_PKEY_delete_attr), \
    LFUNC(BN_get0_nist_prime_256), \
    LFUNC(i2v_ASN1_BIT_STRING), \
    LFUNC(BN_nist_mod_384), \
    LFUNC(i2d_X509_CERT_PAIR), \
    LFUNC(pqueue_pop), \
    LFUNC(EVP_PKEY_get_attr_by_OBJ), \
    LFUNC(X509_VERIFY_PARAM_lookup), \
    LFUNC(X509_CERT_PAIR_new), \
    LFUNC(X509V3_NAME_from_section), \
    LFUNC(EVP_PKEY_add1_attr), \
    NULL, \
    LFUNC(BIO_dump_indent_cb), \
    LFUNC(d2i_X509_CERT_PAIR), \
    LFUNC(asn1_const_Finish), \
    LFUNC(BN_nist_mod_256), \
    LFUNC(X509_VERIFY_PARAM_add0_table), \
    LFUNC(pqueue_free), \
    LFUNC(BN_BLINDING_create_param), \
    LFUNC(BN_get0_nist_prime_521), \
    LFUNC(BN_is_prime_fasttest_ex), \
    LFUNC(X509_policy_check), \
    LFUNC(EVP_PKEY_get_attr_by_NID), \
    LFUNC(BN_BLINDING_get_flags), \
    LFUNC(PKCS12_add_cert), \
    LFUNC(EVP_CIPHER_CTX_rand_key), \
    LFUNC(a2i_IPADDRESS_NC), \
    LFUNC(PKCS7_set_digest), \
    LFUNC(POLICY_MAPPING_new), \
    LFUNC(PKCS7_set0_type_other), \
    LFUNC(PEM_read_bio_X509_CERT_PAIR), \
    LFUNC(pqueue_next), \
    LFUNC(EVP_PKEY_add1_attr_by_OBJ), \
    LFUNC(X509_VERIFY_PARAM_set_time), \
    LFUNC(pqueue_new), \
    LFUNC(PKCS12_add_key), \
    LFUNC(DSO_merge), \
    LFUNC(BIO_dump_cb), \
    LFUNC(pqueue_insert), \
    LFUNC(pitem_free), \
    LFUNC(get_rfc3526_prime_8192), \
    LFUNC(X509_VERIFY_PARAM_clear_flags), \
    LFUNC(get_rfc2409_prime_1024), \
    LFUNC(get_rfc3526_prime_2048), \
    LFUNC(get_rfc3526_prime_6144), \
    LFUNC(get_rfc3526_prime_1536), \
    LFUNC(get_rfc3526_prime_3072), \
    LFUNC(get_rfc3526_prime_4096), \
    LFUNC(get_rfc2409_prime_768), \
    LFUNC(X509_VERIFY_PARAM_get_flags), \
    LFUNC(EVP_CIPHER_CTX_new), \
    LFUNC(EVP_CIPHER_CTX_free), \
    LFUNC(a2i_ipadd), \
    LFUNC(EVP_CIPHER_block_size), \
    LFUNC(EVP_CIPHER_CTX_set_app_data), \
    LFUNC(BIO_method_type), \
    LFUNC(EVP_CIPHER_CTX_nid), \
    LFUNC(EVP_CIPHER_CTX_key_length), \
    LFUNC(EVP_MD_size), \
    LFUNC(EVP_MD_CTX_test_flags), \
    LFUNC(BIO_clear_flags), \
    LFUNC(EVP_MD_pkey_type), \
    LFUNC(EVP_MD_CTX_clear_flags), \
    LFUNC(EVP_CIPHER_flags), \
    LFUNC(BIO_get_callback), \
    LFUNC(EVP_CIPHER_key_length), \
    LFUNC(EVP_Cipher), \
    LFUNC(EVP_CIPHER_CTX_block_size), \
    LFUNC(EVP_CIPHER_CTX_cipher), \
    LFUNC(EVP_CIPHER_CTX_get_app_data), \
    LFUNC(EVP_MD_block_size), \
    LFUNC(EVP_CIPHER_CTX_flags), \
    LFUNC(EVP_MD_CTX_md), \
    LFUNC(BIO_method_name), \
    LFUNC(EVP_CIPHER_CTX_iv_length), \
    LFUNC(CRYPTO_memcmp), \
    LFUNC(BN_consttime_swap), \
    LFUNC(i2d_X509_EXTENSIONS), \
    LFUNC(d2i_X509_EXTENSIONS), \
    LFUNC(X509_ALGOR_get0), \
    LFUNC(X509_ALGOR_set0), \
    LFUNC(X509at_get0_data_by_OBJ), \
    LFUNC(ASN1_TYPE_set1), \
    LFUNC(ASN1_STRING_set0), \
    LFUNC(i2d_X509_ALGORS), \
    LFUNC(COMP_zlib_cleanup), \
    LFUNC(d2i_X509_ALGORS), \
    LFUNC(SMIME_read_ASN1), \
    LFUNC(OPENSSL_isservice), \
    LFUNC(EVP_CIPHER_CTX_clear_flags), \
    LFUNC(BN_X931_generate_prime_ex), \
    LFUNC(EVP_CIPHER_CTX_test_flags), \
    LFUNC(EVP_add_alg_module), \
    LFUNC(BN_X931_derive_prime_ex), \
    LFUNC(OPENSSL_init), \
    LFUNC(CRYPTO_strdup), \
    LFUNC(pqueue_size), \
    LFUNC(i2d_TS_ACCURACY), \
    NULL, \
    LFUNC(i2d_TS_MSG_IMPRINT), \
    LFUNC(EVP_PKEY_print_public), \
    LFUNC(EVP_PKEY_CTX_new), \
    LFUNC(i2d_TS_TST_INFO), \
    LFUNC(EVP_PKEY_asn1_find), \
    LFUNC(DSO_METHOD_beos), \
    LFUNC(TS_CONF_load_cert), \
    LFUNC(TS_REQ_get_ext), \
    LFUNC(EVP_PKEY_sign_init), \
    LFUNC(ASN1_item_print), \
    LFUNC(TS_TST_INFO_set_nonce), \
    LFUNC(TS_RESP_dup), \
    LFUNC(EVP_PKEY_asn1_add0), \
    LFUNC(PKCS7_add0_attrib_signing_time), \
    NULL, \
    LFUNC(BIO_asn1_get_prefix), \
    LFUNC(TS_TST_INFO_set_time), \
    LFUNC(EVP_PKEY_meth_set_decrypt), \
    LFUNC(EVP_PKEY_set_type_str), \
    LFUNC(EVP_PKEY_CTX_get_keygen_info), \
    LFUNC(TS_REQ_set_policy_id), \
    NULL, \
    LFUNC(TS_RESP_set_status_info), \
    LFUNC(EVP_PKEY_keygen), \
    LFUNC(EVP_DigestSignInit), \
    LFUNC(TS_ACCURACY_set_millis), \
    LFUNC(TS_REQ_dup), \
    LFUNC(GENERAL_NAME_dup), \
    LFUNC(X509_STORE_get1_crls), \
    LFUNC(EVP_PKEY_asn1_new), \
    LFUNC(BIO_new_NDEF), \
    LFUNC(TS_MSG_IMPRINT_set_algo), \
    LFUNC(i2d_TS_TST_INFO_bio), \
    LFUNC(TS_TST_INFO_set_ordering), \
    LFUNC(TS_TST_INFO_get_ext_by_OBJ), \
    LFUNC(CRYPTO_THREADID_set_pointer), \
    LFUNC(TS_CONF_get_tsa_section), \
    LFUNC(SMIME_write_ASN1), \
    LFUNC(TS_RESP_CTX_set_signer_key), \
    LFUNC(EVP_PKEY_encrypt_old), \
    LFUNC(EVP_PKEY_encrypt_init), \
    LFUNC(CRYPTO_THREADID_cpy), \
    LFUNC(ASN1_PCTX_get_cert_flags), \
    LFUNC(i2d_ESS_SIGNING_CERT), \
    LFUNC(TS_CONF_load_key), \
    LFUNC(i2d_ASN1_SEQUENCE_ANY), \
    LFUNC(d2i_TS_MSG_IMPRINT_bio), \
    LFUNC(EVP_PKEY_asn1_set_public), \
    LFUNC(b2i_PublicKey_bio), \
    LFUNC(BIO_asn1_set_prefix), \
    LFUNC(EVP_PKEY_new_mac_key), \
    LFUNC(CRYPTO_THREADID_cmp), \
    LFUNC(TS_REQ_ext_free), \
    LFUNC(EVP_PKEY_asn1_set_free), \
    LFUNC(EVP_PKEY_get0_asn1), \
    LFUNC(d2i_NETSCAPE_X509), \
    LFUNC(EVP_PKEY_verify_recover_init), \
    LFUNC(EVP_PKEY_CTX_set_data), \
    LFUNC(EVP_PKEY_keygen_init), \
    LFUNC(TS_RESP_CTX_set_status_info), \
    LFUNC(TS_MSG_IMPRINT_get_algo), \
    LFUNC(TS_REQ_print_bio), \
    LFUNC(EVP_PKEY_CTX_ctrl_str), \
    LFUNC(EVP_PKEY_get_default_digest_nid), \
    LFUNC(PEM_write_bio_PKCS7_stream), \
    LFUNC(TS_MSG_IMPRINT_print_bio), \
    LFUNC(BN_asc2bn), \
    LFUNC(TS_REQ_get_policy_id), \
    LFUNC(d2i_TS_ACCURACY), \
    LFUNC(DSO_global_lookup), \
    LFUNC(TS_CONF_set_tsa_name), \
    LFUNC(i2d_ASN1_SET_ANY), \
    LFUNC(ASN1_PCTX_get_flags), \
    LFUNC(TS_TST_INFO_get_ext_by_NID), \
    LFUNC(TS_RESP_new), \
    LFUNC(ESS_CERT_ID_dup), \
    LFUNC(TS_STATUS_INFO_dup), \
    LFUNC(TS_REQ_delete_ext), \
    LFUNC(EVP_DigestVerifyFinal), \
    LFUNC(EVP_PKEY_print_params), \
    LFUNC(TS_REQ_get_msg_imprint), \
    LFUNC(OBJ_find_sigid_by_algs), \
    LFUNC(TS_TST_INFO_get_serial), \
    LFUNC(TS_REQ_get_nonce), \
    LFUNC(X509_PUBKEY_set0_param), \
    LFUNC(EVP_PKEY_CTX_set0_keygen_info), \
    LFUNC(DIST_POINT_set_dpname), \
    LFUNC(i2d_ISSUING_DIST_POINT), \
    LFUNC(EVP_PKEY_CTX_get_data), \
    LFUNC(TS_STATUS_INFO_print_bio), \
    LFUNC(EVP_PKEY_derive_init), \
    LFUNC(d2i_TS_TST_INFO), \
    LFUNC(EVP_PKEY_asn1_add_alias), \
    LFUNC(d2i_TS_RESP_bio), \
    LFUNC(OTHERNAME_cmp), \
    LFUNC(GENERAL_NAME_set0_value), \
    LFUNC(PKCS7_RECIP_INFO_get0_alg), \
    LFUNC(TS_RESP_CTX_new), \
    LFUNC(TS_RESP_set_tst_info), \
    LFUNC(PKCS7_final), \
    LFUNC(EVP_PKEY_base_id), \
    LFUNC(TS_RESP_CTX_set_signer_cert), \
    LFUNC(TS_REQ_set_msg_imprint), \
    LFUNC(EVP_PKEY_CTX_ctrl), \
    LFUNC(TS_CONF_set_digests), \
    LFUNC(d2i_TS_MSG_IMPRINT), \
    LFUNC(EVP_PKEY_meth_set_ctrl), \
    LFUNC(TS_REQ_get_ext_by_NID), \
    LFUNC(PKCS5_pbe_set0_algor), \
    LFUNC(BN_BLINDING_thread_id), \
    LFUNC(TS_ACCURACY_new), \
    LFUNC(X509_CRL_METHOD_free), \
    LFUNC(ASN1_PCTX_get_nm_flags), \
    LFUNC(EVP_PKEY_meth_set_sign), \
    LFUNC(CRYPTO_THREADID_current), \
    LFUNC(EVP_PKEY_decrypt_init), \
    LFUNC(NETSCAPE_X509_free), \
    LFUNC(i2b_PVK_bio), \
    LFUNC(EVP_PKEY_print_private), \
    LFUNC(GENERAL_NAME_get0_value), \
    LFUNC(b2i_PVK_bio), \
    LFUNC(ASN1_UTCTIME_adj), \
    LFUNC(TS_TST_INFO_new), \
    LFUNC(EVP_MD_do_all_sorted), \
    LFUNC(TS_CONF_set_default_engine), \
    LFUNC(TS_ACCURACY_set_seconds), \
    LFUNC(TS_TST_INFO_get_time), \
    LFUNC(PKCS8_pkey_get0), \
    LFUNC(EVP_PKEY_asn1_get0), \
    LFUNC(OBJ_add_sigid), \
    LFUNC(PKCS7_SIGNER_INFO_sign), \
    LFUNC(EVP_PKEY_paramgen_init), \
    LFUNC(EVP_PKEY_sign), \
    LFUNC(OBJ_sigid_free), \
    LFUNC(EVP_PKEY_meth_set_init), \
    LFUNC(d2i_ESS_ISSUER_SERIAL), \
    LFUNC(ISSUING_DIST_POINT_new), \
    LFUNC(ASN1_TIME_adj), \
    LFUNC(TS_OBJ_print_bio), \
    LFUNC(EVP_PKEY_meth_set_verify_recover), \
    LFUNC(TS_RESP_get_status_info), \
    LFUNC(EVP_PKEY_CTX_set_cb), \
    LFUNC(PKCS7_to_TS_TST_INFO), \
    LFUNC(ASN1_PCTX_get_oid_flags), \
    LFUNC(TS_TST_INFO_add_ext), \
    LFUNC(EVP_PKEY_meth_set_derive), \
    NULL, \
    LFUNC(i2d_TS_MSG_IMPRINT_bio), \
    LFUNC(TS_RESP_CTX_set_accuracy), \
    LFUNC(TS_REQ_set_nonce), \
    LFUNC(ESS_CERT_ID_new), \
    LFUNC(TS_REQ_get_ext_count), \
    LFUNC(BUF_reverse), \
    LFUNC(TS_TST_INFO_print_bio), \
    LFUNC(d2i_ISSUING_DIST_POINT), \
    LFUNC(i2b_PrivateKey_bio), \
    LFUNC(i2d_TS_RESP), \
    LFUNC(b2i_PublicKey), \
    LFUNC(TS_VERIFY_CTX_cleanup), \
    LFUNC(TS_STATUS_INFO_free), \
    LFUNC(TS_RESP_verify_token), \
    LFUNC(OBJ_bsearch_ex_), \
    LFUNC(ASN1_bn_print), \
    LFUNC(EVP_PKEY_asn1_get_count), \
    LFUNC(ASN1_PCTX_set_nm_flags), \
    LFUNC(EVP_DigestVerifyInit), \
    LFUNC(TS_TST_INFO_get_policy_id), \
    LFUNC(TS_REQ_get_cert_req), \
    LFUNC(X509_CRL_set_meth_data), \
    LFUNC(PKCS8_pkey_set0), \
    LFUNC(ASN1_STRING_copy), \
    NULL, \
    LFUNC(X509_CRL_match), \
    LFUNC(EVP_PKEY_asn1_set_private), \
    LFUNC(TS_TST_INFO_get_ext_d2i), \
    LFUNC(TS_RESP_CTX_add_policy), \
    LFUNC(d2i_TS_RESP), \
    LFUNC(TS_CONF_load_certs), \
    LFUNC(TS_TST_INFO_get_msg_imprint), \
    LFUNC(ERR_load_TS_strings), \
    LFUNC(TS_TST_INFO_get_version), \
    LFUNC(EVP_PKEY_CTX_dup), \
    LFUNC(EVP_PKEY_meth_set_verify), \
    LFUNC(i2b_PublicKey_bio), \
    LFUNC(TS_CONF_set_certs), \
    LFUNC(EVP_PKEY_asn1_get0_info), \
    LFUNC(TS_VERIFY_CTX_free), \
    LFUNC(TS_REQ_get_ext_by_critical), \
    LFUNC(TS_RESP_CTX_set_serial_cb), \
    LFUNC(X509_CRL_get_meth_data), \
    LFUNC(TS_RESP_CTX_set_time_cb), \
    LFUNC(TS_MSG_IMPRINT_get_msg), \
    LFUNC(TS_TST_INFO_ext_free), \
    LFUNC(TS_REQ_get_version), \
    LFUNC(TS_REQ_add_ext), \
    LFUNC(EVP_PKEY_CTX_set_app_data), \
    LFUNC(OBJ_bsearch_), \
    LFUNC(EVP_PKEY_meth_set_verifyctx), \
    LFUNC(i2d_PKCS7_bio_stream), \
    LFUNC(CRYPTO_THREADID_set_numeric), \
    LFUNC(PKCS7_sign_add_signer), \
    LFUNC(d2i_TS_TST_INFO_bio), \
    LFUNC(TS_TST_INFO_get_ordering), \
    LFUNC(TS_RESP_print_bio), \
    LFUNC(TS_TST_INFO_get_exts), \
    LFUNC(PKCS5_pbe2_set_iv), \
    LFUNC(b2i_PrivateKey), \
    LFUNC(EVP_PKEY_CTX_get_app_data), \
    LFUNC(TS_REQ_set_cert_req), \
    LFUNC(CRYPTO_THREADID_set_callback), \
    LFUNC(TS_CONF_set_serial), \
    LFUNC(TS_TST_INFO_free), \
    NULL, \
    LFUNC(TS_RESP_verify_response), \
    LFUNC(i2d_ESS_ISSUER_SERIAL), \
    LFUNC(TS_ACCURACY_get_seconds), \
    LFUNC(EVP_CIPHER_do_all), \
    LFUNC(b2i_PrivateKey_bio), \
    LFUNC(OCSP_CERTID_dup), \
    LFUNC(X509_PUBKEY_get0_param), \
    LFUNC(TS_MSG_IMPRINT_dup), \
    LFUNC(PKCS7_print_ctx), \
    LFUNC(i2d_TS_REQ_bio), \
    LFUNC(EVP_PKEY_asn1_set_param), \
    LFUNC(EVP_PKEY_meth_set_encrypt), \
    LFUNC(ASN1_PCTX_set_flags), \
    LFUNC(i2d_ESS_CERT_ID), \
    LFUNC(TS_VERIFY_CTX_new), \
    LFUNC(TS_RESP_CTX_set_extension_cb), \
    LFUNC(TS_RESP_CTX_set_status_info_cond), \
    LFUNC(EVP_PKEY_verify), \
    LFUNC(X509_CRL_METHOD_new), \
    LFUNC(EVP_DigestSignFinal), \
    LFUNC(TS_RESP_CTX_set_def_policy), \
    LFUNC(TS_RESP_create_response), \
    LFUNC(PKCS7_SIGNER_INFO_get0_algs), \
    LFUNC(TS_TST_INFO_get_nonce), \
    LFUNC(EVP_PKEY_decrypt_old), \
    LFUNC(TS_TST_INFO_set_policy_id), \
    LFUNC(TS_CONF_set_ess_cert_id_chain), \
    LFUNC(EVP_PKEY_CTX_get0_pkey), \
    LFUNC(d2i_TS_REQ), \
    LFUNC(EVP_PKEY_asn1_find_str), \
    LFUNC(BIO_f_asn1), \
    LFUNC(ESS_SIGNING_CERT_new), \
    LFUNC(EVP_PBE_find), \
    LFUNC(X509_CRL_get0_by_cert), \
    LFUNC(EVP_PKEY_derive), \
    LFUNC(i2d_TS_REQ), \
    LFUNC(TS_TST_INFO_delete_ext), \
    LFUNC(ESS_ISSUER_SERIAL_free), \
    LFUNC(ASN1_PCTX_set_str_flags), \
    LFUNC(TS_CONF_set_signer_key), \
    LFUNC(TS_ACCURACY_get_millis), \
    LFUNC(TS_RESP_get_token), \
    LFUNC(TS_ACCURACY_dup), \
    LFUNC(X509_CRL_set_default_method), \
    LFUNC(CRYPTO_THREADID_hash), \
    LFUNC(TS_RESP_free), \
    LFUNC(ISSUING_DIST_POINT_free), \
    LFUNC(ESS_ISSUER_SERIAL_new), \
    LFUNC(PKCS7_add1_attrib_digest), \
    LFUNC(TS_RESP_CTX_add_md), \
    LFUNC(TS_TST_INFO_dup), \
    LFUNC(PEM_write_bio_Parameters), \
    LFUNC(TS_TST_INFO_get_accuracy), \
    LFUNC(X509_CRL_get0_by_serial), \
    LFUNC(TS_TST_INFO_set_version), \
    LFUNC(TS_RESP_CTX_get_tst_info), \
    LFUNC(TS_RESP_verify_signature), \
    LFUNC(CRYPTO_THREADID_get_callback), \
    LFUNC(TS_TST_INFO_get_tsa), \
    LFUNC(TS_STATUS_INFO_new), \
    LFUNC(EVP_PKEY_CTX_get_cb), \
    LFUNC(TS_REQ_get_ext_d2i), \
    LFUNC(GENERAL_NAME_set0_othername), \
    LFUNC(TS_TST_INFO_get_ext_count), \
    LFUNC(TS_RESP_CTX_get_request), \
    LFUNC(i2d_NETSCAPE_X509), \
    LFUNC(EVP_PKEY_meth_set_signctx), \
    LFUNC(EVP_PKEY_asn1_copy), \
    LFUNC(ASN1_TYPE_cmp), \
    LFUNC(EVP_CIPHER_do_all_sorted), \
    LFUNC(EVP_PKEY_CTX_free), \
    NULL, \
    LFUNC(X509_STORE_get1_certs), \
    LFUNC(EVP_PKEY_CTX_get_operation), \
    LFUNC(d2i_ESS_SIGNING_CERT), \
    LFUNC(TS_CONF_set_ordering), \
    LFUNC(EVP_PBE_alg_add_type), \
    LFUNC(TS_REQ_set_version), \
    LFUNC(EVP_PKEY_get0), \
    LFUNC(BIO_asn1_set_suffix), \
    LFUNC(i2d_TS_STATUS_INFO), \
    LFUNC(EVP_MD_do_all), \
    LFUNC(TS_TST_INFO_set_accuracy), \
    LFUNC(PKCS7_add_attrib_content_type), \
    LFUNC(EVP_PKEY_meth_add0), \
    LFUNC(TS_TST_INFO_set_tsa), \
    LFUNC(EVP_PKEY_meth_new), \
    LFUNC(TS_CONF_set_accuracy), \
    LFUNC(ASN1_PCTX_set_oid_flags), \
    LFUNC(ESS_SIGNING_CERT_dup), \
    LFUNC(d2i_TS_REQ_bio), \
    LFUNC(X509_time_adj_ex), \
    LFUNC(TS_RESP_CTX_add_flags), \
    LFUNC(d2i_TS_STATUS_INFO), \
    LFUNC(TS_MSG_IMPRINT_set_msg), \
    LFUNC(BIO_asn1_get_suffix), \
    LFUNC(TS_REQ_free), \
    LFUNC(EVP_PKEY_meth_free), \
    LFUNC(TS_REQ_get_exts), \
    LFUNC(TS_RESP_CTX_set_clock_precision_digits), \
    LFUNC(TS_RESP_CTX_add_failure_info), \
    LFUNC(i2d_TS_RESP_bio), \
    LFUNC(EVP_PKEY_CTX_get0_peerkey), \
    LFUNC(TS_REQ_new), \
    LFUNC(TS_MSG_IMPRINT_new), \
    LFUNC(EVP_PKEY_meth_find), \
    LFUNC(EVP_PKEY_id), \
    LFUNC(TS_TST_INFO_set_serial), \
    LFUNC(a2i_GENERAL_NAME), \
    LFUNC(TS_CONF_set_crypto_device), \
    LFUNC(EVP_PKEY_verify_init), \
    LFUNC(TS_CONF_set_policies), \
    LFUNC(ASN1_PCTX_new), \
    LFUNC(ESS_CERT_ID_free), \
    LFUNC(TS_MSG_IMPRINT_free), \
    LFUNC(TS_VERIFY_CTX_init), \
    LFUNC(PKCS7_stream), \
    LFUNC(TS_RESP_CTX_set_certs), \
    LFUNC(TS_CONF_set_def_policy), \
    LFUNC(ASN1_GENERALIZEDTIME_adj), \
    LFUNC(NETSCAPE_X509_new), \
    LFUNC(TS_ACCURACY_free), \
    LFUNC(TS_RESP_get_tst_info), \
    LFUNC(EVP_PKEY_derive_set_peer), \
    LFUNC(PEM_read_bio_Parameters), \
    LFUNC(TS_CONF_set_clock_precision_digits), \
    LFUNC(ESS_ISSUER_SERIAL_dup), \
    LFUNC(TS_ACCURACY_get_micros), \
    LFUNC(ASN1_PCTX_get_str_flags), \
    LFUNC(NAME_CONSTRAINTS_check), \
    LFUNC(ASN1_BIT_STRING_check), \
    LFUNC(X509_check_akid), \
    LFUNC(ASN1_PCTX_free), \
    LFUNC(PEM_write_bio_ASN1_stream), \
    LFUNC(i2d_ASN1_bio_stream), \
    LFUNC(TS_X509_ALGOR_print_bio), \
    LFUNC(EVP_PKEY_meth_set_cleanup), \
    LFUNC(EVP_PKEY_asn1_free), \
    LFUNC(ESS_SIGNING_CERT_free), \
    LFUNC(TS_TST_INFO_set_msg_imprint), \
    LFUNC(GENERAL_NAME_cmp), \
    LFUNC(d2i_ASN1_SET_ANY), \
    NULL, \
    LFUNC(d2i_ASN1_SEQUENCE_ANY), \
    LFUNC(GENERAL_NAME_get0_otherName), \
    LFUNC(d2i_ESS_CERT_ID), \
    LFUNC(OBJ_find_sigid_algs), \
    LFUNC(EVP_PKEY_meth_set_keygen), \
    LFUNC(PKCS5_PBKDF2_HMAC), \
    LFUNC(EVP_PKEY_paramgen), \
    LFUNC(EVP_PKEY_meth_set_paramgen), \
    LFUNC(BIO_new_PKCS7), \
    LFUNC(EVP_PKEY_verify_recover), \
    LFUNC(TS_ext_print_bio), \
    LFUNC(TS_ASN1_INTEGER_print_bio), \
    LFUNC(check_defer), \
    LFUNC(DSO_pathbyaddr), \
    LFUNC(EVP_PKEY_set_type), \
    LFUNC(TS_ACCURACY_set_micros), \
    LFUNC(TS_REQ_to_TS_VERIFY_CTX), \
    LFUNC(EVP_PKEY_meth_set_copy), \
    LFUNC(ASN1_PCTX_set_cert_flags), \
    LFUNC(TS_TST_INFO_get_ext), \
    LFUNC(EVP_PKEY_asn1_set_ctrl), \
    LFUNC(TS_TST_INFO_get_ext_by_critical), \
    LFUNC(EVP_PKEY_CTX_new_id), \
    LFUNC(TS_REQ_get_ext_by_OBJ), \
    LFUNC(TS_CONF_set_signer_cert), \
    LFUNC(X509_NAME_hash_old), \
    LFUNC(ASN1_TIME_set_string), \
    LFUNC(EVP_MD_flags), \
    LFUNC(TS_RESP_CTX_free), \
    LFUNC(OCSP_REQ_CTX_add1_header), \
    LFUNC(OCSP_REQ_CTX_set1_req), \
    LFUNC(X509_STORE_set_verify_cb), \
    LFUNC(X509_STORE_CTX_get0_current_crl), \
    LFUNC(X509_STORE_CTX_get0_parent_ctx), \
    LFUNC(X509_STORE_CTX_get0_current_issuer), \
    LFUNC(EVP_CIPHER_CTX_copy), \
    LFUNC(UI_method_get_prompt_constructor), \
    LFUNC(UI_method_set_prompt_constructor), \
    LFUNC(EVP_read_pw_string_min), \
    LFUNC(CRYPTO_cts128_encrypt), \
    LFUNC(CRYPTO_cts128_decrypt_block), \
    LFUNC(CRYPTO_cfb128_1_encrypt), \
    LFUNC(CRYPTO_cbc128_encrypt), \
    LFUNC(CRYPTO_ctr128_encrypt), \
    LFUNC(CRYPTO_ofb128_encrypt), \
    LFUNC(CRYPTO_cts128_decrypt), \
    LFUNC(CRYPTO_cts128_encrypt_block), \
    LFUNC(CRYPTO_cbc128_decrypt), \
    LFUNC(CRYPTO_cfb128_encrypt), \
    LFUNC(CRYPTO_cfb128_8_encrypt), \
    LFUNC(OPENSSL_strcasecmp), \
    LFUNC(OPENSSL_memcmp), \
    LFUNC(OPENSSL_strncasecmp), \
    LFUNC(OPENSSL_gmtime), \
    LFUNC(OPENSSL_gmtime_adj), \
    LFUNC(EVP_PKEY_meth_get0_info), \
    LFUNC(EVP_PKEY_meth_copy), \
    LFUNC(RSA_padding_add_PKCS1_PSS_mgf1), \
    LFUNC(RSA_verify_PKCS1_PSS_mgf1), \
    LFUNC(X509_ALGOR_set_md), \
    LFUNC(CMAC_CTX_copy), \
    LFUNC(CMAC_CTX_free), \
    LFUNC(CMAC_CTX_get0_cipher_ctx), \
    LFUNC(CMAC_CTX_cleanup), \
    LFUNC(CMAC_Init), \
    LFUNC(CMAC_Update), \
    LFUNC(CMAC_resume), \
    LFUNC(CMAC_CTX_new), \
    LFUNC(CMAC_Final), \
    LFUNC(CRYPTO_ctr128_encrypt_ctr32), \
    LFUNC(CRYPTO_gcm128_release), \
    LFUNC(CRYPTO_ccm128_decrypt_ccm64), \
    LFUNC(CRYPTO_ccm128_encrypt), \
    LFUNC(CRYPTO_gcm128_encrypt), \
    LFUNC(CRYPTO_xts128_encrypt), \
    LFUNC(CRYPTO_nistcts128_decrypt_block), \
    LFUNC(CRYPTO_gcm128_setiv), \
    LFUNC(CRYPTO_nistcts128_encrypt), \
    LFUNC(CRYPTO_gcm128_tag), \
    LFUNC(CRYPTO_ccm128_encrypt_ccm64), \
    LFUNC(CRYPTO_ccm128_setiv), \
    LFUNC(CRYPTO_nistcts128_encrypt_block), \
    LFUNC(CRYPTO_gcm128_aad), \
    LFUNC(CRYPTO_ccm128_init), \
    LFUNC(CRYPTO_nistcts128_decrypt), \
    LFUNC(CRYPTO_gcm128_new), \
    LFUNC(CRYPTO_ccm128_tag), \
    LFUNC(CRYPTO_ccm128_decrypt), \
    LFUNC(CRYPTO_ccm128_aad), \
    LFUNC(CRYPTO_gcm128_init), \
    LFUNC(CRYPTO_gcm128_decrypt), \
    LFUNC(CRYPTO_gcm128_decrypt_ctr32), \
    LFUNC(CRYPTO_gcm128_encrypt_ctr32), \
    LFUNC(CRYPTO_gcm128_finish), \
    LFUNC(PKCS5_pbkdf2_set), \
    LFUNC(RSA_PSS_PARAMS_new), \
    LFUNC(d2i_RSA_PSS_PARAMS), \
    LFUNC(RSA_PSS_PARAMS_free), \
    LFUNC(i2d_RSA_PSS_PARAMS), \
    LFUNC(OPENSSL_stderr), \
    LFUNC(POLICY_MAPPING_it), \
    LFUNC(NAME_CONSTRAINTS_it), \
    LFUNC(ASN1_OCTET_STRING_NDEF_it), \
    LFUNC(X509_CERT_PAIR_it), \
    LFUNC(POLICY_CONSTRAINTS_it), \
    LFUNC(POLICY_MAPPINGS_it), \
    LFUNC(GENERAL_SUBTREE_it), \
    LFUNC(X509_EXTENSIONS_it), \
    LFUNC(X509_ALGORS_it), \
    LFUNC(CMS_ContentInfo_it), \
    LFUNC(CMS_ReceiptRequest_it), \
    LFUNC(ASN1_SEQUENCE_ANY_it), \
    LFUNC(ASN1_SET_ANY_it), \
    LFUNC(NETSCAPE_X509_it), \
    LFUNC(ISSUING_DIST_POINT_it), \
    LFUNC(RSA_PSS_PARAMS_it), \
    LFUNC(_shadow_DES_rw_mode), \
    LFUNC(_shadow_DES_check_key), \
    LFUNC(ENGINE_load_gost)

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
  struct Task *tc = FindTask(NULL); // retrieve the task structure for the current task
  ULONG stackleft;

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

    base->libBase.lib_Revision = LIB_REVISION;
    base->segList = librarySegment;
    base->sysBase = &sb->LibNode;

    InitSemaphore(&base->libSem);

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

    if(IDOS && base->IElf)
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

    // set the global base
    globalBase = base;

    // If we are not running on AmigaOS4 (no stackswap required) we go and
    // do an explicit StackSwap() in case the user wants to make sure we
    // have enough stack for his user functions
    kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
    kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
    kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);
    success = callLibFunction(initBase, base);
    kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
    kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);

    // check if everything worked out fine
    if(success != FALSE)
    {
      // everything was successfully so lets
      // set the initialized value and contiue
      // with the class open phase
      kprintf("success\n");

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
    {
      callLibFunction(freeBase, base);
    }

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

  D(DBF_STARTUP, "LibOpen(): %ld", base->libBase.lib_OpenCnt);
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);

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

    child->libBase.lib_Revision = base->libBase.lib_Revision;
    child->libBase.lib_OpenCnt++;
    child->segList  = 0;
    child->sysBase  = base->sysBase;
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

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);

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
  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);

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

  kprintf("%s/%ld sys %08lx\n", __FUNCTION__, __LINE__, SysBase);
  kprintf("%s/%ld dos %08lx\n", __FUNCTION__, __LINE__, DOSBase);
  kprintf("%s/%ld glo %08lx\n", __FUNCTION__, __LINE__, globalBase);

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
