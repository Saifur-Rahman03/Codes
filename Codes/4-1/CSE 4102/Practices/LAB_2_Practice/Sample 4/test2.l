%option noyywrap

%{
    #include "test2.tab.h"
%}

roll (00[1-9]|0[1-9][0-9]|1[0-7][0-9]|18[0])
dept (0[0-9]|10)
series (1[6-9]|20)
rn {series}{dept}{roll}
delim [ \t]

%%
{rn} {return(RN);}
{delim} {}    
%%