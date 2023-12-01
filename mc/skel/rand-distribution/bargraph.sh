#!/bin/sh
export LD_LIBRARY_PATH; LD_LIBRARY_PATH=/usr/keio/lib
export LANG;            LANG=C

if [ "x$1" = "x" ]
then
    echo usage: $0 n
    exit 1
fi

echo \
    0.0 `./rand $1 | ./count 0.0 0.1` @\
    0.1 `./rand $1 | ./count 0.1 0.2` @\
    0.2 `./rand $1 | ./count 0.2 0.3` @\
    0.3 `./rand $1 | ./count 0.3 0.4` @\
    0.4 `./rand $1 | ./count 0.4 0.5` @\
    0.5 `./rand $1 | ./count 0.5 0.6` @\
    0.6 `./rand $1 | ./count 0.6 0.7` @\
    0.7 `./rand $1 | ./count 0.7 0.8` @\
    0.8 `./rand $1 | ./count 0.8 0.9` @\
    0.9 `./rand $1 | ./count 0.9 1.0` \
| tr @ \\012 | awk '{print $1+0.05,$2;}' \
| xgraph -t "`whoami` (`date`)" -y "count" -bar -nl -brw 0.09 -lx 0,1 -0 "n=$1"
