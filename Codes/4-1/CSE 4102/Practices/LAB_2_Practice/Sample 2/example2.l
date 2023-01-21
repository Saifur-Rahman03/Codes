%option noyywrap

%{
    #include "example2.tab.h"
%}

delim [ \t]

%%
"University" {return(UNIVERSITY_NAME);}
"of" {return(PREPOSITION);}
"Dhaka" {return(CITY);}
"Rajshahi" {return(CITY);}
"Chittagong" {return(CITY);}
{delim} {}
%%