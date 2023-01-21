%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
    #include "symtab.c"
    #include "codeGen.c"
	void yyerror();
	extern int lineno;
	extern int yylex();
%}

%union
{
    char str_val[100];
    int int_val;
}

%token FUNC LET STARTO END AS MAIN ADDO SUBO PRINT VAR
%token LPAREN RPAREN LBRACE RBRACE SEMI ASSIGN SCAN
%token<str_val> ID
%token<int_val> INT_NUM
%token<int_val> INT

%start program

%%
program: {gen_code(START, -1);} code {gen_code(HALT, -1);}
code: FUNC MAIN LPAREN RPAREN STARTO statements END;

statements: statements statement | ;

statement:  declaration
            | LET ID AS INT
            {
                insert($2, $4);
            /*
                int address = idcheck($2);

                if(address != -1)
                {
                    gen_code(SCAN_INT_VALUE, address);
                }
                else
                    yyerror();

                if(address != -1)
                {
                    gen_code(LD_VAR, address);
                }
                else
                    yyerror();

                gen_code(LD_INT, $8);
                gen_code(ADD, -1);

                if(address != -1)
                {
                    gen_code(STORE, address);
                }
                else
                    yyerror();
              */  
            }
            | ID ASSIGN INT_NUM 
            {
                //insert($2, $1);

                int address = idcheck($1);
                gen_code(LD_INT, $3);
 
                if(address != -1)
                {
                    gen_code(STORE, address);
                }
                else
                    yyerror();
                /*if(address != -1)
                {
                    gen_code(SCAN_INT_VALUE, address);
                }
                else
                    yyerror();
                
                if(address != -1)
                {
                    gen_code(LD_VAR, address);
                }
                else
                    yyerror();

                address = idcheck($8);

                if(address != -1)
                {
                    gen_code(LD_VAR, address);
                }
                else
                    yyerror();

                gen_code(SUB, -1);

                address = idcheck($2);
                if(address != -1)
                {
                    gen_code(STORE, address);
                }
                else
                    yyerror();
                */
            }
            | ID ASSIGN INT_NUM ADDO ID SUBO INT_NUM
            {
                int address1 = idcheck($5); //a 
                int address2 = idcheck($1); //b

                gen_code(LD_INT, $3);
                
                if(address1 != -1)
                {
                    gen_code(LD_VAR, address1);
                }
                else
                    yyerror();

                gen_code(ADD, -1);

                if(address2 != -1 && address1 != -1)
                {
                    gen_code(STORE, address2);
                }
                else
                    yyerror();

                if(address2 != -1 && address1 != -1)
                {
                    gen_code(LD_VAR, address2);
                }
                else
                    yyerror();
                gen_code(LD_INT, $7);
                gen_code(SUB, -1);
                if(address2 != -1 && address1 != -1)
                {
                    gen_code(STORE, address2);
                }
                else
                    yyerror();
                
            }
            | PRINT VAR ID
            {
                int address = idcheck($3);

                if(address != -1)
                {
                    gen_code(PRINT_INT_VALUE, address);
                }
                else
                    yyerror();
            }
            ;

declaration: INT ID SEMI
            {
                insert($2, $1);
            }
            ;

%%

void yyerror ()
{
	printf("Syntax error at line %d\n", lineno);
	exit(1);
}

int main (int argc, char *argv[])
{
	yyparse();
	printf("Parsing finished!\n");

    printf("============= INTERMEDIATE CODE===============\n");
    print_code();

    printf("============= ASM CODE===============\n");
    print_assembly();

	return 0;
}
