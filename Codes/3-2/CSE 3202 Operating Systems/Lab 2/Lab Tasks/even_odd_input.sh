#! /bin/bash

read -p "Enter an integer: " x

if [ $((x%2)) -eq 0 ]
	then
	echo $x is even
else
	echo $x is odd
fi
