%{
#include <stdio.h>
#include "limbaj.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string" {yylval.string = strdup(yytext);return TYPE;}
"print" {return PRINT;}
"Eval" {return EVAL;}
"TypeOf" {return TYPEOF;}
"class" {return CLASS;}
"const" {return CONST;}

"<-" {return ASSIGN;}
"+"|"-"|"*"|"/"|"%" {return OPERATOR;}
"<"|">"|"<="|">="|"="|"si"|"sau" {return LOGICAL_OPERATOR;}

"user_types" {return UTYPE;}
"global_var" {return GVAR;}
"global_func" {return GFUNC;}
"begin_progr" {return BGIN;}
"if" {return IF;}
"else" {return ELSE;}
"for" {return FOR;}
"while" {return WHILE;}
"do" {return DO;}
"[" {return START_CLASA;}
"]" {return END_CLASA;}
"{" {return START_FUNC;}
"}" {return END_FUNC;}
"end_progr" {return END;}
$[_a-zA-Z][_a-zA-Z0-9]* {yylval.nume=strdup(yytext); return ID;}
[0-9]+ {yylval.valoare=atoi(yytext); return NR; }
[0-9]+"."[0-9]* {yylval.valoare_float = atof(yytext); return FLOAT;}
"true"|"false" {yylval.valoare_bool=strdup(yytext); return BOOL;}
\'[a-zA-Z]\' {yylval.caracter=yytext[1]; return CHAR;}
["].*["] {yylval.string=strdup(yytext); return STRING;}
%[_a-zA-Z][_a-zA-Z0-9]* {yylval.nume=strdup(yytext); return FUNCTIE;}
@[_a-zA-Z][_a-zA-Z0-9]* {yylval.nume=strdup(yytext); return VECTOR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}