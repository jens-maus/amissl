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
## which functions are new and not defined in the AmiSSL API. For the
## new functions, it then attempts to cross-reference those in with
## OpenSSL includes and converts matching function prototypes into XML
## for manual insertion do the end of the amissl.xml file
##

$cc="ppc-amigaos-gcc-4.0.4";
$cppflags="-mcrt=clib2 -I../include";
@num_files=("../openssl/util/libssl.num", "../openssl/util/libcrypto.num");
$idl_file="../include/xml/amissl.xml";
$includes="../openssl/include/openssl";
@includes_ignore=("safestack.h","asn1_mac.h");
$tmp_dir="newXML";

$re_unimplemented= qr/(STDIO|KRB5|JPAKE|SCTP|EC_NISTP_64_GCC_128)/;
$re_ignore= qr/(STDIO|SSL_TRACE|CRYPTO_MDEBUG|UNIT_TEST)/;

#######################################################################

use constant DONE_NONE => 0x00;
use constant DONE_RAW => 0x01;
use constant DONE_PREPROCESSED => 0x02;

# remove leading & trailing whitespace
sub trim {
   my $s = shift;
   $s =~ s/^\s+|\s+$//g;
   return $s
};

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
         if ($idl !~ /name="(OBSOLETE_)*$columns[0](_amiga.*)*"/ && $columns[3] !~ $re_ignore) {
            my $unimplemented = 0;
            if ($columns[3] =~ $re_unimplemented) {
               $unimplemented = 1;
            }
            push @symbols, { name => $columns[0], unimplemented => $unimplemented, xml => "", done => DONE_NONE };
         }
      }
   }

   close $fh;
}

# get list of header files
sub get_headers {
   my @files = <@_/*.h>;
   @headers = ();
   foreach my $file (@files) {
      my $use = 1;
      foreach my $ignore (@includes_ignore) {
         if ($file =~ /$ignore$/ ) {
            $use = 0;
         }
      }
      if ($use) {
         push @headers, $file;
      }
   }
   return @headers;
}

# split string of function parameters into an array
sub split_params {
   # split(',',$_[0]) would be ideal, if not for function pointer parameters!
   my @params = ();
   my $str = $_[0];
   my $start = 0;
   my $sublen = 0;
   my $i = 0;
   $str =~ s/\s\s+/ /g; # remove unnecessary space characters
#  print "PARAMS: ",$str,"\n";
   while ($i <= length($str)) {
      my $char = substr($str, $i, 1);
      if ($char eq ',' || $char eq ')' || $char eq '') {
         if ($sublen > 0) {
            my $param = substr($str, $start, $sublen);
            push @params, trim($param);
         }
         $start = ++$i;
         $sublen = 0;
      }
      elsif ($char eq '(') {
         my $brackets = 1;
         $i++;
         $sublen++;
         while ($brackets >= 1 && $i < length($str)) {
            my $char = substr($str, $i++, 1);
            if ($char eq '(') {
               $brackets++;
            }
            elsif ($char eq ')') {
               $brackets--;
            }
            $sublen++;
         }
      }
      elsif (substr($str, $i, 2) eq "(*") {
         print "FUNC:", substr($str, $i), "\n";
         if (substr($str, $i) =~ /^((\(\*+\w+\))\s*(\([\d\D]*\)))/ ) {
            $sublen += $+[0] - $-[0];
            my $param = substr($str, $start, $sublen);
            push @params, trim($param);
            $i += $start + $sublen;
            $start = $i;
            $sublen = 0;
         }
      }
      else {
         $sublen++;
         $i++;
      }
   }
   return @params;
}

# parse function parameters and output <arg> XML
sub params_to_xml {
   my $xml = "";
   my $m68k_dreg = 0;
   my $m68k_areg = 0;
   my $unnamed_arg = ord("a");
   my $reg;

   my @params = split_params($_[0]);
   foreach my $param (@params) {
      if ($param eq "void") {
      }
#     elsif ($param =~ /^\s*((const\s)?[\w\(\)]+)\s*(\*)+\s*(\w+)[\s\)]*/ ) {
      elsif ($param =~ /^(\w+[\w\s\(\)]*)\s*(\*+)\s*(\w+)$/ ) {
         # const type *name
         # type *name
         if ($m68k_areg > 3) {
            $reg = "d".$m68k_dreg++;
         } else {
            $reg = "a".$m68k_areg++;
         }
         $xml .= "      <arg name=\"$3\" type=\"$1$2\" m68kreg=\"$reg\"/>\n";
      }
      elsif ($param =~ /^(\w+[\w\s\(\)]*)\s*(\*+)\s*(\w+)\[\]$/ ) {
         # const type *name[]
         # type *name[]
         if ($m68k_areg > 3) {
            $reg = "d".$m68k_dreg++;
         } else {
            $reg = "a".$m68k_areg++;
         }
         $xml .= "      <arg name=\"$3\" type=\"$1$2*\" m68kreg=\"$reg\"/>\n";
      }
#     elsif ($param =~ /^\s*(\w+[\w\s]*)\s*(\*+)\s*[\s\)]*/ ) {
      elsif ($param =~ /^(\w+[\w\s]*)\s*(\*+)\s*[\s\)]*$/ ) {
         # const type *
         # type *
         if ($m68k_areg > 3) {
            $reg = "d".$m68k_dreg++;
         } else {
            $reg = "a".$m68k_areg++;
         }
         $name = chr($unnamed_arg);
         $xml .= "      <arg name=\"$name\" type=\"$1$2\" m68kreg=\"$reg\"/>\n";
         $unnamed_arg++;
      }
