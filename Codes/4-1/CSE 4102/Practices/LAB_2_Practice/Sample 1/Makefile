input = input.txt
output = output.txt

main:
	flex prog.l
	gcc lex.yy.c
	./a < $(input) > $(output)