%option noyywrap

%{
    #include "q2b.tab.h"
    //Roll no 1703018
%}

food (Pizza|Burger|Pasta)
delim [ \t]

%%
"He" {return(HE);}
"Loves" {return(LOVES);}
{food} {return(FOOD);}
{delim} {}
%%
