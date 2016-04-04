/* Automatically generated header (sfdc 1.8)! Do not edit! */

#ifndef _GATEPROTO_AMISSL_H
#define _GATEPROTO_AMISSL_H

#include <exec/types.h>
#include <dos/dos.h>
#include <amissl/amissl.h>

#define _sfdc_strarg(a) _sfdc_strarg2(a)
#define _sfdc_strarg2(a) #a

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <emul/emulregs.h>

void
LIBSTUB_InternalInitAmiSSL(void);

long
LIBSTUB_InitAmiSSLA(void);

long
LIBSTUB_CleanupAmiSSLA(void);

ASN1_TYPE *
LIBSTUB_ASN1_TYPE_new(void);

void
LIBSTUB_ASN1_TYPE_free(void);

ASN1_TYPE *
LIBSTUB_d2i_ASN1_TYPE(void);

int
LIBSTUB_i2d_ASN1_TYPE(void);

const ASN1_ITEM *
LIBSTUB_ASN1_ANY_it(void);

int
LIBSTUB_ASN1_TYPE_get(void);

void
LIBSTUB_ASN1_TYPE_set(void);

ASN1_OBJECT *
LIBSTUB_ASN1_OBJECT_new(void);

void
LIBSTUB_ASN1_OBJECT_free(void);

int
LIBSTUB_i2d_ASN1_OBJECT(void);

ASN1_OBJECT *
LIBSTUB_d2i_ASN1_OBJECT(void);

const ASN1_ITEM *
LIBSTUB_ASN1_OBJECT_it(void);

ASN1_STRING *
LIBSTUB_ASN1_STRING_new(void);

void
LIBSTUB_ASN1_STRING_free(void);

ASN1_STRING *
LIBSTUB_ASN1_STRING_dup(void);

ASN1_STRING *
LIBSTUB_ASN1_STRING_type_new(void);

int
LIBSTUB_ASN1_STRING_cmp(void);

int
LIBSTUB_ASN1_STRING_set(void);

int
LIBSTUB_ASN1_STRING_length(void);

void
LIBSTUB_ASN1_STRING_length_set(void);

int
LIBSTUB_ASN1_STRING_type(void);

unsigned char *
LIBSTUB_ASN1_STRING_data(void);

ASN1_BIT_STRING *
LIBSTUB_ASN1_BIT_STRING_new(void);

void
LIBSTUB_ASN1_BIT_STRING_free(void);

ASN1_BIT_STRING *
LIBSTUB_d2i_ASN1_BIT_STRING(void);

int
LIBSTUB_i2d_ASN1_BIT_STRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_BIT_STRING_it(void);

int
LIBSTUB_ASN1_BIT_STRING_set(void);

int
LIBSTUB_ASN1_BIT_STRING_set_bit(void);

int
LIBSTUB_ASN1_BIT_STRING_get_bit(void);

int
LIBSTUB_ASN1_BIT_STRING_name_print(void);

int
LIBSTUB_ASN1_BIT_STRING_num_asc(void);

int
LIBSTUB_ASN1_BIT_STRING_set_asc(void);

ASN1_INTEGER *
LIBSTUB_ASN1_INTEGER_new(void);

void
LIBSTUB_ASN1_INTEGER_free(void);

ASN1_INTEGER *
LIBSTUB_d2i_ASN1_INTEGER(void);

int
LIBSTUB_i2d_ASN1_INTEGER(void);

const ASN1_ITEM *
LIBSTUB_ASN1_INTEGER_it(void);

ASN1_INTEGER *
LIBSTUB_d2i_ASN1_UINTEGER(void);

ASN1_INTEGER *
LIBSTUB_ASN1_INTEGER_dup(void);

int
LIBSTUB_ASN1_INTEGER_cmp(void);

ASN1_ENUMERATED *
LIBSTUB_ASN1_ENUMERATED_new(void);

void
LIBSTUB_ASN1_ENUMERATED_free(void);

ASN1_ENUMERATED *
LIBSTUB_d2i_ASN1_ENUMERATED(void);

int
LIBSTUB_i2d_ASN1_ENUMERATED(void);

const ASN1_ITEM *
LIBSTUB_ASN1_ENUMERATED_it(void);

int
LIBSTUB_ASN1_UTCTIME_check(void);

ASN1_UTCTIME *
LIBSTUB_ASN1_UTCTIME_set(void);

int
LIBSTUB_ASN1_UTCTIME_set_string(void);

int
LIBSTUB_ASN1_UTCTIME_cmp_time_t(void);

int
LIBSTUB_ASN1_GENERALIZEDTIME_check(void);

ASN1_GENERALIZEDTIME *
LIBSTUB_ASN1_GENERALIZEDTIME_set(void);

int
LIBSTUB_ASN1_GENERALIZEDTIME_set_string(void);

ASN1_OCTET_STRING *
LIBSTUB_ASN1_OCTET_STRING_new(void);

void
LIBSTUB_ASN1_OCTET_STRING_free(void);

ASN1_OCTET_STRING *
LIBSTUB_d2i_ASN1_OCTET_STRING(void);

int
LIBSTUB_i2d_ASN1_OCTET_STRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_OCTET_STRING_it(void);

ASN1_OCTET_STRING *
LIBSTUB_ASN1_OCTET_STRING_dup(void);

int
LIBSTUB_ASN1_OCTET_STRING_cmp(void);

int
LIBSTUB_ASN1_OCTET_STRING_set(void);

ASN1_VISIBLESTRING *
LIBSTUB_ASN1_VISIBLESTRING_new(void);

void
LIBSTUB_ASN1_VISIBLESTRING_free(void);

ASN1_VISIBLESTRING *
LIBSTUB_d2i_ASN1_VISIBLESTRING(void);

int
LIBSTUB_i2d_ASN1_VISIBLESTRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_VISIBLESTRING_it(void);

ASN1_UNIVERSALSTRING *
LIBSTUB_ASN1_UNIVERSALSTRING_new(void);

void
LIBSTUB_ASN1_UNIVERSALSTRING_free(void);

ASN1_UNIVERSALSTRING *
LIBSTUB_d2i_ASN1_UNIVERSALSTRING(void);

int
LIBSTUB_i2d_ASN1_UNIVERSALSTRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_UNIVERSALSTRING_it(void);

ASN1_UTF8STRING *
LIBSTUB_ASN1_UTF8STRING_new(void);

void
LIBSTUB_ASN1_UTF8STRING_free(void);

ASN1_UTF8STRING *
LIBSTUB_d2i_ASN1_UTF8STRING(void);

int
LIBSTUB_i2d_ASN1_UTF8STRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_UTF8STRING_it(void);

ASN1_NULL *
LIBSTUB_ASN1_NULL_new(void);

void
LIBSTUB_ASN1_NULL_free(void);

ASN1_NULL *
LIBSTUB_d2i_ASN1_NULL(void);

int
LIBSTUB_i2d_ASN1_NULL(void);

const ASN1_ITEM *
LIBSTUB_ASN1_NULL_it(void);

ASN1_BMPSTRING *
LIBSTUB_ASN1_BMPSTRING_new(void);

void
LIBSTUB_ASN1_BMPSTRING_free(void);

ASN1_BMPSTRING *
LIBSTUB_d2i_ASN1_BMPSTRING(void);

int
LIBSTUB_i2d_ASN1_BMPSTRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_BMPSTRING_it(void);

int
LIBSTUB_UTF8_getc(void);

int
LIBSTUB_UTF8_putc(void);

ASN1_STRING *
LIBSTUB_ASN1_PRINTABLE_new(void);

void
LIBSTUB_ASN1_PRINTABLE_free(void);

ASN1_STRING *
LIBSTUB_d2i_ASN1_PRINTABLE(void);

int
LIBSTUB_i2d_ASN1_PRINTABLE(void);

const ASN1_ITEM *
LIBSTUB_ASN1_PRINTABLE_it(void);

ASN1_STRING *
LIBSTUB_DIRECTORYSTRING_new(void);

void
LIBSTUB_DIRECTORYSTRING_free(void);

ASN1_STRING *
LIBSTUB_d2i_DIRECTORYSTRING(void);

int
LIBSTUB_i2d_DIRECTORYSTRING(void);

const ASN1_ITEM *
LIBSTUB_DIRECTORYSTRING_it(void);

ASN1_STRING *
LIBSTUB_DISPLAYTEXT_new(void);

void
LIBSTUB_DISPLAYTEXT_free(void);

ASN1_STRING *
LIBSTUB_d2i_DISPLAYTEXT(void);

int
LIBSTUB_i2d_DISPLAYTEXT(void);

const ASN1_ITEM *
LIBSTUB_DISPLAYTEXT_it(void);

ASN1_PRINTABLESTRING *
LIBSTUB_ASN1_PRINTABLESTRING_new(void);

void
LIBSTUB_ASN1_PRINTABLESTRING_free(void);

ASN1_PRINTABLESTRING *
LIBSTUB_d2i_ASN1_PRINTABLESTRING(void);

int
LIBSTUB_i2d_ASN1_PRINTABLESTRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_PRINTABLESTRING_it(void);

ASN1_T61STRING *
LIBSTUB_ASN1_T61STRING_new(void);

void
LIBSTUB_ASN1_T61STRING_free(void);

ASN1_T61STRING *
LIBSTUB_d2i_ASN1_T61STRING(void);

int
LIBSTUB_i2d_ASN1_T61STRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_T61STRING_it(void);

ASN1_IA5STRING *
LIBSTUB_ASN1_IA5STRING_new(void);

void
LIBSTUB_ASN1_IA5STRING_free(void);

ASN1_IA5STRING *
LIBSTUB_d2i_ASN1_IA5STRING(void);

int
LIBSTUB_i2d_ASN1_IA5STRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_IA5STRING_it(void);

ASN1_GENERALSTRING *
LIBSTUB_ASN1_GENERALSTRING_new(void);

void
LIBSTUB_ASN1_GENERALSTRING_free(void);

ASN1_GENERALSTRING *
LIBSTUB_d2i_ASN1_GENERALSTRING(void);

int
LIBSTUB_i2d_ASN1_GENERALSTRING(void);

const ASN1_ITEM *
LIBSTUB_ASN1_GENERALSTRING_it(void);

ASN1_UTCTIME *
LIBSTUB_ASN1_UTCTIME_new(void);

void
LIBSTUB_ASN1_UTCTIME_free(void);

ASN1_UTCTIME *
LIBSTUB_d2i_ASN1_UTCTIME(void);

int
LIBSTUB_i2d_ASN1_UTCTIME(void);

const ASN1_ITEM *
LIBSTUB_ASN1_UTCTIME_it(void);

ASN1_GENERALIZEDTIME *
LIBSTUB_ASN1_GENERALIZEDTIME_new(void);

void
LIBSTUB_ASN1_GENERALIZEDTIME_free(void);

ASN1_GENERALIZEDTIME *
LIBSTUB_d2i_ASN1_GENERALIZEDTIME(void);

int
LIBSTUB_i2d_ASN1_GENERALIZEDTIME(void);

const ASN1_ITEM *
LIBSTUB_ASN1_GENERALIZEDTIME_it(void);

ASN1_TIME *
LIBSTUB_ASN1_TIME_new(void);

void
LIBSTUB_ASN1_TIME_free(void);

ASN1_TIME *
LIBSTUB_d2i_ASN1_TIME(void);

int
LIBSTUB_i2d_ASN1_TIME(void);

const ASN1_ITEM *
LIBSTUB_ASN1_TIME_it(void);

ASN1_TIME *
LIBSTUB_ASN1_TIME_set(void);

int
LIBSTUB_ASN1_TIME_check(void);

ASN1_GENERALIZEDTIME *
LIBSTUB_ASN1_TIME_to_generalizedtime(void);

int
LIBSTUB_i2a_ASN1_INTEGER(void);

int
LIBSTUB_a2i_ASN1_INTEGER(void);

int
LIBSTUB_i2a_ASN1_ENUMERATED(void);

int
LIBSTUB_a2i_ASN1_ENUMERATED(void);

int
LIBSTUB_i2a_ASN1_OBJECT(void);

int
LIBSTUB_a2i_ASN1_STRING(void);

int
LIBSTUB_i2a_ASN1_STRING(void);

int
LIBSTUB_i2t_ASN1_OBJECT(void);

int
LIBSTUB_a2d_ASN1_OBJECT(void);

ASN1_OBJECT *
LIBSTUB_ASN1_OBJECT_create(void);

int
LIBSTUB_ASN1_INTEGER_set(void);

long
LIBSTUB_ASN1_INTEGER_get(void);

ASN1_INTEGER *
LIBSTUB_BN_to_ASN1_INTEGER(void);

BIGNUM *
LIBSTUB_ASN1_INTEGER_to_BN(void);

int
LIBSTUB_ASN1_ENUMERATED_set(void);

long
LIBSTUB_ASN1_ENUMERATED_get(void);

ASN1_ENUMERATED *
LIBSTUB_BN_to_ASN1_ENUMERATED(void);

BIGNUM *
LIBSTUB_ASN1_ENUMERATED_to_BN(void);

int
LIBSTUB_ASN1_PRINTABLE_type(void);

unsigned long
LIBSTUB_ASN1_tag2bit(void);

int
LIBSTUB_ASN1_get_object(void);

int
LIBSTUB_ASN1_check_infinite_end(void);

void
LIBSTUB_ASN1_put_object(void);

int
LIBSTUB_ASN1_object_size(void);

void *
LIBSTUB_ASN1_dup(void);

void *
LIBSTUB_ASN1_item_dup(void);

int
LIBSTUB_ASN1_STRING_to_UTF8(void);

void *
LIBSTUB_ASN1_d2i_bio(void);

void *
LIBSTUB_ASN1_item_d2i_bio(void);

int
LIBSTUB_ASN1_i2d_bio(void);

int
LIBSTUB_ASN1_item_i2d_bio(void);

int
LIBSTUB_ASN1_UTCTIME_print(void);

int
LIBSTUB_ASN1_GENERALIZEDTIME_print(void);

int
LIBSTUB_ASN1_TIME_print(void);

int
LIBSTUB_ASN1_STRING_print(void);

int
LIBSTUB_ASN1_STRING_print_ex(void);

int
LIBSTUB_ASN1_parse(void);

int
LIBSTUB_ASN1_parse_dump(void);

const char *
LIBSTUB_ASN1_tag2str(void);

int
LIBSTUB_ASN1_UNIVERSALSTRING_to_string(void);

int
LIBSTUB_ASN1_TYPE_set_octetstring(void);

int
LIBSTUB_ASN1_TYPE_get_octetstring(void);

int
LIBSTUB_ASN1_TYPE_set_int_octetstring(void);

int
LIBSTUB_ASN1_TYPE_get_int_octetstring(void);

void *
LIBSTUB_ASN1_item_unpack(void);

ASN1_STRING *
LIBSTUB_ASN1_item_pack(void);

void
LIBSTUB_ASN1_STRING_set_default_mask(void);

int
LIBSTUB_ASN1_STRING_set_default_mask_asc(void);

unsigned long
LIBSTUB_ASN1_STRING_get_default_mask(void);

int
LIBSTUB_ASN1_mbstring_copy(void);

int
LIBSTUB_ASN1_mbstring_ncopy(void);

ASN1_STRING *
LIBSTUB_ASN1_STRING_set_by_NID(void);

ASN1_STRING_TABLE *
LIBSTUB_ASN1_STRING_TABLE_get(void);

int
LIBSTUB_ASN1_STRING_TABLE_add(void);

void
LIBSTUB_ASN1_STRING_TABLE_cleanup(void);

ASN1_VALUE *
LIBSTUB_ASN1_item_new(void);

void
LIBSTUB_ASN1_item_free(void);

ASN1_VALUE *
LIBSTUB_ASN1_item_d2i(void);

int
LIBSTUB_ASN1_item_i2d(void);

void
LIBSTUB_ASN1_add_oid_module(void);

void
LIBSTUB_ERR_load_ASN1_strings(void);

const ASN1_ITEM *
LIBSTUB_ASN1_BOOLEAN_it(void);

const ASN1_ITEM *
LIBSTUB_ASN1_TBOOLEAN_it(void);

const ASN1_ITEM *
LIBSTUB_ASN1_FBOOLEAN_it(void);

const ASN1_ITEM *
LIBSTUB_ASN1_SEQUENCE_it(void);

const ASN1_ITEM *
LIBSTUB_CBIGNUM_it(void);

const ASN1_ITEM *
LIBSTUB_BIGNUM_it(void);

const ASN1_ITEM *
LIBSTUB_LONG_it(void);

const ASN1_ITEM *
LIBSTUB_ZLONG_it(void);

int
LIBSTUB_ASN1_item_ex_new(void);

void
LIBSTUB_ASN1_item_ex_free(void);

int
LIBSTUB_ASN1_item_ex_d2i(void);

int
LIBSTUB_ASN1_item_ex_i2d(void);

size_t
LIBSTUB_BIO_ctrl_pending(void);

size_t
LIBSTUB_BIO_ctrl_wpending(void);

size_t
LIBSTUB_BIO_ctrl_get_write_guarantee(void);

size_t
LIBSTUB_BIO_ctrl_get_read_request(void);

int
LIBSTUB_BIO_ctrl_reset_read_request(void);

int
LIBSTUB_BIO_set_ex_data(void);

void *
LIBSTUB_BIO_get_ex_data(void);

uint64_t
LIBSTUB_BIO_number_read(void);

uint64_t
LIBSTUB_BIO_number_written(void);

BIO_METHOD *
LIBSTUB_BIO_s_file(void);

BIO *
LIBSTUB_BIO_new_file(void);

BIO *
LIBSTUB_BIO_new_fp_amiga(void);

BIO *
LIBSTUB_BIO_new(void);

int
LIBSTUB_BIO_set(void);

int
LIBSTUB_BIO_free(void);

void
LIBSTUB_BIO_vfree(void);

int
LIBSTUB_BIO_read(void);

int
LIBSTUB_BIO_gets(void);

int
LIBSTUB_BIO_write(void);

int
LIBSTUB_BIO_puts(void);

int
LIBSTUB_BIO_indent(void);

long
LIBSTUB_BIO_ctrl(void);

long
LIBSTUB_BIO_callback_ctrl(void);

void *
LIBSTUB_BIO_ptr_ctrl(void);

long
LIBSTUB_BIO_int_ctrl(void);

BIO *
LIBSTUB_BIO_push(void);

BIO *
LIBSTUB_BIO_pop(void);

void
LIBSTUB_BIO_free_all(void);

BIO *
LIBSTUB_BIO_find_type(void);

BIO *
LIBSTUB_BIO_next(void);

BIO *
LIBSTUB_BIO_get_retry_BIO(void);

int
LIBSTUB_BIO_get_retry_reason(void);

BIO *
LIBSTUB_BIO_dup_chain(void);

int
LIBSTUB_BIO_nread0(void);

int
LIBSTUB_BIO_nread(void);

int
LIBSTUB_BIO_nwrite0(void);

int
LIBSTUB_BIO_nwrite(void);

long
LIBSTUB_BIO_debug_callback(void);

BIO_METHOD *
LIBSTUB_BIO_s_mem(void);

BIO *
LIBSTUB_BIO_new_mem_buf(void);

BIO_METHOD *
LIBSTUB_BIO_s_socket(void);

BIO_METHOD *
LIBSTUB_BIO_s_connect(void);

BIO_METHOD *
LIBSTUB_BIO_s_accept(void);

BIO_METHOD *
LIBSTUB_BIO_s_fd(void);

BIO_METHOD *
LIBSTUB_BIO_s_log(void);

BIO_METHOD *
LIBSTUB_BIO_s_bio(void);

BIO_METHOD *
LIBSTUB_BIO_s_null(void);

BIO_METHOD *
LIBSTUB_BIO_f_null(void);

BIO_METHOD *
LIBSTUB_BIO_f_buffer(void);

BIO_METHOD *
LIBSTUB_BIO_f_nbio_test(void);

int
LIBSTUB_BIO_sock_should_retry(void);

int
LIBSTUB_BIO_sock_non_fatal_error(void);

int
LIBSTUB_BIO_fd_should_retry(void);

int
LIBSTUB_BIO_fd_non_fatal_error(void);

int
LIBSTUB_BIO_dump(void);

int
LIBSTUB_BIO_dump_indent(void);

struct hostent *
LIBSTUB_BIO_gethostbyname(void);

int
LIBSTUB_BIO_sock_error(void);

int
LIBSTUB_BIO_socket_ioctl(void);

int
LIBSTUB_BIO_socket_nbio(void);

int
LIBSTUB_BIO_get_port(void);

int
LIBSTUB_BIO_get_host_ip(void);

int
LIBSTUB_BIO_get_accept_socket(void);

int
LIBSTUB_BIO_accept(void);

int
LIBSTUB_BIO_sock_init(void);

void
LIBSTUB_BIO_sock_cleanup(void);

int
LIBSTUB_BIO_set_tcp_ndelay(void);

BIO *
LIBSTUB_BIO_new_socket(void);

BIO *
LIBSTUB_BIO_new_fd(void);

BIO *
LIBSTUB_BIO_new_connect(void);

BIO *
LIBSTUB_BIO_new_accept(void);

int
LIBSTUB_BIO_new_bio_pair(void);

void
LIBSTUB_BIO_copy_next_retry(void);

int
LIBSTUB_BIO_vprintf(void);

int
LIBSTUB_BIO_vsnprintf(void);

void
LIBSTUB_ERR_load_BIO_strings(void);

const BIGNUM *
LIBSTUB_BN_value_one(void);

char *
LIBSTUB_BN_options(void);

BN_CTX *
LIBSTUB_BN_CTX_new(void);

void
LIBSTUB_BN_CTX_free(void);

void
LIBSTUB_BN_CTX_start(void);

BIGNUM *
LIBSTUB_BN_CTX_get(void);

void
LIBSTUB_BN_CTX_end(void);

int
LIBSTUB_BN_rand(void);

int
LIBSTUB_BN_pseudo_rand(void);

int
LIBSTUB_BN_rand_range(void);

int
LIBSTUB_BN_pseudo_rand_range(void);

int
LIBSTUB_BN_num_bits(void);

int
LIBSTUB_BN_num_bits_word(void);

BIGNUM *
LIBSTUB_BN_new(void);

void
LIBSTUB_BN_clear_free(void);

BIGNUM *
LIBSTUB_BN_copy(void);

void
LIBSTUB_BN_swap(void);

BIGNUM *
LIBSTUB_BN_bin2bn(void);

int
LIBSTUB_BN_bn2bin(void);

BIGNUM *
LIBSTUB_BN_mpi2bn(void);

int
LIBSTUB_BN_bn2mpi(void);

int
LIBSTUB_BN_sub(void);

int
LIBSTUB_BN_usub(void);

int
LIBSTUB_BN_uadd(void);

int
LIBSTUB_BN_add(void);

int
LIBSTUB_BN_mul(void);

int
LIBSTUB_BN_sqr(void);

int
LIBSTUB_BN_div(void);

int
LIBSTUB_BN_nnmod(void);

int
LIBSTUB_BN_mod_add(void);

int
LIBSTUB_BN_mod_add_quick(void);

int
LIBSTUB_BN_mod_sub(void);

int
LIBSTUB_BN_mod_sub_quick(void);

int
LIBSTUB_BN_mod_mul(void);

int
LIBSTUB_BN_mod_sqr(void);

int
LIBSTUB_BN_mod_lshift1(void);

int
LIBSTUB_BN_mod_lshift1_quick(void);

int
LIBSTUB_BN_mod_lshift(void);

int
LIBSTUB_BN_mod_lshift_quick(void);

BN_ULONG
LIBSTUB_BN_mod_word(void);

BN_ULONG
LIBSTUB_BN_div_word(void);

int
LIBSTUB_BN_mul_word(void);

int
LIBSTUB_BN_add_word(void);

int
LIBSTUB_BN_sub_word(void);

int
LIBSTUB_BN_set_word(void);

BN_ULONG
LIBSTUB_BN_get_word(void);

int
LIBSTUB_BN_cmp(void);

void
LIBSTUB_BN_free(void);

int
LIBSTUB_BN_is_bit_set(void);

int
LIBSTUB_BN_lshift(void);

int
LIBSTUB_BN_lshift1(void);

int
LIBSTUB_BN_exp(void);

int
LIBSTUB_BN_mod_exp(void);

int
LIBSTUB_BN_mod_exp_mont(void);

int
LIBSTUB_BN_mod_exp_mont_word(void);

int
LIBSTUB_BN_mod_exp2_mont(void);

int
LIBSTUB_BN_mod_exp_simple(void);

int
LIBSTUB_BN_mask_bits(void);

int
LIBSTUB_BN_print(void);

int
LIBSTUB_BN_reciprocal(void);

int
LIBSTUB_BN_rshift(void);

int
LIBSTUB_BN_rshift1(void);

void
LIBSTUB_BN_clear(void);

BIGNUM *
LIBSTUB_BN_dup(void);

int
LIBSTUB_BN_ucmp(void);

int
LIBSTUB_BN_set_bit(void);

int
LIBSTUB_BN_clear_bit(void);

char *
LIBSTUB_BN_bn2hex(void);

char *
LIBSTUB_BN_bn2dec(void);

int
LIBSTUB_BN_hex2bn(void);

int
LIBSTUB_BN_dec2bn(void);

int
LIBSTUB_BN_gcd(void);

int
LIBSTUB_BN_kronecker(void);

BIGNUM *
LIBSTUB_BN_mod_inverse(void);

BIGNUM *
LIBSTUB_BN_mod_sqrt(void);

BIGNUM *
LIBSTUB_BN_generate_prime(void);

int
LIBSTUB_BN_is_prime(void);

int
LIBSTUB_BN_is_prime_fasttest(void);

BN_MONT_CTX *
LIBSTUB_BN_MONT_CTX_new(void);

int
LIBSTUB_BN_mod_mul_montgomery(void);

int
LIBSTUB_BN_from_montgomery(void);

void
LIBSTUB_BN_MONT_CTX_free(void);

int
LIBSTUB_BN_MONT_CTX_set(void);

BN_MONT_CTX *
LIBSTUB_BN_MONT_CTX_copy(void);

BN_BLINDING *
LIBSTUB_BN_BLINDING_new(void);

void
LIBSTUB_BN_BLINDING_free(void);

int
LIBSTUB_BN_BLINDING_update(void);

int
LIBSTUB_BN_BLINDING_convert(void);

int
LIBSTUB_BN_BLINDING_invert(void);

void
LIBSTUB_BN_set_params(void);

int
LIBSTUB_BN_get_params(void);

BN_RECP_CTX *
LIBSTUB_BN_RECP_CTX_new(void);

void
LIBSTUB_BN_RECP_CTX_free(void);

int
LIBSTUB_BN_RECP_CTX_set(void);

int
LIBSTUB_BN_mod_mul_reciprocal(void);

int
LIBSTUB_BN_mod_exp_recp(void);

int
LIBSTUB_BN_div_recp(void);

int
LIBSTUB_BN_bntest_rand(void);

void
LIBSTUB_ERR_load_BN_strings(void);

BUF_MEM *
LIBSTUB_BUF_MEM_new(void);

void
LIBSTUB_BUF_MEM_free(void);

size_t
LIBSTUB_BUF_MEM_grow(void);

size_t
LIBSTUB_BUF_MEM_grow_clean(void);

void
LIBSTUB_ERR_load_BUF_strings(void);

COMP_CTX *
LIBSTUB_COMP_CTX_new(void);

void
LIBSTUB_COMP_CTX_free(void);

int
LIBSTUB_COMP_compress_block(void);

int
LIBSTUB_COMP_expand_block(void);

COMP_METHOD *
LIBSTUB_COMP_zlib(void);

void
LIBSTUB_ERR_load_COMP_strings(void);

int
LIBSTUB_CONF_set_default_method(void);

void
LIBSTUB_CONF_set_nconf(void);

LHASH_OF(CONF_VALUE) *
LIBSTUB_CONF_load(void);

