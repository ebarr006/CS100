#!/bin/sh

# Write a program called largest.sh that takes three numbers from the command line, and echoes the largest number. 
# This program should guard against having too few or too many parameters passed in,
# and should echo an error message with proper usage if the number of parameters is incorrect

# echo "TESTBLOCK_0"

if [ $# -lt 3 ]; then
	echo "ERROR: Too few arguments"
	exit 1
fi

if [ $# -gt 3 ]; then
	echo "ERROR: Too many arguments"
	exit 1
fi

# echo "TESTBLOCK_1"

if [ $1 -gt $2 ] && [ $1 -gt $3 ]; then
	x=$1
else
	if [ $2 -gt $1 ] && [ $2 -gt $3 ]; then
		x=$2
	else
		x=$3
	fi
fi
echo "Largest Number: $x"
