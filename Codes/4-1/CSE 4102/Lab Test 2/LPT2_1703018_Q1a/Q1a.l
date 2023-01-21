%option noyywrap

%{
//Roll Number: 1703018
//let counter as INTEGER;  FOR_LOOP ( counter from 1.0  to 10);
//
%}

delim [ \t\n]
alpha     [a-zA-Z]
digit     [0-9]
alnum     {alpha}|{digit}
print     [ -~]

ID        {alpha}{alnum}*
ICONST    [0-9]{digit}*
FCONST    {digit}*"."{digit}+
CCONST    (\'{print}\') 

%%
"let"       { printf("%s -> LET\n", yytext);}
"as"        { printf("%s -> AS\n", yytext);}
"FOR_LOOP"  { printf("%s -> FORLOOP\n", yytext);}
"from"      { printf("%s -> FROM\n", yytext);}
"to"        { printf("%s -> TO\n", yytext);}
"INTEGER"   { printf("%s -> INT_TYPE\n", yytext);}

"("       { printf("%s -> LP\n", yytext); }
")"       { printf("%s -> RP\n", yytext); }
"{"       { printf("%s -> LB\n", yytext); }
"}"       { printf("%s -> RB\n", yytext); }
";"       { printf("%s -> SEMI\n", yytext); }
":"       { printf("%s -> COLON\n", yytext);}
"="       { printf("%s -> ASSIGN\n", yytext); }
"=="      { printf("%s -> EQUAL\n", yytext);}

"%"       { printf("%s -> MOD\n", yytext);}
"+"       { printf("%s -> ADD\n", yytext);}

{ICONST}  { printf("%s -> INT_NUM\n", yytext);}
{FCONST}  { printf("%s -> FLOAT_NUM\n", yytext);}
{CCONST}  { printf("%s -> CONST\n", yytext);}
{ID}      { printf("%s -> ID\n", yytext);}

{delim}   {}

 
%%

int main()
{
  yylex();
  return 0;
}
