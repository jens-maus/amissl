
cvs co -r OpenSSL-engine-0_9_6-stable -d openssl6-engine openssl
cvs co -r OpenSSL_0_9_7-stable -d openssl7 openssl
cvs co -r OpenSSL_0_9_6-stable -d openssl6 openssl

#cd openssl7
#./config
#make update
#patch -p1 < ../diffs.sec7
#cvs commit -F ../comm.txt

#cd ../openssl6
#./config
#make update
#patch -p1 < ../diffs.sec6
#cvs commit -F ../comm.txt

#cd ../openssl6-engine
#./config 
#make update
#patch -p1 < ../diffs.sec6e
#cvs commit -F ../comm.txt
