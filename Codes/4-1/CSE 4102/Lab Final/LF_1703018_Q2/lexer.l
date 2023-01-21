%option noyywrap

%{
	#define INT_TYPE 1
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "parser.tab.h"
	
	int lineno = 1; // initialize to 1
	void yyerror();
%}

alpha     [a-zA-Z]
digit     [0-9]
alnum     {alpha}|{digit}
print     [ -~]

ID        {alpha}{alnum}*
ICONST    [0-9]{digit}*
%%

"//".*        { } 

"integer"       {yylval.int_val=INT_TYPE; return INT; }
"function"  {return FUNC;}
"main"		{return MAIN;}
"mone_kori" {return LET;}
"jodi"	   {return IF;}
"akta"		{return AS;}
"tachara"	   {return ELSE;}
"abar jodi"	   {return ELIF;}
"begin"       {return BEGIN;}
"end"		{return END;}
"while"    { return WHILE; }
"+="		{return INCAS;}
"add"       { return ADDOP; }
"sub"       { return SUBOP; }
"*"       { return MULOP; }
"/"       { return DIVOP; }
"=="      { return EQUOP; }
"boro hoi"       { return GT; }
"choto hoi"       { return LT; }

"("       { return LPAREN; }
")"       { return RPAREN; }
"{"       { return LBRACE; }
"}"       { return RBRACE; }
";"       { return SEMI; }
"equal"   { return ASSIGN; }
"print kori"       { return PRINT; }
"scan"       { return SCAN; }
"theke"		{}

{ID}        {strcpy(yylval.str_val, yytext); return ID;}
{ICONST}    {yylval.int_val=atoi(yytext); return ICONST;}

"\n"        { lineno += 1; }
[ \t\r\f]+  

.       { yyerror("Unrecognized character"); }
