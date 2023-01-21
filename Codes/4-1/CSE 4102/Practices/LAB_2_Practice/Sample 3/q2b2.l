%option noyywrap

%{
    #include "q2b2.tab.h"
%}

num [1-9]|[1-9][0-9]|1[07][0-9]|18[0]
delim [ \t]
zero [0]
%%

{num} {return(NUM);}
{delim} {}
{zero} {}
%%

