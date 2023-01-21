input = input.txt
output = output.txt

main: q2b.l q2b.y
	bison -d q2b.y 
	flex q2b.l 
	gcc q2b.tab.c lex.yy.c
	./a <$(input)
	


