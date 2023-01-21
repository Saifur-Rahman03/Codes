%option noyywrap

%{
    #include "q1a.tab.h"
    //Roll no: 1703018
    /*function main () 

    suru

       mone_kori a akta integer

       mone_kori b akta integer

       a equal 2

       b equal 3 add a sub 10

       print kori b

    sesh*/
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
ws {delim}+
undr [_]

%%
{ws} {}

"function"          { return FUNC; }
"main"              { return MAIN; }
"suru"              { return START; }
"sesh"              { return END; }
"mone_kori"         { return LET; }
"akta"              { return AS; }
"integer"           { return INT_TYPE; }
"print"     { return PRINT; }
"kori"      { return VAR; }

"("       { return LP; }
")"       { return RP; }
"{"       { return LB; }
"}"       { return RB; }
";"       { return SEMI; }
":"       { return COLON; }
"equal"         { return ASSIGN; }
"=="            { return EQUAL; }

"%"       { return MOD; }
"add"       { return ADD; }
"sub"       { return SUB; }

{ICONST}  { return INT_NUM; }
{FCONST}  { return FLOAT_NUM; }
{CCONST}  { return CONST; }
{ID}      { return ID; }

%%
