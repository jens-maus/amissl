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
#pragma libcall DHBase DH_size 054 801
#pragma libcall DHBase DH_get_ex_new_index 05a ba98005
#pragma libcall DHBase DH_set_ex_data 060 90803
#pragma libcall DHBase DH_get_ex_data 066 0802
#pragma libcall DHBase DH_generate_parameters 06c 981004
#pragma libcall DHBase DH_check 072 9802
#pragma libcall DHBase DH_generate_key 078 801
#pragma libcall DHBase DH_compute_key 07e a9803
#pragma libcall DHBase ERR_load_DH_strings 084 00

#endif /* PRAGMAS_DH_PRAGMAS_H */