LHASH_OF(CONF_VALUE) *
LIBSTUB_CONF_load_bio(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_CONF_get_section(void);

char *
LIBSTUB_CONF_get_string(void);

long
LIBSTUB_CONF_get_number(void);

void
LIBSTUB_CONF_free(void);

int
LIBSTUB_CONF_dump_bio(void);

void
LIBSTUB_OPENSSL_config(void);

CONF *
LIBSTUB_NCONF_new(void);

CONF_METHOD *
LIBSTUB_NCONF_default(void);

CONF_METHOD *
LIBSTUB_NCONF_WIN32(void);

void
LIBSTUB_NCONF_free(void);

void
LIBSTUB_NCONF_free_data(void);

int
LIBSTUB_NCONF_load(void);

int
LIBSTUB_NCONF_load_bio(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_NCONF_get_section(void);

char *
LIBSTUB_NCONF_get_string(void);

int
LIBSTUB_NCONF_get_number_e(void);

int
LIBSTUB_NCONF_dump_bio(void);

int
LIBSTUB_CONF_modules_load(void);

int
LIBSTUB_CONF_modules_load_file(void);

void
LIBSTUB_CONF_modules_unload(void);

void
LIBSTUB_CONF_modules_finish(void);

void
LIBSTUB_CONF_modules_free(void);

int
LIBSTUB_CONF_module_add(void);

const char *
LIBSTUB_CONF_imodule_get_name(void);

const char *
LIBSTUB_CONF_imodule_get_value(void);

void *
LIBSTUB_CONF_imodule_get_usr_data(void);

void
LIBSTUB_CONF_imodule_set_usr_data(void);

CONF_MODULE *
LIBSTUB_CONF_imodule_get_module(void);

unsigned long
LIBSTUB_CONF_imodule_get_flags(void);

void
LIBSTUB_CONF_imodule_set_flags(void);

void *
LIBSTUB_CONF_module_get_usr_data(void);

void
LIBSTUB_CONF_module_set_usr_data(void);

char *
LIBSTUB_CONF_get1_default_config_file(void);

int
LIBSTUB_CONF_parse_list(void);

void
LIBSTUB_OPENSSL_load_builtin_modules(void);

void
LIBSTUB_ERR_load_CONF_strings(void);

int
LIBSTUB_CRYPTO_mem_ctrl(void);

int
LIBSTUB_OPENSSL_issetugid(void);

int
LIBSTUB_CRYPTO_get_ex_new_index(void);

int
LIBSTUB_CRYPTO_new_ex_data(void);

int
LIBSTUB_CRYPTO_dup_ex_data(void);

void
LIBSTUB_CRYPTO_free_ex_data(void);

int
LIBSTUB_CRYPTO_set_ex_data(void);

void *
LIBSTUB_CRYPTO_get_ex_data(void);

void
LIBSTUB_CRYPTO_cleanup_all_ex_data(void);

int
LIBSTUB_CRYPTO_set_mem_functions(void);

void
LIBSTUB_CRYPTO_get_mem_functions(void);

void *
LIBSTUB_CRYPTO_malloc(void);

void
LIBSTUB_CRYPTO_free(void);

void *
LIBSTUB_CRYPTO_realloc(void);

void
LIBSTUB_OPENSSL_cleanse(void);

DSO *
LIBSTUB_DSO_new(void);

DSO *
LIBSTUB_DSO_new_method(void);

int
LIBSTUB_DSO_free(void);

int
LIBSTUB_DSO_flags(void);

int
LIBSTUB_DSO_up_ref(void);

long
LIBSTUB_DSO_ctrl(void);

int
LIBSTUB_DSO_set_name_converter(void);

const char *
LIBSTUB_DSO_get_filename(void);

int
LIBSTUB_DSO_set_filename(void);

char *
LIBSTUB_DSO_convert_filename(void);

const char *
LIBSTUB_DSO_get_loaded_filename(void);

void
LIBSTUB_DSO_set_default_method(void);

DSO_METHOD *
LIBSTUB_DSO_get_default_method(void);

DSO_METHOD *
LIBSTUB_DSO_get_method(void);

DSO_METHOD *
LIBSTUB_DSO_set_method(void);

DSO *
LIBSTUB_DSO_load(void);

void *
LIBSTUB_DSO_bind_var(void);

DSO_FUNC_TYPE
LIBSTUB_DSO_bind_func(void);

DSO_METHOD *
LIBSTUB_DSO_METHOD_openssl(void);

DSO_METHOD *
LIBSTUB_DSO_METHOD_null(void);

DSO_METHOD *
LIBSTUB_DSO_METHOD_dlfcn(void);

DSO_METHOD *
LIBSTUB_DSO_METHOD_dl(void);

DSO_METHOD *
LIBSTUB_DSO_METHOD_win32(void);

DSO_METHOD *
LIBSTUB_DSO_METHOD_vms(void);

void
LIBSTUB_ERR_load_DSO_strings(void);

const EC_METHOD *
LIBSTUB_EC_GFp_simple_method(void);

const EC_METHOD *
LIBSTUB_EC_GFp_mont_method(void);

EC_GROUP *
LIBSTUB_EC_GROUP_new(void);

void
LIBSTUB_EC_GROUP_free(void);

void
LIBSTUB_EC_GROUP_clear_free(void);

int
LIBSTUB_EC_GROUP_copy(void);

const EC_METHOD *
LIBSTUB_EC_GROUP_method_of(void);

int
LIBSTUB_EC_GROUP_set_curve_GFp(void);

int
LIBSTUB_EC_GROUP_get_curve_GFp(void);

EC_GROUP *
LIBSTUB_EC_GROUP_new_curve_GFp(void);

int
LIBSTUB_EC_GROUP_set_generator(void);

const EC_POINT *
LIBSTUB_EC_GROUP_get0_generator(void);

int
LIBSTUB_EC_GROUP_get_order(void);

int
LIBSTUB_EC_GROUP_get_cofactor(void);

EC_POINT *
LIBSTUB_EC_POINT_new(void);

void
LIBSTUB_EC_POINT_free(void);

void
LIBSTUB_EC_POINT_clear_free(void);

int
LIBSTUB_EC_POINT_copy(void);

const EC_METHOD *
LIBSTUB_EC_POINT_method_of(void);

int
LIBSTUB_EC_POINT_set_to_infinity(void);

int
LIBSTUB_EC_POINT_set_Jprojective_coordinates_GFp(void);

int
LIBSTUB_EC_POINT_get_Jprojective_coordinates_GFp(void);

int
LIBSTUB_EC_POINT_set_affine_coordinates_GFp(void);

int
LIBSTUB_EC_POINT_get_affine_coordinates_GFp(void);

int
LIBSTUB_EC_POINT_set_compressed_coordinates_GFp(void);

size_t
LIBSTUB_EC_POINT_point2oct(void);

int
LIBSTUB_EC_POINT_oct2point(void);

int
LIBSTUB_EC_POINT_add(void);

int
LIBSTUB_EC_POINT_dbl(void);

int
LIBSTUB_EC_POINT_invert(void);

int
LIBSTUB_EC_POINT_is_at_infinity(void);

int
LIBSTUB_EC_POINT_is_on_curve(void);

int
LIBSTUB_EC_POINT_cmp(void);

int
LIBSTUB_EC_POINT_make_affine(void);

int
LIBSTUB_EC_POINTs_make_affine(void);

int
LIBSTUB_EC_POINTs_mul(void);

int
LIBSTUB_EC_POINT_mul(void);

int
LIBSTUB_EC_GROUP_precompute_mult(void);

void
LIBSTUB_ERR_load_EC_strings(void);

void
LIBSTUB_ERR_put_error(void);

void
LIBSTUB_ERR_set_error_data(void);

unsigned long
LIBSTUB_ERR_get_error(void);

unsigned long
LIBSTUB_ERR_get_error_line(void);

unsigned long
LIBSTUB_ERR_get_error_line_data(void);

unsigned long
LIBSTUB_ERR_peek_error(void);

unsigned long
LIBSTUB_ERR_peek_error_line(void);

unsigned long
LIBSTUB_ERR_peek_error_line_data(void);

unsigned long
LIBSTUB_ERR_peek_last_error(void);

unsigned long
LIBSTUB_ERR_peek_last_error_line(void);

unsigned long
LIBSTUB_ERR_peek_last_error_line_data(void);

void
LIBSTUB_ERR_clear_error(void);

char *
LIBSTUB_ERR_error_string(void);

void
LIBSTUB_ERR_error_string_n(void);

const char *
LIBSTUB_ERR_lib_error_string(void);

const char *
LIBSTUB_ERR_func_error_string(void);

const char *
LIBSTUB_ERR_reason_error_string(void);

void
LIBSTUB_ERR_print_errors_cb(void);

void
LIBSTUB_ERR_print_errors(void);

void
LIBSTUB_ERR_add_error_vdata(void);

void
LIBSTUB_ERR_load_strings(void);

void
LIBSTUB_ERR_unload_strings(void);

void
LIBSTUB_ERR_load_ERR_strings(void);

void
LIBSTUB_ERR_free_strings(void);

void
LIBSTUB_ERR_remove_state(void);

ERR_STATE *
LIBSTUB_ERR_get_state(void);

LHASH_OF(ERR_STRING_DATA) *
LIBSTUB_ERR_get_string_table(void);

int
LIBSTUB_ERR_get_next_error_library(void);

int
LIBSTUB_EVP_MD_CTX_copy_ex(void);

int
LIBSTUB_EVP_DigestInit_ex(void);

int
LIBSTUB_EVP_DigestUpdate(void);

int
LIBSTUB_EVP_DigestFinal_ex(void);

int
LIBSTUB_EVP_Digest(void);

int
LIBSTUB_EVP_MD_CTX_copy(void);

int
LIBSTUB_EVP_DigestInit(void);

int
LIBSTUB_EVP_DigestFinal(void);

int
LIBSTUB_EVP_read_pw_string(void);

void
LIBSTUB_EVP_set_pw_prompt(void);

char *
LIBSTUB_EVP_get_pw_prompt(void);

int
LIBSTUB_EVP_BytesToKey(void);

int
LIBSTUB_EVP_EncryptInit(void);

int
LIBSTUB_EVP_EncryptInit_ex(void);

int
LIBSTUB_EVP_EncryptUpdate(void);

int
LIBSTUB_EVP_EncryptFinal_ex(void);

int
LIBSTUB_EVP_EncryptFinal(void);

int
LIBSTUB_EVP_DecryptInit(void);

int
LIBSTUB_EVP_DecryptInit_ex(void);

int
LIBSTUB_EVP_DecryptUpdate(void);

int
LIBSTUB_EVP_DecryptFinal(void);

int
LIBSTUB_EVP_DecryptFinal_ex(void);

int
LIBSTUB_EVP_CipherInit(void);

int
LIBSTUB_EVP_CipherInit_ex(void);

int
LIBSTUB_EVP_CipherUpdate(void);

int
LIBSTUB_EVP_CipherFinal(void);

int
LIBSTUB_EVP_CipherFinal_ex(void);

int
LIBSTUB_EVP_SignFinal(void);

int
LIBSTUB_EVP_VerifyFinal(void);

int
LIBSTUB_EVP_OpenInit(void);

int
LIBSTUB_EVP_OpenFinal(void);

int
LIBSTUB_EVP_SealInit(void);

int
LIBSTUB_EVP_SealFinal(void);

void
LIBSTUB_EVP_EncodeInit(void);

void
LIBSTUB_EVP_EncodeUpdate(void);

void
LIBSTUB_EVP_EncodeFinal(void);

int
LIBSTUB_EVP_EncodeBlock(void);

void
LIBSTUB_EVP_DecodeInit(void);

int
LIBSTUB_EVP_DecodeUpdate(void);

int
LIBSTUB_EVP_DecodeFinal(void);

int
LIBSTUB_EVP_DecodeBlock(void);

int
LIBSTUB_EVP_CIPHER_CTX_set_key_length(void);

int
LIBSTUB_EVP_CIPHER_CTX_set_padding(void);

int
LIBSTUB_EVP_CIPHER_CTX_ctrl(void);

BIO_METHOD *
LIBSTUB_BIO_f_md(void);

BIO_METHOD *
LIBSTUB_BIO_f_base64(void);

BIO_METHOD *
LIBSTUB_BIO_f_cipher(void);

BIO_METHOD *
LIBSTUB_BIO_f_reliable(void);

int
LIBSTUB_BIO_set_cipher(void);

const EVP_MD *
LIBSTUB_EVP_md_null(void);

const EVP_MD *
LIBSTUB_EVP_md2(void);

const EVP_MD *
LIBSTUB_EVP_md4(void);

const EVP_MD *
LIBSTUB_EVP_md5(void);

const EVP_MD *
LIBSTUB_EVP_sha1(void);

const EVP_MD *
LIBSTUB_EVP_mdc2(void);

const EVP_MD *
LIBSTUB_EVP_ripemd160(void);

const EVP_CIPHER *
LIBSTUB_EVP_enc_null(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_desx_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc4(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc4_40(void);

const EVP_CIPHER *
LIBSTUB_EVP_idea_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_idea_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_idea_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_idea_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc2_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc2_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc2_40_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc2_64_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc2_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc2_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_bf_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_bf_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_bf_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_bf_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_cast5_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_cast5_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_cast5_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_cast5_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc5_32_12_16_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc5_32_12_16_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc5_32_12_16_cfb64(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc5_32_12_16_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_cfb128(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_cfb128(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_cfb128(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_ofb(void);

int
LIBSTUB_EVP_add_cipher(void);

int
LIBSTUB_EVP_add_digest(void);

const EVP_CIPHER *
LIBSTUB_EVP_get_cipherbyname(void);

const EVP_MD *
LIBSTUB_EVP_get_digestbyname(void);

void
LIBSTUB_EVP_cleanup(void);

int
LIBSTUB_EVP_PKEY_decrypt(void);

int
LIBSTUB_EVP_PKEY_encrypt(void);

int
LIBSTUB_EVP_PKEY_type(void);

int
LIBSTUB_EVP_PKEY_bits(void);

int
LIBSTUB_EVP_PKEY_size(void);

int
LIBSTUB_EVP_PKEY_assign(void);

int
LIBSTUB_EVP_PKEY_set1_RSA(void);

struct rsa_st *
LIBSTUB_EVP_PKEY_get1_RSA(void);

int
LIBSTUB_EVP_PKEY_set1_DSA(void);

struct dsa_st *
LIBSTUB_EVP_PKEY_get1_DSA(void);

int
LIBSTUB_EVP_PKEY_set1_DH(void);

struct dh_st *
LIBSTUB_EVP_PKEY_get1_DH(void);

EVP_PKEY *
LIBSTUB_EVP_PKEY_new(void);

void
LIBSTUB_EVP_PKEY_free(void);

EVP_PKEY *
LIBSTUB_d2i_PublicKey(void);

int
LIBSTUB_i2d_PublicKey(void);

EVP_PKEY *
LIBSTUB_d2i_PrivateKey(void);

EVP_PKEY *
LIBSTUB_d2i_AutoPrivateKey(void);

int
LIBSTUB_i2d_PrivateKey(void);

int
LIBSTUB_EVP_PKEY_copy_parameters(void);

int
LIBSTUB_EVP_PKEY_missing_parameters(void);

int
LIBSTUB_EVP_PKEY_save_parameters(void);

int
LIBSTUB_EVP_PKEY_cmp_parameters(void);

int
LIBSTUB_EVP_CIPHER_type(void);

int
LIBSTUB_EVP_CIPHER_param_to_asn1(void);

int
LIBSTUB_EVP_CIPHER_asn1_to_param(void);

int
LIBSTUB_EVP_CIPHER_set_asn1_iv(void);

int
LIBSTUB_EVP_CIPHER_get_asn1_iv(void);

int
LIBSTUB_PKCS5_PBE_keyivgen(void);

int
LIBSTUB_PKCS5_PBKDF2_HMAC_SHA1(void);

int
LIBSTUB_PKCS5_v2_PBE_keyivgen(void);

void
LIBSTUB_PKCS5_PBE_add(void);

int
LIBSTUB_EVP_PBE_CipherInit(void);

int
LIBSTUB_EVP_PBE_alg_add(void);

void
LIBSTUB_EVP_PBE_cleanup(void);

void
LIBSTUB_ERR_load_EVP_strings(void);

int
LIBSTUB_HMAC_Init(void);

int
LIBSTUB_HMAC_Init_ex(void);

int
LIBSTUB_HMAC_Update(void);

int
LIBSTUB_HMAC_Final(void);

unsigned char *
LIBSTUB_HMAC(void);

_LHASH *
LIBSTUB_lh_new(void);

void
LIBSTUB_lh_free(void);

void *
LIBSTUB_lh_insert(void);

void *
LIBSTUB_lh_delete(void);

void *
LIBSTUB_lh_retrieve(void);

void
LIBSTUB_lh_doall(void);

void
LIBSTUB_lh_doall_arg(void);

unsigned long
LIBSTUB_lh_strhash(void);

unsigned long
LIBSTUB_lh_num_items(void);

void
LIBSTUB_lh_stats_bio(void);

void
LIBSTUB_lh_node_stats_bio(void);

void
LIBSTUB_lh_node_usage_stats_bio(void);

int
LIBSTUB_OBJ_NAME_init(void);

int
LIBSTUB_OBJ_NAME_new_index(void);

const char *
LIBSTUB_OBJ_NAME_get(void);

int
LIBSTUB_OBJ_NAME_add(void);

int
LIBSTUB_OBJ_NAME_remove(void);

void
LIBSTUB_OBJ_NAME_cleanup(void);

void
LIBSTUB_OBJ_NAME_do_all(void);

void
LIBSTUB_OBJ_NAME_do_all_sorted(void);

ASN1_OBJECT *
LIBSTUB_OBJ_dup(void);

ASN1_OBJECT *
LIBSTUB_OBJ_nid2obj(void);

const char *
LIBSTUB_OBJ_nid2ln(void);

const char *
LIBSTUB_OBJ_nid2sn(void);

int
LIBSTUB_OBJ_obj2nid(void);

ASN1_OBJECT *
LIBSTUB_OBJ_txt2obj(void);

int
LIBSTUB_OBJ_obj2txt(void);

int
LIBSTUB_OBJ_txt2nid(void);

int
LIBSTUB_OBJ_ln2nid(void);

int
LIBSTUB_OBJ_sn2nid(void);

int
LIBSTUB_OBJ_cmp(void);

int
LIBSTUB_OBJ_new_nid(void);

int
LIBSTUB_OBJ_add_object(void);

int
LIBSTUB_OBJ_create(void);

void
LIBSTUB_OBJ_cleanup(void);

int
LIBSTUB_OBJ_create_objects(void);

void
LIBSTUB_ERR_load_OBJ_strings(void);

OCSP_RESPONSE *
LIBSTUB_OCSP_sendreq_bio(void);

OCSP_CERTID *
LIBSTUB_OCSP_cert_to_id(void);

OCSP_CERTID *
LIBSTUB_OCSP_cert_id_new(void);

OCSP_ONEREQ *
LIBSTUB_OCSP_request_add0_id(void);

int
LIBSTUB_OCSP_request_add1_nonce(void);

int
LIBSTUB_OCSP_basic_add1_nonce(void);

int
LIBSTUB_OCSP_check_nonce(void);

int
LIBSTUB_OCSP_copy_nonce(void);

int
LIBSTUB_OCSP_request_set1_name(void);

int
LIBSTUB_OCSP_request_add1_cert(void);

int
LIBSTUB_OCSP_request_sign(void);

int
LIBSTUB_OCSP_response_status(void);

OCSP_BASICRESP *
LIBSTUB_OCSP_response_get1_basic(void);

int
LIBSTUB_OCSP_resp_count(void);

OCSP_SINGLERESP *
LIBSTUB_OCSP_resp_get0(void);

int
LIBSTUB_OCSP_resp_find(void);

int
LIBSTUB_OCSP_single_get0_status(void);

int
LIBSTUB_OCSP_resp_find_status(void);

int
LIBSTUB_OCSP_check_validity(void);

int
LIBSTUB_OCSP_request_verify(void);

int
LIBSTUB_OCSP_parse_url(void);

int
LIBSTUB_OCSP_id_issuer_cmp(void);

int
LIBSTUB_OCSP_id_cmp(void);

int
LIBSTUB_OCSP_request_onereq_count(void);

OCSP_ONEREQ *
LIBSTUB_OCSP_request_onereq_get0(void);

OCSP_CERTID *
LIBSTUB_OCSP_onereq_get0_id(void);

int
LIBSTUB_OCSP_id_get0_info(void);

int
LIBSTUB_OCSP_request_is_signed(void);

OCSP_RESPONSE *
LIBSTUB_OCSP_response_create(void);

OCSP_SINGLERESP *
LIBSTUB_OCSP_basic_add1_status(void);

int
LIBSTUB_OCSP_basic_add1_cert(void);

int
LIBSTUB_OCSP_basic_sign(void);

X509_EXTENSION *
LIBSTUB_OCSP_crlID_new(void);

X509_EXTENSION *
LIBSTUB_OCSP_accept_responses_new(void);

X509_EXTENSION *
LIBSTUB_OCSP_archive_cutoff_new(void);

X509_EXTENSION *
LIBSTUB_OCSP_url_svcloc_new(void);

int
LIBSTUB_OCSP_REQUEST_get_ext_count(void);

int
LIBSTUB_OCSP_REQUEST_get_ext_by_NID(void);

int
LIBSTUB_OCSP_REQUEST_get_ext_by_OBJ(void);

int
LIBSTUB_OCSP_REQUEST_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_OCSP_REQUEST_get_ext(void);

X509_EXTENSION *
LIBSTUB_OCSP_REQUEST_delete_ext(void);

void *
LIBSTUB_OCSP_REQUEST_get1_ext_d2i(void);

int
LIBSTUB_OCSP_REQUEST_add1_ext_i2d(void);

int
LIBSTUB_OCSP_REQUEST_add_ext(void);

int
LIBSTUB_OCSP_ONEREQ_get_ext_count(void);

int
LIBSTUB_OCSP_ONEREQ_get_ext_by_NID(void);

int
LIBSTUB_OCSP_ONEREQ_get_ext_by_OBJ(void);

int
LIBSTUB_OCSP_ONEREQ_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_OCSP_ONEREQ_get_ext(void);

X509_EXTENSION *
LIBSTUB_OCSP_ONEREQ_delete_ext(void);

void *
LIBSTUB_OCSP_ONEREQ_get1_ext_d2i(void);

int
LIBSTUB_OCSP_ONEREQ_add1_ext_i2d(void);

int
LIBSTUB_OCSP_ONEREQ_add_ext(void);

int
LIBSTUB_OCSP_BASICRESP_get_ext_count(void);

int
LIBSTUB_OCSP_BASICRESP_get_ext_by_NID(void);

int
LIBSTUB_OCSP_BASICRESP_get_ext_by_OBJ(void);

int
LIBSTUB_OCSP_BASICRESP_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_OCSP_BASICRESP_get_ext(void);

X509_EXTENSION *
LIBSTUB_OCSP_BASICRESP_delete_ext(void);

void *
LIBSTUB_OCSP_BASICRESP_get1_ext_d2i(void);

int
LIBSTUB_OCSP_BASICRESP_add1_ext_i2d(void);

int
LIBSTUB_OCSP_BASICRESP_add_ext(void);

int
LIBSTUB_OCSP_SINGLERESP_get_ext_count(void);

int
LIBSTUB_OCSP_SINGLERESP_get_ext_by_NID(void);

int
LIBSTUB_OCSP_SINGLERESP_get_ext_by_OBJ(void);

int
LIBSTUB_OCSP_SINGLERESP_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_OCSP_SINGLERESP_get_ext(void);

X509_EXTENSION *
LIBSTUB_OCSP_SINGLERESP_delete_ext(void);

void *
LIBSTUB_OCSP_SINGLERESP_get1_ext_d2i(void);

int
LIBSTUB_OCSP_SINGLERESP_add1_ext_i2d(void);

int
LIBSTUB_OCSP_SINGLERESP_add_ext(void);

OCSP_SINGLERESP *
LIBSTUB_OCSP_SINGLERESP_new(void);

void
LIBSTUB_OCSP_SINGLERESP_free(void);

OCSP_SINGLERESP *
LIBSTUB_d2i_OCSP_SINGLERESP(void);

int
LIBSTUB_i2d_OCSP_SINGLERESP(void);

const ASN1_ITEM *
LIBSTUB_OCSP_SINGLERESP_it(void);

OCSP_CERTSTATUS *
LIBSTUB_OCSP_CERTSTATUS_new(void);

void
LIBSTUB_OCSP_CERTSTATUS_free(void);

OCSP_CERTSTATUS *
LIBSTUB_d2i_OCSP_CERTSTATUS(void);

int
LIBSTUB_i2d_OCSP_CERTSTATUS(void);

const ASN1_ITEM *
LIBSTUB_OCSP_CERTSTATUS_it(void);

OCSP_REVOKEDINFO *
LIBSTUB_OCSP_REVOKEDINFO_new(void);

void
LIBSTUB_OCSP_REVOKEDINFO_free(void);

OCSP_REVOKEDINFO *
LIBSTUB_d2i_OCSP_REVOKEDINFO(void);

int
LIBSTUB_i2d_OCSP_REVOKEDINFO(void);

const ASN1_ITEM *
LIBSTUB_OCSP_REVOKEDINFO_it(void);

OCSP_BASICRESP *
LIBSTUB_OCSP_BASICRESP_new(void);

void
LIBSTUB_OCSP_BASICRESP_free(void);

OCSP_BASICRESP *
LIBSTUB_d2i_OCSP_BASICRESP(void);

int
LIBSTUB_i2d_OCSP_BASICRESP(void);

const ASN1_ITEM *
LIBSTUB_OCSP_BASICRESP_it(void);

OCSP_RESPDATA *
LIBSTUB_OCSP_RESPDATA_new(void);

void
LIBSTUB_OCSP_RESPDATA_free(void);

OCSP_RESPDATA *
LIBSTUB_d2i_OCSP_RESPDATA(void);

int
LIBSTUB_i2d_OCSP_RESPDATA(void);

const ASN1_ITEM *
LIBSTUB_OCSP_RESPDATA_it(void);

OCSP_RESPID *
LIBSTUB_OCSP_RESPID_new(void);

void
LIBSTUB_OCSP_RESPID_free(void);

OCSP_RESPID *
LIBSTUB_d2i_OCSP_RESPID(void);

int
LIBSTUB_i2d_OCSP_RESPID(void);

const ASN1_ITEM *
LIBSTUB_OCSP_RESPID_it(void);

OCSP_RESPONSE *
LIBSTUB_OCSP_RESPONSE_new(void);

void
LIBSTUB_OCSP_RESPONSE_free(void);

OCSP_RESPONSE *
LIBSTUB_d2i_OCSP_RESPONSE(void);

int
LIBSTUB_i2d_OCSP_RESPONSE(void);

const ASN1_ITEM *
LIBSTUB_OCSP_RESPONSE_it(void);

OCSP_RESPBYTES *
LIBSTUB_OCSP_RESPBYTES_new(void);

void
LIBSTUB_OCSP_RESPBYTES_free(void);

OCSP_RESPBYTES *
LIBSTUB_d2i_OCSP_RESPBYTES(void);

int
LIBSTUB_i2d_OCSP_RESPBYTES(void);

const ASN1_ITEM *
LIBSTUB_OCSP_RESPBYTES_it(void);

OCSP_ONEREQ *
LIBSTUB_OCSP_ONEREQ_new(void);

void
LIBSTUB_OCSP_ONEREQ_free(void);

OCSP_ONEREQ *
LIBSTUB_d2i_OCSP_ONEREQ(void);

int
LIBSTUB_i2d_OCSP_ONEREQ(void);

const ASN1_ITEM *
LIBSTUB_OCSP_ONEREQ_it(void);

OCSP_CERTID *
LIBSTUB_OCSP_CERTID_new(void);

void
LIBSTUB_OCSP_CERTID_free(void);

OCSP_CERTID *
LIBSTUB_d2i_OCSP_CERTID(void);

int
LIBSTUB_i2d_OCSP_CERTID(void);

const ASN1_ITEM *
LIBSTUB_OCSP_CERTID_it(void);

OCSP_REQUEST *
LIBSTUB_OCSP_REQUEST_new(void);

void
LIBSTUB_OCSP_REQUEST_free(void);

OCSP_REQUEST *
LIBSTUB_d2i_OCSP_REQUEST(void);

int
LIBSTUB_i2d_OCSP_REQUEST(void);

const ASN1_ITEM *
LIBSTUB_OCSP_REQUEST_it(void);

OCSP_SIGNATURE *
LIBSTUB_OCSP_SIGNATURE_new(void);

void
LIBSTUB_OCSP_SIGNATURE_free(void);

OCSP_SIGNATURE *
LIBSTUB_d2i_OCSP_SIGNATURE(void);

int
LIBSTUB_i2d_OCSP_SIGNATURE(void);

const ASN1_ITEM *
LIBSTUB_OCSP_SIGNATURE_it(void);

OCSP_REQINFO *
LIBSTUB_OCSP_REQINFO_new(void);

void
LIBSTUB_OCSP_REQINFO_free(void);

OCSP_REQINFO *
LIBSTUB_d2i_OCSP_REQINFO(void);

int
LIBSTUB_i2d_OCSP_REQINFO(void);

const ASN1_ITEM *
LIBSTUB_OCSP_REQINFO_it(void);

OCSP_CRLID *
LIBSTUB_OCSP_CRLID_new(void);

void
LIBSTUB_OCSP_CRLID_free(void);

OCSP_CRLID *
LIBSTUB_d2i_OCSP_CRLID(void);

int
LIBSTUB_i2d_OCSP_CRLID(void);

const ASN1_ITEM *
LIBSTUB_OCSP_CRLID_it(void);

OCSP_SERVICELOC *
LIBSTUB_OCSP_SERVICELOC_new(void);

void
LIBSTUB_OCSP_SERVICELOC_free(void);

OCSP_SERVICELOC *
LIBSTUB_d2i_OCSP_SERVICELOC(void);

int
LIBSTUB_i2d_OCSP_SERVICELOC(void);

const ASN1_ITEM *
LIBSTUB_OCSP_SERVICELOC_it(void);

const char *
LIBSTUB_OCSP_response_status_str(void);

const char *
LIBSTUB_OCSP_cert_status_str(void);

const char *
LIBSTUB_OCSP_crl_reason_str(void);

int
LIBSTUB_OCSP_REQUEST_print(void);

int
LIBSTUB_OCSP_RESPONSE_print(void);

int
LIBSTUB_OCSP_basic_verify(void);

void
LIBSTUB_ERR_load_OCSP_strings(void);

int
LIBSTUB_PEM_get_EVP_CIPHER_INFO(void);

int
LIBSTUB_PEM_do_header(void);

int
LIBSTUB_PEM_read_bio(void);

int
LIBSTUB_PEM_write_bio(void);

int
LIBSTUB_PEM_bytes_read_bio(void);

void *
LIBSTUB_PEM_ASN1_read_bio(void);

int
LIBSTUB_PEM_ASN1_write_bio(void);

STACK_OF(X509_INFO) *
LIBSTUB_PEM_X509_INFO_read_bio(void);

int
LIBSTUB_PEM_X509_INFO_write_bio(void);

int
LIBSTUB_PEM_SignInit(void);

int
LIBSTUB_PEM_SignUpdate(void);

int
LIBSTUB_PEM_SignFinal(void);

int
LIBSTUB_PEM_def_callback(void);

void
LIBSTUB_PEM_proc_type(void);

void
LIBSTUB_PEM_dek_info(void);

X509 *
LIBSTUB_PEM_read_bio_X509(void);

int
LIBSTUB_PEM_write_bio_X509(void);

X509 *
LIBSTUB_PEM_read_bio_X509_AUX(void);

int
LIBSTUB_PEM_write_bio_X509_AUX(void);

X509_REQ *
LIBSTUB_PEM_read_bio_X509_REQ(void);

int
LIBSTUB_PEM_write_bio_X509_REQ(void);

int
LIBSTUB_PEM_write_bio_X509_REQ_NEW(void);

X509_CRL *
LIBSTUB_PEM_read_bio_X509_CRL(void);

int
LIBSTUB_PEM_write_bio_X509_CRL(void);

PKCS7 *
LIBSTUB_PEM_read_bio_PKCS7(void);

int
LIBSTUB_PEM_write_bio_PKCS7(void);

NETSCAPE_CERT_SEQUENCE *
LIBSTUB_PEM_read_bio_NETSCAPE_CERT_SEQUENCE(void);

int
LIBSTUB_PEM_write_bio_NETSCAPE_CERT_SEQUENCE(void);

X509_SIG *
LIBSTUB_PEM_read_bio_PKCS8(void);

int
LIBSTUB_PEM_write_bio_PKCS8(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_PEM_read_bio_PKCS8_PRIV_KEY_INFO(void);

int
LIBSTUB_PEM_write_bio_PKCS8_PRIV_KEY_INFO(void);

RSA *
LIBSTUB_PEM_read_bio_RSAPrivateKey(void);

int
LIBSTUB_PEM_write_bio_RSAPrivateKey(void);

RSA *
LIBSTUB_PEM_read_bio_RSAPublicKey(void);

int
LIBSTUB_PEM_write_bio_RSAPublicKey(void);

RSA *
LIBSTUB_PEM_read_bio_RSA_PUBKEY(void);

int
LIBSTUB_PEM_write_bio_RSA_PUBKEY(void);

DSA *
LIBSTUB_PEM_read_bio_DSAPrivateKey(void);

int
LIBSTUB_PEM_write_bio_DSAPrivateKey(void);

DSA *
LIBSTUB_PEM_read_bio_DSA_PUBKEY(void);

int
LIBSTUB_PEM_write_bio_DSA_PUBKEY(void);

DSA *
LIBSTUB_PEM_read_bio_DSAparams(void);

int
LIBSTUB_PEM_write_bio_DSAparams(void);

DH *
LIBSTUB_PEM_read_bio_DHparams(void);

int
LIBSTUB_PEM_write_bio_DHparams(void);

EVP_PKEY *
LIBSTUB_PEM_read_bio_PrivateKey(void);

int
LIBSTUB_PEM_write_bio_PrivateKey(void);

EVP_PKEY *
LIBSTUB_PEM_read_bio_PUBKEY(void);

int
LIBSTUB_PEM_write_bio_PUBKEY(void);

int
LIBSTUB_PEM_write_bio_PKCS8PrivateKey_nid(void);

int
LIBSTUB_PEM_write_bio_PKCS8PrivateKey(void);

int
LIBSTUB_i2d_PKCS8PrivateKey_bio(void);

int
LIBSTUB_i2d_PKCS8PrivateKey_nid_bio(void);

EVP_PKEY *
LIBSTUB_d2i_PKCS8PrivateKey_bio(void);

void
LIBSTUB_ERR_load_PEM_strings(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_item_pack_safebag(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_PKCS8_decrypt(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_PKCS12_decrypt_skey(void);

X509_SIG *
LIBSTUB_PKCS8_encrypt(void);

PKCS7 *
LIBSTUB_PKCS12_pack_p7data(void);

STACK_OF(PKCS12_SAFEBAG) *
LIBSTUB_PKCS12_unpack_p7data(void);

PKCS7 *
LIBSTUB_PKCS12_pack_p7encdata(void);

STACK_OF(PKCS12_SAFEBAG) *
LIBSTUB_PKCS12_unpack_p7encdata(void);

int
LIBSTUB_PKCS12_pack_authsafes(void);

STACK_OF(PKCS7) *
LIBSTUB_PKCS12_unpack_authsafes(void);

int
LIBSTUB_PKCS12_add_localkeyid(void);

int
LIBSTUB_PKCS12_add_friendlyname_asc(void);

int
LIBSTUB_PKCS12_add_CSPName_asc(void);

int
LIBSTUB_PKCS12_add_friendlyname_uni(void);

int
LIBSTUB_PKCS8_add_keyusage(void);

ASN1_TYPE *
LIBSTUB_PKCS12_get_attr_gen(void);

char *
LIBSTUB_PKCS12_get_friendlyname(void);

unsigned char *
LIBSTUB_PKCS12_pbe_crypt(void);

void *
LIBSTUB_PKCS12_item_decrypt_d2i(void);

ASN1_OCTET_STRING *
LIBSTUB_PKCS12_item_i2d_encrypt(void);

PKCS12 *
LIBSTUB_PKCS12_init(void);

int
LIBSTUB_PKCS12_key_gen_asc(void);

int
LIBSTUB_PKCS12_key_gen_uni(void);

int
LIBSTUB_PKCS12_PBE_keyivgen(void);

int
LIBSTUB_PKCS12_gen_mac(void);

int
LIBSTUB_PKCS12_verify_mac(void);

int
LIBSTUB_PKCS12_set_mac(void);

int
LIBSTUB_PKCS12_setup_mac(void);

unsigned char *
LIBSTUB_OPENSSL_asc2uni(void);

char *
LIBSTUB_OPENSSL_uni2asc(void);

PKCS12 *
LIBSTUB_PKCS12_new(void);

void
LIBSTUB_PKCS12_free(void);

PKCS12 *
LIBSTUB_d2i_PKCS12(void);

int
LIBSTUB_i2d_PKCS12(void);

const ASN1_ITEM *
LIBSTUB_PKCS12_it(void);

PKCS12_MAC_DATA *
LIBSTUB_PKCS12_MAC_DATA_new(void);

void
LIBSTUB_PKCS12_MAC_DATA_free(void);

PKCS12_MAC_DATA *
LIBSTUB_d2i_PKCS12_MAC_DATA(void);

int
LIBSTUB_i2d_PKCS12_MAC_DATA(void);

const ASN1_ITEM *
LIBSTUB_PKCS12_MAC_DATA_it(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_SAFEBAG_new(void);

void
LIBSTUB_PKCS12_SAFEBAG_free(void);

PKCS12_SAFEBAG *
LIBSTUB_d2i_PKCS12_SAFEBAG(void);

int
LIBSTUB_i2d_PKCS12_SAFEBAG(void);

const ASN1_ITEM *
LIBSTUB_PKCS12_SAFEBAG_it(void);

PKCS12_BAGS *
LIBSTUB_PKCS12_BAGS_new(void);

void
LIBSTUB_PKCS12_BAGS_free(void);

PKCS12_BAGS *
LIBSTUB_d2i_PKCS12_BAGS(void);

int
LIBSTUB_i2d_PKCS12_BAGS(void);

const ASN1_ITEM *
LIBSTUB_PKCS12_BAGS_it(void);

const ASN1_ITEM *
LIBSTUB_PKCS12_SAFEBAGS_it(void);

const ASN1_ITEM *
LIBSTUB_PKCS12_AUTHSAFES_it(void);

void
LIBSTUB_PKCS12_PBE_add(void);

int
LIBSTUB_PKCS12_parse(void);

PKCS12 *
LIBSTUB_PKCS12_create(void);

int
LIBSTUB_i2d_PKCS12_bio(void);

PKCS12 *
LIBSTUB_d2i_PKCS12_bio(void);

int
LIBSTUB_PKCS12_newpass(void);

void
LIBSTUB_ERR_load_PKCS12_strings(void);

int
LIBSTUB_PKCS7_ISSUER_AND_SERIAL_digest(void);

PKCS7 *
LIBSTUB_PKCS7_dup(void);

PKCS7 *
LIBSTUB_d2i_PKCS7_bio(void);

int
LIBSTUB_i2d_PKCS7_bio(void);

PKCS7_ISSUER_AND_SERIAL *
LIBSTUB_PKCS7_ISSUER_AND_SERIAL_new(void);

void
LIBSTUB_PKCS7_ISSUER_AND_SERIAL_free(void);

PKCS7_ISSUER_AND_SERIAL *
LIBSTUB_d2i_PKCS7_ISSUER_AND_SERIAL(void);

int
LIBSTUB_i2d_PKCS7_ISSUER_AND_SERIAL(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_ISSUER_AND_SERIAL_it(void);

PKCS7_SIGNER_INFO *
LIBSTUB_PKCS7_SIGNER_INFO_new(void);

void
LIBSTUB_PKCS7_SIGNER_INFO_free(void);

PKCS7_SIGNER_INFO *
LIBSTUB_d2i_PKCS7_SIGNER_INFO(void);

int
LIBSTUB_i2d_PKCS7_SIGNER_INFO(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_SIGNER_INFO_it(void);

PKCS7_RECIP_INFO *
LIBSTUB_PKCS7_RECIP_INFO_new(void);

void
LIBSTUB_PKCS7_RECIP_INFO_free(void);

PKCS7_RECIP_INFO *
LIBSTUB_d2i_PKCS7_RECIP_INFO(void);

int
LIBSTUB_i2d_PKCS7_RECIP_INFO(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_RECIP_INFO_it(void);

PKCS7_SIGNED *
LIBSTUB_PKCS7_SIGNED_new(void);

void
LIBSTUB_PKCS7_SIGNED_free(void);

PKCS7_SIGNED *
LIBSTUB_d2i_PKCS7_SIGNED(void);

int
LIBSTUB_i2d_PKCS7_SIGNED(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_SIGNED_it(void);

PKCS7_ENC_CONTENT *
LIBSTUB_PKCS7_ENC_CONTENT_new(void);

void
LIBSTUB_PKCS7_ENC_CONTENT_free(void);

PKCS7_ENC_CONTENT *
LIBSTUB_d2i_PKCS7_ENC_CONTENT(void);

int
LIBSTUB_i2d_PKCS7_ENC_CONTENT(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_ENC_CONTENT_it(void);

PKCS7_ENVELOPE *
LIBSTUB_PKCS7_ENVELOPE_new(void);

void
LIBSTUB_PKCS7_ENVELOPE_free(void);

PKCS7_ENVELOPE *
LIBSTUB_d2i_PKCS7_ENVELOPE(void);

int
LIBSTUB_i2d_PKCS7_ENVELOPE(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_ENVELOPE_it(void);

PKCS7_SIGN_ENVELOPE *
LIBSTUB_PKCS7_SIGN_ENVELOPE_new(void);

void
LIBSTUB_PKCS7_SIGN_ENVELOPE_free(void);

PKCS7_SIGN_ENVELOPE *
LIBSTUB_d2i_PKCS7_SIGN_ENVELOPE(void);

int
LIBSTUB_i2d_PKCS7_SIGN_ENVELOPE(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_SIGN_ENVELOPE_it(void);

PKCS7_DIGEST *
LIBSTUB_PKCS7_DIGEST_new(void);

void
LIBSTUB_PKCS7_DIGEST_free(void);

PKCS7_DIGEST *
LIBSTUB_d2i_PKCS7_DIGEST(void);

int
LIBSTUB_i2d_PKCS7_DIGEST(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_DIGEST_it(void);

PKCS7_ENCRYPT *
LIBSTUB_PKCS7_ENCRYPT_new(void);

void
LIBSTUB_PKCS7_ENCRYPT_free(void);

PKCS7_ENCRYPT *
LIBSTUB_d2i_PKCS7_ENCRYPT(void);

int
LIBSTUB_i2d_PKCS7_ENCRYPT(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_ENCRYPT_it(void);

PKCS7 *
LIBSTUB_PKCS7_new(void);

void
LIBSTUB_PKCS7_free(void);

PKCS7 *
LIBSTUB_d2i_PKCS7(void);

int
LIBSTUB_i2d_PKCS7(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_it(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_ATTR_SIGN_it(void);

const ASN1_ITEM *
LIBSTUB_PKCS7_ATTR_VERIFY_it(void);

long
LIBSTUB_PKCS7_ctrl(void);

int
LIBSTUB_PKCS7_set_type(void);

int
LIBSTUB_PKCS7_set_content(void);

int
LIBSTUB_PKCS7_SIGNER_INFO_set(void);

int
LIBSTUB_PKCS7_add_signer(void);

int
LIBSTUB_PKCS7_add_certificate(void);

int
LIBSTUB_PKCS7_add_crl(void);

int
LIBSTUB_PKCS7_content_new(void);

int
LIBSTUB_PKCS7_dataVerify(void);

int
LIBSTUB_PKCS7_signatureVerify(void);

BIO *
LIBSTUB_PKCS7_dataInit(void);

int
LIBSTUB_PKCS7_dataFinal(void);

BIO *
LIBSTUB_PKCS7_dataDecode(void);

PKCS7_SIGNER_INFO *
LIBSTUB_PKCS7_add_signature(void);

X509 *
LIBSTUB_PKCS7_cert_from_signer_info(void);

STACK_OF(PKCS7_SIGNER_INFO) *
LIBSTUB_PKCS7_get_signer_info(void);

PKCS7_RECIP_INFO *
LIBSTUB_PKCS7_add_recipient(void);

int
LIBSTUB_PKCS7_add_recipient_info(void);

int
LIBSTUB_PKCS7_RECIP_INFO_set(void);

int
LIBSTUB_PKCS7_set_cipher(void);

PKCS7_ISSUER_AND_SERIAL *
LIBSTUB_PKCS7_get_issuer_and_serial(void);

ASN1_OCTET_STRING *
LIBSTUB_PKCS7_digest_from_attributes(void);

int
LIBSTUB_PKCS7_add_signed_attribute(void);

int
LIBSTUB_PKCS7_add_attribute(void);

ASN1_TYPE *
LIBSTUB_PKCS7_get_attribute(void);

ASN1_TYPE *
LIBSTUB_PKCS7_get_signed_attribute(void);

int
LIBSTUB_PKCS7_set_signed_attributes(void);

int
LIBSTUB_PKCS7_set_attributes(void);

PKCS7 *
LIBSTUB_PKCS7_sign(void);

int
LIBSTUB_PKCS7_verify(void);

STACK_OF(X509) *
LIBSTUB_PKCS7_get0_signers(void);

PKCS7 *
LIBSTUB_PKCS7_encrypt(void);

int
LIBSTUB_PKCS7_decrypt(void);

int
LIBSTUB_PKCS7_add_attrib_smimecap(void);

STACK_OF(X509_ALGOR) *
LIBSTUB_PKCS7_get_smimecap(void);

int
LIBSTUB_PKCS7_simple_smimecap(void);

int
LIBSTUB_SMIME_write_PKCS7(void);

PKCS7 *
LIBSTUB_SMIME_read_PKCS7(void);

int
LIBSTUB_SMIME_crlf_copy(void);

int
LIBSTUB_SMIME_text(void);

void
LIBSTUB_ERR_load_PKCS7_strings(void);

int
LIBSTUB_RAND_set_rand_method(void);

const RAND_METHOD *
LIBSTUB_RAND_get_rand_method(void);

void
LIBSTUB_RAND_cleanup(void);

int
LIBSTUB_RAND_bytes(void);

int
LIBSTUB_RAND_pseudo_bytes(void);

void
LIBSTUB_RAND_seed(void);

void
LIBSTUB_RAND_add(void);

int
LIBSTUB_RAND_load_file(void);

int
LIBSTUB_RAND_write_file(void);

const char *
LIBSTUB_RAND_file_name(void);

int
LIBSTUB_RAND_status(void);

int
LIBSTUB_RAND_poll(void);

void
LIBSTUB_ERR_load_RAND_strings(void);

void
LIBSTUB_SSL_CTX_set_msg_callback(void);

void
LIBSTUB_SSL_set_msg_callback(void);

LHASH_OF(SSL_SESSION) *
LIBSTUB_SSL_CTX_sessions(void);

size_t
LIBSTUB_SSL_get_finished(void);

size_t
LIBSTUB_SSL_get_peer_finished(void);

BIO_METHOD *
LIBSTUB_BIO_f_ssl(void);

BIO *
LIBSTUB_BIO_new_ssl(void);

BIO *
LIBSTUB_BIO_new_ssl_connect(void);

BIO *
LIBSTUB_BIO_new_buffer_ssl_connect(void);

int
LIBSTUB_BIO_ssl_copy_session_id(void);

void
LIBSTUB_BIO_ssl_shutdown(void);

int
LIBSTUB_SSL_CTX_set_cipher_list(void);

SSL_CTX *
LIBSTUB_SSL_CTX_new(void);

void
LIBSTUB_SSL_CTX_free(void);

long
LIBSTUB_SSL_CTX_set_timeout(void);

long
LIBSTUB_SSL_CTX_get_timeout(void);

X509_STORE *
LIBSTUB_SSL_CTX_get_cert_store(void);

void
LIBSTUB_SSL_CTX_set_cert_store(void);

int
LIBSTUB_SSL_want(void);

int
LIBSTUB_SSL_clear(void);

void
LIBSTUB_SSL_CTX_flush_sessions(void);

const SSL_CIPHER *
LIBSTUB_SSL_get_current_cipher(void);

int
LIBSTUB_SSL_CIPHER_get_bits(void);

const char *
LIBSTUB_SSL_CIPHER_get_version(void);

const char *
LIBSTUB_SSL_CIPHER_get_name(void);

const char *
LIBSTUB_SSL_CIPHER_get_mac(void);

const char *
LIBSTUB_SSL_CIPHER_get_encryption(void);

const char *
LIBSTUB_SSL_CIPHER_get_authentication(void);

const char *
LIBSTUB_SSL_CIPHER_get_key_exchange(void);

int
LIBSTUB_SSL_get_fd(void);

int
LIBSTUB_SSL_get_rfd(void);

int
LIBSTUB_SSL_get_wfd(void);

const char *
LIBSTUB_SSL_get_cipher_list(void);

char *
LIBSTUB_SSL_get_shared_ciphers(void);

int
LIBSTUB_SSL_get_read_ahead(void);

int
LIBSTUB_SSL_pending(void);

int
LIBSTUB_SSL_set_fd(void);

int
LIBSTUB_SSL_set_rfd(void);

int
LIBSTUB_SSL_set_wfd(void);

void
LIBSTUB_SSL_set_bio(void);

BIO *
LIBSTUB_SSL_get_rbio(void);

BIO *
LIBSTUB_SSL_get_wbio(void);

int
LIBSTUB_SSL_set_cipher_list(void);

void
LIBSTUB_SSL_set_read_ahead(void);

int
LIBSTUB_SSL_get_verify_mode(void);

int
LIBSTUB_SSL_get_verify_depth(void);

int (*)(int, X509_STORE_CTX *)
LIBSTUB_SSL_get_verify_callback(void);

void
LIBSTUB_SSL_set_verify(void);

void
LIBSTUB_SSL_set_verify_depth(void);

int
LIBSTUB_SSL_use_RSAPrivateKey(void);

int
LIBSTUB_SSL_use_RSAPrivateKey_ASN1(void);

int
LIBSTUB_SSL_use_PrivateKey(void);

int
LIBSTUB_SSL_use_PrivateKey_ASN1(void);

int
LIBSTUB_SSL_use_certificate(void);

int
LIBSTUB_SSL_use_certificate_ASN1(void);

int
LIBSTUB_SSL_use_RSAPrivateKey_file(void);

int
LIBSTUB_SSL_use_PrivateKey_file(void);

int
LIBSTUB_SSL_use_certificate_file(void);

int
LIBSTUB_SSL_CTX_use_RSAPrivateKey_file(void);

int
LIBSTUB_SSL_CTX_use_PrivateKey_file(void);

int
LIBSTUB_SSL_CTX_use_certificate_file(void);

int
LIBSTUB_SSL_CTX_use_certificate_chain_file(void);

STACK_OF(X509_NAME) *
LIBSTUB_SSL_load_client_CA_file(void);

int
LIBSTUB_SSL_add_file_cert_subjects_to_stack(void);

int
LIBSTUB_SSL_add_dir_cert_subjects_to_stack(void);

const char *
LIBSTUB_SSL_rstate_string(void);

const char *
LIBSTUB_SSL_state_string_long(void);

const char *
LIBSTUB_SSL_rstate_string_long(void);

long
LIBSTUB_SSL_SESSION_get_time(void);

long
LIBSTUB_SSL_SESSION_set_time(void);

long
LIBSTUB_SSL_SESSION_get_timeout(void);

long
LIBSTUB_SSL_SESSION_set_timeout(void);

int
LIBSTUB_SSL_copy_session_id(void);

SSL_SESSION *
LIBSTUB_SSL_SESSION_new(void);

int
LIBSTUB_SSL_SESSION_print(void);

void
LIBSTUB_SSL_SESSION_free(void);

int
LIBSTUB_i2d_SSL_SESSION(void);

int
LIBSTUB_SSL_set_session(void);

int
LIBSTUB_SSL_CTX_add_session(void);

int
LIBSTUB_SSL_CTX_remove_session(void);

int
LIBSTUB_SSL_CTX_set_generate_session_id(void);

int
LIBSTUB_SSL_set_generate_session_id(void);

int
LIBSTUB_SSL_has_matching_session_id(void);

SSL_SESSION *
LIBSTUB_d2i_SSL_SESSION(void);

X509 *
LIBSTUB_SSL_get_peer_certificate(void);

STACK_OF(X509) *
LIBSTUB_SSL_get_peer_cert_chain(void);

int
LIBSTUB_SSL_CTX_get_verify_mode(void);

int
LIBSTUB_SSL_CTX_get_verify_depth(void);

int (*)(int, X509_STORE_CTX *)
LIBSTUB_SSL_CTX_get_verify_callback(void);

void
LIBSTUB_SSL_CTX_set_verify(void);

void
LIBSTUB_SSL_CTX_set_verify_depth(void);

void
LIBSTUB_SSL_CTX_set_cert_verify_callback(void);

int
LIBSTUB_SSL_CTX_use_RSAPrivateKey(void);

int
LIBSTUB_SSL_CTX_use_RSAPrivateKey_ASN1(void);

int
LIBSTUB_SSL_CTX_use_PrivateKey(void);

int
LIBSTUB_SSL_CTX_use_PrivateKey_ASN1(void);

int
LIBSTUB_SSL_CTX_use_certificate(void);

int
LIBSTUB_SSL_CTX_use_certificate_ASN1(void);

void
LIBSTUB_SSL_CTX_set_default_passwd_cb(void);

void
LIBSTUB_SSL_CTX_set_default_passwd_cb_userdata(void);

int
LIBSTUB_SSL_CTX_check_private_key(void);

int
LIBSTUB_SSL_check_private_key(void);

int
LIBSTUB_SSL_CTX_set_session_id_context(void);

SSL *
LIBSTUB_SSL_new(void);

int
LIBSTUB_SSL_set_session_id_context(void);

int
LIBSTUB_SSL_CTX_set_purpose(void);

int
LIBSTUB_SSL_set_purpose(void);

int
LIBSTUB_SSL_CTX_set_trust(void);

int
LIBSTUB_SSL_set_trust(void);

void
LIBSTUB_SSL_free(void);

int
LIBSTUB_SSL_accept(void);

int
LIBSTUB_SSL_connect(void);

int
LIBSTUB_SSL_read(void);

int
LIBSTUB_SSL_peek(void);

int
LIBSTUB_SSL_write(void);

long
LIBSTUB_SSL_ctrl(void);

long
LIBSTUB_SSL_callback_ctrl(void);

long
LIBSTUB_SSL_CTX_ctrl(void);

long
LIBSTUB_SSL_CTX_callback_ctrl(void);

int
LIBSTUB_SSL_get_error(void);

const char *
LIBSTUB_SSL_get_version(void);

int
LIBSTUB_SSL_CTX_set_ssl_version(void);

const SSL_METHOD *
LIBSTUB_TLSv1_method(void);

const SSL_METHOD *
LIBSTUB_TLSv1_server_method(void);

const SSL_METHOD *
LIBSTUB_TLSv1_client_method(void);

STACK_OF(SSL_CIPHER) *
LIBSTUB_SSL_get_ciphers(void);

int
LIBSTUB_SSL_do_handshake(void);

int
LIBSTUB_SSL_renegotiate(void);

int
LIBSTUB_SSL_renegotiate_pending(void);

int
LIBSTUB_SSL_shutdown(void);

const SSL_METHOD *
LIBSTUB_SSL_get_ssl_method(void);

int
LIBSTUB_SSL_set_ssl_method(void);

const char *
LIBSTUB_SSL_alert_type_string_long(void);

const char *
LIBSTUB_SSL_alert_type_string(void);

const char *
LIBSTUB_SSL_alert_desc_string_long(void);

const char *
LIBSTUB_SSL_alert_desc_string(void);

void
LIBSTUB_SSL_set_client_CA_list(void);

void
LIBSTUB_SSL_CTX_set_client_CA_list(void);

STACK_OF(X509_NAME) *
LIBSTUB_SSL_get_client_CA_list(void);

STACK_OF(X509_NAME) *
LIBSTUB_SSL_CTX_get_client_CA_list(void);

int
LIBSTUB_SSL_add_client_CA(void);

int
LIBSTUB_SSL_CTX_add_client_CA(void);

void
LIBSTUB_SSL_set_connect_state(void);

void
LIBSTUB_SSL_set_accept_state(void);

long
LIBSTUB_SSL_get_default_timeout(void);

char *
LIBSTUB_SSL_CIPHER_description(void);

STACK_OF(X509_NAME) *
LIBSTUB_SSL_dup_CA_list(void);

SSL *
LIBSTUB_SSL_dup(void);

X509 *
LIBSTUB_SSL_get_certificate(void);

struct evp_pkey_st *
LIBSTUB_SSL_get_privatekey(void);

void
LIBSTUB_SSL_CTX_set_quiet_shutdown(void);

int
LIBSTUB_SSL_CTX_get_quiet_shutdown(void);

void
LIBSTUB_SSL_set_quiet_shutdown(void);

int
LIBSTUB_SSL_get_quiet_shutdown(void);

void
LIBSTUB_SSL_set_shutdown(void);

int
LIBSTUB_SSL_get_shutdown(void);

int
LIBSTUB_SSL_version(void);

int
LIBSTUB_SSL_CTX_set_default_verify_paths(void);

int
LIBSTUB_SSL_CTX_load_verify_locations(void);

SSL_SESSION *
LIBSTUB_SSL_get_session(void);

SSL_SESSION *
LIBSTUB_SSL_get1_session(void);

SSL_CTX *
LIBSTUB_SSL_get_SSL_CTX(void);

void
LIBSTUB_SSL_set_info_callback(void);

void (*)(const SSL *ssl, int type, int val)
LIBSTUB_SSL_get_info_callback(void);

void
LIBSTUB_SSL_set_verify_result(void);

long
LIBSTUB_SSL_get_verify_result(void);

int
LIBSTUB_SSL_set_ex_data(void);

void *
LIBSTUB_SSL_get_ex_data(void);

int
LIBSTUB_SSL_SESSION_set_ex_data(void);

void *
LIBSTUB_SSL_SESSION_get_ex_data(void);

int
LIBSTUB_SSL_CTX_set_ex_data(void);

void *
LIBSTUB_SSL_CTX_get_ex_data(void);

int
LIBSTUB_SSL_get_ex_data_X509_STORE_CTX_idx(void);

void
LIBSTUB_SSL_CTX_set_tmp_dh_callback(void);

void
LIBSTUB_SSL_set_tmp_dh_callback(void);

int
LIBSTUB_SSL_COMP_add_compression_method(void);

void
LIBSTUB_ERR_load_SSL_strings(void);

int
LIBSTUB_sk_num(void);

void *
LIBSTUB_sk_value(void);

void *
LIBSTUB_sk_set(void);

_STACK *
LIBSTUB_sk_new(void);

_STACK *
LIBSTUB_sk_new_null(void);

void
LIBSTUB_sk_free(void);

void
LIBSTUB_sk_pop_free(void);

int
LIBSTUB_sk_insert(void);

void *
LIBSTUB_sk_delete(void);

void *
LIBSTUB_sk_delete_ptr(void);

int
LIBSTUB_sk_find(void);

int
LIBSTUB_sk_push(void);

int
LIBSTUB_sk_unshift(void);

void *
LIBSTUB_sk_shift(void);

void *
LIBSTUB_sk_pop(void);

void
LIBSTUB_sk_zero(void);

int (*)(const void *, const void *)
LIBSTUB_sk_set_cmp_func(void);

_STACK *
LIBSTUB_sk_dup(void);

void
LIBSTUB_sk_sort(void);

int
LIBSTUB_sk_is_sorted(void);

TXT_DB *
LIBSTUB_TXT_DB_read(void);

long
LIBSTUB_TXT_DB_write(void);

int
LIBSTUB_TXT_DB_create_index(void);

void
LIBSTUB_TXT_DB_free(void);

char **
LIBSTUB_TXT_DB_get_by_index(void);

int
LIBSTUB_TXT_DB_insert(void);

UI *
LIBSTUB_UI_new(void);

UI *
LIBSTUB_UI_new_method(void);

void
LIBSTUB_UI_free(void);

int
LIBSTUB_UI_add_input_string(void);

int
LIBSTUB_UI_dup_input_string(void);

int
LIBSTUB_UI_add_verify_string(void);

int
LIBSTUB_UI_dup_verify_string(void);

int
LIBSTUB_UI_add_input_boolean(void);

int
LIBSTUB_UI_dup_input_boolean(void);

int
LIBSTUB_UI_add_info_string(void);

int
LIBSTUB_UI_dup_info_string(void);

int
LIBSTUB_UI_add_error_string(void);

int
LIBSTUB_UI_dup_error_string(void);

char *
LIBSTUB_UI_construct_prompt(void);

void *
LIBSTUB_UI_add_user_data(void);

void *
LIBSTUB_UI_get0_user_data(void);

const char *
LIBSTUB_UI_get0_result(void);

int
LIBSTUB_UI_process(void);

int
LIBSTUB_UI_ctrl(void);

int
LIBSTUB_UI_set_ex_data(void);

void *
LIBSTUB_UI_get_ex_data(void);

void
LIBSTUB_UI_set_default_method(void);

const UI_METHOD *
LIBSTUB_UI_get_default_method(void);

const UI_METHOD *
LIBSTUB_UI_get_method(void);

const UI_METHOD *
LIBSTUB_UI_set_method(void);

UI_METHOD *
LIBSTUB_UI_OpenSSL(void);

UI_METHOD *
LIBSTUB_UI_create_method(void);

void
LIBSTUB_UI_destroy_method(void);

int
LIBSTUB_UI_method_set_opener(void);

int
LIBSTUB_UI_method_set_writer(void);

int
LIBSTUB_UI_method_set_flusher(void);

int
LIBSTUB_UI_method_set_reader(void);

int
LIBSTUB_UI_method_set_closer(void);

int (*)(UI *)
LIBSTUB_UI_method_get_opener(void);

int (*)(UI *, UI_STRING *)
LIBSTUB_UI_method_get_writer(void);

int (*)(UI *)
LIBSTUB_UI_method_get_flusher(void);

int (*)(UI *, UI_STRING *)
LIBSTUB_UI_method_get_reader(void);

int (*)(UI *)
LIBSTUB_UI_method_get_closer(void);

enum UI_string_types
LIBSTUB_UI_get_string_type(void);

int
LIBSTUB_UI_get_input_flags(void);

const char *
LIBSTUB_UI_get0_output_string(void);

const char *
LIBSTUB_UI_get0_action_string(void);

const char *
LIBSTUB_UI_get0_result_string(void);

const char *
LIBSTUB_UI_get0_test_string(void);

int
LIBSTUB_UI_get_result_minsize(void);

int
LIBSTUB_UI_get_result_maxsize(void);

int
LIBSTUB_UI_set_result(void);

int
LIBSTUB_UI_UTIL_read_pw_string(void);

int
LIBSTUB_UI_UTIL_read_pw(void);

void
LIBSTUB_ERR_load_UI_strings(void);

const char *
LIBSTUB_X509_verify_cert_error_string(void);

int
LIBSTUB_X509_verify(void);

int
LIBSTUB_X509_REQ_verify(void);

int
LIBSTUB_X509_CRL_verify(void);

int
LIBSTUB_NETSCAPE_SPKI_verify(void);

NETSCAPE_SPKI *
LIBSTUB_NETSCAPE_SPKI_b64_decode(void);

char *
LIBSTUB_NETSCAPE_SPKI_b64_encode(void);

EVP_PKEY *
LIBSTUB_NETSCAPE_SPKI_get_pubkey(void);

int
LIBSTUB_NETSCAPE_SPKI_set_pubkey(void);

int
LIBSTUB_NETSCAPE_SPKI_print(void);

int
LIBSTUB_X509_signature_print(void);

int
LIBSTUB_X509_sign(void);

int
LIBSTUB_X509_REQ_sign(void);

int
LIBSTUB_X509_CRL_sign(void);

int
LIBSTUB_NETSCAPE_SPKI_sign(void);

int
LIBSTUB_X509_pubkey_digest(void);

int
LIBSTUB_X509_digest(void);

int
LIBSTUB_X509_CRL_digest(void);

int
LIBSTUB_X509_REQ_digest(void);

int
LIBSTUB_X509_NAME_digest(void);

X509 *
LIBSTUB_d2i_X509_bio(void);

int
LIBSTUB_i2d_X509_bio(void);

X509_CRL *
LIBSTUB_d2i_X509_CRL_bio(void);

int
LIBSTUB_i2d_X509_CRL_bio(void);

X509_REQ *
LIBSTUB_d2i_X509_REQ_bio(void);

int
LIBSTUB_i2d_X509_REQ_bio(void);

RSA *
LIBSTUB_d2i_RSAPrivateKey_bio(void);

int
LIBSTUB_i2d_RSAPrivateKey_bio(void);

RSA *
LIBSTUB_d2i_RSAPublicKey_bio(void);

int
LIBSTUB_i2d_RSAPublicKey_bio(void);

RSA *
LIBSTUB_d2i_RSA_PUBKEY_bio(void);

int
LIBSTUB_i2d_RSA_PUBKEY_bio(void);

DSA *
LIBSTUB_d2i_DSA_PUBKEY_bio(void);

int
LIBSTUB_i2d_DSA_PUBKEY_bio(void);

DSA *
LIBSTUB_d2i_DSAPrivateKey_bio(void);

int
LIBSTUB_i2d_DSAPrivateKey_bio(void);

X509_SIG *
LIBSTUB_d2i_PKCS8_bio(void);

int
LIBSTUB_i2d_PKCS8_bio(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_d2i_PKCS8_PRIV_KEY_INFO_bio(void);

int
LIBSTUB_i2d_PKCS8_PRIV_KEY_INFO_bio(void);

int
LIBSTUB_i2d_PKCS8PrivateKeyInfo_bio(void);

int
LIBSTUB_i2d_PrivateKey_bio(void);

EVP_PKEY *
LIBSTUB_d2i_PrivateKey_bio(void);

int
LIBSTUB_i2d_PUBKEY_bio(void);

EVP_PKEY *
LIBSTUB_d2i_PUBKEY_bio(void);

X509 *
LIBSTUB_X509_dup(void);

X509_ATTRIBUTE *
LIBSTUB_X509_ATTRIBUTE_dup(void);

X509_EXTENSION *
LIBSTUB_X509_EXTENSION_dup(void);

X509_CRL *
LIBSTUB_X509_CRL_dup(void);

X509_REQ *
LIBSTUB_X509_REQ_dup(void);

X509_ALGOR *
LIBSTUB_X509_ALGOR_dup(void);

X509_NAME *
LIBSTUB_X509_NAME_dup(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_ENTRY_dup(void);

int
LIBSTUB_X509_cmp_time(void);

int
LIBSTUB_X509_cmp_current_time(void);

ASN1_TIME *
LIBSTUB_X509_time_adj(void);

ASN1_TIME *
LIBSTUB_X509_gmtime_adj(void);

const char *
LIBSTUB_X509_get_default_cert_area(void);

const char *
LIBSTUB_X509_get_default_cert_dir(void);

const char *
LIBSTUB_X509_get_default_cert_file(void);

const char *
LIBSTUB_X509_get_default_cert_dir_env(void);

const char *
LIBSTUB_X509_get_default_cert_file_env(void);

const char *
LIBSTUB_X509_get_default_private_dir(void);

X509_REQ *
LIBSTUB_X509_to_X509_REQ(void);

X509 *
LIBSTUB_X509_REQ_to_X509(void);

X509_ALGOR *
LIBSTUB_X509_ALGOR_new(void);

void
LIBSTUB_X509_ALGOR_free(void);

X509_ALGOR *
LIBSTUB_d2i_X509_ALGOR(void);

int
LIBSTUB_i2d_X509_ALGOR(void);

const ASN1_ITEM *
LIBSTUB_X509_ALGOR_it(void);

X509_VAL *
LIBSTUB_X509_VAL_new(void);

void
LIBSTUB_X509_VAL_free(void);

X509_VAL *
LIBSTUB_d2i_X509_VAL(void);

int
LIBSTUB_i2d_X509_VAL(void);

const ASN1_ITEM *
LIBSTUB_X509_VAL_it(void);

X509_PUBKEY *
LIBSTUB_X509_PUBKEY_new(void);

void
LIBSTUB_X509_PUBKEY_free(void);

X509_PUBKEY *
LIBSTUB_d2i_X509_PUBKEY(void);

int
LIBSTUB_i2d_X509_PUBKEY(void);

const ASN1_ITEM *
LIBSTUB_X509_PUBKEY_it(void);

int
LIBSTUB_X509_PUBKEY_set(void);

EVP_PKEY *
LIBSTUB_X509_PUBKEY_get(void);

int
LIBSTUB_X509_get_pubkey_parameters(void);

int
LIBSTUB_i2d_PUBKEY(void);

EVP_PKEY *
LIBSTUB_d2i_PUBKEY(void);

int
LIBSTUB_i2d_RSA_PUBKEY(void);

RSA *
LIBSTUB_d2i_RSA_PUBKEY(void);

int
LIBSTUB_i2d_DSA_PUBKEY(void);

DSA *
LIBSTUB_d2i_DSA_PUBKEY(void);

X509_SIG *
LIBSTUB_X509_SIG_new(void);

void
LIBSTUB_X509_SIG_free(void);

X509_SIG *
LIBSTUB_d2i_X509_SIG(void);

int
LIBSTUB_i2d_X509_SIG(void);

const ASN1_ITEM *
LIBSTUB_X509_SIG_it(void);

X509_REQ_INFO *
LIBSTUB_X509_REQ_INFO_new(void);

void
LIBSTUB_X509_REQ_INFO_free(void);

X509_REQ_INFO *
LIBSTUB_d2i_X509_REQ_INFO(void);

int
LIBSTUB_i2d_X509_REQ_INFO(void);

const ASN1_ITEM *
LIBSTUB_X509_REQ_INFO_it(void);

X509_REQ *
LIBSTUB_X509_REQ_new(void);

void
LIBSTUB_X509_REQ_free(void);

X509_REQ *
LIBSTUB_d2i_X509_REQ(void);

int
LIBSTUB_i2d_X509_REQ(void);

const ASN1_ITEM *
LIBSTUB_X509_REQ_it(void);

X509_ATTRIBUTE *
LIBSTUB_X509_ATTRIBUTE_new(void);

void
LIBSTUB_X509_ATTRIBUTE_free(void);

X509_ATTRIBUTE *
LIBSTUB_d2i_X509_ATTRIBUTE(void);

int
LIBSTUB_i2d_X509_ATTRIBUTE(void);

const ASN1_ITEM *
LIBSTUB_X509_ATTRIBUTE_it(void);

X509_ATTRIBUTE *
LIBSTUB_X509_ATTRIBUTE_create(void);

X509_EXTENSION *
LIBSTUB_X509_EXTENSION_new(void);

void
LIBSTUB_X509_EXTENSION_free(void);

X509_EXTENSION *
LIBSTUB_d2i_X509_EXTENSION(void);

int
LIBSTUB_i2d_X509_EXTENSION(void);

const ASN1_ITEM *
LIBSTUB_X509_EXTENSION_it(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_ENTRY_new(void);

void
LIBSTUB_X509_NAME_ENTRY_free(void);

X509_NAME_ENTRY *
LIBSTUB_d2i_X509_NAME_ENTRY(void);

int
LIBSTUB_i2d_X509_NAME_ENTRY(void);

const ASN1_ITEM *
LIBSTUB_X509_NAME_ENTRY_it(void);

X509_NAME *
LIBSTUB_X509_NAME_new(void);

void
LIBSTUB_X509_NAME_free(void);

X509_NAME *
LIBSTUB_d2i_X509_NAME(void);

int
LIBSTUB_i2d_X509_NAME(void);

const ASN1_ITEM *
LIBSTUB_X509_NAME_it(void);

int
LIBSTUB_X509_NAME_set(void);

X509_CINF *
LIBSTUB_X509_CINF_new(void);

void
LIBSTUB_X509_CINF_free(void);

X509_CINF *
LIBSTUB_d2i_X509_CINF(void);

int
LIBSTUB_i2d_X509_CINF(void);

const ASN1_ITEM *
LIBSTUB_X509_CINF_it(void);

X509 *
LIBSTUB_X509_new(void);

void
LIBSTUB_X509_free(void);

X509 *
LIBSTUB_d2i_X509(void);

int
LIBSTUB_i2d_X509(void);

const ASN1_ITEM *
LIBSTUB_X509_it(void);

X509_CERT_AUX *
LIBSTUB_X509_CERT_AUX_new(void);

void
LIBSTUB_X509_CERT_AUX_free(void);

X509_CERT_AUX *
LIBSTUB_d2i_X509_CERT_AUX(void);

int
LIBSTUB_i2d_X509_CERT_AUX(void);

const ASN1_ITEM *
LIBSTUB_X509_CERT_AUX_it(void);

int
LIBSTUB_X509_set_ex_data(void);

void *
LIBSTUB_X509_get_ex_data(void);

int
LIBSTUB_i2d_X509_AUX(void);

X509 *
LIBSTUB_d2i_X509_AUX(void);

int
LIBSTUB_X509_alias_set1(void);

int
LIBSTUB_X509_keyid_set1(void);

unsigned char *
LIBSTUB_X509_alias_get0(void);

int (*)(int, X509 *, int)
LIBSTUB_X509_TRUST_set_default(void);

int
LIBSTUB_X509_TRUST_set(void);

int
LIBSTUB_X509_add1_trust_object(void);

int
LIBSTUB_X509_add1_reject_object(void);

void
LIBSTUB_X509_trust_clear(void);

void
LIBSTUB_X509_reject_clear(void);

X509_REVOKED *
LIBSTUB_X509_REVOKED_new(void);

void
LIBSTUB_X509_REVOKED_free(void);

X509_REVOKED *
LIBSTUB_d2i_X509_REVOKED(void);

int
LIBSTUB_i2d_X509_REVOKED(void);

const ASN1_ITEM *
LIBSTUB_X509_REVOKED_it(void);

X509_CRL_INFO *
LIBSTUB_X509_CRL_INFO_new(void);

void
LIBSTUB_X509_CRL_INFO_free(void);

X509_CRL_INFO *
LIBSTUB_d2i_X509_CRL_INFO(void);

int
LIBSTUB_i2d_X509_CRL_INFO(void);

const ASN1_ITEM *
LIBSTUB_X509_CRL_INFO_it(void);

X509_CRL *
LIBSTUB_X509_CRL_new(void);

void
LIBSTUB_X509_CRL_free(void);

X509_CRL *
LIBSTUB_d2i_X509_CRL(void);

int
LIBSTUB_i2d_X509_CRL(void);

const ASN1_ITEM *
LIBSTUB_X509_CRL_it(void);

int
LIBSTUB_X509_CRL_add0_revoked(void);

X509_PKEY *
LIBSTUB_X509_PKEY_new(void);

void
LIBSTUB_X509_PKEY_free(void);

NETSCAPE_SPKI *
LIBSTUB_NETSCAPE_SPKI_new(void);

void
LIBSTUB_NETSCAPE_SPKI_free(void);

NETSCAPE_SPKI *
LIBSTUB_d2i_NETSCAPE_SPKI(void);

int
LIBSTUB_i2d_NETSCAPE_SPKI(void);

const ASN1_ITEM *
LIBSTUB_NETSCAPE_SPKI_it(void);

NETSCAPE_SPKAC *
LIBSTUB_NETSCAPE_SPKAC_new(void);

void
LIBSTUB_NETSCAPE_SPKAC_free(void);

NETSCAPE_SPKAC *
LIBSTUB_d2i_NETSCAPE_SPKAC(void);

int
LIBSTUB_i2d_NETSCAPE_SPKAC(void);

const ASN1_ITEM *
LIBSTUB_NETSCAPE_SPKAC_it(void);

NETSCAPE_CERT_SEQUENCE *
LIBSTUB_NETSCAPE_CERT_SEQUENCE_new(void);

void
LIBSTUB_NETSCAPE_CERT_SEQUENCE_free(void);

NETSCAPE_CERT_SEQUENCE *
LIBSTUB_d2i_NETSCAPE_CERT_SEQUENCE(void);

int
LIBSTUB_i2d_NETSCAPE_CERT_SEQUENCE(void);

const ASN1_ITEM *
LIBSTUB_NETSCAPE_CERT_SEQUENCE_it(void);

X509_INFO *
LIBSTUB_X509_INFO_new(void);

void
LIBSTUB_X509_INFO_free(void);

char *
LIBSTUB_X509_NAME_oneline(void);

int
LIBSTUB_ASN1_verify(void);

int
LIBSTUB_ASN1_digest(void);

int
LIBSTUB_ASN1_sign(void);

int
LIBSTUB_ASN1_item_digest(void);

int
LIBSTUB_ASN1_item_verify(void);

int
LIBSTUB_ASN1_item_sign(void);

int
LIBSTUB_X509_set_version(void);

int
LIBSTUB_X509_set_serialNumber(void);

ASN1_INTEGER *
LIBSTUB_X509_get_serialNumber(void);

int
LIBSTUB_X509_set_issuer_name(void);

X509_NAME *
LIBSTUB_X509_get_issuer_name(void);

int
LIBSTUB_X509_set_subject_name(void);

X509_NAME *
LIBSTUB_X509_get_subject_name(void);

int
LIBSTUB_X509_set_notBefore(void);

int
LIBSTUB_X509_set_notAfter(void);

int
LIBSTUB_X509_set_pubkey(void);

EVP_PKEY *
LIBSTUB_X509_get_pubkey(void);

ASN1_BIT_STRING *
LIBSTUB_X509_get0_pubkey_bitstr(void);

int
LIBSTUB_X509_certificate_type(void);

int
LIBSTUB_X509_REQ_set_version(void);

int
LIBSTUB_X509_REQ_set_subject_name(void);

int
LIBSTUB_X509_REQ_set_pubkey(void);

EVP_PKEY *
LIBSTUB_X509_REQ_get_pubkey(void);

int
LIBSTUB_X509_REQ_extension_nid(void);

int *
LIBSTUB_X509_REQ_get_extension_nids(void);

void
LIBSTUB_X509_REQ_set_extension_nids(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_X509_REQ_get_extensions(void);

int
LIBSTUB_X509_REQ_add_extensions_nid(void);

int
LIBSTUB_X509_REQ_add_extensions(void);

int
LIBSTUB_X509_REQ_get_attr_count(void);

int
LIBSTUB_X509_REQ_get_attr_by_NID(void);

int
LIBSTUB_X509_REQ_get_attr_by_OBJ(void);

X509_ATTRIBUTE *
LIBSTUB_X509_REQ_get_attr(void);

X509_ATTRIBUTE *
LIBSTUB_X509_REQ_delete_attr(void);

int
LIBSTUB_X509_REQ_add1_attr(void);

int
LIBSTUB_X509_REQ_add1_attr_by_OBJ(void);

int
LIBSTUB_X509_REQ_add1_attr_by_NID(void);

int
LIBSTUB_X509_REQ_add1_attr_by_txt(void);

int
LIBSTUB_X509_CRL_set_version(void);

int
LIBSTUB_X509_CRL_set_issuer_name(void);

int
LIBSTUB_X509_CRL_set_lastUpdate(void);

int
LIBSTUB_X509_CRL_set_nextUpdate(void);

int
LIBSTUB_X509_CRL_sort(void);

int
LIBSTUB_X509_REVOKED_set_serialNumber(void);

int
LIBSTUB_X509_REVOKED_set_revocationDate(void);

int
LIBSTUB_X509_check_private_key(void);

int
LIBSTUB_X509_issuer_and_serial_cmp(void);

unsigned long
LIBSTUB_X509_issuer_and_serial_hash(void);

int
LIBSTUB_X509_issuer_name_cmp(void);

unsigned long
LIBSTUB_X509_issuer_name_hash(void);

int
LIBSTUB_X509_subject_name_cmp(void);

unsigned long
LIBSTUB_X509_subject_name_hash(void);

int
LIBSTUB_X509_cmp(void);

int
LIBSTUB_X509_NAME_cmp(void);

unsigned long
LIBSTUB_X509_NAME_hash(void);

int
LIBSTUB_X509_CRL_cmp(void);

int
LIBSTUB_X509_NAME_print(void);

int
LIBSTUB_X509_NAME_print_ex(void);

int
LIBSTUB_X509_print_ex(void);

int
LIBSTUB_X509_print(void);

int
LIBSTUB_X509_ocspid_print(void);

int
LIBSTUB_X509_CRL_print(void);

int
LIBSTUB_X509_REQ_print_ex(void);

int
LIBSTUB_X509_REQ_print(void);

int
LIBSTUB_X509_NAME_entry_count(void);

int
LIBSTUB_X509_NAME_get_text_by_NID(void);

int
LIBSTUB_X509_NAME_get_text_by_OBJ(void);

int
LIBSTUB_X509_NAME_get_index_by_NID(void);

int
LIBSTUB_X509_NAME_get_index_by_OBJ(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_get_entry(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_delete_entry(void);

int
LIBSTUB_X509_NAME_add_entry(void);

int
LIBSTUB_X509_NAME_add_entry_by_OBJ(void);

int
LIBSTUB_X509_NAME_add_entry_by_NID(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_ENTRY_create_by_txt(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_ENTRY_create_by_NID(void);

int
LIBSTUB_X509_NAME_add_entry_by_txt(void);

X509_NAME_ENTRY *
LIBSTUB_X509_NAME_ENTRY_create_by_OBJ(void);

int
LIBSTUB_X509_NAME_ENTRY_set_object(void);

int
LIBSTUB_X509_NAME_ENTRY_set_data(void);

ASN1_OBJECT *
LIBSTUB_X509_NAME_ENTRY_get_object(void);

ASN1_STRING *
LIBSTUB_X509_NAME_ENTRY_get_data(void);

int
LIBSTUB_X509v3_get_ext_count(void);

int
LIBSTUB_X509v3_get_ext_by_NID(void);

int
LIBSTUB_X509v3_get_ext_by_OBJ(void);

int
LIBSTUB_X509v3_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_X509v3_get_ext(void);

X509_EXTENSION *
LIBSTUB_X509v3_delete_ext(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_X509v3_add_ext(void);

int
LIBSTUB_X509_get_ext_count(void);

int
LIBSTUB_X509_get_ext_by_NID(void);

int
LIBSTUB_X509_get_ext_by_OBJ(void);

int
LIBSTUB_X509_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_X509_get_ext(void);

X509_EXTENSION *
LIBSTUB_X509_delete_ext(void);

int
LIBSTUB_X509_add_ext(void);

void *
LIBSTUB_X509_get_ext_d2i(void);

int
LIBSTUB_X509_add1_ext_i2d(void);

int
LIBSTUB_X509_CRL_get_ext_count(void);

int
LIBSTUB_X509_CRL_get_ext_by_NID(void);

int
LIBSTUB_X509_CRL_get_ext_by_OBJ(void);

int
LIBSTUB_X509_CRL_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_X509_CRL_get_ext(void);

X509_EXTENSION *
LIBSTUB_X509_CRL_delete_ext(void);

int
LIBSTUB_X509_CRL_add_ext(void);

void *
LIBSTUB_X509_CRL_get_ext_d2i(void);

int
LIBSTUB_X509_CRL_add1_ext_i2d(void);

int
LIBSTUB_X509_REVOKED_get_ext_count(void);

int
LIBSTUB_X509_REVOKED_get_ext_by_NID(void);

int
LIBSTUB_X509_REVOKED_get_ext_by_OBJ(void);

int
LIBSTUB_X509_REVOKED_get_ext_by_critical(void);

X509_EXTENSION *
LIBSTUB_X509_REVOKED_get_ext(void);

X509_EXTENSION *
LIBSTUB_X509_REVOKED_delete_ext(void);

int
LIBSTUB_X509_REVOKED_add_ext(void);

void *
LIBSTUB_X509_REVOKED_get_ext_d2i(void);

int
LIBSTUB_X509_REVOKED_add1_ext_i2d(void);

X509_EXTENSION *
LIBSTUB_X509_EXTENSION_create_by_NID(void);

X509_EXTENSION *
LIBSTUB_X509_EXTENSION_create_by_OBJ(void);

int
LIBSTUB_X509_EXTENSION_set_object(void);

int
LIBSTUB_X509_EXTENSION_set_critical(void);

int
LIBSTUB_X509_EXTENSION_set_data(void);

ASN1_OBJECT *
LIBSTUB_X509_EXTENSION_get_object(void);

ASN1_OCTET_STRING *
LIBSTUB_X509_EXTENSION_get_data(void);

int
LIBSTUB_X509_EXTENSION_get_critical(void);

int
LIBSTUB_X509at_get_attr_count(void);

int
LIBSTUB_X509at_get_attr_by_NID(void);

int
LIBSTUB_X509at_get_attr_by_OBJ(void);

X509_ATTRIBUTE *
LIBSTUB_X509at_get_attr(void);

X509_ATTRIBUTE *
LIBSTUB_X509at_delete_attr(void);

STACK_OF(X509_ATTRIBUTE) *
LIBSTUB_X509at_add1_attr(void);

STACK_OF(X509_ATTRIBUTE) *
LIBSTUB_X509at_add1_attr_by_OBJ(void);

STACK_OF(X509_ATTRIBUTE) *
LIBSTUB_X509at_add1_attr_by_NID(void);

STACK_OF(X509_ATTRIBUTE) *
LIBSTUB_X509at_add1_attr_by_txt(void);

X509_ATTRIBUTE *
LIBSTUB_X509_ATTRIBUTE_create_by_NID(void);

X509_ATTRIBUTE *
LIBSTUB_X509_ATTRIBUTE_create_by_OBJ(void);

X509_ATTRIBUTE *
LIBSTUB_X509_ATTRIBUTE_create_by_txt(void);

int
LIBSTUB_X509_ATTRIBUTE_set1_object(void);

int
LIBSTUB_X509_ATTRIBUTE_set1_data(void);

void *
LIBSTUB_X509_ATTRIBUTE_get0_data(void);

int
LIBSTUB_X509_ATTRIBUTE_count(void);

ASN1_OBJECT *
LIBSTUB_X509_ATTRIBUTE_get0_object(void);

ASN1_TYPE *
LIBSTUB_X509_ATTRIBUTE_get0_type(void);

int
LIBSTUB_X509_verify_cert(void);

X509 *
LIBSTUB_X509_find_by_issuer_and_serial(void);

X509 *
LIBSTUB_X509_find_by_subject(void);

PBEPARAM *
LIBSTUB_PBEPARAM_new(void);

void
LIBSTUB_PBEPARAM_free(void);

PBEPARAM *
LIBSTUB_d2i_PBEPARAM(void);

int
LIBSTUB_i2d_PBEPARAM(void);

const ASN1_ITEM *
LIBSTUB_PBEPARAM_it(void);

PBE2PARAM *
LIBSTUB_PBE2PARAM_new(void);

void
LIBSTUB_PBE2PARAM_free(void);

PBE2PARAM *
LIBSTUB_d2i_PBE2PARAM(void);

int
LIBSTUB_i2d_PBE2PARAM(void);

const ASN1_ITEM *
LIBSTUB_PBE2PARAM_it(void);

PBKDF2PARAM *
LIBSTUB_PBKDF2PARAM_new(void);

void
LIBSTUB_PBKDF2PARAM_free(void);

PBKDF2PARAM *
LIBSTUB_d2i_PBKDF2PARAM(void);

int
LIBSTUB_i2d_PBKDF2PARAM(void);

const ASN1_ITEM *
LIBSTUB_PBKDF2PARAM_it(void);

X509_ALGOR *
LIBSTUB_PKCS5_pbe_set(void);

X509_ALGOR *
LIBSTUB_PKCS5_pbe2_set(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_PKCS8_PRIV_KEY_INFO_new(void);

void
LIBSTUB_PKCS8_PRIV_KEY_INFO_free(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_d2i_PKCS8_PRIV_KEY_INFO(void);

int
LIBSTUB_i2d_PKCS8_PRIV_KEY_INFO(void);

const ASN1_ITEM *
LIBSTUB_PKCS8_PRIV_KEY_INFO_it(void);

EVP_PKEY *
LIBSTUB_EVP_PKCS82PKEY(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_EVP_PKEY2PKCS8(void);

int
LIBSTUB_X509_check_trust(void);

int
LIBSTUB_X509_TRUST_get_count(void);

X509_TRUST *
LIBSTUB_X509_TRUST_get0(void);

int
LIBSTUB_X509_TRUST_get_by_id(void);

int
LIBSTUB_X509_TRUST_add(void);

void
LIBSTUB_X509_TRUST_cleanup(void);

int
LIBSTUB_X509_TRUST_get_flags(void);

char *
LIBSTUB_X509_TRUST_get0_name(void);

int
LIBSTUB_X509_TRUST_get_trust(void);

void
LIBSTUB_ERR_load_X509_strings(void);

int
LIBSTUB_X509_OBJECT_idx_by_subject(void);

X509_OBJECT *
LIBSTUB_X509_OBJECT_retrieve_by_subject(void);

X509_OBJECT *
LIBSTUB_X509_OBJECT_retrieve_match(void);

void
LIBSTUB_X509_OBJECT_up_ref_count(void);

void
LIBSTUB_X509_OBJECT_free_contents(void);

X509_STORE *
LIBSTUB_X509_STORE_new(void);

void
LIBSTUB_X509_STORE_free(void);

void
LIBSTUB_X509_STORE_set_flags(void);

int
LIBSTUB_X509_STORE_set_purpose(void);

int
LIBSTUB_X509_STORE_set_trust(void);

X509_STORE_CTX *
LIBSTUB_X509_STORE_CTX_new(void);

int
LIBSTUB_X509_STORE_CTX_get1_issuer(void);

void
LIBSTUB_X509_STORE_CTX_free(void);

int
LIBSTUB_X509_STORE_CTX_init(void);

void
LIBSTUB_X509_STORE_CTX_trusted_stack(void);

void
LIBSTUB_X509_STORE_CTX_cleanup(void);

X509_LOOKUP *
LIBSTUB_X509_STORE_add_lookup(void);

X509_LOOKUP_METHOD *
LIBSTUB_X509_LOOKUP_hash_dir(void);

X509_LOOKUP_METHOD *
LIBSTUB_X509_LOOKUP_file(void);

int
LIBSTUB_X509_STORE_add_cert(void);

int
LIBSTUB_X509_STORE_add_crl(void);

int
LIBSTUB_X509_STORE_get_by_subject(void);

int
LIBSTUB_X509_LOOKUP_ctrl(void);

int
LIBSTUB_X509_load_cert_file(void);

int
LIBSTUB_X509_load_crl_file(void);

int
LIBSTUB_X509_load_cert_crl_file(void);

X509_LOOKUP *
LIBSTUB_X509_LOOKUP_new(void);

void
LIBSTUB_X509_LOOKUP_free(void);

int
LIBSTUB_X509_LOOKUP_init(void);

int
LIBSTUB_X509_LOOKUP_by_subject(void);

int
LIBSTUB_X509_LOOKUP_by_issuer_serial(void);

int
LIBSTUB_X509_LOOKUP_by_fingerprint(void);

int
LIBSTUB_X509_LOOKUP_by_alias(void);

int
LIBSTUB_X509_LOOKUP_shutdown(void);

int
LIBSTUB_X509_STORE_load_locations(void);

int
LIBSTUB_X509_STORE_set_default_paths(void);

int
LIBSTUB_X509_STORE_CTX_set_ex_data(void);

void *
LIBSTUB_X509_STORE_CTX_get_ex_data(void);

int
LIBSTUB_X509_STORE_CTX_get_error(void);

void
LIBSTUB_X509_STORE_CTX_set_error(void);

int
LIBSTUB_X509_STORE_CTX_get_error_depth(void);

X509 *
LIBSTUB_X509_STORE_CTX_get_current_cert(void);

STACK_OF(X509) *
LIBSTUB_X509_STORE_CTX_get_chain(void);

STACK_OF(X509) *
LIBSTUB_X509_STORE_CTX_get1_chain(void);

void
LIBSTUB_X509_STORE_CTX_set_cert(void);

void
LIBSTUB_X509_STORE_CTX_set_chain(void);

int
LIBSTUB_X509_STORE_CTX_set_purpose(void);

int
LIBSTUB_X509_STORE_CTX_set_trust(void);

int
LIBSTUB_X509_STORE_CTX_purpose_inherit(void);

void
LIBSTUB_X509_STORE_CTX_set_flags(void);

void
LIBSTUB_X509_STORE_CTX_set_time(void);

void
LIBSTUB_X509_STORE_CTX_set_verify_cb(void);

BASIC_CONSTRAINTS *
LIBSTUB_BASIC_CONSTRAINTS_new(void);

void
LIBSTUB_BASIC_CONSTRAINTS_free(void);

BASIC_CONSTRAINTS *
LIBSTUB_d2i_BASIC_CONSTRAINTS(void);

int
LIBSTUB_i2d_BASIC_CONSTRAINTS(void);

const ASN1_ITEM *
LIBSTUB_BASIC_CONSTRAINTS_it(void);

SXNET *
LIBSTUB_SXNET_new(void);

void
LIBSTUB_SXNET_free(void);

SXNET *
LIBSTUB_d2i_SXNET(void);

int
LIBSTUB_i2d_SXNET(void);

const ASN1_ITEM *
LIBSTUB_SXNET_it(void);

SXNETID *
LIBSTUB_SXNETID_new(void);

void
LIBSTUB_SXNETID_free(void);

SXNETID *
LIBSTUB_d2i_SXNETID(void);

int
LIBSTUB_i2d_SXNETID(void);

const ASN1_ITEM *
LIBSTUB_SXNETID_it(void);

int
LIBSTUB_SXNET_add_id_asc(void);

int
LIBSTUB_SXNET_add_id_ulong(void);

int
LIBSTUB_SXNET_add_id_INTEGER(void);

ASN1_OCTET_STRING *
LIBSTUB_SXNET_get_id_asc(void);

ASN1_OCTET_STRING *
LIBSTUB_SXNET_get_id_ulong(void);

ASN1_OCTET_STRING *
LIBSTUB_SXNET_get_id_INTEGER(void);

AUTHORITY_KEYID *
LIBSTUB_AUTHORITY_KEYID_new(void);

void
LIBSTUB_AUTHORITY_KEYID_free(void);

AUTHORITY_KEYID *
LIBSTUB_d2i_AUTHORITY_KEYID(void);

int
LIBSTUB_i2d_AUTHORITY_KEYID(void);

const ASN1_ITEM *
LIBSTUB_AUTHORITY_KEYID_it(void);

PKEY_USAGE_PERIOD *
LIBSTUB_PKEY_USAGE_PERIOD_new(void);

void
LIBSTUB_PKEY_USAGE_PERIOD_free(void);

PKEY_USAGE_PERIOD *
LIBSTUB_d2i_PKEY_USAGE_PERIOD(void);

int
LIBSTUB_i2d_PKEY_USAGE_PERIOD(void);

const ASN1_ITEM *
LIBSTUB_PKEY_USAGE_PERIOD_it(void);

GENERAL_NAME *
LIBSTUB_GENERAL_NAME_new(void);

void
LIBSTUB_GENERAL_NAME_free(void);

GENERAL_NAME *
LIBSTUB_d2i_GENERAL_NAME(void);

int
LIBSTUB_i2d_GENERAL_NAME(void);

const ASN1_ITEM *
LIBSTUB_GENERAL_NAME_it(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_i2v_GENERAL_NAME(void);

int
LIBSTUB_GENERAL_NAME_print(void);

GENERAL_NAMES *
LIBSTUB_GENERAL_NAMES_new(void);

void
LIBSTUB_GENERAL_NAMES_free(void);

GENERAL_NAMES *
LIBSTUB_d2i_GENERAL_NAMES(void);

int
LIBSTUB_i2d_GENERAL_NAMES(void);

const ASN1_ITEM *
LIBSTUB_GENERAL_NAMES_it(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_i2v_GENERAL_NAMES(void);

GENERAL_NAMES *
LIBSTUB_v2i_GENERAL_NAMES(void);

OTHERNAME *
LIBSTUB_OTHERNAME_new(void);

void
LIBSTUB_OTHERNAME_free(void);

OTHERNAME *
LIBSTUB_d2i_OTHERNAME(void);

int
LIBSTUB_i2d_OTHERNAME(void);

const ASN1_ITEM *
LIBSTUB_OTHERNAME_it(void);

EDIPARTYNAME *
LIBSTUB_EDIPARTYNAME_new(void);

void
LIBSTUB_EDIPARTYNAME_free(void);

EDIPARTYNAME *
LIBSTUB_d2i_EDIPARTYNAME(void);

int
LIBSTUB_i2d_EDIPARTYNAME(void);

const ASN1_ITEM *
LIBSTUB_EDIPARTYNAME_it(void);

char *
LIBSTUB_i2s_ASN1_OCTET_STRING(void);

ASN1_OCTET_STRING *
LIBSTUB_s2i_ASN1_OCTET_STRING(void);

EXTENDED_KEY_USAGE *
LIBSTUB_EXTENDED_KEY_USAGE_new(void);

void
LIBSTUB_EXTENDED_KEY_USAGE_free(void);

EXTENDED_KEY_USAGE *
LIBSTUB_d2i_EXTENDED_KEY_USAGE(void);

int
LIBSTUB_i2d_EXTENDED_KEY_USAGE(void);

const ASN1_ITEM *
LIBSTUB_EXTENDED_KEY_USAGE_it(void);

int
LIBSTUB_i2a_ACCESS_DESCRIPTION(void);

CERTIFICATEPOLICIES *
LIBSTUB_CERTIFICATEPOLICIES_new(void);

void
LIBSTUB_CERTIFICATEPOLICIES_free(void);

CERTIFICATEPOLICIES *
LIBSTUB_d2i_CERTIFICATEPOLICIES(void);

int
LIBSTUB_i2d_CERTIFICATEPOLICIES(void);

const ASN1_ITEM *
LIBSTUB_CERTIFICATEPOLICIES_it(void);

POLICYINFO *
LIBSTUB_POLICYINFO_new(void);

void
LIBSTUB_POLICYINFO_free(void);

POLICYINFO *
LIBSTUB_d2i_POLICYINFO(void);

int
LIBSTUB_i2d_POLICYINFO(void);

const ASN1_ITEM *
LIBSTUB_POLICYINFO_it(void);

POLICYQUALINFO *
LIBSTUB_POLICYQUALINFO_new(void);

void
LIBSTUB_POLICYQUALINFO_free(void);

POLICYQUALINFO *
LIBSTUB_d2i_POLICYQUALINFO(void);

int
LIBSTUB_i2d_POLICYQUALINFO(void);

const ASN1_ITEM *
LIBSTUB_POLICYQUALINFO_it(void);

USERNOTICE *
LIBSTUB_USERNOTICE_new(void);

void
LIBSTUB_USERNOTICE_free(void);

USERNOTICE *
LIBSTUB_d2i_USERNOTICE(void);

int
LIBSTUB_i2d_USERNOTICE(void);

const ASN1_ITEM *
LIBSTUB_USERNOTICE_it(void);

NOTICEREF *
LIBSTUB_NOTICEREF_new(void);

void
LIBSTUB_NOTICEREF_free(void);

NOTICEREF *
LIBSTUB_d2i_NOTICEREF(void);

int
LIBSTUB_i2d_NOTICEREF(void);

const ASN1_ITEM *
LIBSTUB_NOTICEREF_it(void);

CRL_DIST_POINTS *
LIBSTUB_CRL_DIST_POINTS_new(void);

void
LIBSTUB_CRL_DIST_POINTS_free(void);

CRL_DIST_POINTS *
LIBSTUB_d2i_CRL_DIST_POINTS(void);

int
LIBSTUB_i2d_CRL_DIST_POINTS(void);

const ASN1_ITEM *
LIBSTUB_CRL_DIST_POINTS_it(void);

DIST_POINT *
LIBSTUB_DIST_POINT_new(void);

void
LIBSTUB_DIST_POINT_free(void);

DIST_POINT *
LIBSTUB_d2i_DIST_POINT(void);

int
LIBSTUB_i2d_DIST_POINT(void);

const ASN1_ITEM *
LIBSTUB_DIST_POINT_it(void);

DIST_POINT_NAME *
LIBSTUB_DIST_POINT_NAME_new(void);

void
LIBSTUB_DIST_POINT_NAME_free(void);

DIST_POINT_NAME *
LIBSTUB_d2i_DIST_POINT_NAME(void);

int
LIBSTUB_i2d_DIST_POINT_NAME(void);

const ASN1_ITEM *
LIBSTUB_DIST_POINT_NAME_it(void);

ACCESS_DESCRIPTION *
LIBSTUB_ACCESS_DESCRIPTION_new(void);

void
LIBSTUB_ACCESS_DESCRIPTION_free(void);

ACCESS_DESCRIPTION *
LIBSTUB_d2i_ACCESS_DESCRIPTION(void);

int
LIBSTUB_i2d_ACCESS_DESCRIPTION(void);

const ASN1_ITEM *
LIBSTUB_ACCESS_DESCRIPTION_it(void);

AUTHORITY_INFO_ACCESS *
LIBSTUB_AUTHORITY_INFO_ACCESS_new(void);

void
LIBSTUB_AUTHORITY_INFO_ACCESS_free(void);

AUTHORITY_INFO_ACCESS *
LIBSTUB_d2i_AUTHORITY_INFO_ACCESS(void);

int
LIBSTUB_i2d_AUTHORITY_INFO_ACCESS(void);

const ASN1_ITEM *
LIBSTUB_AUTHORITY_INFO_ACCESS_it(void);

GENERAL_NAME *
LIBSTUB_v2i_GENERAL_NAME(void);

void
LIBSTUB_X509V3_conf_free(void);

X509_EXTENSION *
LIBSTUB_X509V3_EXT_nconf_nid(void);

X509_EXTENSION *
LIBSTUB_X509V3_EXT_nconf(void);

int
LIBSTUB_X509V3_EXT_add_nconf_sk(void);

int
LIBSTUB_X509V3_EXT_add_nconf(void);

int
LIBSTUB_X509V3_EXT_REQ_add_nconf(void);

int
LIBSTUB_X509V3_EXT_CRL_add_nconf(void);

X509_EXTENSION *
LIBSTUB_X509V3_EXT_conf_nid(void);

X509_EXTENSION *
LIBSTUB_X509V3_EXT_conf(void);

int
LIBSTUB_X509V3_EXT_add_conf(void);

int
LIBSTUB_X509V3_EXT_REQ_add_conf(void);

int
LIBSTUB_X509V3_EXT_CRL_add_conf(void);

int
LIBSTUB_X509V3_add_value_bool_nf(void);

int
LIBSTUB_X509V3_get_value_bool(void);

int
LIBSTUB_X509V3_get_value_int(void);

void
LIBSTUB_X509V3_set_nconf(void);

void
LIBSTUB_X509V3_set_conf_lhash(void);

char *
LIBSTUB_X509V3_get_string(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_X509V3_get_section(void);

void
LIBSTUB_X509V3_string_free(void);

void
LIBSTUB_X509V3_section_free(void);

void
LIBSTUB_X509V3_set_ctx(void);

int
LIBSTUB_X509V3_add_value(void);

int
LIBSTUB_X509V3_add_value_uchar(void);

int
LIBSTUB_X509V3_add_value_bool(void);

int
LIBSTUB_X509V3_add_value_int(void);

char *
LIBSTUB_i2s_ASN1_INTEGER(void);

ASN1_INTEGER *
LIBSTUB_s2i_ASN1_INTEGER(void);

char *
LIBSTUB_i2s_ASN1_ENUMERATED(void);

char *
LIBSTUB_i2s_ASN1_ENUMERATED_TABLE(void);

int
LIBSTUB_X509V3_EXT_add(void);

int
LIBSTUB_X509V3_EXT_add_list(void);

int
LIBSTUB_X509V3_EXT_add_alias(void);

void
LIBSTUB_X509V3_EXT_cleanup(void);

const X509V3_EXT_METHOD *
LIBSTUB_X509V3_EXT_get(void);

const X509V3_EXT_METHOD *
LIBSTUB_X509V3_EXT_get_nid(void);

int
LIBSTUB_X509V3_add_standard_extensions(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_X509V3_parse_list(void);

void *
LIBSTUB_X509V3_EXT_d2i(void);

void *
LIBSTUB_X509V3_get_d2i(void);

X509_EXTENSION *
LIBSTUB_X509V3_EXT_i2d(void);

int
LIBSTUB_X509V3_add1_i2d(void);

char *
LIBSTUB_hex_to_string(void);

unsigned char *
LIBSTUB_string_to_hex(void);

int
LIBSTUB_name_cmp(void);

void
LIBSTUB_X509V3_EXT_val_prn(void);

int
LIBSTUB_X509V3_EXT_print(void);

int
LIBSTUB_X509V3_extensions_print(void);

int
LIBSTUB_X509_check_purpose(void);

int
LIBSTUB_X509_supported_extension(void);

int
LIBSTUB_X509_PURPOSE_set(void);

int
LIBSTUB_X509_check_issued(void);

int
LIBSTUB_X509_PURPOSE_get_count(void);

X509_PURPOSE *
LIBSTUB_X509_PURPOSE_get0(void);

int
LIBSTUB_X509_PURPOSE_get_by_sname(void);

int
LIBSTUB_X509_PURPOSE_get_by_id(void);

int
LIBSTUB_X509_PURPOSE_add(void);

char *
LIBSTUB_X509_PURPOSE_get0_name(void);

char *
LIBSTUB_X509_PURPOSE_get0_sname(void);

int
LIBSTUB_X509_PURPOSE_get_trust(void);

void
LIBSTUB_X509_PURPOSE_cleanup(void);

int
LIBSTUB_X509_PURPOSE_get_id(void);

STACK_OF(OPENSSL_STRING) *
LIBSTUB_X509_get1_email(void);

STACK_OF(OPENSSL_STRING) *
LIBSTUB_X509_REQ_get1_email(void);

void
LIBSTUB_X509_email_free(void);

void
LIBSTUB_ERR_load_X509V3_strings(void);

const char *
LIBSTUB_AES_options(void);

int
LIBSTUB_AES_set_encrypt_key(void);

int
LIBSTUB_AES_set_decrypt_key(void);

void
LIBSTUB_AES_encrypt(void);

void
LIBSTUB_AES_decrypt(void);

void
LIBSTUB_AES_ecb_encrypt(void);

void
LIBSTUB_AES_cbc_encrypt(void);

void
LIBSTUB_AES_cfb128_encrypt(void);

void
LIBSTUB_AES_cfb1_encrypt(void);

void
LIBSTUB_AES_cfb8_encrypt(void);

void
LIBSTUB_AES_ofb128_encrypt(void);

void
LIBSTUB_BF_set_key(void);

void
LIBSTUB_BF_encrypt(void);

void
LIBSTUB_BF_decrypt(void);

void
LIBSTUB_BF_ecb_encrypt(void);

void
LIBSTUB_BF_cbc_encrypt(void);

void
LIBSTUB_BF_cfb64_encrypt(void);

void
LIBSTUB_BF_ofb64_encrypt(void);

const char *
LIBSTUB_BF_options(void);

void
LIBSTUB_CAST_set_key(void);

void
LIBSTUB_CAST_ecb_encrypt(void);

void
LIBSTUB_CAST_encrypt(void);

void
LIBSTUB_CAST_decrypt(void);

void
LIBSTUB_CAST_cbc_encrypt(void);

void
LIBSTUB_CAST_cfb64_encrypt(void);

void
LIBSTUB_CAST_ofb64_encrypt(void);

int *
LIBSTUB__shadow_DES_check_key(void);

int *
LIBSTUB__shadow_DES_rw_mode(void);

const char *
LIBSTUB_DES_options(void);

void
LIBSTUB_DES_ecb3_encrypt(void);

DES_LONG
LIBSTUB_DES_cbc_cksum(void);

void
LIBSTUB_DES_cbc_encrypt(void);

void
LIBSTUB_DES_ncbc_encrypt(void);

void
LIBSTUB_DES_xcbc_encrypt(void);

void
LIBSTUB_DES_cfb_encrypt(void);

void
LIBSTUB_DES_ecb_encrypt(void);

void
LIBSTUB_DES_encrypt1(void);

void
LIBSTUB_DES_encrypt2(void);

void
LIBSTUB_DES_encrypt3(void);

void
LIBSTUB_DES_decrypt3(void);

void
LIBSTUB_DES_ede3_cbc_encrypt(void);

void
LIBSTUB_DES_ede3_cfb64_encrypt(void);

void
LIBSTUB_DES_ede3_cfb_encrypt(void);

void
LIBSTUB_DES_ede3_ofb64_encrypt(void);

int
LIBSTUB_DES_enc_read(void);

int
LIBSTUB_DES_enc_write(void);

char *
LIBSTUB_DES_fcrypt(void);

char *
LIBSTUB_DES_crypt(void);

void
LIBSTUB_DES_ofb_encrypt(void);

void
LIBSTUB_DES_pcbc_encrypt(void);

DES_LONG
LIBSTUB_DES_quad_cksum(void);

int
LIBSTUB_DES_random_key(void);

void
LIBSTUB_DES_set_odd_parity(void);

int
LIBSTUB_DES_check_key_parity(void);

int
LIBSTUB_DES_is_weak_key(void);

int
LIBSTUB_DES_set_key(void);

int
LIBSTUB_DES_key_sched(void);

int
LIBSTUB_DES_set_key_checked(void);

void
LIBSTUB_DES_set_key_unchecked(void);

void
LIBSTUB_DES_string_to_key(void);

void
LIBSTUB_DES_string_to_2keys(void);

void
LIBSTUB_DES_cfb64_encrypt(void);

void
LIBSTUB_DES_ofb64_encrypt(void);

int
LIBSTUB_DES_read_password(void);

int
LIBSTUB_DES_read_2passwords(void);

const DH_METHOD *
LIBSTUB_DH_OpenSSL(void);

void
LIBSTUB_DH_set_default_method(void);

const DH_METHOD *
LIBSTUB_DH_get_default_method(void);

int
LIBSTUB_DH_set_method(void);

DH *
LIBSTUB_DH_new_method(void);

DH *
LIBSTUB_DH_new(void);

void
LIBSTUB_DH_free(void);

int
LIBSTUB_DH_up_ref(void);

int
LIBSTUB_DH_size(void);

int
LIBSTUB_DH_set_ex_data(void);

void *
LIBSTUB_DH_get_ex_data(void);

DH *
LIBSTUB_DH_generate_parameters(void);

int
LIBSTUB_DH_check(void);

int
LIBSTUB_DH_generate_key(void);

int
LIBSTUB_DH_compute_key(void);

DH *
LIBSTUB_d2i_DHparams(void);

int
LIBSTUB_i2d_DHparams(void);

int
LIBSTUB_DHparams_print(void);

void
LIBSTUB_ERR_load_DH_strings(void);

DSA_SIG *
LIBSTUB_DSA_SIG_new(void);

void
LIBSTUB_DSA_SIG_free(void);

int
LIBSTUB_i2d_DSA_SIG(void);

DSA_SIG *
LIBSTUB_d2i_DSA_SIG(void);

DSA_SIG *
LIBSTUB_DSA_do_sign(void);

int
LIBSTUB_DSA_do_verify(void);

const DSA_METHOD *
LIBSTUB_DSA_OpenSSL(void);

void
LIBSTUB_DSA_set_default_method(void);

const DSA_METHOD *
LIBSTUB_DSA_get_default_method(void);

int
LIBSTUB_DSA_set_method(void);

DSA *
LIBSTUB_DSA_new(void);

DSA *
LIBSTUB_DSA_new_method(void);

void
LIBSTUB_DSA_free(void);

int
LIBSTUB_DSA_up_ref(void);

int
LIBSTUB_DSA_size(void);

int
LIBSTUB_DSA_sign_setup(void);

int
LIBSTUB_DSA_sign(void);

int
LIBSTUB_DSA_verify(void);

int
LIBSTUB_DSA_set_ex_data(void);

void *
LIBSTUB_DSA_get_ex_data(void);

DSA *
LIBSTUB_d2i_DSAPublicKey(void);

DSA *
LIBSTUB_d2i_DSAPrivateKey(void);

DSA *
LIBSTUB_d2i_DSAparams(void);

DSA *
LIBSTUB_DSA_generate_parameters(void);

int
LIBSTUB_DSA_generate_key(void);

int
LIBSTUB_i2d_DSAPublicKey(void);

int
LIBSTUB_i2d_DSAPrivateKey(void);

int
LIBSTUB_i2d_DSAparams(void);

int
LIBSTUB_DSAparams_print(void);

int
LIBSTUB_DSA_print(void);

DH *
LIBSTUB_DSA_dup_DH(void);

void
LIBSTUB_ERR_load_DSA_strings(void);

const char *
LIBSTUB_idea_options(void);

void
LIBSTUB_idea_ecb_encrypt(void);

void
LIBSTUB_idea_set_encrypt_key(void);

void
LIBSTUB_idea_set_decrypt_key(void);

void
LIBSTUB_idea_cbc_encrypt(void);

void
LIBSTUB_idea_cfb64_encrypt(void);

void
LIBSTUB_idea_ofb64_encrypt(void);

void
LIBSTUB_idea_encrypt(void);

const char *
LIBSTUB_MD2_options(void);

int
LIBSTUB_MD2_Init(void);

int
LIBSTUB_MD2_Update(void);

int
LIBSTUB_MD2_Final(void);

unsigned char *
LIBSTUB_MD2(void);

int
LIBSTUB_MD4_Init(void);

int
LIBSTUB_MD4_Update(void);

int
LIBSTUB_MD4_Final(void);

unsigned char *
LIBSTUB_MD4(void);

void
LIBSTUB_MD4_Transform(void);

int
LIBSTUB_MD5_Init(void);

int
LIBSTUB_MD5_Update(void);

int
LIBSTUB_MD5_Final(void);

unsigned char *
LIBSTUB_MD5(void);

void
LIBSTUB_MD5_Transform(void);

int
LIBSTUB_MDC2_Init(void);

int
LIBSTUB_MDC2_Update(void);

int
LIBSTUB_MDC2_Final(void);

unsigned char *
LIBSTUB_MDC2(void);

void
LIBSTUB_RC2_set_key(void);

void
LIBSTUB_RC2_ecb_encrypt(void);

void
LIBSTUB_RC2_encrypt(void);

void
LIBSTUB_RC2_decrypt(void);

void
LIBSTUB_RC2_cbc_encrypt(void);

void
LIBSTUB_RC2_cfb64_encrypt(void);

void
LIBSTUB_RC2_ofb64_encrypt(void);

const char *
LIBSTUB_RC4_options(void);

void
LIBSTUB_RC4_set_key(void);

void
LIBSTUB_RC4(void);

void
LIBSTUB_RC5_32_set_key(void);

void
LIBSTUB_RC5_32_ecb_encrypt(void);

void
LIBSTUB_RC5_32_encrypt(void);

void
LIBSTUB_RC5_32_decrypt(void);

void
LIBSTUB_RC5_32_cbc_encrypt(void);

void
LIBSTUB_RC5_32_cfb64_encrypt(void);

void
LIBSTUB_RC5_32_ofb64_encrypt(void);

int
LIBSTUB_RIPEMD160_Init(void);

int
LIBSTUB_RIPEMD160_Update(void);

int
LIBSTUB_RIPEMD160_Final(void);

unsigned char *
LIBSTUB_RIPEMD160(void);

void
LIBSTUB_RIPEMD160_Transform(void);

RSA *
LIBSTUB_RSA_new(void);

RSA *
LIBSTUB_RSA_new_method(void);

int
LIBSTUB_RSA_size(void);

RSA *
LIBSTUB_RSA_generate_key(void);

int
LIBSTUB_RSA_check_key(void);

int
LIBSTUB_RSA_public_encrypt(void);

int
LIBSTUB_RSA_private_encrypt(void);

int
LIBSTUB_RSA_public_decrypt(void);

int
LIBSTUB_RSA_private_decrypt(void);

void
LIBSTUB_RSA_free(void);

int
LIBSTUB_RSA_up_ref(void);

int
LIBSTUB_RSA_flags(void);

void
LIBSTUB_RSA_set_default_method(void);

const RSA_METHOD *
LIBSTUB_RSA_get_default_method(void);

const RSA_METHOD *
LIBSTUB_RSA_get_method(void);

int
LIBSTUB_RSA_set_method(void);

int
LIBSTUB_RSA_memory_lock(void);

const RSA_METHOD *
LIBSTUB_RSA_null_method(void);

RSA *
LIBSTUB_d2i_RSAPublicKey(void);

int
LIBSTUB_i2d_RSAPublicKey(void);

const ASN1_ITEM *
LIBSTUB_RSAPublicKey_it(void);

RSA *
LIBSTUB_d2i_RSAPrivateKey(void);

int
LIBSTUB_i2d_RSAPrivateKey(void);

const ASN1_ITEM *
LIBSTUB_RSAPrivateKey_it(void);

int
LIBSTUB_RSA_print(void);

int
LIBSTUB_RSA_sign(void);

int
LIBSTUB_RSA_verify(void);

int
LIBSTUB_RSA_sign_ASN1_OCTET_STRING(void);

int
LIBSTUB_RSA_verify_ASN1_OCTET_STRING(void);

int
LIBSTUB_RSA_blinding_on(void);

void
LIBSTUB_RSA_blinding_off(void);

int
LIBSTUB_RSA_padding_add_PKCS1_type_1(void);

int
LIBSTUB_RSA_padding_check_PKCS1_type_1(void);

int
LIBSTUB_RSA_padding_add_PKCS1_type_2(void);

int
LIBSTUB_RSA_padding_check_PKCS1_type_2(void);

int
LIBSTUB_RSA_padding_add_PKCS1_OAEP(void);

int
LIBSTUB_RSA_padding_check_PKCS1_OAEP(void);

int
LIBSTUB_RSA_padding_add_SSLv23(void);

int
LIBSTUB_RSA_padding_check_SSLv23(void);

int
LIBSTUB_RSA_padding_add_none(void);

int
LIBSTUB_RSA_padding_check_none(void);

int
LIBSTUB_RSA_set_ex_data(void);

void *
LIBSTUB_RSA_get_ex_data(void);

RSA *
LIBSTUB_RSAPublicKey_dup(void);

RSA *
LIBSTUB_RSAPrivateKey_dup(void);

void
LIBSTUB_ERR_load_RSA_strings(void);

int
LIBSTUB_SHA1_Init(void);

int
LIBSTUB_SHA1_Update(void);

int
LIBSTUB_SHA1_Final(void);

unsigned char *
LIBSTUB_SHA1(void);

void
LIBSTUB_SHA1_Transform(void);

void
LIBSTUB_HMAC_CTX_set_flags(void);

int
LIBSTUB_X509_check_ca(void);

PROXY_POLICY *
LIBSTUB_PROXY_POLICY_new(void);

void
LIBSTUB_PROXY_POLICY_free(void);

PROXY_POLICY *
LIBSTUB_d2i_PROXY_POLICY(void);

int
LIBSTUB_i2d_PROXY_POLICY(void);

const ASN1_ITEM *
LIBSTUB_PROXY_POLICY_it(void);

PROXY_CERT_INFO_EXTENSION *
LIBSTUB_PROXY_CERT_INFO_EXTENSION_new(void);

void
LIBSTUB_PROXY_CERT_INFO_EXTENSION_free(void);

PROXY_CERT_INFO_EXTENSION *
LIBSTUB_d2i_PROXY_CERT_INFO_EXTENSION(void);

int
LIBSTUB_i2d_PROXY_CERT_INFO_EXTENSION(void);

const ASN1_ITEM *
LIBSTUB_PROXY_CERT_INFO_EXTENSION_it(void);

int
LIBSTUB_FIPS_mode(void);

int
LIBSTUB_BN_mod_exp_mont_consttime(void);

BN_MONT_CTX *
LIBSTUB_BN_MONT_CTX_set_locked(void);

int
LIBSTUB_PKCS1_MGF1(void);

int
LIBSTUB_RSA_padding_add_X931(void);

int
LIBSTUB_RSA_padding_check_X931(void);

int
LIBSTUB_RSA_X931_hash_id(void);

int
LIBSTUB_RSA_verify_PKCS1_PSS(void);

int
LIBSTUB_RSA_padding_add_PKCS1_PSS(void);

const EVP_MD *
LIBSTUB_EVP_sha224(void);

const EVP_MD *
LIBSTUB_EVP_sha256(void);

const EVP_MD *
LIBSTUB_EVP_sha384(void);

const EVP_MD *
LIBSTUB_EVP_sha512(void);

int
LIBSTUB_BN_GF2m_add(void);

int
LIBSTUB_BN_GF2m_arr2poly(void);

int
LIBSTUB_BN_GF2m_mod(void);

int
LIBSTUB_BN_GF2m_mod_mul(void);

int
LIBSTUB_BN_GF2m_mod_sqr(void);

int
LIBSTUB_BN_GF2m_mod_inv(void);

int
LIBSTUB_BN_GF2m_mod_div(void);

int
LIBSTUB_BN_GF2m_mod_exp(void);

int
LIBSTUB_BN_GF2m_mod_sqrt(void);

int
LIBSTUB_BN_GF2m_mod_solve_quad(void);

int
LIBSTUB_BN_generate_prime_ex(void);

int
LIBSTUB_BN_is_prime_ex(void);

void
LIBSTUB_BN_set_negative(void);

int
LIBSTUB_EC_GROUP_get_degree(void);

const EC_METHOD *
LIBSTUB_EC_GF2m_simple_method(void);

int
LIBSTUB_EC_GROUP_set_curve_GF2m(void);

int
LIBSTUB_EC_GROUP_get_curve_GF2m(void);

int
LIBSTUB_EC_POINT_set_affine_coordinates_GF2m(void);

int
LIBSTUB_EC_POINT_get_affine_coordinates_GF2m(void);

size_t
LIBSTUB_EC_get_builtin_curves(void);

EC_GROUP *
LIBSTUB_EC_GROUP_new_by_curve_name(void);

int
LIBSTUB_EC_GROUP_check(void);

void
LIBSTUB_ENGINE_cleanup(void);

int
LIBSTUB_DSA_generate_parameters_ex(void);

EC_KEY *
LIBSTUB_EC_KEY_new_by_curve_name(void);

int
LIBSTUB_EC_KEY_generate_key(void);

void
LIBSTUB_EC_KEY_free(void);

void
LIBSTUB_ECDSA_SIG_free(void);

ECDSA_SIG *
LIBSTUB_ECDSA_do_sign(void);

int
LIBSTUB_ECDSA_do_verify(void);

EC_KEY *
LIBSTUB_EC_KEY_new(void);

int
LIBSTUB_EC_KEY_set_group(void);

const EC_GROUP *
LIBSTUB_EC_KEY_get0_group(void);

int
LIBSTUB_EC_KEY_check_key(void);

int
LIBSTUB_ECDSA_size(void);

int
LIBSTUB_ECDSA_sign(void);

int
LIBSTUB_ECDSA_verify(void);

ECDSA_SIG *
LIBSTUB_d2i_ECDSA_SIG(void);

int
LIBSTUB_i2d_ECDSA_SIG(void);

int
LIBSTUB_DH_generate_parameters_ex(void);

int
LIBSTUB_EC_METHOD_get_field_type(void);

const EC_POINT *
LIBSTUB_EC_KEY_get0_public_key(void);

int
LIBSTUB_ECDH_compute_key(void);

const BIGNUM *
LIBSTUB_EC_KEY_get0_private_key(void);

ENGINE *
LIBSTUB_ENGINE_get_first(void);

const char *
LIBSTUB_ENGINE_get_id(void);

const char *
LIBSTUB_ENGINE_get_name(void);

ENGINE *
LIBSTUB_ENGINE_get_next(void);

int
LIBSTUB_ENGINE_free(void);

ENGINE *
LIBSTUB_ENGINE_new(void);

int
LIBSTUB_ENGINE_set_id(void);

int
LIBSTUB_ENGINE_set_name(void);

int
LIBSTUB_ENGINE_add(void);

int
LIBSTUB_ENGINE_remove(void);

void
LIBSTUB_ENGINE_load_builtin_engines(void);

void
LIBSTUB_ENGINE_register_all_ciphers(void);

int
LIBSTUB_EVP_CIPHER_nid(void);

int
LIBSTUB_EVP_MD_type(void);

void
LIBSTUB_ENGINE_register_all_digests(void);

int
LIBSTUB_BIO_test_flags(void);

STACK_OF(SSL_COMP) *
LIBSTUB_SSL_COMP_get_compression_methods(void);

int
LIBSTUB_RSA_generate_key_ex(void);

void
LIBSTUB_X509_VERIFY_PARAM_free(void);

int
LIBSTUB_X509_STORE_set1_param(void);

ASN1_TYPE *
LIBSTUB_ASN1_generate_nconf(void);

EC_GROUP *
LIBSTUB_PEM_read_bio_ECPKParameters(void);

EC_KEY *
LIBSTUB_EC_KEY_dup(void);

void
LIBSTUB_BIO_set_callback(void);

void
LIBSTUB_BIO_set_callback_arg(void);

void
LIBSTUB_EVP_MD_CTX_set_flags(void);

void
LIBSTUB_BIO_set_flags(void);

void
LIBSTUB_EVP_CIPHER_CTX_set_flags(void);

int
LIBSTUB_EVP_CIPHER_iv_length(void);

int
LIBSTUB_X509_REQ_check_private_key(void);

EC_KEY *
LIBSTUB_PEM_read_bio_EC_PUBKEY(void);

EC_KEY *
LIBSTUB_PEM_read_bio_ECPrivateKey(void);

int
LIBSTUB_PEM_write_bio_EC_PUBKEY(void);

EC_KEY *
LIBSTUB_d2i_EC_PUBKEY_bio(void);

void
LIBSTUB_EC_KEY_set_asn1_flag(void);

void
LIBSTUB_EC_KEY_set_conv_form(void);

int
LIBSTUB_EC_KEY_print(void);

EC_KEY *
LIBSTUB_d2i_ECPrivateKey_bio(void);

int
LIBSTUB_i2d_EC_PUBKEY_bio(void);

int
LIBSTUB_PEM_write_bio_ECPrivateKey(void);

int
LIBSTUB_PEM_write_bio_ECPKParameters(void);

int
LIBSTUB_i2d_ECPrivateKey_bio(void);

int
LIBSTUB_i2d_ECPKParameters(void);

void
LIBSTUB_EC_GROUP_set_asn1_flag(void);

void
LIBSTUB_EC_GROUP_set_point_conversion_form(void);

point_conversion_form_t
LIBSTUB_EC_GROUP_get_point_conversion_form(void);

int
LIBSTUB_ECPKParameters_print(void);

size_t
LIBSTUB_EC_GROUP_set_seed(void);

EC_GROUP *
LIBSTUB_d2i_ECPKParameters(void);

BIGNUM *
LIBSTUB_EC_POINT_point2bn(void);

STACK_OF(OPENSSL_STRING) *
LIBSTUB_X509_get1_ocsp(void);

const char *
LIBSTUB_SSL_get_servername(void);

SSL_CTX *
LIBSTUB_SSL_set_SSL_CTX(void);

void
LIBSTUB_SSL_CTX_set_cookie_generate_cb(void);

void
LIBSTUB_SSL_CTX_set_cookie_verify_cb(void);

void
LIBSTUB_SSL_CTX_set_info_callback(void);

BIO *
LIBSTUB_BIO_new_dgram(void);

int
LIBSTUB_SSL_get_servername_type(void);

const COMP_METHOD *
LIBSTUB_SSL_get_current_compression(void);

const COMP_METHOD *
LIBSTUB_SSL_get_current_expansion(void);

const char *
LIBSTUB_SSL_COMP_get_name(void);

ENGINE *
LIBSTUB_ENGINE_by_id(void);

int
LIBSTUB_SSL_CTX_set_client_cert_engine(void);

unsigned char *
LIBSTUB_SHA256(void);

unsigned char *
LIBSTUB_SHA512(void);

void
LIBSTUB_AES_ige_encrypt(void);

int
LIBSTUB_EC_KEY_precompute_mult(void);

EVP_PKEY *
LIBSTUB_ENGINE_load_private_key(void);

EVP_PKEY *
LIBSTUB_ENGINE_load_public_key(void);

int
LIBSTUB_ENGINE_ctrl_cmd(void);

int
LIBSTUB_ENGINE_set_default(void);

int
LIBSTUB_ENGINE_ctrl(void);

int
LIBSTUB_ENGINE_register_all_complete(void);

int
LIBSTUB_ENGINE_ctrl_cmd_string(void);

int
LIBSTUB_X509_VERIFY_PARAM_add0_policy(void);

int
LIBSTUB_X509_VERIFY_PARAM_set_purpose(void);

int
LIBSTUB_X509_VERIFY_PARAM_set_flags(void);

X509_VERIFY_PARAM *
LIBSTUB_X509_VERIFY_PARAM_new(void);

void
LIBSTUB_X509_POLICY_NODE_print(void);

X509_POLICY_TREE *
LIBSTUB_X509_STORE_CTX_get0_policy_tree(void);

int
LIBSTUB_X509_STORE_CTX_get_explicit_policy(void);

STACK_OF(X509_POLICY_NODE) *
LIBSTUB_X509_policy_tree_get0_policies(void);

STACK_OF(X509_POLICY_NODE) *
LIBSTUB_X509_policy_tree_get0_user_policies(void);

char *
LIBSTUB_BIO_get_callback_arg(void);

int
LIBSTUB_EVP_PKEY_add1_attr_by_NID(void);

const RSA_METHOD *
LIBSTUB_ENGINE_get_RSA(void);

const DSA_METHOD *
LIBSTUB_ENGINE_get_DSA(void);

const DH_METHOD *
LIBSTUB_ENGINE_get_DH(void);

const RAND_METHOD *
LIBSTUB_ENGINE_get_RAND(void);

ENGINE_CIPHERS_PTR
LIBSTUB_ENGINE_get_ciphers(void);

ENGINE_DIGESTS_PTR
LIBSTUB_ENGINE_get_digests(void);

int
LIBSTUB_ENGINE_init(void);

int
LIBSTUB_ENGINE_finish(void);

OCSP_REQ_CTX *
LIBSTUB_OCSP_sendreq_new(void);

int
LIBSTUB_OCSP_sendreq_nbio(void);

void
LIBSTUB_OCSP_REQ_CTX_free(void);

int
LIBSTUB_SSL_CTX_use_psk_identity_hint(void);

void
LIBSTUB_SSL_CTX_set_psk_client_callback(void);

const char *
LIBSTUB_SSL_get_psk_identity_hint(void);

void
LIBSTUB_SSL_set_psk_server_callback(void);

int
LIBSTUB_SSL_use_psk_identity_hint(void);

void
LIBSTUB_SSL_set_psk_client_callback(void);

void
LIBSTUB_SSL_CTX_set_psk_server_callback(void);

const char *
LIBSTUB_SSL_get_psk_identity(void);

int
LIBSTUB_SSL_set_session_ticket_ext(void);

int
LIBSTUB_SSL_set_session_secret_cb(void);

int
LIBSTUB_SSL_set_session_ticket_ext_cb(void);

int
LIBSTUB_SSL_set1_param(void);

int
LIBSTUB_SSL_CTX_set1_param(void);

int
LIBSTUB_SSL_renegotiate_abbreviated(void);

int
LIBSTUB_SSL_CTX_set_srp_client_pwd_callback(void);

BIGNUM *
LIBSTUB_SSL_get_srp_g(void);

int
LIBSTUB_SSL_CTX_set_srp_username_callback(void);

char *
LIBSTUB_SSL_get_srp_userinfo(void);

int
LIBSTUB_SSL_set_srp_server_param(void);

int
LIBSTUB_SSL_set_srp_server_param_pw(void);

BIGNUM *
LIBSTUB_SSL_get_srp_N(void);

char *
LIBSTUB_SSL_get_srp_username(void);

int
LIBSTUB_SSL_CTX_set_srp_password(void);

int
LIBSTUB_SSL_CTX_set_srp_strength(void);

int
LIBSTUB_SSL_CTX_set_srp_verify_param_callback(void);

int
LIBSTUB_SSL_CTX_set_srp_cb_arg(void);

int
LIBSTUB_SSL_CTX_set_srp_username(void);

int
LIBSTUB_SSL_CTX_SRP_CTX_init(void);

int
LIBSTUB_SRP_Calc_A_param(void);

int
LIBSTUB_SSL_CTX_SRP_CTX_free(void);

int
LIBSTUB_SSL_srp_server_param_with_username(void);

int
LIBSTUB_SSL_SRP_CTX_free(void);

void
LIBSTUB_SSL_set_debug(void);

X509 *
LIBSTUB_SSL_SESSION_get0_peer(void);

int
LIBSTUB_SSL_SESSION_set1_id_context(void);

uint32_t
LIBSTUB_SSL_CIPHER_get_id(void);

int
LIBSTUB_SSL_export_keying_material(void);

int
LIBSTUB_SSL_set_tlsext_use_srtp(void);

void
LIBSTUB_SSL_CTX_set_next_protos_advertised_cb(void);

void
LIBSTUB_SSL_get0_next_proto_negotiated(void);

SRTP_PROTECTION_PROFILE *
LIBSTUB_SSL_get_selected_srtp_profile(void);

int
LIBSTUB_SSL_CTX_set_tlsext_use_srtp(void);

int
LIBSTUB_SSL_select_next_proto(void);

STACK_OF(SRTP_PROTECTION_PROFILE) *
LIBSTUB_SSL_get_srtp_profiles(void);

void
LIBSTUB_SSL_CTX_set_next_proto_select_cb(void);

unsigned int
LIBSTUB_SSL_SESSION_get_compress_id(void);

int
LIBSTUB_SSL_SRP_CTX_init(void);

void
LIBSTUB_ERR_load_ENGINE_strings(void);

int
LIBSTUB_ENGINE_set_DSA(void);

ENGINE_GEN_INT_FUNC_PTR
LIBSTUB_ENGINE_get_finish_function(void);

ENGINE *
LIBSTUB_ENGINE_get_default_RSA(void);

int
LIBSTUB_ENGINE_set_DH(void);

ENGINE_GEN_INT_FUNC_PTR
LIBSTUB_ENGINE_get_init_function(void);

int
LIBSTUB_ENGINE_set_init_function(void);

int
LIBSTUB_ENGINE_set_default_DSA(void);

ENGINE *
LIBSTUB_ENGINE_get_last(void);

ENGINE *
LIBSTUB_ENGINE_get_prev(void);

ENGINE *
LIBSTUB_ENGINE_get_default_DH(void);

int
LIBSTUB_ENGINE_set_finish_function(void);

int
LIBSTUB_ENGINE_set_RSA(void);

int
LIBSTUB_ENGINE_set_default_RAND(void);

ENGINE *
LIBSTUB_ENGINE_get_default_DSA(void);

int
LIBSTUB_ENGINE_set_default_RSA(void);

ENGINE *
LIBSTUB_ENGINE_get_default_RAND(void);

int
LIBSTUB_ENGINE_set_RAND(void);

int
LIBSTUB_ENGINE_set_default_DH(void);

ENGINE_CTRL_FUNC_PTR
LIBSTUB_ENGINE_get_ctrl_function(void);

int
LIBSTUB_ENGINE_set_ctrl_function(void);

void
LIBSTUB_ENGINE_unregister_ciphers(void);

void
LIBSTUB_ENGINE_unregister_RSA(void);

void
LIBSTUB_ENGINE_register_all_RAND(void);

ENGINE *
LIBSTUB_ENGINE_get_digest_engine(void);

int
LIBSTUB_ENGINE_register_DH(void);

int
LIBSTUB_ENGINE_register_RAND(void);

int
LIBSTUB_ENGINE_register_ciphers(void);

const ENGINE_CMD_DEFN *
LIBSTUB_ENGINE_get_cmd_defns(void);

int
LIBSTUB_ENGINE_set_load_privkey_function(void);

int
LIBSTUB_ENGINE_set_default_digests(void);

int
LIBSTUB_ENGINE_register_RSA(void);

void
LIBSTUB_ENGINE_unregister_DSA(void);

int
LIBSTUB_ENGINE_set_ciphers(void);

int
LIBSTUB_RAND_set_rand_engine(void);

const EVP_MD *
LIBSTUB_ENGINE_get_digest(void);

const EVP_CIPHER *
LIBSTUB_ENGINE_get_cipher(void);

int
LIBSTUB_ENGINE_cmd_is_executable(void);

int
LIBSTUB_ENGINE_register_DSA(void);

int
LIBSTUB_ENGINE_set_load_pubkey_function(void);

ENGINE_LOAD_KEY_PTR
LIBSTUB_ENGINE_get_load_pubkey_function(void);

void
LIBSTUB_ENGINE_register_all_RSA(void);

void
LIBSTUB_ENGINE_unregister_digests(void);

void *
LIBSTUB_ENGINE_get_ex_data(void);

int
LIBSTUB_ENGINE_set_cmd_defns(void);

int
LIBSTUB_ENGINE_register_digests(void);

void
LIBSTUB_ENGINE_register_all_DH(void);

int
LIBSTUB_ENGINE_get_flags(void);

void
LIBSTUB_ENGINE_unregister_DH(void);

void
LIBSTUB_ENGINE_register_all_DSA(void);

int
LIBSTUB_ENGINE_set_digests(void);

int
LIBSTUB_ENGINE_register_complete(void);

int
LIBSTUB_ENGINE_set_ex_data(void);

int
LIBSTUB_ENGINE_set_destroy_function(void);

ENGINE *
LIBSTUB_ENGINE_get_cipher_engine(void);

int
LIBSTUB_ENGINE_set_default_ciphers(void);

void
LIBSTUB_ENGINE_unregister_RAND(void);

void
LIBSTUB_ENGINE_set_table_flags(void);

ENGINE_GEN_INT_FUNC_PTR
LIBSTUB_ENGINE_get_destroy_function(void);

unsigned int
LIBSTUB_ENGINE_get_table_flags(void);

int
LIBSTUB_ENGINE_set_flags(void);

ENGINE_LOAD_KEY_PTR
LIBSTUB_ENGINE_get_load_privkey_function(void);

int
LIBSTUB_ENGINE_set_default_string(void);

void
LIBSTUB_ENGINE_add_conf_module(void);

int
LIBSTUB_ENGINE_up_ref(void);

int
LIBSTUB_EC_GROUP_get_trinomial_basis(void);

int
LIBSTUB_SHA512_Update(void);

int
LIBSTUB_i2d_ECPrivateKey(void);

int
LIBSTUB_BN_GF2m_mod_exp_arr(void);

int
LIBSTUB_BN_GF2m_mod_mul_arr(void);

EC_KEY *
LIBSTUB_o2i_ECPublicKey(void);

EC_KEY *
LIBSTUB_EC_KEY_copy(void);

int
LIBSTUB_EC_GROUP_check_discriminant(void);

int
LIBSTUB_i2o_ECPublicKey(void);

EC_GROUP *
LIBSTUB_EC_GROUP_new_curve_GF2m(void);

struct ec_key_st *
LIBSTUB_EVP_PKEY_get1_EC_KEY(void);

point_conversion_form_t
LIBSTUB_EC_KEY_get_conv_form(void);

void *
LIBSTUB_ENGINE_get_static_state(void);

ECDSA_SIG *
LIBSTUB_ECDSA_SIG_new(void);

EC_POINT *
LIBSTUB_EC_POINT_bn2point(void);

int
LIBSTUB_ECDSA_sign_ex(void);

int
LIBSTUB_EC_GROUP_get_pentanomial_basis(void);

int
LIBSTUB_ECDSA_sign_setup(void);

int
LIBSTUB_BN_GF2m_mod_solve_quad_arr(void);

int
LIBSTUB_EC_KEY_up_ref(void);

EC_KEY *
LIBSTUB_d2i_EC_PUBKEY(void);

int
LIBSTUB_EC_GROUP_have_precompute_mult(void);

int
LIBSTUB_BN_GF2m_mod_arr(void);

EC_POINT *
LIBSTUB_EC_POINT_dup(void);

int
LIBSTUB_EVP_PKEY_set1_EC_KEY(void);

int
LIBSTUB_BN_GF2m_mod_sqrt_arr(void);

int
LIBSTUB_EC_KEY_set_private_key(void);

int
LIBSTUB_BN_GF2m_poly2arr(void);

int
LIBSTUB_i2d_ECParameters(void);

int
LIBSTUB_SHA256_Init(void);

unsigned char *
LIBSTUB_SHA224(void);

size_t
LIBSTUB_EC_GROUP_get_seed_len(void);

int
LIBSTUB_i2d_EC_PUBKEY(void);

const EC_METHOD *
LIBSTUB_EC_GFp_nist_method(void);

void
LIBSTUB_EC_GROUP_set_curve_name(void);

int
LIBSTUB_BN_GF2m_mod_sqr_arr(void);

BIO_METHOD *
LIBSTUB_BIO_s_datagram(void);

int
LIBSTUB_SHA384_Update(void);

int
LIBSTUB_SHA224_Final(void);

int
LIBSTUB_SHA224_Update(void);

EC_KEY *
LIBSTUB_d2i_ECPrivateKey(void);

int
LIBSTUB_SHA512_Final(void);

int
LIBSTUB_EC_GROUP_get_asn1_flag(void);

unsigned char *
LIBSTUB_EC_GROUP_get0_seed(void);

int
LIBSTUB_BN_GF2m_mod_div_arr(void);

unsigned
LIBSTUB_EC_KEY_get_enc_flags(void);

int
LIBSTUB_EC_POINT_set_compressed_coordinates_GF2m(void);

int
LIBSTUB_EC_GROUP_cmp(void);

int
LIBSTUB_SHA224_Init(void);

int
LIBSTUB_SHA512_Init(void);

int
LIBSTUB_EC_GROUP_get_basis_type(void);

EC_GROUP *
LIBSTUB_EC_GROUP_dup(void);

void
LIBSTUB_SHA256_Transform(void);

void
LIBSTUB_EC_KEY_set_enc_flags(void);

char *
LIBSTUB_EC_POINT_point2hex(void);

ECDSA_SIG *
LIBSTUB_ECDSA_do_sign_ex(void);

void
LIBSTUB_SHA512_Transform(void);

int
LIBSTUB_EC_KEY_set_public_key(void);

int
LIBSTUB_EC_GROUP_get_curve_name(void);

int
LIBSTUB_SHA256_Final(void);

EC_KEY *
LIBSTUB_d2i_ECParameters(void);

int
LIBSTUB_SHA384_Init(void);

int
LIBSTUB_SHA384_Final(void);

unsigned char *
LIBSTUB_SHA384(void);

EC_POINT *
LIBSTUB_EC_POINT_hex2point(void);

int
LIBSTUB_SHA256_Update(void);

int
LIBSTUB_BN_GF2m_mod_inv_arr(void);

int
LIBSTUB_DH_check_pub_key(void);

void
LIBSTUB_Camellia_cbc_encrypt(void);

void
LIBSTUB_Camellia_cfb128_encrypt(void);

void
LIBSTUB_Camellia_cfb1_encrypt(void);

void
LIBSTUB_Camellia_cfb8_encrypt(void);

void
LIBSTUB_Camellia_ctr128_encrypt(void);

void
LIBSTUB_Camellia_decrypt(void);

void
LIBSTUB_Camellia_ecb_encrypt(void);

void
LIBSTUB_Camellia_encrypt(void);

void
LIBSTUB_Camellia_ofb128_encrypt(void);

int
LIBSTUB_Camellia_set_key(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_cfb128(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_cfb128(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_ofb(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_cbc(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_cfb128(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_cfb1(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_cfb8(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_ecb(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_ofb(void);

void
LIBSTUB_AES_bi_ige_encrypt(void);

void
LIBSTUB_SEED_decrypt(void);

void
LIBSTUB_SEED_encrypt(void);

void
LIBSTUB_SEED_cbc_encrypt(void);

const EVP_CIPHER *
LIBSTUB_EVP_seed_ofb(void);

void
LIBSTUB_SEED_cfb128_encrypt(void);

void
LIBSTUB_SEED_ofb128_encrypt(void);

const EVP_CIPHER *
LIBSTUB_EVP_seed_cbc(void);

void
LIBSTUB_SEED_ecb_encrypt(void);

const EVP_CIPHER *
LIBSTUB_EVP_seed_ecb(void);

void
LIBSTUB_SEED_set_key(void);

const EVP_CIPHER *
LIBSTUB_EVP_seed_cfb128(void);

int
LIBSTUB_AES_unwrap_key(void);

int
LIBSTUB_AES_wrap_key(void);

void
LIBSTUB_CMS_ReceiptRequest_free(void);

CMS_CertificateChoices *
LIBSTUB_CMS_add0_CertificateChoices(void);

int
LIBSTUB_CMS_unsigned_add1_attr_by_OBJ(void);

void
LIBSTUB_ERR_load_CMS_strings(void);

CMS_ContentInfo *
LIBSTUB_CMS_sign_receipt(void);

int
LIBSTUB_i2d_CMS_ContentInfo(void);

X509_ATTRIBUTE *
LIBSTUB_CMS_signed_delete_attr(void);

CMS_ContentInfo *
LIBSTUB_d2i_CMS_bio(void);

int
LIBSTUB_CMS_unsigned_get_attr_by_NID(void);

int
LIBSTUB_CMS_verify(void);

CMS_ContentInfo *
LIBSTUB_SMIME_read_CMS(void);

int
LIBSTUB_CMS_decrypt_set1_key(void);

void
LIBSTUB_CMS_SignerInfo_get0_algs(void);

int
LIBSTUB_CMS_add1_cert(void);

int
LIBSTUB_CMS_set_detached(void);

CMS_ContentInfo *
LIBSTUB_CMS_encrypt(void);

CMS_ContentInfo *
LIBSTUB_CMS_EnvelopedData_create(void);

int
LIBSTUB_CMS_uncompress(void);

int
LIBSTUB_CMS_add0_crl(void);

int
LIBSTUB_CMS_SignerInfo_verify_content(void);

void *
LIBSTUB_CMS_unsigned_get0_data_by_OBJ(void);

int
LIBSTUB_PEM_write_bio_CMS(void);

X509_ATTRIBUTE *
LIBSTUB_CMS_unsigned_get_attr(void);

int
LIBSTUB_CMS_RecipientInfo_ktri_cert_cmp(void);

int
LIBSTUB_CMS_RecipientInfo_ktri_get0_algs(void);

void
LIBSTUB_CMS_ContentInfo_free(void);

int
LIBSTUB_CMS_final(void);

int
LIBSTUB_CMS_add_simple_smimecap(void);

int
LIBSTUB_CMS_SignerInfo_verify(void);

int
LIBSTUB_CMS_data(void);

CMS_ReceiptRequest *
LIBSTUB_d2i_CMS_ReceiptRequest(void);

CMS_ContentInfo *
LIBSTUB_CMS_compress(void);

CMS_ContentInfo *
LIBSTUB_CMS_digest_create(void);

int
LIBSTUB_CMS_SignerInfo_cert_cmp(void);

int
LIBSTUB_CMS_SignerInfo_sign(void);

CMS_ContentInfo *
LIBSTUB_CMS_data_create(void);

int
LIBSTUB_i2d_CMS_bio(void);

int
LIBSTUB_CMS_EncryptedData_set1_key(void);

int
LIBSTUB_CMS_decrypt(void);

X509_ATTRIBUTE *
LIBSTUB_CMS_unsigned_delete_attr(void);

int
LIBSTUB_CMS_unsigned_get_attr_count(void);

int
LIBSTUB_CMS_add_smimecap(void);

int
LIBSTUB_CMS_signed_get_attr_by_OBJ(void);

CMS_ContentInfo *
LIBSTUB_d2i_CMS_ContentInfo(void);

int
LIBSTUB_CMS_add_standard_smimecap(void);

CMS_ContentInfo *
LIBSTUB_CMS_ContentInfo_new(void);

int
LIBSTUB_CMS_RecipientInfo_type(void);

const ASN1_OBJECT *
LIBSTUB_CMS_get0_type(void);

int
LIBSTUB_CMS_is_detached(void);

CMS_ContentInfo *
LIBSTUB_CMS_sign(void);

int
LIBSTUB_CMS_signed_add1_attr(void);

int
LIBSTUB_CMS_unsigned_get_attr_by_OBJ(void);

int
LIBSTUB_SMIME_write_CMS(void);

int
LIBSTUB_CMS_EncryptedData_decrypt(void);

STACK_OF(CMS_RecipientInfo) *
LIBSTUB_CMS_get0_RecipientInfos(void);

CMS_RevocationInfoChoice *
LIBSTUB_CMS_add0_RevocationInfoChoice(void);

int
LIBSTUB_CMS_decrypt_set1_pkey(void);

void
LIBSTUB_CMS_SignerInfo_set1_signer_cert(void);

STACK_OF(X509) *
LIBSTUB_CMS_get0_signers(void);

void
LIBSTUB_CMS_ReceiptRequest_get0_values(void);

void *
LIBSTUB_CMS_signed_get0_data_by_OBJ(void);

STACK_OF(CMS_SignerInfo) *
LIBSTUB_CMS_get0_SignerInfos(void);

int
LIBSTUB_CMS_add0_cert(void);

CMS_ContentInfo *
LIBSTUB_CMS_EncryptedData_encrypt(void);

int
LIBSTUB_CMS_digest_verify(void);

int
LIBSTUB_CMS_set1_signers_certs(void);

X509_ATTRIBUTE *
LIBSTUB_CMS_signed_get_attr(void);

int
LIBSTUB_CMS_RecipientInfo_set0_key(void);

int
LIBSTUB_CMS_SignedData_init(void);

int
LIBSTUB_CMS_RecipientInfo_kekri_get0_id(void);

int
LIBSTUB_CMS_verify_receipt(void);

CMS_ContentInfo *
LIBSTUB_PEM_read_bio_CMS(void);

STACK_OF(X509_CRL) *
LIBSTUB_CMS_get1_crls(void);

CMS_RecipientInfo *
LIBSTUB_CMS_add0_recipient_key(void);

CMS_ReceiptRequest *
LIBSTUB_CMS_ReceiptRequest_new(void);

ASN1_OCTET_STRING **
LIBSTUB_CMS_get0_content(void);

int
LIBSTUB_CMS_get1_ReceiptRequest(void);

int
LIBSTUB_CMS_signed_add1_attr_by_OBJ(void);

int
LIBSTUB_CMS_RecipientInfo_kekri_id_cmp(void);

int
LIBSTUB_CMS_add1_ReceiptRequest(void);

int
LIBSTUB_CMS_SignerInfo_get0_signer_id(void);

int
LIBSTUB_CMS_unsigned_add1_attr_by_NID(void);

int
LIBSTUB_CMS_unsigned_add1_attr(void);

int
LIBSTUB_CMS_signed_get_attr_by_NID(void);

STACK_OF(X509) *
LIBSTUB_CMS_get1_certs(void);

int
LIBSTUB_CMS_signed_add1_attr_by_NID(void);

int
LIBSTUB_CMS_unsigned_add1_attr_by_txt(void);

int
LIBSTUB_CMS_dataFinal(void);

int
LIBSTUB_CMS_RecipientInfo_ktri_get0_signer_id(void);

int
LIBSTUB_i2d_CMS_ReceiptRequest(void);

CMS_RecipientInfo *
LIBSTUB_CMS_add1_recipient_cert(void);

BIO *
LIBSTUB_CMS_dataInit(void);

int
LIBSTUB_CMS_signed_add1_attr_by_txt(void);

int
LIBSTUB_CMS_RecipientInfo_decrypt(void);

int
LIBSTUB_CMS_signed_get_attr_count(void);

const ASN1_OBJECT *
LIBSTUB_CMS_get0_eContentType(void);

int
LIBSTUB_CMS_set1_eContentType(void);

CMS_ReceiptRequest *
LIBSTUB_CMS_ReceiptRequest_create0(void);

CMS_SignerInfo *
LIBSTUB_CMS_add1_signer(void);

int
LIBSTUB_CMS_RecipientInfo_set0_pkey(void);

int
LIBSTUB_ENGINE_set_load_ssl_client_cert_function(void);

ENGINE_SSL_CLIENT_CERT_PTR
LIBSTUB_ENGINE_get_ssl_client_cert_function(void);

int
LIBSTUB_ENGINE_load_ssl_client_cert(void);

int
LIBSTUB_ENGINE_register_pkey_meths(void);

ENGINE *
LIBSTUB_ENGINE_get_pkey_asn1_meth_engine(void);

int
LIBSTUB_WHIRLPOOL_Init(void);

unsigned char *
LIBSTUB_WHIRLPOOL(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_ENGINE_get_pkey_asn1_meth(void);

const EVP_PKEY_METHOD *
LIBSTUB_ENGINE_get_pkey_meth(void);

BIO *
LIBSTUB_BIO_new_CMS(void);

int
LIBSTUB_ENGINE_set_default_pkey_asn1_meths(void);

void
LIBSTUB_WHIRLPOOL_BitUpdate(void);

int
LIBSTUB_i2d_CMS_bio_stream(void);

int
LIBSTUB_CMS_stream(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_ENGINE_pkey_asn1_find_str(void);

ENGINE_PKEY_METHS_PTR
LIBSTUB_ENGINE_get_pkey_meths(void);

int
LIBSTUB_ENGINE_register_pkey_asn1_meths(void);

int
LIBSTUB_ENGINE_set_default_pkey_meths(void);

int
LIBSTUB_HMAC_CTX_copy(void);

ENGINE_PKEY_ASN1_METHS_PTR
LIBSTUB_ENGINE_get_pkey_asn1_meths(void);

const EVP_MD *
LIBSTUB_EVP_whirlpool(void);

void
LIBSTUB_ENGINE_register_all_pkey_meths(void);

int
LIBSTUB_WHIRLPOOL_Final(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_ENGINE_get_pkey_asn1_meth_str(void);

void
LIBSTUB_ENGINE_register_all_pkey_asn1_meths(void);

void
LIBSTUB_CMS_ContentInfo_print_ctx(void);

int
LIBSTUB_CMS_add1_crl(void);

int
LIBSTUB_ENGINE_set_pkey_asn1_meths(void);

ENGINE *
LIBSTUB_ENGINE_get_pkey_meth_engine(void);

int
LIBSTUB_WHIRLPOOL_Update(void);

int
LIBSTUB_PEM_write_bio_CMS_stream(void);

void
LIBSTUB_ENGINE_unregister_pkey_meths(void);

void
LIBSTUB_ENGINE_unregister_pkey_asn1_meths(void);

int
LIBSTUB_ENGINE_set_pkey_meths(void);

DSA *
LIBSTUB_DSAparams_dup(void);

DH *
LIBSTUB_DHparams_dup(void);

unsigned long
LIBSTUB_X509_issuer_name_hash_old(void);

unsigned long
LIBSTUB_X509_subject_name_hash_old(void);

SRP_user_pwd *
LIBSTUB_SRP_VBASE_get_by_user(void);

BIGNUM *
LIBSTUB_SRP_Calc_server_key(void);

char *
LIBSTUB_SRP_create_verifier(void);

int
LIBSTUB_SRP_create_verifier_BN(void);

BIGNUM *
LIBSTUB_SRP_Calc_u(void);

void
LIBSTUB_SRP_VBASE_free(void);

BIGNUM *
LIBSTUB_SRP_Calc_client_key(void);

SRP_gN *
LIBSTUB_SRP_get_default_gN(void);

BIGNUM *
LIBSTUB_SRP_Calc_x(void);

BIGNUM *
LIBSTUB_SRP_Calc_B(void);

SRP_VBASE *
LIBSTUB_SRP_VBASE_new(void);

char *
LIBSTUB_SRP_check_known_gN_param(void);

BIGNUM *
LIBSTUB_SRP_Calc_A(void);

int
LIBSTUB_SRP_Verify_A_mod_N(void);

int
LIBSTUB_SRP_VBASE_init(void);

int
LIBSTUB_SRP_Verify_B_mod_N(void);

int
LIBSTUB_EC_KEY_set_public_key_affine_coordinates(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_ctr(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_ctr(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_ctr(void);

int
LIBSTUB_EC_KEY_get_flags(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_xts(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_xts(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_gcm(void);

void
LIBSTUB_EC_KEY_clear_flags(void);

void
LIBSTUB_EC_KEY_set_flags(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_ccm(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_ccm(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_gcm(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_gcm(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_ccm(void);

const EVP_CIPHER *
LIBSTUB_EVP_rc4_hmac_md5(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_cbc_hmac_sha1(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_cbc_hmac_sha1(void);

CMS_RecipientInfo *
LIBSTUB_CMS_add0_recipient_password(void);

int
LIBSTUB_CMS_decrypt_set1_password(void);

int
LIBSTUB_CMS_RecipientInfo_set0_password(void);

int
LIBSTUB_X509_REQ_sign_ctx(void);

int
LIBSTUB_X509_CRL_sign_ctx(void);

int
LIBSTUB_X509_signature_dump(void);

int
LIBSTUB_X509_sign_ctx(void);

int
LIBSTUB_ASN1_item_sign_ctx(void);

void
LIBSTUB_OPENSSL_cpuid_setup(void);

void
LIBSTUB_ERR_remove_thread_state(void);

void
LIBSTUB_X509_STORE_CTX_set0_crls(void);

const unsigned char *
LIBSTUB_SSL_SESSION_get_id(void);

void
LIBSTUB_SSL_CTX_sess_set_new_cb(void);

SSL_SESSION *(*)(SSL *, const unsigned char *, int, int *)
LIBSTUB_SSL_CTX_sess_get_get_cb(void);

void
LIBSTUB_SSL_CTX_sess_set_get_cb(void);

void (*)(const SSL *ssl,int type,int val)
LIBSTUB_SSL_CTX_get_info_callback(void);

void
LIBSTUB_SSL_CTX_set_client_cert_cb(void);

void
LIBSTUB_SSL_CTX_sess_set_remove_cb(void);

int (*)(struct ssl_st *ssl, SSL_SESSION *sess)
LIBSTUB_SSL_CTX_sess_get_new_cb(void);

int (*)(SSL *ssl, X509 **x509, EVP_PKEY **pkey)
LIBSTUB_SSL_CTX_get_client_cert_cb(void);

void (*)(struct ssl_ctx_st *ctx, SSL_SESSION *sess)
LIBSTUB_SSL_CTX_sess_get_remove_cb(void);

int
LIBSTUB_PEM_write_bio_SSL_SESSION(void);

SSL_SESSION *
LIBSTUB_PEM_read_bio_SSL_SESSION(void);

int
LIBSTUB_FIPS_mode_set(void);

int
LIBSTUB_BN_X931_generate_Xpq(void);

const BIGNUM *
LIBSTUB_BN_get0_nist_prime_384(void);

int
LIBSTUB_ERR_set_mark(void);

int
LIBSTUB_BN_BLINDING_invert_ex(void);

void
LIBSTUB_NAME_CONSTRAINTS_free(void);

void
LIBSTUB_X509_STORE_CTX_set0_param(void);

void
LIBSTUB_POLICY_CONSTRAINTS_free(void);

int
LIBSTUB_BN_nist_mod_192(void);

void
LIBSTUB_GENERAL_SUBTREE_free(void);

int
LIBSTUB_PKCS12_add_safe(void);

const BIGNUM *
LIBSTUB_BN_get0_nist_prime_192(void);

unsigned char *
LIBSTUB_X509_keyid_get0(void);

const X509_POLICY_NODE *
LIBSTUB_X509_policy_node_get0_parent(void);

ASN1_OCTET_STRING *
LIBSTUB_a2i_IPADDRESS(void);

void
LIBSTUB_X509_STORE_CTX_set_depth(void);

int
LIBSTUB_X509_VERIFY_PARAM_inherit(void);

void
LIBSTUB_X509_VERIFY_PARAM_set_depth(void);

int
LIBSTUB_EVP_PKEY_add1_attr_by_txt(void);

void
LIBSTUB_BN_BLINDING_set_flags(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1_policies(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1_name(void);

void
LIBSTUB_POLICY_MAPPING_free(void);

int
LIBSTUB_EVP_PKEY_cmp(void);

int
LIBSTUB_X509_policy_level_node_count(void);

X509_ATTRIBUTE *
LIBSTUB_EVP_PKEY_get_attr(void);

GENERAL_SUBTREE *
LIBSTUB_GENERAL_SUBTREE_new(void);

STACK_OF(POLICYQUALINFO) *
LIBSTUB_X509_policy_node_get0_qualifiers(void);

const ASN1_OBJECT *
LIBSTUB_X509_policy_node_get0_policy(void);

PKCS12 *
LIBSTUB_PKCS12_add_safes(void);

int
LIBSTUB_BN_BLINDING_convert_ex(void);

void
LIBSTUB_X509_policy_tree_free(void);

unsigned int *
LIBSTUB_OPENSSL_ia32cap_loc(void);

const BIGNUM *
LIBSTUB_BN_get0_nist_prime_224(void);

int
LIBSTUB_BN_GENCB_call(void);

NAME_CONSTRAINTS *
LIBSTUB_NAME_CONSTRAINTS_new(void);

int
LIBSTUB_ECParameters_print(void);

int
LIBSTUB_X509_VERIFY_PARAM_set_trust(void);

int
LIBSTUB_EVP_PKEY_get_attr_count(void);

X509_VERIFY_PARAM *
LIBSTUB_X509_STORE_CTX_get0_param(void);

int
LIBSTUB_X509_STORE_set_depth(void);

int
LIBSTUB_ASN1_put_eoc(void);

void
LIBSTUB_X509_VERIFY_PARAM_table_cleanup(void);

BN_BLINDING *
LIBSTUB_RSA_setup_blinding(void);

int
LIBSTUB_sk_find_ex(void);

POLICY_CONSTRAINTS *
LIBSTUB_POLICY_CONSTRAINTS_new(void);

int
LIBSTUB_X509_VERIFY_PARAM_get_depth(void);

int
LIBSTUB_ASN1_item_ndef_i2d(void);

int
LIBSTUB_ERR_pop_to_mark(void);

X509_POLICY_NODE *
LIBSTUB_X509_policy_level_get0_node(void);

int
LIBSTUB_i2d_PKCS7_NDEF(void);

ASN1_TYPE *
LIBSTUB_ASN1_generate_v3(void);

int
LIBSTUB_X509_policy_tree_level_count(void);

int
LIBSTUB_BN_nist_mod_224(void);

int
LIBSTUB_BIO_dgram_non_fatal_error(void);

ASN1_BIT_STRING *
LIBSTUB_v2i_ASN1_BIT_STRING(void);

int
LIBSTUB_X509_STORE_CTX_set_default(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1(void);

GENERAL_NAME *
LIBSTUB_v2i_GENERAL_NAME_ex(void);

int
LIBSTUB_BN_nist_mod_521(void);

X509_POLICY_LEVEL *
LIBSTUB_X509_policy_tree_get0_level(void);

int
LIBSTUB_ASN1_const_check_infinite_end(void);

X509_ATTRIBUTE *
LIBSTUB_EVP_PKEY_delete_attr(void);

const BIGNUM *
LIBSTUB_BN_get0_nist_prime_256(void);

STACK_OF(CONF_VALUE) *
LIBSTUB_i2v_ASN1_BIT_STRING(void);

int
LIBSTUB_BN_nist_mod_384(void);

int
LIBSTUB_EVP_PKEY_get_attr_by_OBJ(void);

const X509_VERIFY_PARAM *
LIBSTUB_X509_VERIFY_PARAM_lookup(void);

int
LIBSTUB_X509V3_NAME_from_section(void);

int
LIBSTUB_EVP_PKEY_add1_attr(void);

int
LIBSTUB_BIO_dump_indent_cb(void);

int
LIBSTUB_BN_nist_mod_256(void);

int
LIBSTUB_X509_VERIFY_PARAM_add0_table(void);

BN_BLINDING *
LIBSTUB_BN_BLINDING_create_param(void);

const BIGNUM *
LIBSTUB_BN_get0_nist_prime_521(void);

int
LIBSTUB_BN_is_prime_fasttest_ex(void);

int
LIBSTUB_X509_policy_check(void);

int
LIBSTUB_EVP_PKEY_get_attr_by_NID(void);

unsigned long
LIBSTUB_BN_BLINDING_get_flags(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_add_cert(void);

int
LIBSTUB_EVP_CIPHER_CTX_rand_key(void);

ASN1_OCTET_STRING *
LIBSTUB_a2i_IPADDRESS_NC(void);

int
LIBSTUB_PKCS7_set_digest(void);

POLICY_MAPPING *
LIBSTUB_POLICY_MAPPING_new(void);

int
LIBSTUB_PKCS7_set0_type_other(void);

int
LIBSTUB_EVP_PKEY_add1_attr_by_OBJ(void);

void
LIBSTUB_X509_VERIFY_PARAM_set_time(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_add_key(void);

char *
LIBSTUB_DSO_merge(void);

int
LIBSTUB_BIO_dump_cb(void);

BIGNUM *
LIBSTUB_get_rfc3526_prime_8192(void);

int
LIBSTUB_X509_VERIFY_PARAM_clear_flags(void);

BIGNUM *
LIBSTUB_get_rfc2409_prime_1024(void);

BIGNUM *
LIBSTUB_get_rfc3526_prime_2048(void);

BIGNUM *
LIBSTUB_get_rfc3526_prime_6144(void);

BIGNUM *
LIBSTUB_get_rfc3526_prime_1536(void);

BIGNUM *
LIBSTUB_get_rfc3526_prime_3072(void);

BIGNUM *
LIBSTUB_get_rfc3526_prime_4096(void);

BIGNUM *
LIBSTUB_get_rfc2409_prime_768(void);

unsigned long
LIBSTUB_X509_VERIFY_PARAM_get_flags(void);

EVP_CIPHER_CTX *
LIBSTUB_EVP_CIPHER_CTX_new(void);

void
LIBSTUB_EVP_CIPHER_CTX_free(void);

int
LIBSTUB_a2i_ipadd(void);

int
LIBSTUB_EVP_CIPHER_block_size(void);

void
LIBSTUB_EVP_CIPHER_CTX_set_app_data(void);

int
LIBSTUB_BIO_method_type(void);

int
LIBSTUB_EVP_CIPHER_CTX_nid(void);

int
LIBSTUB_EVP_CIPHER_CTX_key_length(void);

int
LIBSTUB_EVP_MD_size(void);

int
LIBSTUB_EVP_MD_CTX_test_flags(void);

void
LIBSTUB_BIO_clear_flags(void);

int
LIBSTUB_EVP_MD_pkey_type(void);

void
LIBSTUB_EVP_MD_CTX_clear_flags(void);

unsigned long
LIBSTUB_EVP_CIPHER_flags(void);

long (*)(struct bio_st *,int,const char *,int, long,long)
LIBSTUB_BIO_get_callback(void);

int
LIBSTUB_EVP_CIPHER_key_length(void);

int
LIBSTUB_EVP_Cipher(void);

int
LIBSTUB_EVP_CIPHER_CTX_block_size(void);

const EVP_CIPHER *
LIBSTUB_EVP_CIPHER_CTX_cipher(void);

void *
LIBSTUB_EVP_CIPHER_CTX_get_app_data(void);

int
LIBSTUB_EVP_MD_block_size(void);

const EVP_MD *
LIBSTUB_EVP_MD_CTX_md(void);

const char *
LIBSTUB_BIO_method_name(void);

int
LIBSTUB_EVP_CIPHER_CTX_iv_length(void);

int
LIBSTUB_CRYPTO_memcmp(void);

void
LIBSTUB_BN_consttime_swap(void);

int
LIBSTUB_i2d_X509_EXTENSIONS(void);

X509_EXTENSIONS *
LIBSTUB_d2i_X509_EXTENSIONS(void);

void
LIBSTUB_X509_ALGOR_get0(void);

int
LIBSTUB_X509_ALGOR_set0(void);

void *
LIBSTUB_X509at_get0_data_by_OBJ(void);

int
LIBSTUB_ASN1_TYPE_set1(void);

void
LIBSTUB_ASN1_STRING_set0(void);

int
LIBSTUB_i2d_X509_ALGORS(void);

void
LIBSTUB_COMP_zlib_cleanup(void);

X509_ALGORS *
LIBSTUB_d2i_X509_ALGORS(void);

ASN1_VALUE *
LIBSTUB_SMIME_read_ASN1(void);

int
LIBSTUB_OPENSSL_isservice(void);

void
LIBSTUB_EVP_CIPHER_CTX_clear_flags(void);

int
LIBSTUB_BN_X931_generate_prime_ex(void);

int
LIBSTUB_EVP_CIPHER_CTX_test_flags(void);

void
LIBSTUB_EVP_add_alg_module(void);

int
LIBSTUB_BN_X931_derive_prime_ex(void);

void
LIBSTUB_OPENSSL_init(void);

char *
LIBSTUB_CRYPTO_strdup(void);

int
LIBSTUB_i2d_TS_ACCURACY(void);

int
LIBSTUB_i2d_TS_MSG_IMPRINT(void);

int
LIBSTUB_EVP_PKEY_print_public(void);

EVP_PKEY_CTX *
LIBSTUB_EVP_PKEY_CTX_new(void);

int
LIBSTUB_i2d_TS_TST_INFO(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_EVP_PKEY_asn1_find(void);

X509 *
LIBSTUB_TS_CONF_load_cert(void);

X509_EXTENSION *
LIBSTUB_TS_REQ_get_ext(void);

int
LIBSTUB_EVP_PKEY_sign_init(void);

int
LIBSTUB_ASN1_item_print(void);

int
LIBSTUB_TS_TST_INFO_set_nonce(void);

TS_RESP *
LIBSTUB_TS_RESP_dup(void);

int
LIBSTUB_EVP_PKEY_asn1_add0(void);

int
LIBSTUB_PKCS7_add0_attrib_signing_time(void);

int
LIBSTUB_BIO_asn1_get_prefix(void);

int
LIBSTUB_TS_TST_INFO_set_time(void);

void
LIBSTUB_EVP_PKEY_meth_set_decrypt(void);

int
LIBSTUB_EVP_PKEY_set_type_str(void);

int
LIBSTUB_EVP_PKEY_CTX_get_keygen_info(void);

int
LIBSTUB_TS_REQ_set_policy_id(void);

int
LIBSTUB_TS_RESP_set_status_info(void);

int
LIBSTUB_EVP_PKEY_keygen(void);

int
LIBSTUB_EVP_DigestSignInit(void);

int
LIBSTUB_TS_ACCURACY_set_millis(void);

TS_REQ *
LIBSTUB_TS_REQ_dup(void);

GENERAL_NAME *
LIBSTUB_GENERAL_NAME_dup(void);

STACK_OF(X509_CRL) *
LIBSTUB_X509_STORE_get1_crls(void);

EVP_PKEY_ASN1_METHOD *
LIBSTUB_EVP_PKEY_asn1_new(void);

BIO *
LIBSTUB_BIO_new_NDEF(void);

int
LIBSTUB_TS_MSG_IMPRINT_set_algo(void);

int
LIBSTUB_i2d_TS_TST_INFO_bio(void);

int
LIBSTUB_TS_TST_INFO_set_ordering(void);

int
LIBSTUB_TS_TST_INFO_get_ext_by_OBJ(void);

const char *
LIBSTUB_TS_CONF_get_tsa_section(void);

int
LIBSTUB_SMIME_write_ASN1(void);

int
LIBSTUB_TS_RESP_CTX_set_signer_key(void);

int
LIBSTUB_EVP_PKEY_encrypt_old(void);

int
LIBSTUB_EVP_PKEY_encrypt_init(void);

unsigned long
LIBSTUB_ASN1_PCTX_get_cert_flags(void);

int
LIBSTUB_i2d_ESS_SIGNING_CERT(void);

EVP_PKEY *
LIBSTUB_TS_CONF_load_key(void);

int
LIBSTUB_i2d_ASN1_SEQUENCE_ANY(void);

TS_MSG_IMPRINT *
LIBSTUB_d2i_TS_MSG_IMPRINT_bio(void);

void
LIBSTUB_EVP_PKEY_asn1_set_public(void);

EVP_PKEY *
LIBSTUB_b2i_PublicKey_bio(void);

int
LIBSTUB_BIO_asn1_set_prefix(void);

EVP_PKEY *
LIBSTUB_EVP_PKEY_new_mac_key(void);

void
LIBSTUB_TS_REQ_ext_free(void);

void
LIBSTUB_EVP_PKEY_asn1_set_free(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_EVP_PKEY_get0_asn1(void);

int
LIBSTUB_EVP_PKEY_verify_recover_init(void);

void
LIBSTUB_EVP_PKEY_CTX_set_data(void);

int
LIBSTUB_EVP_PKEY_keygen_init(void);

int
LIBSTUB_TS_RESP_CTX_set_status_info(void);

X509_ALGOR *
LIBSTUB_TS_MSG_IMPRINT_get_algo(void);

int
LIBSTUB_TS_REQ_print_bio(void);

int
LIBSTUB_EVP_PKEY_CTX_ctrl_str(void);

int
LIBSTUB_EVP_PKEY_get_default_digest_nid(void);

int
LIBSTUB_PEM_write_bio_PKCS7_stream(void);

int
LIBSTUB_TS_MSG_IMPRINT_print_bio(void);

int
LIBSTUB_BN_asc2bn(void);

ASN1_OBJECT *
LIBSTUB_TS_REQ_get_policy_id(void);

TS_ACCURACY *
LIBSTUB_d2i_TS_ACCURACY(void);

void *
LIBSTUB_DSO_global_lookup(void);

int
LIBSTUB_TS_CONF_set_tsa_name(void);

unsigned long
LIBSTUB_ASN1_PCTX_get_flags(void);

int
LIBSTUB_TS_TST_INFO_get_ext_by_NID(void);

TS_RESP *
LIBSTUB_TS_RESP_new(void);

ESS_CERT_ID *
LIBSTUB_ESS_CERT_ID_dup(void);

TS_STATUS_INFO *
LIBSTUB_TS_STATUS_INFO_dup(void);

X509_EXTENSION *
LIBSTUB_TS_REQ_delete_ext(void);

int
LIBSTUB_EVP_DigestVerifyFinal(void);

int
LIBSTUB_EVP_PKEY_print_params(void);

TS_MSG_IMPRINT *
LIBSTUB_TS_REQ_get_msg_imprint(void);

int
LIBSTUB_OBJ_find_sigid_by_algs(void);

const ASN1_INTEGER *
LIBSTUB_TS_TST_INFO_get_serial(void);

const ASN1_INTEGER *
LIBSTUB_TS_REQ_get_nonce(void);

int
LIBSTUB_X509_PUBKEY_set0_param(void);

void
LIBSTUB_EVP_PKEY_CTX_set0_keygen_info(void);

int
LIBSTUB_DIST_POINT_set_dpname(void);

int
LIBSTUB_i2d_ISSUING_DIST_POINT(void);

void *
LIBSTUB_EVP_PKEY_CTX_get_data(void);

int
LIBSTUB_TS_STATUS_INFO_print_bio(void);

int
LIBSTUB_EVP_PKEY_derive_init(void);

TS_TST_INFO *
LIBSTUB_d2i_TS_TST_INFO(void);

int
LIBSTUB_EVP_PKEY_asn1_add_alias(void);

TS_RESP *
LIBSTUB_d2i_TS_RESP_bio(void);

int
LIBSTUB_OTHERNAME_cmp(void);

void
LIBSTUB_GENERAL_NAME_set0_value(void);

void
LIBSTUB_PKCS7_RECIP_INFO_get0_alg(void);

TS_RESP_CTX *
LIBSTUB_TS_RESP_CTX_new(void);

void
LIBSTUB_TS_RESP_set_tst_info(void);

int
LIBSTUB_PKCS7_final(void);

int
LIBSTUB_EVP_PKEY_base_id(void);

int
LIBSTUB_TS_RESP_CTX_set_signer_cert(void);

int
LIBSTUB_TS_REQ_set_msg_imprint(void);

int
LIBSTUB_EVP_PKEY_CTX_ctrl(void);

int
LIBSTUB_TS_CONF_set_digests(void);

TS_MSG_IMPRINT *
LIBSTUB_d2i_TS_MSG_IMPRINT(void);

void
LIBSTUB_EVP_PKEY_meth_set_ctrl(void);

int
LIBSTUB_TS_REQ_get_ext_by_NID(void);

int
LIBSTUB_PKCS5_pbe_set0_algor(void);

TS_ACCURACY *
LIBSTUB_TS_ACCURACY_new(void);

void
LIBSTUB_X509_CRL_METHOD_free(void);

unsigned long
LIBSTUB_ASN1_PCTX_get_nm_flags(void);

void
LIBSTUB_EVP_PKEY_meth_set_sign(void);

int
LIBSTUB_EVP_PKEY_decrypt_init(void);

int
LIBSTUB_i2b_PVK_bio(void);

int
LIBSTUB_EVP_PKEY_print_private(void);

void *
LIBSTUB_GENERAL_NAME_get0_value(void);

EVP_PKEY *
LIBSTUB_b2i_PVK_bio(void);

ASN1_UTCTIME *
LIBSTUB_ASN1_UTCTIME_adj(void);

TS_TST_INFO *
LIBSTUB_TS_TST_INFO_new(void);

void
LIBSTUB_EVP_MD_do_all_sorted(void);

int
LIBSTUB_TS_CONF_set_default_engine(void);

int
LIBSTUB_TS_ACCURACY_set_seconds(void);

const ASN1_GENERALIZEDTIME *
LIBSTUB_TS_TST_INFO_get_time(void);

int
LIBSTUB_PKCS8_pkey_get0(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_EVP_PKEY_asn1_get0(void);

int
LIBSTUB_OBJ_add_sigid(void);

int
LIBSTUB_PKCS7_SIGNER_INFO_sign(void);

int
LIBSTUB_EVP_PKEY_paramgen_init(void);

int
LIBSTUB_EVP_PKEY_sign(void);

void
LIBSTUB_OBJ_sigid_free(void);

void
LIBSTUB_EVP_PKEY_meth_set_init(void);

ESS_ISSUER_SERIAL *
LIBSTUB_d2i_ESS_ISSUER_SERIAL(void);

ISSUING_DIST_POINT *
LIBSTUB_ISSUING_DIST_POINT_new(void);

ASN1_TIME *
LIBSTUB_ASN1_TIME_adj(void);

int
LIBSTUB_TS_OBJ_print_bio(void);

void
LIBSTUB_EVP_PKEY_meth_set_verify_recover(void);

TS_STATUS_INFO *
LIBSTUB_TS_RESP_get_status_info(void);

void
LIBSTUB_EVP_PKEY_CTX_set_cb(void);

TS_TST_INFO *
LIBSTUB_PKCS7_to_TS_TST_INFO(void);

unsigned long
LIBSTUB_ASN1_PCTX_get_oid_flags(void);

int
LIBSTUB_TS_TST_INFO_add_ext(void);

void
LIBSTUB_EVP_PKEY_meth_set_derive(void);

int
LIBSTUB_i2d_TS_MSG_IMPRINT_bio(void);

int
LIBSTUB_TS_RESP_CTX_set_accuracy(void);

int
LIBSTUB_TS_REQ_set_nonce(void);

ESS_CERT_ID *
LIBSTUB_ESS_CERT_ID_new(void);

int
LIBSTUB_TS_REQ_get_ext_count(void);

void
LIBSTUB_BUF_reverse(void);

int
LIBSTUB_TS_TST_INFO_print_bio(void);

ISSUING_DIST_POINT *
LIBSTUB_d2i_ISSUING_DIST_POINT(void);

int
LIBSTUB_i2b_PrivateKey_bio(void);

int
LIBSTUB_i2d_TS_RESP(void);

EVP_PKEY *
LIBSTUB_b2i_PublicKey(void);

void
LIBSTUB_TS_VERIFY_CTX_cleanup(void);

void
LIBSTUB_TS_STATUS_INFO_free(void);

int
LIBSTUB_TS_RESP_verify_token(void);

const void *
LIBSTUB_OBJ_bsearch_ex_(void);

int
LIBSTUB_ASN1_bn_print(void);

int
LIBSTUB_EVP_PKEY_asn1_get_count(void);

void
LIBSTUB_ASN1_PCTX_set_nm_flags(void);

int
LIBSTUB_EVP_DigestVerifyInit(void);

ASN1_OBJECT *
LIBSTUB_TS_TST_INFO_get_policy_id(void);

int
LIBSTUB_TS_REQ_get_cert_req(void);

void
LIBSTUB_X509_CRL_set_meth_data(void);

int
LIBSTUB_PKCS8_pkey_set0(void);

int
LIBSTUB_ASN1_STRING_copy(void);

int
LIBSTUB_X509_CRL_match(void);

void
LIBSTUB_EVP_PKEY_asn1_set_private(void);

void *
LIBSTUB_TS_TST_INFO_get_ext_d2i(void);

int
LIBSTUB_TS_RESP_CTX_add_policy(void);

TS_RESP *
LIBSTUB_d2i_TS_RESP(void);

STACK_OF(X509) *
LIBSTUB_TS_CONF_load_certs(void);

TS_MSG_IMPRINT *
LIBSTUB_TS_TST_INFO_get_msg_imprint(void);

void
LIBSTUB_ERR_load_TS_strings(void);

long
LIBSTUB_TS_TST_INFO_get_version(void);

EVP_PKEY_CTX *
LIBSTUB_EVP_PKEY_CTX_dup(void);

void
LIBSTUB_EVP_PKEY_meth_set_verify(void);

int
LIBSTUB_i2b_PublicKey_bio(void);

int
LIBSTUB_TS_CONF_set_certs(void);

int
LIBSTUB_EVP_PKEY_asn1_get0_info(void);

void
LIBSTUB_TS_VERIFY_CTX_free(void);

int
LIBSTUB_TS_REQ_get_ext_by_critical(void);

void
LIBSTUB_TS_RESP_CTX_set_serial_cb(void);

void *
LIBSTUB_X509_CRL_get_meth_data(void);

void
LIBSTUB_TS_RESP_CTX_set_time_cb(void);

ASN1_OCTET_STRING *
LIBSTUB_TS_MSG_IMPRINT_get_msg(void);

void
LIBSTUB_TS_TST_INFO_ext_free(void);

long
LIBSTUB_TS_REQ_get_version(void);

int
LIBSTUB_TS_REQ_add_ext(void);

void
LIBSTUB_EVP_PKEY_CTX_set_app_data(void);

const void *
LIBSTUB_OBJ_bsearch_(void);

void
LIBSTUB_EVP_PKEY_meth_set_verifyctx(void);

int
LIBSTUB_i2d_PKCS7_bio_stream(void);

PKCS7_SIGNER_INFO *
LIBSTUB_PKCS7_sign_add_signer(void);

TS_TST_INFO *
LIBSTUB_d2i_TS_TST_INFO_bio(void);

int
LIBSTUB_TS_TST_INFO_get_ordering(void);

int
LIBSTUB_TS_RESP_print_bio(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_TS_TST_INFO_get_exts(void);

X509_ALGOR *
LIBSTUB_PKCS5_pbe2_set_iv(void);

EVP_PKEY *
LIBSTUB_b2i_PrivateKey(void);

void *
LIBSTUB_EVP_PKEY_CTX_get_app_data(void);

int
LIBSTUB_TS_REQ_set_cert_req(void);

int
LIBSTUB_TS_CONF_set_serial(void);

void
LIBSTUB_TS_TST_INFO_free(void);

int
LIBSTUB_TS_RESP_verify_response(void);

int
LIBSTUB_i2d_ESS_ISSUER_SERIAL(void);

const ASN1_INTEGER *
LIBSTUB_TS_ACCURACY_get_seconds(void);

void
LIBSTUB_EVP_CIPHER_do_all(void);

EVP_PKEY *
LIBSTUB_b2i_PrivateKey_bio(void);

OCSP_CERTID *
LIBSTUB_OCSP_CERTID_dup(void);

int
LIBSTUB_X509_PUBKEY_get0_param(void);

TS_MSG_IMPRINT *
LIBSTUB_TS_MSG_IMPRINT_dup(void);

void
LIBSTUB_PKCS7_print_ctx(void);

int
LIBSTUB_i2d_TS_REQ_bio(void);

void
LIBSTUB_EVP_PKEY_asn1_set_param(void);

void
LIBSTUB_EVP_PKEY_meth_set_encrypt(void);

void
LIBSTUB_ASN1_PCTX_set_flags(void);

int
LIBSTUB_i2d_ESS_CERT_ID(void);

TS_VERIFY_CTX *
LIBSTUB_TS_VERIFY_CTX_new(void);

void
LIBSTUB_TS_RESP_CTX_set_extension_cb(void);

int
LIBSTUB_TS_RESP_CTX_set_status_info_cond(void);

int
LIBSTUB_EVP_PKEY_verify(void);

X509_CRL_METHOD *
LIBSTUB_X509_CRL_METHOD_new(void);

int
LIBSTUB_EVP_DigestSignFinal(void);

int
LIBSTUB_TS_RESP_CTX_set_def_policy(void);

TS_RESP *
LIBSTUB_TS_RESP_create_response(void);

void
LIBSTUB_PKCS7_SIGNER_INFO_get0_algs(void);

const ASN1_INTEGER *
LIBSTUB_TS_TST_INFO_get_nonce(void);

int
LIBSTUB_EVP_PKEY_decrypt_old(void);

int
LIBSTUB_TS_TST_INFO_set_policy_id(void);

int
LIBSTUB_TS_CONF_set_ess_cert_id_chain(void);

EVP_PKEY *
LIBSTUB_EVP_PKEY_CTX_get0_pkey(void);

TS_REQ *
LIBSTUB_d2i_TS_REQ(void);

const EVP_PKEY_ASN1_METHOD *
LIBSTUB_EVP_PKEY_asn1_find_str(void);

BIO_METHOD *
LIBSTUB_BIO_f_asn1(void);

ESS_SIGNING_CERT *
LIBSTUB_ESS_SIGNING_CERT_new(void);

int
LIBSTUB_EVP_PBE_find(void);

int
LIBSTUB_X509_CRL_get0_by_cert(void);

int
LIBSTUB_EVP_PKEY_derive(void);

int
LIBSTUB_i2d_TS_REQ(void);

X509_EXTENSION *
LIBSTUB_TS_TST_INFO_delete_ext(void);

void
LIBSTUB_ESS_ISSUER_SERIAL_free(void);

void
LIBSTUB_ASN1_PCTX_set_str_flags(void);

int
LIBSTUB_TS_CONF_set_signer_key(void);

const ASN1_INTEGER *
LIBSTUB_TS_ACCURACY_get_millis(void);

PKCS7 *
LIBSTUB_TS_RESP_get_token(void);

TS_ACCURACY *
LIBSTUB_TS_ACCURACY_dup(void);

void
LIBSTUB_X509_CRL_set_default_method(void);

void
LIBSTUB_TS_RESP_free(void);

void
LIBSTUB_ISSUING_DIST_POINT_free(void);

ESS_ISSUER_SERIAL *
LIBSTUB_ESS_ISSUER_SERIAL_new(void);

int
LIBSTUB_PKCS7_add1_attrib_digest(void);

int
LIBSTUB_TS_RESP_CTX_add_md(void);

TS_TST_INFO *
LIBSTUB_TS_TST_INFO_dup(void);

int
LIBSTUB_PEM_write_bio_Parameters(void);

TS_ACCURACY *
LIBSTUB_TS_TST_INFO_get_accuracy(void);

int
LIBSTUB_X509_CRL_get0_by_serial(void);

int
LIBSTUB_TS_TST_INFO_set_version(void);

TS_TST_INFO *
LIBSTUB_TS_RESP_CTX_get_tst_info(void);

int
LIBSTUB_TS_RESP_verify_signature(void);

GENERAL_NAME *
LIBSTUB_TS_TST_INFO_get_tsa(void);

TS_STATUS_INFO *
LIBSTUB_TS_STATUS_INFO_new(void);

int (*)(EVP_PKEY_CTX *ctx)
LIBSTUB_EVP_PKEY_CTX_get_cb(void);

void *
LIBSTUB_TS_REQ_get_ext_d2i(void);

int
LIBSTUB_GENERAL_NAME_set0_othername(void);

int
LIBSTUB_TS_TST_INFO_get_ext_count(void);

TS_REQ *
LIBSTUB_TS_RESP_CTX_get_request(void);

void
LIBSTUB_EVP_PKEY_meth_set_signctx(void);

void
LIBSTUB_EVP_PKEY_asn1_copy(void);

int
LIBSTUB_ASN1_TYPE_cmp(void);

void
LIBSTUB_EVP_CIPHER_do_all_sorted(void);

void
LIBSTUB_EVP_PKEY_CTX_free(void);

STACK_OF(X509) *
LIBSTUB_X509_STORE_get1_certs(void);

int
LIBSTUB_EVP_PKEY_CTX_get_operation(void);

ESS_SIGNING_CERT *
LIBSTUB_d2i_ESS_SIGNING_CERT(void);

int
LIBSTUB_TS_CONF_set_ordering(void);

int
LIBSTUB_EVP_PBE_alg_add_type(void);

int
LIBSTUB_TS_REQ_set_version(void);

void *
LIBSTUB_EVP_PKEY_get0(void);

int
LIBSTUB_BIO_asn1_set_suffix(void);

int
LIBSTUB_i2d_TS_STATUS_INFO(void);

void
LIBSTUB_EVP_MD_do_all(void);

int
LIBSTUB_TS_TST_INFO_set_accuracy(void);

int
LIBSTUB_PKCS7_add_attrib_content_type(void);

int
LIBSTUB_EVP_PKEY_meth_add0(void);

int
LIBSTUB_TS_TST_INFO_set_tsa(void);

EVP_PKEY_METHOD *
LIBSTUB_EVP_PKEY_meth_new(void);

int
LIBSTUB_TS_CONF_set_accuracy(void);

void
LIBSTUB_ASN1_PCTX_set_oid_flags(void);

ESS_SIGNING_CERT *
LIBSTUB_ESS_SIGNING_CERT_dup(void);

TS_REQ *
LIBSTUB_d2i_TS_REQ_bio(void);

ASN1_TIME *
LIBSTUB_X509_time_adj_ex(void);

void
LIBSTUB_TS_RESP_CTX_add_flags(void);

TS_STATUS_INFO *
LIBSTUB_d2i_TS_STATUS_INFO(void);

int
LIBSTUB_TS_MSG_IMPRINT_set_msg(void);

int
LIBSTUB_BIO_asn1_get_suffix(void);

void
LIBSTUB_TS_REQ_free(void);

void
LIBSTUB_EVP_PKEY_meth_free(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_TS_REQ_get_exts(void);

int
LIBSTUB_TS_RESP_CTX_set_clock_precision_digits(void);

int
LIBSTUB_TS_RESP_CTX_add_failure_info(void);

int
LIBSTUB_i2d_TS_RESP_bio(void);

EVP_PKEY *
LIBSTUB_EVP_PKEY_CTX_get0_peerkey(void);

TS_REQ *
LIBSTUB_TS_REQ_new(void);

TS_MSG_IMPRINT *
LIBSTUB_TS_MSG_IMPRINT_new(void);

const EVP_PKEY_METHOD *
LIBSTUB_EVP_PKEY_meth_find(void);

int
LIBSTUB_EVP_PKEY_id(void);

int
LIBSTUB_TS_TST_INFO_set_serial(void);

GENERAL_NAME *
LIBSTUB_a2i_GENERAL_NAME(void);

int
LIBSTUB_TS_CONF_set_crypto_device(void);

int
LIBSTUB_EVP_PKEY_verify_init(void);

int
LIBSTUB_TS_CONF_set_policies(void);

ASN1_PCTX *
LIBSTUB_ASN1_PCTX_new(void);

void
LIBSTUB_ESS_CERT_ID_free(void);

void
LIBSTUB_TS_MSG_IMPRINT_free(void);

void
LIBSTUB_TS_VERIFY_CTX_init(void);

int
LIBSTUB_PKCS7_stream(void);

int
LIBSTUB_TS_RESP_CTX_set_certs(void);

int
LIBSTUB_TS_CONF_set_def_policy(void);

ASN1_GENERALIZEDTIME *
LIBSTUB_ASN1_GENERALIZEDTIME_adj(void);

void
LIBSTUB_TS_ACCURACY_free(void);

TS_TST_INFO *
LIBSTUB_TS_RESP_get_tst_info(void);

int
LIBSTUB_EVP_PKEY_derive_set_peer(void);

EVP_PKEY *
LIBSTUB_PEM_read_bio_Parameters(void);

int
LIBSTUB_TS_CONF_set_clock_precision_digits(void);

ESS_ISSUER_SERIAL *
LIBSTUB_ESS_ISSUER_SERIAL_dup(void);

const ASN1_INTEGER *
LIBSTUB_TS_ACCURACY_get_micros(void);

unsigned long
LIBSTUB_ASN1_PCTX_get_str_flags(void);

int
LIBSTUB_NAME_CONSTRAINTS_check(void);

int
LIBSTUB_ASN1_BIT_STRING_check(void);

int
LIBSTUB_X509_check_akid(void);

void
LIBSTUB_ASN1_PCTX_free(void);

int
LIBSTUB_PEM_write_bio_ASN1_stream(void);

int
LIBSTUB_i2d_ASN1_bio_stream(void);

int
LIBSTUB_TS_X509_ALGOR_print_bio(void);

void
LIBSTUB_EVP_PKEY_meth_set_cleanup(void);

void
LIBSTUB_EVP_PKEY_asn1_free(void);

void
LIBSTUB_ESS_SIGNING_CERT_free(void);

int
LIBSTUB_TS_TST_INFO_set_msg_imprint(void);

int
LIBSTUB_GENERAL_NAME_cmp(void);

ASN1_SEQUENCE_ANY *
LIBSTUB_d2i_ASN1_SEQUENCE_ANY(void);

int
LIBSTUB_GENERAL_NAME_get0_otherName(void);

ESS_CERT_ID *
LIBSTUB_d2i_ESS_CERT_ID(void);

int
LIBSTUB_OBJ_find_sigid_algs(void);

void
LIBSTUB_EVP_PKEY_meth_set_keygen(void);

int
LIBSTUB_PKCS5_PBKDF2_HMAC(void);

int
LIBSTUB_EVP_PKEY_paramgen(void);

void
LIBSTUB_EVP_PKEY_meth_set_paramgen(void);

BIO *
LIBSTUB_BIO_new_PKCS7(void);

int
LIBSTUB_EVP_PKEY_verify_recover(void);

int
LIBSTUB_TS_ext_print_bio(void);

int
LIBSTUB_TS_ASN1_INTEGER_print_bio(void);

void
LIBSTUB_check_defer(void);

int
LIBSTUB_DSO_pathbyaddr(void);

int
LIBSTUB_EVP_PKEY_set_type(void);

int
LIBSTUB_TS_ACCURACY_set_micros(void);

TS_VERIFY_CTX *
LIBSTUB_TS_REQ_to_TS_VERIFY_CTX(void);

void
LIBSTUB_EVP_PKEY_meth_set_copy(void);

void
LIBSTUB_ASN1_PCTX_set_cert_flags(void);

X509_EXTENSION *
LIBSTUB_TS_TST_INFO_get_ext(void);

void
LIBSTUB_EVP_PKEY_asn1_set_ctrl(void);

int
LIBSTUB_TS_TST_INFO_get_ext_by_critical(void);

EVP_PKEY_CTX *
LIBSTUB_EVP_PKEY_CTX_new_id(void);

int
LIBSTUB_TS_REQ_get_ext_by_OBJ(void);

int
LIBSTUB_TS_CONF_set_signer_cert(void);

unsigned long
LIBSTUB_X509_NAME_hash_old(void);

int
LIBSTUB_ASN1_TIME_set_string(void);

unsigned long
LIBSTUB_EVP_MD_flags(void);

void
LIBSTUB_TS_RESP_CTX_free(void);

int
LIBSTUB_OCSP_REQ_CTX_add1_header(void);

int
LIBSTUB_OCSP_REQ_CTX_set1_req(void);

void
LIBSTUB_X509_STORE_set_verify_cb(void);

X509_CRL *
LIBSTUB_X509_STORE_CTX_get0_current_crl(void);

X509_STORE_CTX *
LIBSTUB_X509_STORE_CTX_get0_parent_ctx(void);

X509 *
LIBSTUB_X509_STORE_CTX_get0_current_issuer(void);

int
LIBSTUB_EVP_CIPHER_CTX_copy(void);

char *(*)(UI*, const char*, const char*)
LIBSTUB_UI_method_get_prompt_constructor(void);

int
LIBSTUB_UI_method_set_prompt_constructor(void);

int
LIBSTUB_EVP_read_pw_string_min(void);

size_t
LIBSTUB_CRYPTO_cts128_encrypt(void);

size_t
LIBSTUB_CRYPTO_cts128_decrypt_block(void);

void
LIBSTUB_CRYPTO_cfb128_1_encrypt(void);

void
LIBSTUB_CRYPTO_cbc128_encrypt(void);

void
LIBSTUB_CRYPTO_ctr128_encrypt(void);

void
LIBSTUB_CRYPTO_ofb128_encrypt(void);

size_t
LIBSTUB_CRYPTO_cts128_decrypt(void);

size_t
LIBSTUB_CRYPTO_cts128_encrypt_block(void);

void
LIBSTUB_CRYPTO_cbc128_decrypt(void);

void
LIBSTUB_CRYPTO_cfb128_encrypt(void);

void
LIBSTUB_CRYPTO_cfb128_8_encrypt(void);

int
LIBSTUB_OPENSSL_strcasecmp(void);

int
LIBSTUB_OPENSSL_memcmp(void);

int
LIBSTUB_OPENSSL_strncasecmp(void);

struct tm *
LIBSTUB_OPENSSL_gmtime(void);

int
LIBSTUB_OPENSSL_gmtime_adj(void);

int
LIBSTUB_OPENSSL_gmtime_diff(void);

void
LIBSTUB_EVP_PKEY_meth_get0_info(void);

void
LIBSTUB_EVP_PKEY_meth_copy(void);

int
LIBSTUB_RSA_padding_add_PKCS1_PSS_mgf1(void);

int
LIBSTUB_RSA_verify_PKCS1_PSS_mgf1(void);

void
LIBSTUB_X509_ALGOR_set_md(void);

int
LIBSTUB_CMAC_CTX_copy(void);

void
LIBSTUB_CMAC_CTX_free(void);

EVP_CIPHER_CTX *
LIBSTUB_CMAC_CTX_get0_cipher_ctx(void);

void
LIBSTUB_CMAC_CTX_cleanup(void);

int
LIBSTUB_CMAC_Init(void);

int
LIBSTUB_CMAC_Update(void);

int
LIBSTUB_CMAC_resume(void);

CMAC_CTX *
LIBSTUB_CMAC_CTX_new(void);

int
LIBSTUB_CMAC_Final(void);

void
LIBSTUB_CRYPTO_ctr128_encrypt_ctr32(void);

void
LIBSTUB_CRYPTO_gcm128_release(void);

int
LIBSTUB_CRYPTO_ccm128_decrypt_ccm64(void);

int
LIBSTUB_CRYPTO_ccm128_encrypt(void);

int
LIBSTUB_CRYPTO_gcm128_encrypt(void);

int
LIBSTUB_CRYPTO_xts128_encrypt(void);

size_t
LIBSTUB_CRYPTO_nistcts128_decrypt_block(void);

void
LIBSTUB_CRYPTO_gcm128_setiv(void);

size_t
LIBSTUB_CRYPTO_nistcts128_encrypt(void);

void
LIBSTUB_CRYPTO_gcm128_tag(void);

int
LIBSTUB_CRYPTO_ccm128_encrypt_ccm64(void);

int
LIBSTUB_CRYPTO_ccm128_setiv(void);

size_t
LIBSTUB_CRYPTO_nistcts128_encrypt_block(void);

int
LIBSTUB_CRYPTO_gcm128_aad(void);

void
LIBSTUB_CRYPTO_ccm128_init(void);

size_t
LIBSTUB_CRYPTO_nistcts128_decrypt(void);

GCM128_CONTEXT *
LIBSTUB_CRYPTO_gcm128_new(void);

size_t
LIBSTUB_CRYPTO_ccm128_tag(void);

int
LIBSTUB_CRYPTO_ccm128_decrypt(void);

void
LIBSTUB_CRYPTO_ccm128_aad(void);

void
LIBSTUB_CRYPTO_gcm128_init(void);

int
LIBSTUB_CRYPTO_gcm128_decrypt(void);

int
LIBSTUB_CRYPTO_gcm128_decrypt_ctr32(void);

int
LIBSTUB_CRYPTO_gcm128_encrypt_ctr32(void);

int
LIBSTUB_CRYPTO_gcm128_finish(void);

X509_ALGOR *
LIBSTUB_PKCS5_pbkdf2_set(void);

RSA_PSS_PARAMS *
LIBSTUB_RSA_PSS_PARAMS_new(void);

RSA_PSS_PARAMS *
LIBSTUB_d2i_RSA_PSS_PARAMS(void);

void
LIBSTUB_RSA_PSS_PARAMS_free(void);

int
LIBSTUB_i2d_RSA_PSS_PARAMS(void);

const ASN1_ITEM *
LIBSTUB_POLICY_MAPPING_it(void);

const ASN1_ITEM *
LIBSTUB_NAME_CONSTRAINTS_it(void);

const ASN1_ITEM *
LIBSTUB_ASN1_OCTET_STRING_NDEF_it(void);

const ASN1_ITEM *
LIBSTUB_POLICY_CONSTRAINTS_it(void);

const ASN1_ITEM *
LIBSTUB_POLICY_MAPPINGS_it(void);

const ASN1_ITEM *
LIBSTUB_GENERAL_SUBTREE_it(void);

const ASN1_ITEM *
LIBSTUB_X509_EXTENSIONS_it(void);

const ASN1_ITEM *
LIBSTUB_X509_ALGORS_it(void);

const ASN1_ITEM *
LIBSTUB_CMS_ContentInfo_it(void);

const ASN1_ITEM *
LIBSTUB_CMS_ReceiptRequest_it(void);

const ASN1_ITEM *
LIBSTUB_ASN1_SEQUENCE_ANY_it(void);

const ASN1_ITEM *
LIBSTUB_ASN1_SET_ANY_it(void);

const ASN1_ITEM *
LIBSTUB_ISSUING_DIST_POINT_it(void);

const ASN1_ITEM *
LIBSTUB_RSA_PSS_PARAMS_it(void);

int
LIBSTUB_PEM_write_bio_DHxparams(void);

int
LIBSTUB_X509_ALGOR_cmp(void);

void
LIBSTUB_ASN1_STRING_clear_free(void);

int
LIBSTUB_ASN1_TIME_diff(void);

int
LIBSTUB_BIO_hex_string(void);

int
LIBSTUB_CMS_RecipientEncryptedKey_cert_cmp(void);

int
LIBSTUB_CMS_RecipientEncryptedKey_get0_id(void);

int
LIBSTUB_CMS_RecipientInfo_encrypt(void);

EVP_PKEY_CTX *
LIBSTUB_CMS_RecipientInfo_get0_pkey_ctx(void);

int
LIBSTUB_CMS_RecipientInfo_kari_decrypt(void);

int
LIBSTUB_CMS_RecipientInfo_kari_get0_alg(void);

EVP_CIPHER_CTX *
LIBSTUB_CMS_RecipientInfo_kari_get0_ctx(void);

int
LIBSTUB_CMS_RecipientInfo_kari_get0_orig_id(void);

STACK_OF(CMS_RecipientEncryptedKey) *
LIBSTUB_CMS_RecipientInfo_kari_get0_reks(void);

int
LIBSTUB_CMS_RecipientInfo_kari_orig_id_cmp(void);

int
LIBSTUB_CMS_RecipientInfo_kari_set0_pkey(void);

int
LIBSTUB_CMS_SharedInfo_encode(void);

EVP_MD_CTX *
LIBSTUB_CMS_SignerInfo_get0_md_ctx(void);

EVP_PKEY_CTX *
LIBSTUB_CMS_SignerInfo_get0_pkey_ctx(void);

ASN1_OCTET_STRING *
LIBSTUB_CMS_SignerInfo_get0_signature(void);

DH *
LIBSTUB_d2i_DHxparams(void);

int
LIBSTUB_i2d_DHxparams(void);

int
LIBSTUB_DH_compute_key_padded(void);

DH *
LIBSTUB_DH_get_1024_160(void);

DH *
LIBSTUB_DH_get_2048_224(void);

DH *
LIBSTUB_DH_get_2048_256(void);

int
LIBSTUB_DH_KDF_X9_42(void);

const char *
LIBSTUB_EC_curve_nid2nist(void);

int
LIBSTUB_EC_curve_nist2nid(void);

BN_MONT_CTX *
LIBSTUB_EC_GROUP_get_mont_data(void);

int
LIBSTUB_ECDH_KDF_X9_62(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_cbc_hmac_sha256(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_wrap(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_wrap(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_cbc_hmac_sha256(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_wrap(void);

const EVP_CIPHER *
LIBSTUB_EVP_des_ede3_wrap(void);

size_t
LIBSTUB_CRYPTO_128_unwrap(void);

size_t
LIBSTUB_CRYPTO_128_wrap(void);

BIO *
LIBSTUB_OCSP_REQ_CTX_get0_mem_bio(void);

int
LIBSTUB_OCSP_REQ_CTX_http(void);

int
LIBSTUB_OCSP_REQ_CTX_i2d(void);

int
LIBSTUB_OCSP_REQ_CTX_nbio(void);

int
LIBSTUB_OCSP_REQ_CTX_nbio_d2i(void);

OCSP_REQ_CTX *
LIBSTUB_OCSP_REQ_CTX_new(void);

void
LIBSTUB_OCSP_set_max_response_length(void);

RSA_OAEP_PARAMS *
LIBSTUB_d2i_RSA_OAEP_PARAMS(void);

void
LIBSTUB_RSA_OAEP_PARAMS_free(void);

const ASN1_ITEM *
LIBSTUB_RSA_OAEP_PARAMS_it(void);

RSA_OAEP_PARAMS *
LIBSTUB_RSA_OAEP_PARAMS_new(void);

int
LIBSTUB_RSA_padding_add_PKCS1_OAEP_mgf1(void);

int
LIBSTUB_RSA_padding_check_PKCS1_OAEP_mgf1(void);

_STACK *
LIBSTUB_sk_deep_copy(void);

int
LIBSTUB_i2d_re_X509_tbs(void);

int
LIBSTUB_X509_chain_check_suiteb(void);

STACK_OF(X509) *
LIBSTUB_X509_chain_up_ref(void);

int
LIBSTUB_X509_CRL_check_suiteb(void);

X509_CRL *
LIBSTUB_X509_CRL_diff(void);

int
LIBSTUB_X509_CRL_http_nbio(void);

void
LIBSTUB_X509_get0_signature(void);

int
LIBSTUB_X509_get_signature_nid(void);

int
LIBSTUB_X509_http_nbio(void);

X509_REVOKED *
LIBSTUB_X509_REVOKED_dup(void);

X509_STORE *
LIBSTUB_X509_STORE_CTX_get0_store(void);

void
LIBSTUB_X509_STORE_set_lookup_crls_cb(void);

int
LIBSTUB_X509_VERIFY_PARAM_add1_host(void);

const X509_VERIFY_PARAM *
LIBSTUB_X509_VERIFY_PARAM_get0(void);

const char *
LIBSTUB_X509_VERIFY_PARAM_get0_name(void);

char *
LIBSTUB_X509_VERIFY_PARAM_get0_peername(void);

int
LIBSTUB_X509_VERIFY_PARAM_get_count(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1_email(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1_host(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1_ip(void);

int
LIBSTUB_X509_VERIFY_PARAM_set1_ip_asc(void);

void
LIBSTUB_X509_VERIFY_PARAM_set_hostflags(void);

int
LIBSTUB_X509_check_email(void);

int
LIBSTUB_X509_check_host(void);

int
LIBSTUB_X509_check_ip(void);

int
LIBSTUB_X509_check_ip_asc(void);

void
LIBSTUB_EVP_PKEY_asn1_set_item(void);

const SSL_METHOD *
LIBSTUB_DTLS_client_method(void);

const SSL_METHOD *
LIBSTUB_DTLS_method(void);

const SSL_METHOD *
LIBSTUB_DTLS_server_method(void);

void
LIBSTUB_SSL_certs_clear(void);

const SSL_CIPHER *
LIBSTUB_SSL_CIPHER_find(void);

void
LIBSTUB_SSL_COMP_free_compression_methods(void);

int
LIBSTUB_SSL_CONF_cmd(void);

int
LIBSTUB_SSL_CONF_cmd_argv(void);

int
LIBSTUB_SSL_CONF_cmd_value_type(void);

unsigned int
LIBSTUB_SSL_CONF_CTX_clear_flags(void);

int
LIBSTUB_SSL_CONF_CTX_finish(void);

void
LIBSTUB_SSL_CONF_CTX_free(void);

SSL_CONF_CTX *
LIBSTUB_SSL_CONF_CTX_new(void);

int
LIBSTUB_SSL_CONF_CTX_set1_prefix(void);

unsigned int
LIBSTUB_SSL_CONF_CTX_set_flags(void);

void
LIBSTUB_SSL_CONF_CTX_set_ssl(void);

void
LIBSTUB_SSL_CONF_CTX_set_ssl_ctx(void);

int
LIBSTUB_SSL_CTX_add_client_custom_ext(void);

int
LIBSTUB_SSL_CTX_add_server_custom_ext(void);

X509 *
LIBSTUB_SSL_CTX_get0_certificate(void);

X509_VERIFY_PARAM *
LIBSTUB_SSL_CTX_get0_param(void);

EVP_PKEY *
LIBSTUB_SSL_CTX_get0_privatekey(void);

const SSL_METHOD *
LIBSTUB_SSL_CTX_get_ssl_method(void);

int
LIBSTUB_SSL_CTX_set_alpn_protos(void);

void
LIBSTUB_SSL_CTX_set_alpn_select_cb(void);

void
LIBSTUB_SSL_CTX_set_cert_cb(void);

int
LIBSTUB_SSL_CTX_use_serverinfo(void);

int
LIBSTUB_SSL_CTX_use_serverinfo_file(void);

int
LIBSTUB_SSL_extension_supported(void);

void
LIBSTUB_SSL_get0_alpn_selected(void);

X509_VERIFY_PARAM *
LIBSTUB_SSL_get0_param(void);

int
LIBSTUB_SSL_is_server(void);

int
LIBSTUB_SSL_set_alpn_protos(void);

void
LIBSTUB_SSL_set_cert_cb(void);

int
LIBSTUB_SSL_check_chain(void);

int
LIBSTUB_SSL_get_shared_sigalgs(void);

int
LIBSTUB_SSL_get_sigalgs(void);

void
LIBSTUB_ASN1_add_stable_module(void);

int
LIBSTUB_ASN1_buf_print(void);

int
LIBSTUB_ASN1_ENUMERATED_get_int64(void);

int
LIBSTUB_ASN1_ENUMERATED_set_int64(void);

int
LIBSTUB_ASN1_INTEGER_get_int64(void);

int
LIBSTUB_ASN1_INTEGER_get_uint64(void);

int
LIBSTUB_ASN1_INTEGER_set_int64(void);

int
LIBSTUB_ASN1_INTEGER_set_uint64(void);

void
LIBSTUB_ASN1_SCTX_free(void);

void *
LIBSTUB_ASN1_SCTX_get_app_data(void);

unsigned long
LIBSTUB_ASN1_SCTX_get_flags(void);

const ASN1_ITEM *
LIBSTUB_ASN1_SCTX_get_item(void);

const ASN1_TEMPLATE *
LIBSTUB_ASN1_SCTX_get_template(void);

ASN1_SCTX *
LIBSTUB_ASN1_SCTX_new(void);

void
LIBSTUB_ASN1_SCTX_set_app_data(void);

int
LIBSTUB_ASN1_str2mask(void);

ASN1_TYPE *
LIBSTUB_ASN1_TYPE_pack_sequence(void);

void *
LIBSTUB_ASN1_TYPE_unpack_sequence(void);

void
LIBSTUB_ASYNC_block_pause(void);

void
LIBSTUB_ASYNC_cleanup_thread(void);

ASYNC_JOB *
LIBSTUB_ASYNC_get_current_job(void);

int
LIBSTUB_ASYNC_init_thread(void);

int
LIBSTUB_ASYNC_pause_job(void);

int
LIBSTUB_ASYNC_start_job(void);

void
LIBSTUB_ASYNC_unblock_pause(void);

void
LIBSTUB_ERR_load_ASYNC_strings(void);

int
LIBSTUB_BIO_accept_ex(void);

void
LIBSTUB_BIO_ADDR_clear(void);

int
LIBSTUB_BIO_ADDR_family(void);

void
LIBSTUB_BIO_ADDR_free(void);

char *
LIBSTUB_BIO_ADDR_hostname_string(void);

BIO_ADDR *
LIBSTUB_BIO_ADDR_new(void);

char *
LIBSTUB_BIO_ADDR_path_string(void);

int
LIBSTUB_BIO_ADDR_rawaddress(void);

int
LIBSTUB_BIO_ADDR_rawmake(void);

unsigned short
LIBSTUB_BIO_ADDR_rawport(void);

char *
LIBSTUB_BIO_ADDR_service_string(void);

const BIO_ADDR *
LIBSTUB_BIO_ADDRINFO_address(void);

int
LIBSTUB_BIO_ADDRINFO_family(void);

void
LIBSTUB_BIO_ADDRINFO_free(void);

const BIO_ADDRINFO *
LIBSTUB_BIO_ADDRINFO_next(void);

int
LIBSTUB_BIO_ADDRINFO_protocol(void);

int
LIBSTUB_BIO_ADDRINFO_socktype(void);

int
LIBSTUB_BIO_closesocket(void);

int
LIBSTUB_BIO_connect(void);

int
LIBSTUB_BIO_listen(void);

int
LIBSTUB_BIO_lookup(void);

int
LIBSTUB_BIO_parse_hostserv(void);

BIO_METHOD *
LIBSTUB_BIO_s_secmem(void);

int
LIBSTUB_BIO_sock_info(void);

int
LIBSTUB_BIO_socket(void);

int
LIBSTUB_BN_abs_is_word(void);

int
LIBSTUB_BN_bn2binpad(void);

int
LIBSTUB_BN_bn2lebinpad(void);

BN_CTX *
LIBSTUB_BN_CTX_secure_new(void);

void
LIBSTUB_BN_GENCB_free(void);

void *
LIBSTUB_BN_GENCB_get_arg(void);

BN_GENCB *
LIBSTUB_BN_GENCB_new(void);

void
LIBSTUB_BN_GENCB_set(void);

void
LIBSTUB_BN_GENCB_set_old(void);

int
LIBSTUB_BN_generate_dsa_nonce(void);

int
LIBSTUB_BN_get_flags(void);

int
LIBSTUB_BN_is_negative(void);

int
LIBSTUB_BN_is_odd(void);

int
LIBSTUB_BN_is_one(void);

int
LIBSTUB_BN_is_word(void);

int
LIBSTUB_BN_is_zero(void);

BIGNUM *
LIBSTUB_BN_lebin2bn(void);

int (*)(BIGNUM *, const BIGNUM *, const BIGNUM *, BN_CTX *)
LIBSTUB_BN_nist_mod_func(void);

BIGNUM *
LIBSTUB_BN_secure_new(void);

int
LIBSTUB_BN_security_bits(void);

void
LIBSTUB_BN_set_flags(void);

int
LIBSTUB_BN_to_montgomery(void);

void
LIBSTUB_BN_with_flags(void);

void
LIBSTUB_BN_zero_ex(void);

BUF_MEM *
LIBSTUB_BUF_MEM_new_ex(void);

const COMP_METHOD *
LIBSTUB_COMP_CTX_get_method(void);

int
LIBSTUB_COMP_CTX_get_type(void);

const char *
LIBSTUB_COMP_get_name(void);

int
LIBSTUB_COMP_get_type(void);

void
LIBSTUB_CRYPTO_clear_free(void);

void *
LIBSTUB_CRYPTO_clear_realloc(void);

int
LIBSTUB_CRYPTO_free_ex_index(void);

void *
LIBSTUB_CRYPTO_memdup(void);

size_t
LIBSTUB_CRYPTO_secure_actual_size(void);

int
LIBSTUB_CRYPTO_secure_allocated(void);

void
LIBSTUB_CRYPTO_secure_free(void);

void *
LIBSTUB_CRYPTO_secure_malloc(void);

void
LIBSTUB_CRYPTO_secure_malloc_done(void);

int
LIBSTUB_CRYPTO_secure_malloc_init(void);

int
LIBSTUB_CRYPTO_secure_malloc_initialized(void);

size_t
LIBSTUB_CRYPTO_secure_used(void);

void *
LIBSTUB_CRYPTO_secure_zalloc(void);

int
LIBSTUB_CRYPTO_set_mem_debug(void);

char *
LIBSTUB_CRYPTO_strndup(void);

void *
LIBSTUB_CRYPTO_zalloc(void);

int
LIBSTUB_OPENSSL_atexit(void);

void
LIBSTUB_OPENSSL_cleanup(void);

int
LIBSTUB_OPENSSL_init_crypto(void);

void
LIBSTUB_OPENSSL_INIT_free(void);

OPENSSL_INIT_SETTINGS *
LIBSTUB_OPENSSL_INIT_new(void);

size_t
LIBSTUB_OPENSSL_strlcat(void);

size_t
LIBSTUB_OPENSSL_strlcpy(void);

size_t
LIBSTUB_OPENSSL_strnlen(void);

void
LIBSTUB_OPENSSL_thread_stop(void);

const char *
LIBSTUB_OpenSSL_version(void);

unsigned long
LIBSTUB_OpenSSL_version_num(void);

int
LIBSTUB_DH_bits(void);

int
LIBSTUB_DH_security_bits(void);

int
LIBSTUB_DSA_security_bits(void);

const BIGNUM *
LIBSTUB_EC_GROUP_get0_cofactor(void);

const BIGNUM *
LIBSTUB_EC_GROUP_get0_order(void);

int
LIBSTUB_EC_GROUP_order_bits(void);

const EC_KEY_METHOD *
LIBSTUB_EC_KEY_get_default_method(void);

void *
LIBSTUB_EC_KEY_get_ex_data(void);

const EC_KEY_METHOD *
LIBSTUB_EC_KEY_get_method(void);

size_t
LIBSTUB_EC_KEY_key2buf(void);

void
LIBSTUB_EC_KEY_METHOD_free(void);

void
LIBSTUB_EC_KEY_METHOD_get_compute_key(void);

void
LIBSTUB_EC_KEY_METHOD_get_init(void);

void
LIBSTUB_EC_KEY_METHOD_get_keygen(void);

void
LIBSTUB_EC_KEY_METHOD_get_sign(void);

void
LIBSTUB_EC_KEY_METHOD_get_verify(void);

EC_KEY_METHOD *
LIBSTUB_EC_KEY_METHOD_new(void);

void
LIBSTUB_EC_KEY_METHOD_set_compute_key(void);

void
LIBSTUB_EC_KEY_METHOD_set_init(void);

void
LIBSTUB_EC_KEY_METHOD_set_keygen(void);

void
LIBSTUB_EC_KEY_METHOD_set_sign(void);

void
LIBSTUB_EC_KEY_METHOD_set_verify(void);

EC_KEY *
LIBSTUB_EC_KEY_new_method(void);

int
LIBSTUB_EC_KEY_oct2key(void);

int
LIBSTUB_EC_KEY_oct2priv(void);

const EC_KEY_METHOD *
LIBSTUB_EC_KEY_OpenSSL(void);

size_t
LIBSTUB_EC_KEY_priv2buf(void);

size_t
LIBSTUB_EC_KEY_priv2oct(void);

void
LIBSTUB_EC_KEY_set_default_method(void);

int
LIBSTUB_EC_KEY_set_ex_data(void);

int
LIBSTUB_EC_KEY_set_method(void);

size_t
LIBSTUB_EC_POINT_point2buf(void);

void
LIBSTUB_ECDSA_SIG_get0(void);

ENGINE *
LIBSTUB_ENGINE_get_default_EC(void);

const EC_KEY_METHOD *
LIBSTUB_ENGINE_get_EC(void);

void
LIBSTUB_ENGINE_register_all_EC(void);

int
LIBSTUB_ENGINE_register_EC(void);

int
LIBSTUB_ENGINE_set_default_EC(void);

int
LIBSTUB_ENGINE_set_EC(void);

void
LIBSTUB_ENGINE_unregister_EC(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_ocb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_128_wrap_pad(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_ocb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_192_wrap_pad(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_ocb(void);

const EVP_CIPHER *
LIBSTUB_EVP_aes_256_wrap_pad(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_128_ctr(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_192_ctr(void);

const EVP_CIPHER *
LIBSTUB_EVP_camellia_256_ctr(void);

const EVP_CIPHER *
LIBSTUB_EVP_chacha20(void);

const EVP_CIPHER *
LIBSTUB_EVP_chacha20_poly1305(void);

unsigned char *
LIBSTUB_EVP_CIPHER_CTX_buf_noconst(void);

void *
LIBSTUB_EVP_CIPHER_CTX_get_cipher_data(void);

void *
LIBSTUB_EVP_CIPHER_CTX_set_cipher_data(void);

int
LIBSTUB_EVP_CIPHER_CTX_encrypting(void);

const unsigned char *
LIBSTUB_EVP_CIPHER_CTX_iv(void);

unsigned char *
LIBSTUB_EVP_CIPHER_CTX_iv_noconst(void);

int
LIBSTUB_EVP_CIPHER_CTX_num(void);

const unsigned char *
LIBSTUB_EVP_CIPHER_CTX_original_iv(void);

int
LIBSTUB_EVP_CIPHER_CTX_reset(void);

void
LIBSTUB_EVP_CIPHER_CTX_set_num(void);

int
LIBSTUB_EVP_CIPHER_impl_ctx_size(void);

EVP_CIPHER *
LIBSTUB_EVP_CIPHER_meth_dup(void);

void
LIBSTUB_EVP_CIPHER_meth_free(void);

int (*)(EVP_CIPHER_CTX *)
LIBSTUB_EVP_CIPHER_meth_get_cleanup(void);

int (*)(EVP_CIPHER_CTX *, int, int, void *)
LIBSTUB_EVP_CIPHER_meth_get_ctrl(void);

int (*)(EVP_CIPHER_CTX *, unsigned char *, const unsigned char *, size_t)
LIBSTUB_EVP_CIPHER_meth_get_do_cipher(void);

int (*)(EVP_CIPHER_CTX *, ASN1_TYPE *)
LIBSTUB_EVP_CIPHER_meth_get_get_asn1_params(void);

int (*)(EVP_CIPHER_CTX *, const unsigned char *, const unsigned char *, int)
LIBSTUB_EVP_CIPHER_meth_get_init(void);

int (*)(EVP_CIPHER_CTX *, ASN1_TYPE *)
LIBSTUB_EVP_CIPHER_meth_get_set_asn1_params(void);

EVP_CIPHER *
LIBSTUB_EVP_CIPHER_meth_new(void);

int
LIBSTUB_EVP_CIPHER_meth_set_cleanup(void);

int
LIBSTUB_EVP_CIPHER_meth_set_ctrl(void);

int
LIBSTUB_EVP_CIPHER_meth_set_do_cipher(void);

int
LIBSTUB_EVP_CIPHER_meth_set_flags(void);

int
LIBSTUB_EVP_CIPHER_meth_set_get_asn1_params(void);

int
LIBSTUB_EVP_CIPHER_meth_set_impl_ctx_size(void);

int
LIBSTUB_EVP_CIPHER_meth_set_init(void);

int
LIBSTUB_EVP_CIPHER_meth_set_iv_length(void);

int
LIBSTUB_EVP_CIPHER_meth_set_set_asn1_params(void);

void
LIBSTUB_EVP_ENCODE_CTX_free(void);

EVP_ENCODE_CTX *
LIBSTUB_EVP_ENCODE_CTX_new(void);

int
LIBSTUB_EVP_ENCODE_CTX_num(void);

const EVP_MD *
LIBSTUB_EVP_md5_sha1(void);

int
LIBSTUB_EVP_MD_CTX_ctrl(void);

void
LIBSTUB_EVP_MD_CTX_free(void);

void *
LIBSTUB_EVP_MD_CTX_md_data(void);

EVP_MD_CTX *
LIBSTUB_EVP_MD_CTX_new(void);

EVP_PKEY_CTX *
LIBSTUB_EVP_MD_CTX_pkey_ctx(void);

int
LIBSTUB_EVP_MD_CTX_reset(void);

void
LIBSTUB_EVP_MD_CTX_set_update_fn(void);

int (*)(EVP_MD_CTX *, const void *, size_t)
LIBSTUB_EVP_MD_CTX_update_fn(void);

EVP_MD *
LIBSTUB_EVP_MD_meth_dup(void);

void
LIBSTUB_EVP_MD_meth_free(void);

int
LIBSTUB_EVP_MD_meth_get_app_datasize(void);

int (*)(EVP_MD_CTX *)
LIBSTUB_EVP_MD_meth_get_cleanup(void);

int (*)(EVP_MD_CTX *, const EVP_MD_CTX *)
LIBSTUB_EVP_MD_meth_get_copy(void);

int (*)(EVP_MD_CTX *, int, int, void *)
LIBSTUB_EVP_MD_meth_get_ctrl(void);

int (*)(EVP_MD_CTX *, unsigned char *)
LIBSTUB_EVP_MD_meth_get_final(void);

unsigned long
LIBSTUB_EVP_MD_meth_get_flags(void);

int (*)(EVP_MD_CTX *)
LIBSTUB_EVP_MD_meth_get_init(void);

int
LIBSTUB_EVP_MD_meth_get_input_blocksize(void);

int
LIBSTUB_EVP_MD_meth_get_result_size(void);

int (*)(EVP_MD_CTX *, const void *, size_t)
LIBSTUB_EVP_MD_meth_get_update(void);

EVP_MD *
LIBSTUB_EVP_MD_meth_new(void);

int
LIBSTUB_EVP_MD_meth_set_app_datasize(void);

int
LIBSTUB_EVP_MD_meth_set_cleanup(void);

int
LIBSTUB_EVP_MD_meth_set_copy(void);

int
LIBSTUB_EVP_MD_meth_set_ctrl(void);

int
LIBSTUB_EVP_MD_meth_set_final(void);

int
LIBSTUB_EVP_MD_meth_set_flags(void);

int
LIBSTUB_EVP_MD_meth_set_init(void);

int
LIBSTUB_EVP_MD_meth_set_input_blocksize(void);

int
LIBSTUB_EVP_MD_meth_set_result_size(void);

int
LIBSTUB_EVP_MD_meth_set_update(void);

int
LIBSTUB_EVP_PBE_get(void);

int
LIBSTUB_EVP_PBE_scrypt(void);

void
LIBSTUB_EVP_PKEY_asn1_set_security_bits(void);

DH *
LIBSTUB_EVP_PKEY_get0_DH(void);

DSA *
LIBSTUB_EVP_PKEY_get0_DSA(void);

EC_KEY *
LIBSTUB_EVP_PKEY_get0_EC_KEY(void);

RSA *
LIBSTUB_EVP_PKEY_get0_RSA(void);

void
LIBSTUB_EVP_PKEY_meth_get_cleanup(void);

void
LIBSTUB_EVP_PKEY_meth_get_copy(void);

void
LIBSTUB_EVP_PKEY_meth_get_ctrl(void);

void
LIBSTUB_EVP_PKEY_meth_get_decrypt(void);

void
LIBSTUB_EVP_PKEY_meth_get_derive(void);

void
LIBSTUB_EVP_PKEY_meth_get_encrypt(void);

void
LIBSTUB_EVP_PKEY_meth_get_init(void);

void
LIBSTUB_EVP_PKEY_meth_get_keygen(void);

void
LIBSTUB_EVP_PKEY_meth_get_paramgen(void);

void
LIBSTUB_EVP_PKEY_meth_get_sign(void);

void
LIBSTUB_EVP_PKEY_meth_get_signctx(void);

void
LIBSTUB_EVP_PKEY_meth_get_verify(void);

void
LIBSTUB_EVP_PKEY_meth_get_verify_recover(void);

void
LIBSTUB_EVP_PKEY_meth_get_verifyctx(void);

int
LIBSTUB_EVP_PKEY_security_bits(void);

void
LIBSTUB_EVP_PKEY_up_ref(void);

int
LIBSTUB_PKCS5_v2_scrypt_keyivgen(void);

void
LIBSTUB_HMAC_CTX_free(void);

HMAC_CTX *
LIBSTUB_HMAC_CTX_new(void);

int
LIBSTUB_HMAC_CTX_reset(void);

size_t
LIBSTUB_HMAC_size(void);

int
LIBSTUB_lh_error(void);

unsigned long
LIBSTUB_lh_get_down_load(void);

void
LIBSTUB_lh_set_down_load(void);

size_t
LIBSTUB_CRYPTO_128_unwrap_pad(void);

size_t
LIBSTUB_CRYPTO_128_wrap_pad(void);

int
LIBSTUB_CRYPTO_ocb128_aad(void);

void
LIBSTUB_CRYPTO_ocb128_cleanup(void);

int
LIBSTUB_CRYPTO_ocb128_copy_ctx(void);

int
LIBSTUB_CRYPTO_ocb128_decrypt(void);

int
LIBSTUB_CRYPTO_ocb128_encrypt(void);

int
LIBSTUB_CRYPTO_ocb128_finish(void);

int
LIBSTUB_CRYPTO_ocb128_init(void);

OCB128_CONTEXT *
LIBSTUB_CRYPTO_ocb128_new(void);

int
LIBSTUB_CRYPTO_ocb128_setiv(void);

int
LIBSTUB_CRYPTO_ocb128_tag(void);

const unsigned char *
LIBSTUB_OBJ_get0_data(void);

size_t
LIBSTUB_OBJ_length(void);

ASN1_GENERALIZEDTIME *
LIBSTUB_OCSP_resp_get0_produced_at(void);

ASN1_OCTET_STRING *
LIBSTUB_OCSP_resp_get0_signature(void);

OCSP_CERTID *
LIBSTUB_OCSP_SINGLERESP_get0_id(void);

void
LIBSTUB_PKCS12_get0_mac(void);

int
LIBSTUB_PKCS12_mac_present(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_SAFEBAG_create0_p8inf(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_SAFEBAG_create0_pkcs8(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_SAFEBAG_create_cert(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_SAFEBAG_create_crl(void);

PKCS12_SAFEBAG *
LIBSTUB_PKCS12_SAFEBAG_create_pkcs8_encrypt(void);

ASN1_TYPE *
LIBSTUB_PKCS12_SAFEBAG_get0_attr(void);

STACK_OF(X509_ATTRIBUTE) *
LIBSTUB_PKCS12_SAFEBAG_get0_attrs(void);

PKCS8_PRIV_KEY_INFO *
LIBSTUB_PKCS12_SAFEBAG_get0_p8inf(void);

X509_SIG *
LIBSTUB_PKCS12_SAFEBAG_get0_pkcs8(void);

STACK_OF(PKCS12_SAFEBAG) *
LIBSTUB_PKCS12_SAFEBAG_get0_safes(void);

ASN1_OBJECT *
LIBSTUB_PKCS12_SAFEBAG_get0_type(void);

X509 *
LIBSTUB_PKCS12_SAFEBAG_get1_cert(void);

X509_CRL *
LIBSTUB_PKCS12_SAFEBAG_get1_crl(void);

int
LIBSTUB_PKCS12_SAFEBAG_get_bag_nid(void);

int
LIBSTUB_PKCS12_SAFEBAG_get_nid(void);

ASN1_TYPE *
LIBSTUB_PKCS8_get_attr(void);

X509_SIG *
LIBSTUB_PKCS8_set0_pbe(void);

RAND_METHOD *
LIBSTUB_RAND_OpenSSL(void);

int
LIBSTUB_RSA_bits(void);

int
LIBSTUB_RSA_check_key_ex(void);

const RSA_METHOD *
LIBSTUB_RSA_PKCS1_OpenSSL(void);

int
LIBSTUB_RSA_security_bits(void);

int
LIBSTUB_RSA_X931_derive_ex(void);

int
LIBSTUB_RSA_X931_generate_key_ex(void);

int
LIBSTUB_TS_CONF_set_signer_digest(void);

int
LIBSTUB_TS_RESP_CTX_set_signer_digest(void);

ASN1_BIT_STRING *
LIBSTUB_TS_STATUS_INFO_get0_failure_info(void);

ASN1_INTEGER *
LIBSTUB_TS_STATUS_INFO_get0_status(void);

int
LIBSTUB_TS_STATUS_INFO_set_status(void);

int
LIBSTUB_TS_VERIFY_CTX_add_flags(void);

BIO *
LIBSTUB_TS_VERIFY_CTX_set_data(void);

int
LIBSTUB_TS_VERIFY_CTX_set_flags(void);

unsigned char *
LIBSTUB_TS_VERIFY_CTX_set_imprint(void);

X509_STORE *
LIBSTUB_TS_VERIFY_CTX_set_store(void);

STACK_OF(X509) *
LIBSTUB_TS_VERIFY_CTS_set_certs(void);

int
LIBSTUB_i2d_re_X509_CRL_tbs(void);

int
LIBSTUB_i2d_re_X509_REQ_tbs(void);

X509_ALGOR *
LIBSTUB_PKCS5_pbe2_set_scrypt(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_X509_CRL_get0_extensions(void);

void
LIBSTUB_X509_CRL_get0_signature(void);

X509_NAME *
LIBSTUB_X509_CRL_get_issuer(void);

ASN1_TIME *
LIBSTUB_X509_CRL_get_lastUpdate(void);

ASN1_TIME *
LIBSTUB_X509_CRL_get_nextUpdate(void);

STACK_OF(X509_REVOKED) *
LIBSTUB_X509_CRL_get_REVOKED(void);

int
LIBSTUB_X509_CRL_get_signature_nid(void);

long
LIBSTUB_X509_CRL_get_version(void);

void
LIBSTUB_X509_CRL_up_ref(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_X509_get0_extensions(void);

EVP_PKEY *
LIBSTUB_X509_get0_pubkey(void);

STACK_OF(ASN1_OBJECT) *
LIBSTUB_X509_get0_reject_objects(void);

X509_ALGOR *
LIBSTUB_X509_get0_tbs_sigalg(void);

STACK_OF(ASN1_OBJECT) *
LIBSTUB_X509_get0_trust_objects(void);

void
LIBSTUB_X509_get0_uids(void);

ASN1_TIME *
LIBSTUB_X509_get_notAfter(void);

ASN1_TIME *
LIBSTUB_X509_get_notBefore(void);

int
LIBSTUB_X509_get_signature_type(void);

long
LIBSTUB_X509_get_version(void);

X509_PUBKEY *
LIBSTUB_X509_get_X509_PUBKEY(void);

int
LIBSTUB_X509_NAME_ENTRY_set(void);

int
LIBSTUB_X509_NAME_get0_der(void);

EVP_PKEY *
LIBSTUB_X509_PUBKEY_get0(void);

void
LIBSTUB_X509_REQ_get0_signature(void);

int
LIBSTUB_X509_REQ_get_signature_nid(void);

X509_NAME *
LIBSTUB_X509_REQ_get_subject_name(void);

long
LIBSTUB_X509_REQ_get_version(void);

X509_PUBKEY *
LIBSTUB_X509_REQ_get_X509_PUBKEY(void);

STACK_OF(X509_EXTENSION) *
LIBSTUB_X509_REVOKED_get0_extensions(void);

ASN1_TIME *
LIBSTUB_X509_REVOKED_get0_revocationDate(void);

ASN1_INTEGER *
LIBSTUB_X509_REVOKED_get0_serialNumber(void);

int
LIBSTUB_X509_trusted(void);

void
LIBSTUB_X509_up_ref(void);

int
LIBSTUB_X509_STORE_CTX_get_num_untrusted(void);

void
LIBSTUB_X509_STORE_CTX_set0_dane(void);

void
LIBSTUB_X509_VERIFY_PARAM_move_peername(void);

void
LIBSTUB_ASIdentifiers_free(void);

char *
LIBSTUB_i2s_ASN1_IA5STRING(void);

ASN1_IA5STRING *
LIBSTUB_s2i_ASN1_IA5STRING(void);

int
LIBSTUB_v3_addr_add_inherit(void);

int
LIBSTUB_v3_addr_add_prefix(void);

int
LIBSTUB_v3_addr_add_range(void);

int
LIBSTUB_v3_addr_canonize(void);

unsigned
LIBSTUB_v3_addr_get_afi(void);

int
LIBSTUB_v3_addr_get_range(void);

int
LIBSTUB_v3_addr_inherits(void);

int
LIBSTUB_v3_addr_is_canonical(void);

int
LIBSTUB_v3_addr_subset(void);

int
LIBSTUB_v3_addr_validate_path(void);

int
LIBSTUB_v3_asid_add_id_or_range(void);

int
LIBSTUB_v3_asid_add_inherit(void);

int
LIBSTUB_v3_asid_canonize(void);

int
LIBSTUB_v3_asid_inherits(void);

int
LIBSTUB_v3_asid_is_canonical(void);

int
LIBSTUB_v3_asid_subset(void);

int
LIBSTUB_v3_asid_validate_path(void);

const ASN1_OCTET_STRING *
LIBSTUB_X509_get0_subject_key_id(void);

uint32_t
LIBSTUB_X509_get_extended_key_usage(void);

uint32_t
LIBSTUB_X509_get_extension_flags(void);

uint32_t
LIBSTUB_X509_get_key_usage(void);

int
LIBSTUB_DTLSv1_listen(void);

int
LIBSTUB_OPENSSL_init_ssl(void);

int
LIBSTUB_SSL_add1_host(void);

void
LIBSTUB_SSL_add_ssl_module(void);

int
LIBSTUB_SSL_CIPHER_get_cipher_nid(void);

int
LIBSTUB_SSL_CIPHER_get_digest_nid(void);

unsigned long
LIBSTUB_SSL_clear_options(void);

int
LIBSTUB_SSL_config(void);

unsigned long
LIBSTUB_SSL_CTX_clear_options(void);

int
LIBSTUB_SSL_CTX_config(void);

int
LIBSTUB_SSL_CTX_dane_enable(void);

int
LIBSTUB_SSL_CTX_dane_mtype_set(void);

void *
LIBSTUB_SSL_CTX_get0_security_ex_data(void);

unsigned long
LIBSTUB_SSL_CTX_get_options(void);

int (*)(const SSL *, const SSL_CTX *, int, int, int, void *, void *)
LIBSTUB_SSL_CTX_get_security_callback(void);

int
LIBSTUB_SSL_CTX_get_security_level(void);

void
LIBSTUB_SSL_CTX_set0_security_ex_data(void);

int
LIBSTUB_SSL_CTX_set_default_verify_dir(void);

int
LIBSTUB_SSL_CTX_set_default_verify_file(void);

void
LIBSTUB_SSL_CTX_set_not_resumable_session_callback(void);

unsigned long
LIBSTUB_SSL_CTX_set_options(void);

void
LIBSTUB_SSL_CTX_set_security_callback(void);

void
LIBSTUB_SSL_CTX_set_security_level(void);

void
LIBSTUB_SSL_CTX_up_ref(void);

int
LIBSTUB_SSL_dane_enable(void);

int
LIBSTUB_SSL_dane_tlsa_add(void);

struct dane_st *
LIBSTUB_SSL_get0_dane(void);

int
LIBSTUB_SSL_get0_dane_authority(void);

int
LIBSTUB_SSL_get0_dane_tlsa(void);

const char *
LIBSTUB_SSL_get0_peername(void);

void *
LIBSTUB_SSL_get0_security_ex_data(void);

STACK_OF(SSL_CIPHER) *
LIBSTUB_SSL_get1_supported_ciphers(void);

size_t
LIBSTUB_SSL_get_client_random(void);

unsigned long
LIBSTUB_SSL_get_options(void);

int (*)(const SSL *, const SSL_CTX *, int, int, int, void *, void *)
LIBSTUB_SSL_get_security_callback(void);

int
LIBSTUB_SSL_get_security_level(void);

size_t
LIBSTUB_SSL_get_server_random(void);

OSSL_HANDSHAKE_STATE
LIBSTUB_SSL_get_state(void);

int
LIBSTUB_SSL_in_before(void);

int
LIBSTUB_SSL_in_init(void);

int
LIBSTUB_SSL_is_init_finished(void);

void
LIBSTUB_SSL_SESSION_get0_ticket(void);

size_t
LIBSTUB_SSL_SESSION_get_master_key(void);

unsigned long
LIBSTUB_SSL_SESSION_get_ticket_lifetime_hint(void);

int
LIBSTUB_SSL_SESSION_has_ticket(void);

int
LIBSTUB_SSL_SESSION_print_keylog(void);

int
LIBSTUB_SSL_session_reused(void);

void
LIBSTUB_SSL_set0_security_ex_data(void);

int
LIBSTUB_SSL_set1_host(void);

void
LIBSTUB_SSL_set_default_passwd_cb(void);

void
LIBSTUB_SSL_set_default_passwd_cb_userdata(void);

void
LIBSTUB_SSL_set_hostflags(void);

void
LIBSTUB_SSL_set_not_resumable_session_callback(void);

unsigned long
LIBSTUB_SSL_set_options(void);

void
LIBSTUB_SSL_set_rbio(void);

void
LIBSTUB_SSL_set_security_callback(void);

void
LIBSTUB_SSL_set_security_level(void);

void
LIBSTUB_SSL_set_wbio(void);

void
LIBSTUB_SSL_up_ref(void);

int
LIBSTUB_SSL_use_certificate_chain_file(void);

int
LIBSTUB_SSL_waiting_for_async(void);

const SSL_METHOD *
LIBSTUB_TLS_client_method(void);

const SSL_METHOD *
LIBSTUB_TLS_method(void);

const SSL_METHOD *
LIBSTUB_TLS_server_method(void);

ASYNC_WAIT_CTX *
LIBSTUB_ASYNC_WAIT_CTX_new(void);

void
LIBSTUB_ASYNC_WAIT_CTX_free(void);

int
LIBSTUB_ASYNC_WAIT_CTX_set_wait_fd(void);

int
LIBSTUB_ASYNC_WAIT_CTX_get_fd(void);

int
LIBSTUB_ASYNC_WAIT_CTX_get_all_fds(void);

int
LIBSTUB_ASYNC_WAIT_CTX_get_changed_fds(void);

int
LIBSTUB_ASYNC_WAIT_CTX_clear_fd(void);

int
LIBSTUB_ASYNC_is_capable(void);

ASYNC_WAIT_CTX *
LIBSTUB_ASYNC_get_wait_ctx(void);

int
LIBSTUB_BIO_up_ref(void);

int
LIBSTUB_BN_BLINDING_is_current_thread(void);

void
LIBSTUB_BN_BLINDING_set_current_thread(void);

int
LIBSTUB_BN_BLINDING_lock(void);

int
LIBSTUB_BN_BLINDING_unlock(void);

int
LIBSTUB_CRYPTO_THREAD_run_once(void);

int
LIBSTUB_CRYPTO_THREAD_init_local(void);

void *
LIBSTUB_CRYPTO_THREAD_get_local(void);

int
LIBSTUB_CRYPTO_THREAD_set_local(void);

int
LIBSTUB_CRYPTO_THREAD_cleanup_local(void);

CRYPTO_THREAD_ID
LIBSTUB_CRYPTO_THREAD_get_current_id(void);

int
LIBSTUB_CRYPTO_THREAD_compare_id(void);

CRYPTO_RWLOCK *
LIBSTUB_CRYPTO_THREAD_lock_new(void);

int
LIBSTUB_CRYPTO_THREAD_read_lock(void);

int
LIBSTUB_CRYPTO_THREAD_write_lock(void);

int
LIBSTUB_CRYPTO_THREAD_unlock(void);

void
LIBSTUB_CRYPTO_THREAD_lock_free(void);

int
LIBSTUB_CRYPTO_atomic_add(void);

void
LIBSTUB_OPENSSL_die(void);

CT_POLICY_EVAL_CTX *
LIBSTUB_CT_POLICY_EVAL_CTX_new(void);

void
LIBSTUB_CT_POLICY_EVAL_CTX_free(void);

X509 *
LIBSTUB_CT_POLICY_EVAL_CTX_get0_cert(void);

void
LIBSTUB_CT_POLICY_EVAL_CTX_set0_cert(void);

X509 *
LIBSTUB_CT_POLICY_EVAL_CTX_get0_issuer(void);

void
LIBSTUB_CT_POLICY_EVAL_CTX_set0_issuer(void);

const CTLOG_STORE *
LIBSTUB_CT_POLICY_EVAL_CTX_get0_log_store(void);

void
LIBSTUB_CT_POLICY_EVAL_CTX_set0_log_store(void);

int
LIBSTUB_CT_verify_no_bad_scts(void);

int
LIBSTUB_CT_verify_at_least_one_good_sct(void);

SCT *
LIBSTUB_SCT_new(void);

SCT *
LIBSTUB_SCT_new_from_base64(void);

void
LIBSTUB_SCT_free(void);

void
LIBSTUB_SCT_LIST_free(void);

sct_version_t
LIBSTUB_SCT_get_version(void);

int
LIBSTUB_SCT_set_version(void);

ct_log_entry_type_t
LIBSTUB_SCT_get_log_entry_type(void);

int
LIBSTUB_SCT_set_log_entry_type(void);

size_t
LIBSTUB_SCT_get0_log_id(void);

int
LIBSTUB_SCT_set0_log_id(void);

int
LIBSTUB_SCT_set1_log_id(void);

uint64_t
LIBSTUB_SCT_get_timestamp(void);

void
LIBSTUB_SCT_set_timestamp(void);

int
LIBSTUB_SCT_get_signature_nid(void);

int
LIBSTUB_SCT_set_signature_nid(void);

size_t
LIBSTUB_SCT_get0_extensions(void);

void
LIBSTUB_SCT_set0_extensions(void);

int
LIBSTUB_SCT_set1_extensions(void);

size_t
LIBSTUB_SCT_get0_signature(void);

void
LIBSTUB_SCT_set0_signature(void);

int
LIBSTUB_SCT_set1_signature(void);

sct_source_t
LIBSTUB_SCT_get_source(void);

int
LIBSTUB_SCT_set_source(void);

void
LIBSTUB_SCT_print(void);

void
LIBSTUB_SCT_LIST_print(void);

int
LIBSTUB_SCT_verify(void);

int
LIBSTUB_SCT_verify_v1(void);

sct_validation_status_t
LIBSTUB_SCT_get_validation_status(void);

int
LIBSTUB_SCT_validate(void);

int
LIBSTUB_SCT_LIST_validate(void);

int
LIBSTUB_i2o_SCT_LIST(void);

STACK_OF(SCT) *
LIBSTUB_o2i_SCT_LIST(void);

int
LIBSTUB_i2d_SCT_LIST(void);

STACK_OF(SCT) *
LIBSTUB_d2i_SCT_LIST(void);

int
LIBSTUB_i2o_SCT(void);

SCT *
LIBSTUB_o2i_SCT(void);

int
LIBSTUB_i2o_SCT_signature(void);

int
LIBSTUB_o2i_SCT_signature(void);

CTLOG *
LIBSTUB_CTLOG_new(void);

CTLOG *
LIBSTUB_CTLOG_new_null(void);

CTLOG *
LIBSTUB_CTLOG_new_from_base64(void);

void
LIBSTUB_CTLOG_free(void);

const char *
LIBSTUB_CTLOG_get0_name(void);

void
LIBSTUB_CTLOG_get0_log_id(void);

EVP_PKEY *
LIBSTUB_CTLOG_get0_public_key(void);

CTLOG_STORE *
LIBSTUB_CTLOG_STORE_new(void);

void
LIBSTUB_CTLOG_STORE_free(void);

const CTLOG *
LIBSTUB_CTLOG_STORE_get0_log_by_id(void);

int
LIBSTUB_CTLOG_STORE_load_file(void);

int
LIBSTUB_CTLOG_STORE_load_default_file(void);

void
LIBSTUB_ERR_load_CT_strings(void);

const ASN1_ITEM *
LIBSTUB_DHparams_it(void);

void
LIBSTUB_DSA_SIG_get0(void);

EC_GROUP *
LIBSTUB_EC_GROUP_new_from_ecparameters(void);

ECPARAMETERS *
LIBSTUB_EC_GROUP_get_ecparameters(void);

EC_GROUP *
LIBSTUB_EC_GROUP_new_from_ecpkparameters(void);

ECPKPARAMETERS *
LIBSTUB_EC_GROUP_get_ecpkparameters(void);

const ASN1_ITEM *
LIBSTUB_ECPKPARAMETERS_it(void);

const ASN1_ITEM *
LIBSTUB_ECPARAMETERS_it(void);

int
LIBSTUB_EC_KEY_can_sign(void);

const EVP_MD *
LIBSTUB_EVP_blake2b512(void);

const EVP_MD *
LIBSTUB_EVP_blake2s256(void);

int
LIBSTUB_EVP_PKEY_CTX_str2ctrl(void);

int
LIBSTUB_EVP_PKEY_CTX_hex2ctrl(void);

void
LIBSTUB_ERR_load_KDF_strings(void);

void
LIBSTUB_SRP_user_pwd_free(void);

SRP_user_pwd *
LIBSTUB_SRP_VBASE_get1_by_user(void);

int
LIBSTUB_SSL_CTX_has_client_custom_ext(void);

int
LIBSTUB_SSL_CIPHER_get_kx_nid(void);

int
LIBSTUB_SSL_CIPHER_get_auth_nid(void);

int
LIBSTUB_SSL_CIPHER_is_aead(void);

int
LIBSTUB_SSL_has_pending(void);

int
LIBSTUB_SSL_SESSION_up_ref(void);

int (*)(char *, int, int, void *)
LIBSTUB_SSL_CTX_get_default_passwd_cb(void);

void *
LIBSTUB_SSL_CTX_get_default_passwd_cb_userdata(void);

int (*)(char *, int, int, void *)
LIBSTUB_SSL_get_default_passwd_cb(void);

void *
LIBSTUB_SSL_get_default_passwd_cb_userdata(void);

int
LIBSTUB_SSL_get_all_async_fds(void);

int
LIBSTUB_SSL_get_changed_async_fds(void);

void
LIBSTUB_SSL_CTX_set_default_read_buffer_len(void);

void
LIBSTUB_SSL_set_default_read_buffer_len(void);

int
LIBSTUB_SSL_set_ct_validation_callback(void);

int
LIBSTUB_SSL_CTX_set_ct_validation_callback(void);

ct_validation_cb
LIBSTUB_SSL_get_ct_validation_callback(void);

ct_validation_cb
LIBSTUB_SSL_CTX_get_ct_validation_callback(void);

const STACK_OF(SCT) *
LIBSTUB_SSL_get0_peer_scts(void);

int
LIBSTUB_SSL_CTX_set_default_ctlog_list_file(void);

int
LIBSTUB_SSL_CTX_set_ctlog_list_file(void);

void
LIBSTUB_SSL_CTX_set0_ctlog_store(void);

const CTLOG_STORE *
LIBSTUB_SSL_CTX_get0_ctlog_store(void);

void
LIBSTUB_X509_SIG_get0(void);

STACK_OF(X509_ATTRIBUTE) *
LIBSTUB_PKCS8_pkey_get0_attrs(void);

int
LIBSTUB_PKCS8_pkey_add1_attr_by_NID(void);

int
LIBSTUB_X509_STORE_up_ref(void);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _GATEPROTO_AMISSL_H */
