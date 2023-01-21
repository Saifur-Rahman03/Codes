%{
    #include <stdio.h>
    void yyerror(char *s);
    int yylex();
%}

%token RN
%start cal

%%
cal: RN {printf("Accepted\n");}
    ;
%%

int main()
{
    yyparse();
    printf("Parsing Finished\n");
    return 0;
}

void yyerror(char *s)
{
    printf("\nNot Accepted %s\n", s);
}