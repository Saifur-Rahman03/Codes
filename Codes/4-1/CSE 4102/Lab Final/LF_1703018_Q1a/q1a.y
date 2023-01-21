%{
#include<stdio.h>
void yyerror(char *s);
int yylex();
%}

%token LET AS FUNC MAIN START END PRINT VAR INT_TYPE
%token LP RP LB RB COLON SEMI ASSIGN EQUAL
%token MOD
%token INT_NUM FLOAT_NUM CONST ID
%token NUM ADD SUB MUL DIV

%start st

%%
st: FUNC MAIN LP RP tail
    ;
tail: START rest END  
    ;
rest: dec exp print
    ;
dec: LET ID AS INT_TYPE LET ID AS INT_TYPE
    ;
exp: ID EQUAL INT_NUM ID EQUAL INT_NUM ADD ID SUB INT_NUM
    ;
print: PRINT VAR ID
    ;
/*st: FUNC MAIN LP RP 
    START 
    LET ID AS INT_TYPE
    LET ID AS INT_TYPE
    ID EQUAL INT_NUM
    ID EQUAL INT_NUM ADD ID SUB INT_NUM
    PRINT VAR ID
    END  
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

}

int main()
{
    yyparse();
    printf("Parsing Finished\n");
}

