#! /bin/bash
a=10
b=20
c=$((a+b))
d=$a+$b
e=$((a-b))
f=$((a*b))
g=$((a/b))

echo a = $a and b = $b
echo "a + b = "$((a+b))
echo "addition = "$c
echo $d|bc
echo $e
echo $f
echo $g
echo $((c**2))
