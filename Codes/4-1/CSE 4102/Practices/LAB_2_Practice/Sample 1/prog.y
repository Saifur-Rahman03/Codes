%{
    #include <stdio.h>
    void yyerror(char *s);
    int yylex();
%}

%token BUET RUET CUET CSE EEE SERIES17 SERIES18 SERIES19
%start cal

%%
    cal: RUET CSE SERIES17 {printf("Done!");}
        |CUET CSE SERIES18 {printf("Done!");}
        |BUET EEE SERIES19 {printf("Done!");}
        ;
%%

int main()
{
    yyparse();
    printf("Parsing Finished");
    return 0;
}

void yyerror(char *s) 
{
    fprintf(stderr, "Not Accepted\n");
}