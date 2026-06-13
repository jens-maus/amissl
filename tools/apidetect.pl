#!/usr/bin/perl
#
############################################################################
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
# Copyright (c) 2006-2026 AmiSSL Open Source Team.
# All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License in the file LICENSE in the
# source distribution or at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# AmiSSL Official Support Site: https://github.com/jens-maus/amissl
#
############################################################################

##
## This script cross-references the API functions defined in the
## OpenSSL .num files with the XML idltool source file to determine
## which functions exist in the AmiSSL API, but are no longer in the
## OpenSSL API.
##
## ./tools/apidetect.pl [old|new]
##

@num_files=("openssl/util/libssl.num", "openssl/util/libcrypto.num");
$idl_file="include/xml/amissl.xml";

$re_ignore= qr/(STDIO|SSL_TRACE|CRYPTO_MDEBUG|UNIT_TEST|RC5|MD2|COMP|DEPRECATEDIN_0.*|DEPRECATEDIN_1.*|DEPRECATEDIN_3.*|DEPRECATED(IN)*_4_0)/;

#######################################################################

use XML::LibXML;

# read existing .xml file
sub get_idl {
   open(my $fh, "<", @_) || die "Could not open file '@_' $!";
   $idl = XML::LibXML->load_xml(IO => $fh);
   close $fh;
}

sub get_symbols {
   open(my $fh, "<", @_) || die "Could not open file '@_' $!";

   while (my $row = <$fh>) {
      my @columns = split /\s+/, $row;
      if($columns[3] =~ /^EXIST:\!.*:FUNCTION:.*/ ||
         $columns[3] =~ /^EXIST:EXPORT_VAR_AS_FUNCTION.*:FUNCTION:.*/ ||
         $columns[3] =~ /^EXIST::FUNCTION:.*/)
      {
         if($columns[3] !~ $re_ignore) {
            push @symbols, { name => $columns[0] };
         }
      }
   }

   close $fh;
}

#######################################################################

# Read in IDL .xml file
get_idl($idl_file);

# Read in new public API functions
@symbols = ();
foreach my $file (@num_files) {
   get_symbols($file);
}

# Compare
if ($ARGV[0] eq "new") {
  printf "Functions in libssl.num or libcrypto.num that are not in AmiSSL API:\n";

  foreach my $symbol (@symbols) {
    $found = 0;
    foreach my $func ($idl->findnodes('/library/interface/method/@name')) {
      $name = $func->to_literal();
      if ($symbol->{name} eq $name || $symbol->{name}."_amiga" eq substr($name,0,length($symbol->{name}."_amiga"))) {
        $found = 1;
        last;
      }
    }
    if ($found == 0) {
      print $symbol->{name}."\n";
    }
  }
} else {
  printf "Functions in AmiSSL API that are not in libssl.num or libcrypto.num:\n";

  foreach my $func ($idl->findnodes('/library/interface/method/@name')) {
    $name = $func->to_literal();
    if ($name !~ /Reserved|amiga/) {
      $found = 0;
      foreach my $symbol (@symbols) {
        if ($symbol->{name} eq $name) {
          $found = 1;
          last;
        }
      }
      if ($found == 0) {
        print $name."\n";
      }
    }
  }
}
