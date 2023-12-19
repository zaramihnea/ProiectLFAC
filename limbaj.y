%{
#include <iostream>
#include <vector>
#include "IdList.h"
#include <stdio.h>
#include <stdlib.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);

%}
%union {
    char* string;
    int intval;
    float floatval;
}

%token  START STOP ASSIGN NR BOOL ID TYPE ARRAY FOR BGIN IF WHILE END EQ

%type <intval> NR BOOL
%type <string> ID TYPE ARRAY

%start progr

%%
progr: user_types global_vars global_funcs main_func {
    printf("corect\n");
}

user_types:
    | user_types type_def ';'
    ;

type_def: TYPE ID '{' field_list method_list '}'
    ;

field_list: field_list ID ':' TYPE ';'
    |
    ;

method_list: method_list TYPE ID '[' param_list ']' 'START' 'STOP' ';'
    |
    ;

param_list: param_list TYPE ID
    |
    ;

global_vars:
    | global_vars var_def ';'
    ;

var_def: TYPE ID ASSIGN expr
    | TYPE ID
    ;

block : BGIN stmt_list END
    ;

global_funcs:
    | global_funcs func_def
    ;

func_def: TYPE ID '[' param_list ']' '{' '}' ';'
    | TYPE ID '[' param_list ']' 'START' stmt_list 'STOP' ;
    ;

main_func: TYPE ID '[' ']' 'START' stmt_list 'STOP'
    ;

stmt_list: stmt_list statement ';'
    |
    ;

statement: ID ASSIGN expr
    | IF '(' bool_expr ')' '{' stmt_list '}'
    | FOR '(' assign_stmt ';' bool_expr ';' assign_stmt ')' '{' stmt_list '}'
    | WHILE '(' bool_expr ')' '{' stmt_list '}'
    ;

assign_stmt: ID ASSIGN expr
    ;

bool_expr: expr '<' expr
    | expr '>' expr
    | expr EQ expr
    ;

expr: expr '+' term
    | expr '-' term
    | term
    ;

term: term '*' factor
    | term '/' factor
    | factor
    ;

factor: ID
    | NR
    | BOOL
    | '(' expr ')'
    | ID '.' ID '(' param_list ')'
    | ID '.' ID '(' ')'
    ;

param_list: expr
    | param_list ',' expr
    ;

%%

void yyerror(const char * s) {
    printf("error: %s at line:%d\n", s, yylineno);
    exit(1);
}

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Error opening file: %s\n", argv[1]);
        return 1;
    }

    yyparse();
    std::cout << "Variables:" << std::endl;
    return 0;
}
