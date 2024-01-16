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

"<"|">"|"<="|">="|"="|"||"|"&&"|"!=" {return LOGICAL_OPERATOR;}

"user_types" {return UTYPE;}
"global_var" {return GVAR;}
"global_func" {return GFUNC;}
"main" {return BGIN;}
"if" {return IF;}
"else" {return ELSE;}
"for" {return FOR;}
"while" {return WHILE;}
"do" {return DO;}
"[" {return START_CLASA;}
"]" {return END_CLASA;}
"{" {return START_FUNC;}
"}" {return END_FUNC;}
"end_main" {return END;}
[$a-zA-Z][a-zA-Z0-9]* {yylval.string=strdup(yytext); return ID;}
[0-9]+ {yylval.value_int=atoi(yytext); return NR; }
[0-9]+"."[0-9]* {yylval.value_float = atof(yytext); return FLOAT;}
"true"|"false" {yylval.value_bool=strdup(yytext); return BOOL;}
\'[a-zA-Z]\' {yylval.value_char=yytext[1]; return CHAR;}
["].*["] {yylval.string=strdup(yytext); return STRING;}
[%a-zA-Z][a-zA-Z0-9]* {yylval.string=strdup(yytext); return FUNCTIE;}
[@a-zA-Z][a-zA-Z0-9]* {yylval.string=strdup(yytext); return VECTOR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

%%