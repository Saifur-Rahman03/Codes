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

%token PRINT SCAN SCAN2 PRINT2 LET AS INC
%token ADDOP SUBOP MULOP DIVOP EQUOP LT GT
%token LPAREN RPAREN LBRACE RBRACE SEMI ASSIGN
%token<str_val> ID
%token<int_val> ICONST
%token<int_val> INT INT2

%left LT GT /*LT GT has lowest precedence*/
%left ADDOP
%left MULOP /*MULOP has lowest precedence*/

%type<int_val> exp assignment_print_scan

%start program

%%
program: {gen_code(START, -1);} code {gen_code(HALT, -1);}
code: statements;

statements: statements statement | ;

statement:  declaration
            |assignment_print_scan
            | LET ID AS INT2 ASSIGN SCAN2 LPAREN RPAREN SEMI
            {
                insert($2, $4);

                int address = idcheck($2);

                if(address != -1)
                {
                    gen_code(SCAN_INT_VALUE, address);
                }
                else
                    yyerror();

                /*if(address != -1)
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
            | LET ID AS INT2 ASSIGN ICONST INC SUBOP ID SEMI
            {
                insert($2, $4);

                int address = idcheck($2);

                if(address != -1)
                {
                    gen_code(SCAN_INT_VALUE, address);
                }
                else
                    yyerror();

                
                gen_code(LD_INT, $6);
                gen_code(LD_INT, 1);
                gen_code(ADD, -1);
                if(address != -1)
                {
                    gen_code(STORE, address);
                }
                else
                    yyerror();
                gen_code(LD_INT, address);
                address = idcheck($9);
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
                /*
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
            | PRINT2 LPAREN ID RPAREN
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

assignment_print_scan: ID ASSIGN exp SEMI
                {
                    int address = idcheck($1);

                    if(address != -1)
                    {
                        gen_code(STORE, address);
                    }
                    else
                        yyerror();
                }
                | PRINT LPAREN ID RPAREN SEMI
                {
                    int address = idcheck($3);

                    if(address != -1)
                    {
                        gen_code(PRINT_INT_VALUE, address);
                    }
                    else
                        yyerror();
                }
                | SCAN LPAREN ID RPAREN SEMI
                {
                    int address = idcheck($3);

                    if(address != -1)
                    {
                        gen_code(SCAN_INT_VALUE, address);
                    }
                    else
                        yyerror();
                }
                ;

exp: ICONST
    {
        gen_code(LD_INT, $1);
    }
    | ID 
      {
            int address = idcheck($1);

            if(address != -1)
            {
                gen_code(LD_VAR, address);
            }
            else
                yyerror();

      }
    | exp ADDOP exp { gen_code(ADD, -1); }
    | exp MULOP exp
    | exp GT exp
    |exp LT exp
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
