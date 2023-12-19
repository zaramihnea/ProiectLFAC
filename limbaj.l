%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "limbaj.tab.h"
%}

%option noyywrap

%%
"int"|"float"|"char"|"string"|"bool" {
    yylval.string = strdup(yytext);
    return TYPE;
}
"begin_progr" {
    return BEGIN;
}
"end_progr" {
    return END;
}
[a-zA-Z][a-zA-Z0-9]* {
    yylval.string = strdup(yytext);
    return ID;
}
":=" {
    return ASSIGN;
}
[0-9]+ {
    yylval.string = strdup(yytext);
    return NR;
}
[0-1]+ {
    yylval.string = strdup(yytext);
    return BOOL;
}
"true"|"false" {
    yylval.string = strdup(yytext);
    return BOOL;
}
"int_array"|"float_array"|"char_array"|"string_array"|"bool_array" {
    yylval.string = strdup(yytext);
    return ARRAY;
}
[ \t] ;
\n {
    yylineno++;
}
. {
    return yytext[0];
}
%%

void yyerror(const char *s){
    printf("error: %s at line:%d\n", s, yylineno);
    exit(1);
}