#     elsif ($param =~ /^\s*((const\s)?[\w\(\)]+)\s+(\w+)[\s\)]*$/ ) {
      elsif ($param =~ /^\s*(\w+[\w\s]*)\s+(\w+)[\s\)]*$/ ) {
         # const type name
         # type name
         if (substr($1,-3,3) eq '_fn' || substr($1,-5,5) eq '_func'||
             substr($1,-3,3) eq '_cb' || substr($1,-6,6) eq '_cb_ex') {
            # function pointer typedef
            if ($m68k_areg > 3) {
               $reg = "d".$m68k_dreg++;
            } else {
               $reg = "a".$m68k_areg++;
            }
         } else {
            $reg = "d".$m68k_dreg++;
         }
         $xml .= "      <arg name=\"$2\" type=\"$1\" m68kreg=\"$reg\"/>\n";
      }
      elsif ($param =~ /^(\w+[\w\s]*)\)*$/ ) {
         # const type
         # type
         $name = chr($unnamed_arg);
         if (substr($1,-3,3) eq '_fn' || substr($1,-5,5) eq '_func'||
             substr($1,-3,3) eq '_cb' || substr($1,-6,6) eq '_cb_ex' ||
             $1 eq 'va_list') {
            # function pointer typedef
            if ($m68k_areg > 3) {
               $reg = "d".$m68k_dreg++;
            } else {
               $reg = "a".$m68k_areg++;
            }
         } else {
            $reg = "d".$m68k_dreg++;
         }
         $xml .= "      <arg name=\"$name\" type=\"$1\" m68kreg=\"$reg\"/>\n";
         $unnamed_arg++;
      }
#     elsif ($param =~ /^(\w+)\s+(\**\s*)?\((\*+)(\w+)\)\s*(\([\d\D]*\))/ ) {
      elsif ($param =~ /^(\w+)\s+(\**\s*)?\((\*+)(\w+)\)\s*(\([^;]+\))/ ) {
         # function pointer
#        print "FUNCARG: '",$1,"' '",$2,"' '",$3,"' '",$4,"' '",$5,"'\n";
         if ($m68k_areg > 3) {
            $reg = "d".$m68k_dreg++;
         } else {
            $reg = "a".$m68k_areg++;
         }
         $xml .= "      <arg name=\"$4\" type=\"$1 $2($3)$5\" m68kreg=\"$reg\"/>\n";
      }
      elsif ($param eq "...") {
         if ($m68k_areg > 3) {
            $reg = "d".$m68k_dreg++;
         } else {
            $reg = "a".$m68k_areg++;
         }
         $xml .= "      <vararg name=\"dummy\" type=\"long\" m68kreg=\"$reg\"/>\n";
      }
      else {
         $xml .= "***** ERROR: Unable to parse args: '$param'\n";
      }
   }

   return $xml;
}

