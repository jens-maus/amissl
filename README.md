# ![AmiSSL library – OpenSSL for Amiga systems](https://www.ibrowse-dev.net/images/amissl.png)

[![Current Release](https://img.shields.io/github/release/jens-maus/amissl.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Downloads](https://img.shields.io/github/downloads/jens-maus/amissl/latest/total.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Commits since last release](https://img.shields.io/github/commits-since/jens-maus/amissl/latest.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Issues](https://img.shields.io/github/issues/jens-maus/amissl.svg)](https://github.com/jens-maus/amissl/issues)
[![Build](https://github.com/jens-maus/amissl/workflows/CI/badge.svg)](https://github.com/jens-maus/amissl/actions)
[![License](http://img.shields.io/:license-Apache_2.0-blue.svg?style=flat)](https://www.apache.org/licenses/LICENSE-2.0)
[![Donate](https://img.shields.io/badge/donate-PayPal-green.svg)](https://www.paypal.com/donate/?hosted_button_id=KSG49RVGY8AG2)
[![Twitter Follow](https://img.shields.io/twitter/follow/amigassl?style=social)](https://twitter.com/amigassl)

<a href="https://www.ibrowse-dev.net/"><img src="https://www.ibrowse-dev.net/images/sponsor.png" width="272" height="99" align="right" border="0" /></a>

The AmiSSL project is a collaborative effort to develop a port of OpenSSL
in a shared library for Amiga-based systems (AmigaOS, MorphOS, AROS, etc).
OpenSSL (www.openssl.org) is "an open source project that provides a
robust, commercial-grade, and full-featured toolkit for the Transport
Layer Security (TLS) and Secure Sockets Layer (SSL) protocols. It is also
a general-purpose cryptography library."

The library together with its provided software development kit (SDK) tries
to be 100% API/ABI compatible to the OpenSSL version it is based on. Due to
it being a shared library, it can be used by several Amiga applications at
the same time, without wasting resources.

AmiSSL v5 is a new major release which has been updated with full
compatibility with OpenSSL 3.5. This includes important security related
fixes, a built-in HTTP(S) client and comes with the latest encryption
ciphers which are required nowadays to connect to modern SSL-based services
such as HTTPS and SSH.

## General

AmiSSL consists of four major components: the shared libraries, the public
root CA certificates, a port of the `OpenSSL` command-line tool and the
developer SDK.

### Libraries

The main library is `amisslmaster.library` which acts as a proxy and opens
the appropriate AmiSSL library (with compatibility to a certain OpenSSL
version) for the programs using AmiSSL. This mechanism allows different
AmiSSL versions to be installed in parallel, due to different applications
potentially requiring different versions. For this reason, it is important
that the latest version of `amisslmaster.library` is always installed.

The actual OpenSSL implementations are located in the shared libraries that
are usually stored inside the `AmiSSL:Libs/AmiSSL` directory. With the
exception of AmiSSL v1 libraries, none of them should be opened directly,
but instead via `amisslmaster.library`. The technical details on this can be
found in AmiSSL SDK documentation (see [README-SDK](dist/README-SDK)).

The previous versions of libraries in AmiSSL directory should be kept when a
new version of AmiSSL is released since they may still be used, as sometimes
changes in the OpenSSL API/ABI or public structures mean that backwards
compatibility cannot be maintained, usually for major OpenSSL updates only.
When this is not an issue, the installer will delete any old versions that
are no longer required and applications will benefit automatically from using
the latest version without themselves needing to be recompiled/updated.

### Root CA Certificates

Each AmiSSL version is supplied with a full set of root CA certificates
which have been synchronized to the ones the Mozilla group usually distribute
with their products (e.g. Mozilla Firefox, etc.) and are stored in the
`AmiSSL:Certs` directory. When installing new updated AmiSSL versions, these
certificates are updated and expired ones are removed.

It is recommended that you do not manually add certificates to the
`AmiSSL:Certs` directory, but if you did, you should back them up and copy
them back after installing the latest AmiSSL. Normally, you should add and
maintain your own certificates in the `AmiSSL:UserCerts` directory, so that
no future AmiSSL release will delete them. Applications should store
certificates in `AmiSSL:UserCerts` and private keys in `AmiSSL:Private`.

### The 'OpenSSL' command-line tool

A port of the OpenSSL tool is also included and usually installed to `AmiSSL:`
or `C:` during installation. It is a "command line tool for using the various
cryptography functions of OpenSSL's crypto library from the shell". The
documentation for the OpenSSL tool is included in the archive and can also
be reviewed [online](https://www.openssl.org/docs/man3.5/man1/openssl.html).
A sample openssl.cnf file is also installed to `AmiSSL:`, if it doesn't already
exist, along with the CA.pl helper script, both of which aid the certificate
generation features of the OpenSSL tool. The tsget.pl script is also included.

### Developer SDK

The AmiSSL SDK contains everything a developer needs to use OpenSSL in their
applications, including C header files, Autodocs, autoopen link library,
stub link library, examples and library interface description files. The first
point of call being the [README-SDK](dist/README-SDK) file which explains what needs to be done.

## Backwards Compatibility

All applications compiled to use previous versions of AmiSSL v5 will
automatically use the latest version once installed. Old applications will
continue to use AmiSSL v4 or older and will need to be recompiled with the
updated SDK in order to start using AmiSSL v5. Besides this difference,
AmiSSL v5 can be installed on top of any previous AmiSSL versions, which
ensures that applications compiled for AmiSSL v1/v2/v3/v4 continue to work.

## Requirements

AmiSSL requires an Amiga-compatible operating system being installed (AmigaOS,
MorphOS, AROS) with exec.library v38+ compatibility. Currently, AmiSSL is
compatible with AmigaOS 4.0+/PPC, AmigaOS 3.0+/68020+ and MorphOS.

## Installation

AmiUpdate may be used by AmigaOS 4.x users to automatically download and install
any new AmiSSL version. Otherwise, the latest release archive can be downloaded
from any of the following URLs:

  https://github.com/jens-maus/amissl/releases  
  http://aminet.net/search?query=amissl-5

Once downloaded it should be unarchived to a temporary directory and the "Install"
script used accordingly.

## Legal information

```
AmiSSL v1    Copyright (c) 1999-2006 Andrija Antonijevic.
AmiSSL v2/v3 Copyright (c) 2002-2006 Andrija Antonijevic and Stefan Burstroem.
AmiSSL v4/v5 Copyright (c) 2014-2025 AmiSSL Open Source Team.
All Rights Reserved.

OpenSSL Cryptography and SSL/TLS Toolkit
Copyright (c) 1995-2025 The OpenSSL Project Authors. All Rights Reserved.

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
