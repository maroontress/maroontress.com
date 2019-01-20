#!/bin/sh
while read line
do
	if [ "x$line" = "x" ]
	then
		echo ""
		echo -n "<p>"
	else
		echo -n $line
	fi
done
