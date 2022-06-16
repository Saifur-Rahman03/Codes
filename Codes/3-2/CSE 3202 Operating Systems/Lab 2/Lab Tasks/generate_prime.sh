#! /bin/bash
c=0
read -p "Enter starting number: " s
read -p "Enter ending number: " e

for ((i=s;i<=e;i++))
	do
	for ((j=2;j<i;j++))
		do
		if [ $((i%j)) -eq 0 ]
			then
			c=$((c+1))
		fi
	done
	if [ $c -eq 0 ] && [ $i -ne 1 ]
		then
		echo $i
	fi
	c=0
done
