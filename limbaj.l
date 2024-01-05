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
    return START;
}

"end_progr" {
    return STOP;
}

"for" {
    return FOR;
}

"if" {
    return IF;
}

"else" {
    return ELSE;
}

"while" {
    return WHILE;
}

":=" {
    return ASSIGN;
}

"==" {
    return EQUAL;
}

"!=" {
    return NOTEQUAL;
}

"<" {
    return LOWER;
}

"<=" {
    return LOWEREQ;
}

">" {
    return GREATER;
}

">=" {
    return GREATEREQ;
}

[0-9]+ {
    yylval.intval = atoi(yytext);
    return NR;
}

[0-9]+"."[0-9]+  {
    yylval.fvalue = atof(yytext); 
    return FLOAT;
}

"true"|"false" {
    yylval.string = strdup(yytext);
    return BOOL;
}

"int_array"|"float_array"|"char_array"|"string_array"|"bool_array" {
    yylval.string = strdup(yytext);
    return ARRAY;
}

"class" {
    return CLASS;
}

[a-zA-Z][a-zA-Z0-9]* {
    yylval.string = strdup(yytext);
    return ID;
}
[ \t] ;
\n {
    yylineno++;
}
. {
    return yytext[0];
}
%%