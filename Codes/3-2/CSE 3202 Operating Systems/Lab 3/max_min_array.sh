#! /bin/bash

read -a arr
echo Value of Arrays: ${arr[@]}

max=${arr[0]}
min=${arr[0]}

for i in ${arr[@]}
do
	if (( $i >= $max ))
	then
		max=$i
	fi

	if (( $i <= $min ))
	then
		min=$i
	fi
done

echo maximum element $max
echo minimum element $min
