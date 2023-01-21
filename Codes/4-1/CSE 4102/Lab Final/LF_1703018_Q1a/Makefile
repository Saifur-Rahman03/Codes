input = input.txt
output = output.txt

main: q1a.l q1a.y
	bison -d q1a.y 
	flex q1a.l 
	gcc q1a.tab.c lex.yy.c
	./a <$(input)
	


