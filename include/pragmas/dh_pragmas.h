#ifndef PRAGMAS_DH_PRAGMAS_H
#define PRAGMAS_DH_PRAGMAS_H

#pragma libcall DHBase InitDH 01e 9802
#pragma libcall DHBase CleanupDH 024 00
#pragma libcall DHBase DH_OpenSSL 02a 00
#pragma libcall DHBase DH_set_default_method 030 801
#pragma libcall DHBase DH_get_default_method 036 00
#pragma libcall DHBase DH_set_method 03c 9802
#pragma libcall DHBase DH_new_method 042 801
#pragma libcall DHBase DH_new 048 00
#pragma libcall DHBase DH_free 04e 801
#pragma libcall DHBase DH_up_ref 054 801
#pragma libcall DHBase DH_size 05a 801
#pragma libcall DHBase DH_get_ex_new_index 060 ba98005
#pragma libcall DHBase DH_set_ex_data 066 90803
#pragma libcall DHBase DH_get_ex_data 06c 0802
#pragma libcall DHBase DH_generate_parameters 072 981004
#pragma libcall DHBase DH_check 078 9802
#pragma libcall DHBase DH_generate_key 07e 801
#pragma libcall DHBase DH_compute_key 084 a9803
#pragma libcall DHBase d2i_DHparams 08a 09803
#pragma libcall DHBase i2d_DHparams 090 9802
#pragma libcall DHBase DHparams_print 096 9802
#pragma libcall DHBase ERR_load_DH_strings 09c 00

#endif /* PRAGMAS_DH_PRAGMAS_H */
