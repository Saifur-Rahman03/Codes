%option noyywrap

%{

%}

num (00[1-9]|0[1-9][0-9]|1[0-7][0-9]|18[0])
delim [ \t]
zero [0]
%%
{num} {printf("%s -> NUM\n", yytext);}
{delim} {}
{zero} {}
%%

int main()
{
    yylex();
    return 0;
}