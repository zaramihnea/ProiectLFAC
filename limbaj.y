%{
#include <iostream>
#include <vector>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror(const char * s);
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

progr: UTYPE utype gvars GFUNC gfunc block {
    printf("Program corect sintactic\n");
}

utype : class ';'
        | utype class ';'
        ;

class : CLASS ID START_CLASA list END_CLASA { if(!ids.existsUserdef($2)) {
                        currentScope = $2;
                        UserDefinedType newUserDef($2);
                          ids.addUserDef(newUserDef);
                     }
                     else {
                          std::cerr << "Error: class with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
        | CLASS ID START_CLASA END_CLASA { if(!ids.existsUserdef($2)) {
                          UserDefinedType newUserDef($2);
                          ids.addUserDef(newUserDef);
                     } else {
                          std::cerr << "Error: class with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
        ;

gvars : declaration ';'
        |  gvars declaration ';'
        | GVARS gvars {currentScope = "global"}
        ;

declaration : TYPE ID { if(!ids.existsVar($2)) {
                        Value varVal($1);
                        Variable newVar($2,varVal);
                        ids.addVar(newVar);
                     }
                     else {
                          std::cerr << "Error: variable with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
                | TYPE VECTOR ID '[' NR ']' { if(!ids.existsVect($3)) {
                        Vector newVector($3,$1,$5);
                          ids.addVect(newVector);
                     }
                     else {
                          std::cerr << "Error: vector with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
                    ;
//!!!  pus de mn         | TYPE ID ASSIGN expression { if(!ids.existsVar($2)) {
                        Value varVal(!ceva stack exterior unde se calculeaza expresia);
                        if(varVal.type == $1){

                        Variable newVar($2,varVal);
                        ids.addVar(newVar);
                        } else {
                        std::cerr << "Error: variable with name '" << $2 << "' was attributed the wrong type." << std::endl;

                        }
                     }
                     else {
                          std::cerr << "Error: variable with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
      pus de mn          | TYPE VECTOR ID '[' NR ']' ASSIGN expression { if(!ids.existsVect($1)) {
                          Vector newVector($3,$1,$5);
                          ids.addVect(newVector);
                     }
                     else {
                          std::cerr << "Error: vector with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
            ;

list_param : param
            | list_param ',' param
            ;

param : TYPE ID {
        Parameter param($2,$1);
        ids.temporaryParams.push_back(param);
        }

gfunc : functie
        | gfunc functie
        ;

functie : | TYPE FUNCTIE '(' list_param ')' START_FUNC block END_FUNC { if(!ids.existsFunc($2)) {
                        Function newFunc($1,$2);
                        newFunc.params = move(ids.temporaryParams);
                        ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
            | TYPE FUNCTIE  '(' ')' START_FUNC block END_FUNC { if(!ids.existsFunc($2)) {
                          Function newFunc($1,$2);
                          ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
            | TYPE FUNCTIE '(' list_param ')' { if(!ids.existsFunc($2)) {
                          Function newFunc($1,$2);
                        newFunc.params = move(ids.temporaryParams);
                        ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
            |TYPE FUNCTIE '(' ')' { if(!ids.existsFunc($2)) {
                          Function newFunc($1,$2);
                          ids.addFunc(newFunc);
                     }
                     else {
                          std::cerr << "Error: function with name '" << $2 << "' already exists." << std::endl;
                     }
                    }
                    ;

block : BGIN list END {currentScope = "main";}
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

//n avem nevoie pt ca avem eval si type_of // print_statement : PRINT '(' STRING ')' { printf("%s\n",$3); }

eval_statement : EVAL '(' expression ')' { printf("%s\n",$3); }

functie_call : FUNCTIE '(' list_param ')' { if(!ids.existsFunc($1)) {
                          ids.callFunc($1,ids.temporaryParams);
                          ids.temporaryParams.clear();
                     }
                     else {
                          std::cerr << "Error: function with name '" << $1 << "' already exists." << std::endl;
                     }
                    }
                | FUNCTIE '(' ')' { if(!ids.existsFunc($1)) {
                          ids.callFunc($1);
                     }
                     else {
                          std::cerr << "Error: function with name '" << $1 << "' already exists." << std::endl;
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
     ids.printSymbolTable();
    
} 