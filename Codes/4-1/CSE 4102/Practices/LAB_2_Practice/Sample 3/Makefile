input = input.txt
output = output.txt

main:
	flex q2b.l
	gcc lex.yy.c
	./a < $(input) > $(output)

main2:
	bison -d q2b2.y
	flex q2b2.l
	gcc q2b2.tab.c lex.yy.c
	./a < $(input) > $(output)