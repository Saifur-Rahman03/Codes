%option noyywrap

%{
#include "prog2.tab.h"
%}

varsity ["RUET"|"BUET"|"CUET"]
dept ["CSE"|EEE]
series ["17"|"18|"19"]
delim [ \t]
%%
"RUET" {return(VAR);}
"BUET" {return(VAR);}
"CUET" {return(VAR);} 
"CSE" {return(DEP);}
"EEE" {return(DEP);}
"17" {return(SERIES);}
"18" {return(SERIES);}
"19" {return(SERIES);}
{delim} {}
%%