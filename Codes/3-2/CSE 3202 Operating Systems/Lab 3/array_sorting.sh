#! /bin/bash

read -a arr
echo Values of Arrays: ${arr[@]}

len=${#arr[@]}
echo Length: $len

# bubble sort
temp=0
# Ascending
for ((i=0;i<$((len-1));i++))
do
	for ((j=0;j<$((len-i-1));j++))
	do
		if (( ${arr[j]} > ${arr[$((j+1))]} ))
		then
			temp=${arr[j]}
			arr[$j]=${arr[$((j+1))]}
			arr[$((j+1))]=$temp
		fi
	done
done

echo Array in ascending order: ${arr[@]}

# Descending
for ((i=0;i<$((len-1));i++))
do
	for ((j=0;j<$((len-i-1));j++))
	do
		if (( ${arr[j]} < ${arr[$((j+1))]} ))
		then
			temp=${arr[j]}
			arr[$j]=${arr[$((j+1))]}
			arr[$((j+1))]=$temp
		fi
	done
done

echo Array in descending order: ${arr[@]}
