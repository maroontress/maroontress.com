#!/bin/csh -f
setenv LD_LIBRARY_PATH /usr/keio/lib
setenv LANG C
if ( $#argv <= 1 ) then
  echo usage: $0 N n [ n\' n\'\' ... ]
  exit 1
endif
set N = $1
shift
rm -f "Ave.(N=$N)" "Var.(N=$N)"
touch "Ave.(N=$N)" "Var.(N=$N)"
foreach n ($*)
  echo $n `./walk $N $n | ./average | tail -1 | awk '{print $2;}'` \
	>> "Ave.(N=$N)"
  echo $n `./walk $N $n | ./variance | tail -1 | awk '{print $2;}'` \
	>> "Var.(N=$N)"
end
xgraph -m -t "random-walk `whoami` (`date`)" -x 'n' -y 'y(n)' \
	"Ave.(N=$N)" "Var.(N=$N)"
exit 0
