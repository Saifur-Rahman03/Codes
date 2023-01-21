main:
	gcc -E q1.c > q1.i
	gcc -S -masm=intel q1.i
	as -o q1.o q1.s