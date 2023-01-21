%{
    #include <stdio.h>
    void yyerror(char *s);
    int yylex();
%}

%token HE LOVES FOOD
%start cal

%%

cal: HE FOOD LOVES{printf("Accepted\n");}
    ;
%%

int main()
{
    //Roll no 1703018
    yyparse();
    printf("Parsing Finished\n");
    return 0;
}
void yyerror(char *s)
{
    printf("\nNot Accepted\n");
}