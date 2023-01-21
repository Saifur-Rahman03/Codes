input = input.txt
output = output.txt

main:
	bison -d q2b.y
	flex q2b.l
	gcc q2b.tab.c lex.yy.c
	./a < $(input)