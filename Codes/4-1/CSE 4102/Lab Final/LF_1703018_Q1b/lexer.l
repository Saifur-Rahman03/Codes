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

"integer"       	{yylval.int_val=INT_TYPE; return INT; }
"function"          { return FUNC; }
"main"              { return MAIN; }
"suru"              { return STARTO; }
"sesh"              { return END; }
"mone_kori"         { return LET; }
"akta"              { return AS; }
"print"     { return PRINT; }
"kori"      { return VAR; }



"("       { return LPAREN; }
")"       { return RPAREN; }
"{"       { return LBRACE; }
"}"       { return RBRACE; }
";"       { return SEMI; }
"equal"   { return ASSIGN; }
"add"       { return ADDO; }
"sub"       { return SUBO; }

{ICONST}    {yylval.int_val=atoi(yytext); return INT_NUM;}
{ID}        {strcpy(yylval.str_val, yytext); return ID;}

"\n"        { lineno += 1; }
[ \t\r\f]+  

.       { yyerror("Unrecognized character"); }
