#!/usr/bin/perl
#
############################################################################
#
# AmiSSL - OpenSSL wrapper for AmigaOS-based systems
# Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
# Copyright (c) 2006-2022 AmiSSL Open Source Team.
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
## if there are newly deprecated functions which need marking as so.
##

@num_files=("../openssl/util/libssl.num", "../openssl/util/libcrypto.num");
$idl_file="../include/xml/amissl.xml";

#######################################################################

# read existing .xml file
sub get_idl {
   open(my $fh, "<", @_) || die "Could not open file '@_' $!";
   $idl = do { local $/; <$fh> };
   close $fh;
}

# check symbols in .num files and cross-reference with existing .xml
sub get_new_symbols {
   open(my $fh, "<", @_) || die "Could not open file '@_' $!";

   while (my $row = <$fh>) {
      my @columns = split /\s+/, $row;
      if($columns[3] =~ /^EXIST:\!.*:FUNCTION:.*/ ||
         $columns[3] =~ /^EXIST:EXPORT_VAR_AS_FUNCTION.*:FUNCTION:.*/ ||
         $columns[3] =~ /^EXIST::FUNCTION:.*/)
      {
          if ($idl =~ /<method\sname="(OBSOLETE_)?$columns[0](_amiga)?(_\d)?"/) {
	      if ($columns[3] =~ /DEPRECATED/ && $idl !~ /<method\sname="(OBSOLETE_)?$columns[0](_amiga)?(_\d)?"\sresult=".*"\s(lifecycle="deprecated"\s?)?(status="unimplemented")?>/) {
	          print $columns[0]." needs to be marked deprecated\n";
	      }
              if ($columns[3] !~ /DEPRECATED/ && $idl =~ /<method\sname="(OBSOLETE_)?$columns[0](_amiga)?(_\d)?"\sresult=".*"\s(lifecycle="deprecated"\s?)(status="unimplemented")*>/) {
	          print $columns[0]." has mistakenly been marked deprecated\n";
	      }
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
   get_new_symbols($file);
}
