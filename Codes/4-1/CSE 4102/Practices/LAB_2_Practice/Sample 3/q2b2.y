%{
    #include <stdio.h>
    void yyerror(char *s);
    int yylex();
%}

%token NUM NUM_H NUM_E
%start cal

%%
    cal: NUM {printf("Accepted\n");}
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
    fprintf(stderr, "Not Accepted\n");
} 