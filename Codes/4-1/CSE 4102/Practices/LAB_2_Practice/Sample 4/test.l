%option noyywrap

%{

%}

roll (00[1-9]|0[1-9][0-9]|1[0-7][0-9]|18[0])
dept (0[0-9]|10)
series (1[6-9]|20)
rn {series}{dept}{roll}
delim [ \t]

%%
{rn} {printf("%s -> RN", yytext);}

{delim} {}    
%%

int main()
{
    yylex();
    return 0;
}