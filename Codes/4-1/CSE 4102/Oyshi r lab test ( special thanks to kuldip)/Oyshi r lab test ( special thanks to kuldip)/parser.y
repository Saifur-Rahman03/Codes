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

%token PRINT SCAN SUP AS DECOP 
%token ADDOP SUBOP MULOP DIVOP EQUOP LT GT
%token LPAREN RPAREN LBRACE RBRACE SEMI ASSIGN
%token<str_val> ID
%token<int_val> ICONST
%token<int_val> INT

%left LT GT /*LT GT has lowest precedence*/
%left ADDOP 
%left MULOP /*MULOP has lowest precedence*/

%type<int_val> assignment_print

%start program

%%
program: {gen_code(START, -1);} code {gen_code(HALT, -1);}
code: statements;

statements: statements statement | ;

statement:  declaration
            |assignment_print
            ;

declaration: SUP ID AS INT ASSIGN SCAN LPAREN RPAREN SEMI
            {
                insert($2, $4);
                int address = idcheck($2);

                    if(address != -1)
                    {
                        gen_code(SCAN_INT_VALUE, address);
                    }
                    else
                        yyerror();

            }
            | SUP ID AS INT ASSIGN ICONST SUBOP ID SEMI
            {
                insert($2, $4);

                int address1 = idcheck($2); //y
                int address2 = idcheck($8); //x

                if(address1!=-1 && address2!=-1)
                {
                    gen_code(LD_VAR,address2);
                    gen_code(LD_INT,$6);
                    gen_code(SUB,-1);

                    gen_code(STORE,address1);
                }
                else
                        yyerror();

                

            }
            ;

assignment_print: PRINT LPAREN ID RPAREN SEMI
                {
                    int address = idcheck($3);

                    if(address != -1)
                    {
                        gen_code(PRINT_INT_VALUE, address);
                    }
                    else
                        yyerror();
                }
                | ID ASSIGN ID DECOP SEMI
                {
                    int address = idcheck($3);

                     if(address != -1)
                    {
                         
                        gen_code(LD_VAR, address);
                        gen_code(STORE,address);

                        gen_code(LD_INT,1);                        
                        gen_code(LD_VAR, address);

                        gen_code(SUB,-1);
                    }
                    else
                        yyerror();

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
