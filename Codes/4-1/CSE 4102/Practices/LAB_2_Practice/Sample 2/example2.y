%{
    #include <stdio.h>
    void yyerror(char *s);
    int yylex();
%}

%token UNIVERSITY_NAME PREPOSITION CITY
%start cal

%%
cal: UNIVERSITY_NAME PREPOSITION CITY {printf("Accepted\n");}
    ;
%%

int main()
{
    yyparse();
    printf("Parsing Finished\n");
    return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "Not Accepted\n");
}