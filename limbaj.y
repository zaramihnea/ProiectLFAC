%{
#include <iostream>
#include <vector>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror(const char * s);
class IdList ids;
%}
%union 
{
char* string;
int value_int;
float value_float;
char value_char;
bool value_bool;
}

%token BGIN END ASSIGN NR FLOAT CHAR BOOL STRING PRINT IF ELSE FOR WHILE EVAL START_CLASA END_CLASA START_FUNC END_FUNC LOGICAL_OPERATOR
%token<string> ID TYPE FUNCTIE VECTOR CLASS 

%type <string> assignment print_statement expression condition functie_call class_statement eval_statement STRING list_param param LOGICAL_OPERATOR
%type <value_int> NR
%type <value_float> FLOAT
%type <value_char> CHAR
%type <value_bool> BOOL


%start progr
%%

progr: utype gvars gfunc block {
    printf("Program corect sintactic\n");
}

utype : class ';'
        | utype class ';'
        ;

class : CLASS ID START_CLASA list END_CLASA { if(!ids.existsClass($2)) {
                          ids.addClass($1,$2);
                     }
                    }
        | CLASS ID START_CLASA END_CLASA { if(!ids.existsClass($2)) {
                          ids.addClass($1,$2);
                     }
                    }
        ;

gvars : declaration ';'
        |  gvars declaration ';'
        ;

declaration : TYPE ID { if(!ids.existsVar($2)) {
                          ids.addVar($1,$2);
                     }
                    }
            | TYPE VECTOR ID '[' NR ']' { if(!ids.existsVect($2)) {
                          ids.addVect($1,$2);
                     }
                    }
                    ;

list_param : param
            | list_param ',' param
            ;

param : TYPE ID

gfunc : functie
        | gfunc functie
        ;

functie : | TYPE FUNCTIE '(' list_param ')' START_FUNC block END_FUNC { if(!ids.existsFunc($2)) {
                          ids.addFunc($1,$2);
                     }
                    }
            | TYPE FUNCTIE  '(' ')' START_FUNC block END_FUNC { if(!ids.existsFunc($2)) {
                          ids.addFunc($1,$2);
                     }
                    }
            | TYPE FUNCTIE '(' list_param ')' { if(!ids.existsFunc($2)) {
                          ids.addFunc($1,$2);
                     }
                    }
            |TYPE FUNCTIE '(' ')' { if(!ids.existsFunc($2)) {
                          ids.addFunc($1,$2);
                     }
                    }
                    ;

block : BGIN list END
       ;

list : statement ';'
        | list statement ';'
        ;

statement : assignment
            | if_statement
            | for_statement
            | while_statement
            | print_statement
            | eval_statement
            | declaration
            | functie_call
            | class_statement
            ;

assignment : ID ASSIGN expression { if(!ids.existsVar($1)) {
                          ids.addVar($3,$1);
                     }
                    }
            | VECTOR '[' NR ']' ASSIGN expression { if(!ids.existsVect($1)) {
                          ids.addVect(atoi($6),$1);
                     }
                    }
            ;

expression : expression '+' expression
                | expression '-' expression
                | expression '*' expression
                | expression '/' expression
                | expression '%' expression
                | ID
                | NR
                | FLOAT
                | CHAR
                | BOOL
                | STRING
                | VECTOR '[' NR ']'
                | functie_call
                ;

if_statement : IF '(' condition ')' block ELSE list
                | IF '(' condition ')' list
                ;

for_statement : FOR '(' assignment ';' condition ';' assignment ')' list
                ;

while_statement : WHILE '(' condition ')' list
                ;

print_statement : PRINT '(' STRING ')' { printf("%s\n",$3); }

eval_statement : EVAL '(' STRING ')' { printf("%s\n",$3); }

functie_call : FUNCTIE '(' list_param ')' { if(!ids.existsFunc($1)) {
                          ids.callFunc($1,$3);
                     }
                    }
                | FUNCTIE '(' ')' { if(!ids.existsFunc($1)) {
                          ids.callFunc($1);
                     }
                    }
                ;

class_statement : ID '.' ID ASSIGN expression { if(!ids.existsVar($3)) {
                          ids.addVar($5,$3);
                     }
                    }

condition : expression LOGICAL_OPERATOR expression
        | expression
        ;


%%
void yyerror(const char * s){
printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
     cout << "Variables:" <<endl;
     ids.printVars();
    
} 