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
%token BGIN END ASSIGN NR FLOAT CHAR BOOL STRING PRINT IF ELSE FOR WHILE EVAL
%token<string> ID TYPE FUNCTIE VECTOR CLASS 

%union 
{
int valoare;
float valoare_float;
char caracter;
char* valoare_bool;
char* nume;
char* string;
}
%type<nume> ID FUNCTIE VECTOR
%type<valoare> NR
%type<valoare_float> FLOAT
%type<string> STRNG STRING 
%type<caracter> CHAR
%type<valoare_bool> BOOL
%left '+' '-'
%left '*' '/' '%'
%start progr
%%

progr: utype gvars gfunc block {
    printf("Program corect sintactic\n");
}

utype : class ';'
        | utype class ';'
        ;

class : CLASS ID '{' list '}' { if(!ids.existsClass($2)) {
                          ids.addClass($1,$2);
                     }
                    }
        | CLASS ID '{' '}' { if(!ids.existsClass($2)) {
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

functie : | TYPE FUNCTIE '(' list_param ')' '{' block '}' { if(!ids.existsFunc($2)) {
                          ids.addFunc($1,$2);
                     }
                    }
            | TYPE FUNCTIE  '(' ')' '{' block '}' { if(!ids.existsFunc($2)) {
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