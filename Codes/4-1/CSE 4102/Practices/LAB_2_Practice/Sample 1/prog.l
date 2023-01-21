%option noyywrap

%{

%}


%%
"RUET" {printf("%s -> RUET\n", yytext);}
"BUET" {printf("%s -> BUET\n", yytext);}
"CUET" {printf("%s -> CUET\n", yytext);} 
"CSE" {printf("%s -> CSE\n", yytext);}
"EEE" {printf("%s -> EEE\n", yytext);}
"17" {printf("%s -> 17_SERIES\n", yytext);}
"18" {printf("%s -> 18_SERIES\n", yytext);}
"19" {printf("%s -> 19_SERIES\n", yytext);}
%%

int main() {
    yylex();
    return 0;
}