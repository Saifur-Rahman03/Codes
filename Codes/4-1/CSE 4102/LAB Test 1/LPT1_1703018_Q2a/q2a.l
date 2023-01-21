%option noyywrap

%{
// c code
%}

food (Pizza|Burger|Pasta)
delim [ \t]

%%

"He" {printf("%s -> HE\n", yytext);}
"Loves" {printf("%s -> LOVES\n", yytext);}
{food} {printf("%s -> FOOD\n", yytext);}
{delim} {}

%%

int main()
{
    //Roll no 1703018
    yylex();
    return 0;
}