sub parse_header {
   open(my $fh, "<", $_[0]) || die("Unable to open '$_[0]' $!");
   my $file_content = do { local $/; <$fh> };
   $file_content =~ s/\R/ /g; # replace newlines with spaces
#  $file_content =~ s/\([{}]\)/\1\n/g; # add back in needed newlines
   $file_content =~ s#/\*.*?\*/##sg; # strip multiline C comments
   close $fh;

   my $symbols_ref = \@symbols;
   foreach my $symbol_obj (@$symbols_ref) {
      $symbol = $symbol_obj->{name};
      $/ = ";";
#     if ($file_content =~ /$symbol\([^\)]+;/ ) {
#     if ($file_content =~ /$symbol(\([\w\s\(\)\*,]+\));/ ) {
      if ($file_content =~ /\(?$symbol\)?(\([\d\D]+\));/ ) {
         my $xml;
         my $offset = $-[0] - 128;
         if ($offset < 0) {
            $offset = 0;
         }
         my $str = substr($file_content, $offset, $+[0]-$offset);
#        if ($str =~ /((const\s+)?\w+\s+(\**\s*)?)$symbol\(([^;]+)/ ) {
         if ($str =~ /((const\s+)?((unsigned|signed|struct)\s+)?[\w\(\)]+\s+(\**\s*)?)\(?$symbol\)?\(([^;]+)/ ) {
            # function definition with non-function pointer result
            my $return_type = trim($1);
            my $params = trim($6);
#           print @_,": ",$symbol,",",$return_type,",(",$params,")\n";
            if ($symbol_obj->{unimplemented} == 1) {
               $xml = "    <method name=\"$symbol\" result=\"$return_type\" status=\"unimplemented\">\n";
            } else {
               $xml = "    <method name=\"$symbol\" result=\"$return_type\">\n";
            }
            $xml .= params_to_xml($params);
            $xml .= "    </method>\n";
            $symbol_obj->{xml} = $xml;
            $symbol_obj->{done} |= $_[1];
         }
#        elsif ($str =~ /((const\s+)?[\w\(\)]+)\s+\(\*+$symbol(\([\d\D]+)\)\s+\(([\d\D]+)\);/ ) {
#        elsif ($str =~ /((const\s+)?[\w\(\)]+)\s+(\**\s*)?\(\*+$symbol(\([\d\D]+)\)\s+\(([^;]+)\)/ ) {
         elsif ($str =~ /((const\s+)?(struct\s+)?[\w\(\)]+)\s+(\**\s*)?\(\*+$symbol\s*\(([\w\s\*]+)\)\)\s+\(([^;]+)\);/ ) {
            # function definition with function pointer result
#           print "*** WARN: Returns function pointer ($symbol)\n";
#           print "'",$1,"' '",$2,"' '",$3,"' '",$4,"' '",$5,"'\n";
            my $params = trim($5);
            my $return_type = trim($2) . trim($3) . trim($1) . " " . trim($4). "(*)(" . trim($6) . ")";
            $return_type =~ s/\s\s+/ /g; # remove unnecessary space characters
            if ($symbol_obj->{unimplemented} == 1) {
               $xml = "    <method name=\"$symbol\" result=\"$return_type\" status=\"unimplemented\">\n";
            } else {
               $xml = "    <method name=\"$symbol\" result=\"$return_type\">\n";
            }
            $xml .= params_to_xml($params);
            $xml .= "    </method>\n";
            $symbol_obj->{xml} = $xml;
            $symbol_obj->{done} |= $_[1];
         }
         else {
            $xml = "*** ERROR: Unable to parse function $symbol\n*** ".substr($str,0,256)."\n";
            $symbol_obj->{xml} = $xml;
         }
      }
   }
}

sub preprocess_headers {
   # read in all OpenSSL headers into a single string
   my $all_headers = "";
   foreach my $file (@headers) {
      open(my $fh, "<$file") || die("Unable to open '$file' ($!)");
      $all_headers .= do { local $/; <$fh> } . "\n";
      close($fh);
   }

   # we don't want macro types, such as STACK_OF() being expanded
   $all_headers =~ s/#\s*define\s+STACK_OF\(.*//g;
   $all_headers =~ s/#\s*define\s+LHASH_OF\(.*//g;

   # write all headers back to a file
   open(my $fh, ">$tmp_dir/all.h") || die ("Unable to open '$tmp_dir/all.h' ($!)");
   print $fh $all_headers;
   close($fh);

   # pre-process the headers to expand function prototypes generated by macros
   system("$cc $cppflags -E $tmp_dir/all.h -o $tmp_dir/preprocessed.h");
}

#######################################################################

# Read in IDL .xml file
get_idl($idl_file);

# Read in new public API functions
@symbols = ();
foreach my $file (@num_files) {
   get_new_symbols($file);
}

# Get all header files
@headers = get_headers($includes);

# PASS 1: Try again using pre-preprocessed headers instead
# (this will catch functions defined using macros and will also
# ignore functions disabled in our build)
if (scalar(@symbols) > 0) {
   mkdir $tmp_dir || die("Unable to create temporary dir: $!");
   preprocess_headers($includes);
   parse_header($tmp_dir."/preprocessed.h",DONE_PREPROCESSED);
   unlink $tmp_dir."/all.h";
   unlink $tmp_dir."/preprocessed.h";
   rmdir $tmp_dir;
}

# PASS 2: Parse all header files and extract function prototypes
# (note that this will also catch functions disabled in our build)
foreach my $file (@headers) {
   parse_header($file,DONE_RAW);
}

# Handle missing symbols
foreach my $symbol (@symbols) {
   if ($symbol->{done} == DONE_NONE) {
      # Missing symbol (could be defined, but unimplemented or internal)
      print "ERROR: Unable to find '$symbol->{name}'\n";
   }
   elsif (!($symbol->{done} & DONE_PREPROCESSED)) {
      # Only present in raw headers (probably disabled in our build settings)
      print "WARN: Function '$symbol->{name}' appears to have been disabled\n";
   }
}

# Output XML
foreach my $symbol (@symbols) {
   if ($symbol->{done} & DONE_PREPROCESSED) {
      # Present in raw and pre-processed headers
      print $symbol->{xml};
   }
}
