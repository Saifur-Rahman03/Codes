%{
#include<stdio.h>
void yyerror(char *s);
int yylex();
%}

%token LET AS FORLOOP FROM TO INT_TYPE
%token LP RP LB RB COLON SEMI ASSIGN EQUAL
%token MOD
%token INT_NUM FLOAT_NUM CONST ID
%token NUM ADD SUB MUL DIV
%token SUP IS ARRAY WITH SIZE LT RT

%start st

%%
st: /*cal exp {printf("RESULT = %d\n", $2);}*/
    SUP ID IS INT_TYPE ARRAY WITH SIZE LT INT_NUM RT SEMI def
    ;
def: ID LT FLOAT_NUM RT ASSIGN INT_NUM SEMI  
    ;
/*exp: exp ADD term {$$=$1+$3; printf("exp ADD term %d+%d=%d\n", $1, $3, $$);}
    |exp SUB term {$$=$1-$3; printf("exp SUB term %d-%d=%d\n", $1, $3, $$);}
    |term {$$=$1; printf("term %d=%d\n", $$, $1);}
    ;

term: term MUL NUM {$$=$1*$3; printf("term MUL NUM %d*%d=%d\n", $1, $3, $$);}
    |term DIV NUM {$$=$1/$3; printf("term DIV NUM %d/%d=%d\n", $1, $3, $$);}
    |NUM {$$=$1; printf("NUM %d=%d\n", $$, $1);}
    ; 
    */
%%

void yyerror(char *s)
{
    fprintf(stderr, "error: %s", s);
}

int main()
{
    yyparse();
    printf("Parsing Finished\n");
}

