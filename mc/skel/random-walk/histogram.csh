#!/bin/csh
setenv LD_LIBRARY_PATH /usr/keio/lib
setenv LANG C
if ( $#argv <= 1 ) then
  echo usage: $0 N n [ n\' n\'\' ... ]
  exit 1
endif
set N = $1
set files = ""
shift
foreach n ($*)
  if ( ! -f N=$N,n=$n ) then
    ./walk $N $n | sort -n | uniq -c | awk '{print $2,$1;}' > N=$N,n=$n
  endif
  set files = "$files N=$N,n=$n"
end
xgraph -nl -m -t "random-walk `whoami` (`date`)" -x 'x' -y 'N(x)' $files
exit 0
