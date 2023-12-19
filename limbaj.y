%{
#include <iostream>
#include <vector>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);

class UserType BEGIN
public:
    int field1;
    float field2;
    
    void method1[int param1, float param2] BEGIN

    END
END;

//test
int Eval(int expr);
std::string TypeOf(int variable);

%}
%union {
    char* string;
    int intval;
    float floatval;
}

%token  START STOP ASSIGN NR BOOL ID TYPE ARRAY

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

method_list: method_list TYPE ID '[' param_list ']' 'BEGIN' 'END' ';'
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

block : BGIN list END  
    ;

global_funcs:
    | global_funcs func_def
    ;

func_def: TYPE ID '[' param_list ']' '{' '}' ';'
    | TYPE ID '[' param_list ']' 'BEGIN' stmt_list 'END'
    ;

main_func: TYPE ID '[' ']' 'BEGIN' stmt_list 'END'
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
    yyin = fopen(argv[1], "r");
    yyparse();
    std::cout << "Variables:" << std::endl;
    return 0;
}
