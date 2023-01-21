%option noyywrap

%{

%}

delim [ \t]

%%
"University" {printf("%s -> UNIVERSITY_NAME\n", yytext);}
"of" {printf("%s -> PP\n", yytext);}
"Dhaka" {printf("%s -> CITY\n", yytext);}
"Rajshahi" {printf("%s -> CITY\n", yytext);}
"Chittagong" {printf("%s -> CITY\n", yytext);}
{delim} {}
%%

int main()
{
    yylex();
    return 0;
}