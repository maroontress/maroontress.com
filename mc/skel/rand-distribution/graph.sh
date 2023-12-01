#!/bin/sh
export LD_LIBRARY_PATH; LD_LIBRARY_PATH=/usr/keio/lib
export LANG;            LANG=C
xgraph -t "`whoami` (`date`)" -x "n" "$@"
