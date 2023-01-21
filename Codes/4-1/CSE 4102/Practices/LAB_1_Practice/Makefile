output:
	gcc -o output example.c
	gcc -E example.c > example.i
	gcc -S -masm=intel example.i
	as -o example.o example.s
	objdump -M intel -d example.o > example.dump

clean:
	rm *.o

clean_output:
	rm *.o output