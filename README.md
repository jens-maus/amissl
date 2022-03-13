# AmiSSL library – OpenSSL for Amiga systems

[![Current Release](https://img.shields.io/github/release/jens-maus/amissl.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Downloads](https://img.shields.io/github/downloads/jens-maus/amissl/latest/total.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Commits since last release](https://img.shields.io/github/commits-since/jens-maus/amissl/latest.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Issues](https://img.shields.io/github/issues/jens-maus/amissl.svg)](https://github.com/jens-maus/amissl/issues)
[![Build](https://github.com/jens-maus/amissl/workflows/CI/badge.svg)](https://github.com/jens-maus/amissl/actions)
[![License](http://img.shields.io/:license-Apache_2.0-blue.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0)

The AmiSSL project is a collaborative effort to develop a shared library for Amiga-based
systems (AmigaOS, MorphOS, AROS, etc.) based on the OpenSSL (www.openssl.org) cryptographic
and SSL/TLS library toolkit.

The library together with its provided software development kit (SDK) tries to be
100% API/ABI compatible to the OpenSSL version it is based on. In addition, due to its
shared library nature it can be used by several Amiga applications at the same time.

## General

AmiSSL consists of three major components: the shared libraries, public root certificates
and a port of the `openssl` command-line tool to generate certificates accordingly.

### Libraries

The main library of AmiSSL is `amisslmaster.library` which acts as a proxy and
opens the appropriate AmiSSL library for applications using AmiSSL. This mechanism
allow to have different AmiSSL versions installed in parallel due to different
applications potentially requiring different versions. amisslmaster.library makes
sure that the correct `amissl_vXXXX.library` versions are opened.

Other shared libraries are usually stored inside the `AmiSSL:Libs/AmiSSL` directory.
None of these libraries have to be opened directly by any third party application
but only by `amisslmaster.library`. The technical details on this can be found in
the AmiSSL SDK documentation.

### Root Certificates

AmiSSL ships with a bunch of default root certificates and are usually stored in the
`AmiSSL:certs` directory with every new AmiSSL installation.

Each AmiSSL version comes with full set of root certificates which have been
synchronized to the ones the Mozilla group is usually distributing with their products
(e.g. Mozilla Firefox, etc.). And with every new updated AmiSSL version these
certificates are updated and expired ones are being removed.
Thus, if you had some earlier versions of AmiSSL installed,
it is suggested that the old `AmiSSL:certs` directory is replaced with the
certs directory from the latest AmiSSL archive. If you added some
certificates to the `AmiSSL:certs` directory, you should back them up and, if
they haven't expired, copy them back after installing the latest AmiSSL certs
directory.

Besides the `AmiSSL:certs` directory, a `AmiSSL:usercerts` and `AmiSSL:private`
directory can be found inside `AmiSSL:` These are not used by AmiSSL, they are meant
to be used any application software using AmiSSL.

### The 'openssl' tool

A port of the OpenSSL tool is also included. It is a "command line tool for
using the various cryptography functions of OpenSSL's crypto library from the
shell". A detailed documentation for the OpenSSL tool is included in the archive
and can also be reviewed [online](https://www.openssl.org/docs/man1.1.1/man1/openssl.html).
A sample openssl.cnf file is also included, along with the CA.pl helper script, both
of which aid the certificate generation features of the OpenSSL tool.

## Requirements

AmiSSL requires an Amiga-compatible operating system being installed (AmigaOS, MorphOS, AROS)
with exec.library v38+ compatibility.

## Installation

Latest release archive can be downloaded from the following URL:

  https://github.com/jens-maus/amissl/releases

Once downloaded it should be unarchived to a temporary directory and the "Install"
script used accordingly.

## Legal information

```
AmiSSL v1    Copyright (c) 1999-2006 Andrija Antonijevic.
AmiSSL v2/v3 Copyright (c) 2002-2006 Andrija Antonijevic and Stefan Burstroem.
AmiSSL v4/v5 Copyright (c) 2014-2022 AmiSSL Open Source Team.
All Rights Reserved.

OpenSSL Cryptography and SSL/TLS Toolkit
Copyright (c) 1995-2022 The OpenSSL Project Authors. All Rights Reserved.

AmiSSL uses a modified version of OpenSSL. Both AmiSSL and OpenSSL
are licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License in the file LICENSE in the
source distribution or at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

68060 optimised 64-bit multiplication routines
Copyright (c) 2001-2022 Frank Wille. All Rights Reserved.

OpenSSL BIGNUM 68020-68040 optimised routines
Copyright (c) 2002 by Howard Chu <hyc@highlandsun.com>
```

## Authors

AmiSSL is a collaborative effort with Amiga-specific code being contributed by
the following people:

- Andrija Antonijevic
- Thore Böckelmann
- Stefan Burstroem
- Howard Chu
- Jens Maus
- Gunther Nikl
- Oliver Roberts
- Frank Wille
