%option noyywrap

%{
    #include "q2b.tab.h"
    //Roll no: 1703018
    //let counter as INTEGER;  
    //FOR_LOOP ( counter from 1.0  to 10);
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

"SUP"   { return SUP; }
"IS"    { return IS; }
"SIZE"      { return SIZE; }
"ARRAY"          { return ARRAY; }
"WITH"            { return WITH; }
"INT"       { return INT_TYPE; }

"("       { return LP; }
")"       { return RP; }
"{"       { return LB; }
"}"       { return RB; }
"["       { return LT; }
"]"       { return RT; }
";"       { return SEMI; }
":"       { return COLON; }
"="       { return ASSIGN; }
"=="      { return EQUAL; }

"%"       { return MOD; }
"+"       { return ADD; }

{ICONST}  { return INT_NUM; }
{FCONST}  { return FLOAT_NUM; }
{CCONST}  { return CONST; }
{ID}      { return ID; }

%%
