# AmiSSL library – OpenSSL for Amiga systems

[![Release](https://img.shields.io/github/release/jens-maus/amissl.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Downloads](https://img.shields.io/github/downloads/jens-maus/amissl/latest/total.svg)](https://github.com/jens-maus/amissl/releases/latest)
[![Issues](https://img.shields.io/github/issues/jens-maus/amissl.svg)](https://github.com/jens-maus/amissl/issues)
[![Build Status](https://travis-ci.org/jens-maus/amissl.svg?branch=master)](https://travis-ci.org/jens-maus/amissl)
[![Code Climate](https://codeclimate.com/github/jens-maus/amissl/badges/gpa.svg)](https://codeclimate.com/github/jens-maus/amissl)
[![License](http://img.shields.io/:license-bsd_style-blue.svg?style=flat)](https://www.openssl.org/source/license.html)
[![Donate](https://img.shields.io/badge/donate-PayPal-green.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=8L52PD9A9WS36)

The AmiSSL project is a collaborative effort to develop a shared library for Amiga-based
systems (AmigaOS, MorphOS, AROS, etc.) based on the OpenSSL (www.openssl.org) cryptographic
library toolkit.

The library together with its provided software development kit (SDK) tries to be
100% API/ABI compatible to the OpenSSL version it is based on. In addition, due to its
shared library nature it can be used by several Amiga applications at the same time.

## General

AmiSSL consists of three major components: the shared libraries, public root certificates
and a port of the "openssl" command-line tool to generate certificates accordingly.

### Libraries

The main library of AmiSSL is 'amisslmaster.library' which acts as a proxy and
opens the appropriate AmiSSL library for applications using AmiSSL. This mechanism
allow to have different AmiSSL versions installed in parallel due to different
applications potentially requiring different versions. amisslmaster.library makes
sure that the correct 'amissl_vXXXX.library' versions are opened.

Other shared libraries are usually stored inside the "AmiSSL:Libs/AmiSSL" directory.
None of these libraries have to be opened directly by any third party application
but only by 'amisslmaster.library'. The technical details on this can be found in
the AmiSSL SDK documentation.

### Root Certificates

AmiSSL ships with a bunch of default root certificates and are usually stored in the
"AmiSSL:certs" directory with every new AmiSSL installation.

Each AmiSSL version comes with full set of root certificates which have been
synchronized to the ones the Mozilla group is usually distributing with their products
(e.g. Mozilla Firefox, etc.). And with every new updated AmiSSL version these
certificates are updated and expired ones are being removed.
Thus, if you had some earlier versions of AmiSSL installed,
it is suggested that the old AmiSSL:certs directory is replaced with the
certs directory from the latest AmiSSL archive. If you added some
certificates to the AmiSSL:certs directory, you should back them up and, if
they haven't expired, copy them back after installing the latest AmiSSL certs
directory.

Besides the "AmiSSL:certs" directory, a "AmiSSL:usercerts" and "AmiSSL:private"
directory can be found inside "AmiSSL:" These are not used by AmiSSL, they are meant
to be used any application software using AmiSSL.

### The 'openssl' tool

A port of the OpenSSL tool is also included. It is a "command line tool for
using the various cryptography functions of OpenSSL's crypto library from the
shell". A detailed documentation for the OpenSSL tool is included in the archive.

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
AmiSSL v4    Copyright (c) 2014-2017 AmiSSL Open Source Team.
All Rights Reserved.

AmiSSL IS PROVIDED "AS IS" AND ANY WARRANTIES, EXPRESSED OR IMPLIED,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
AmiSSL AUTHORS OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

This product includes cryptographic software written by Eric Young
(eay@cryptsoft.com). This product includes software written by Tim Hudson
(tjh@cryptsoft.com). Please refer to the complete license information of
the OpenSSL project (www.openssl.org) for more information.
```

## Authors

AmiSSL is a collaborative effort with Amiga-specific code being contributed by
the following people:

- Andrija Antonijevic
- Gunther Nikl
- Jens Maus
- Oliver Roberts
- Stefan Burstroem
- Thore Böckelmann
