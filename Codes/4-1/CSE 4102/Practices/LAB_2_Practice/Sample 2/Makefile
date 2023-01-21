input = input.txt
output = output.txt

main:
	flex exmple.l
	gcc lex.yy.c
	./a < $(input) > $(output)

main2:
	bison -d example2.y
	flex example2.l
	gcc example2.tab.c lex.yy.c
	./a < $(input) > $(output)