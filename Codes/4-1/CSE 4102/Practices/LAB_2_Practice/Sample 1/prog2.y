%{
#include <stdio.h>
void yyerror(char *s);
int yylex();
%}

%token VAR DEP SERIES 
%start cal

%%
cal: VAR DEP SERIES {printf("Done\n");}
    ;
%%

int main()
{
    yyparse();
    printf("Parsing Finished");
    return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "Not Accepted %s\n", s);
}