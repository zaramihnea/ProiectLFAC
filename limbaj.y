%{
#include <iostream>
#include <vector>
#include "IdList.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
void yyerror(const char * s);
extern IdList ids;
extern string currentScope;
%}
%union 
{
char* string;
int value_int;
float value_float;
char value_char;
bool value_bool;
}

%token BGIN END ASSIGN NR FLOAT CHAR BOOL STRING PRINT IF ELSE FOR WHILE EVAL TYPEOF CONST START_CLASA DO END_CLASA START_FUNC END_FUNC LOGICAL_OPERATOR GVAR GFUNC UTYPE
%token<string> ID TYPE FUNCTIE VECTOR CLASS 

%type <string> assignment print_statement expression condition functie_call class_statement eval_statement STRING list_param param LOGICAL_OPERATOR
%type <value_int> NR
%type <value_float> FLOAT
%type <value_char> CHAR
%type <value_bool> BOOL


%start progr
%%

progr: {currentScope = "global";} utype {currentScope = "global";} gvars gfunc {currentScope = "main";} block {
    printf("Program corect sintactic\n");
}

utype : class ';'
        | utype class ';'
        ;

class : CLASS ID {currentScope = $2;} START_CLASA list END_CLASA { if(!ids.existsUserdef($2)) {
                        
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
        | GVAR {currentScope = "global";} gvars 
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
         | TYPE ID ASSIGN expression {  if(!ids.existsVar($2)) {
                        Value varVal("int");
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
              | TYPE VECTOR ID '[' NR ']' ASSIGN expression { if(!ids.existsVect($1)) {
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
        ids.tempParams.push_back(param);
        }

gfunc : functie
        | gfunc functie
        ;

functie : | TYPE FUNCTIE '(' list_param ')' START_FUNC block END_FUNC { if(!ids.existsFunc($2)) {
                        Function newFunc($1,$2);
                        newFunc.params = std::move(ids.tempParams);
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
                        newFunc.params = std::move(ids.tempParams);
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

block : BGIN {currentScope = "main";} list END 
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
                          
                     }
                    }
            | VECTOR '[' NR ']' ASSIGN expression { if(!ids.existsVect($1)) {
                        
                     }
                    }
            ;

expression : expression '+' expression
                | expression '-' expression
                | expression '*' expression
                | expression '/' expression
                | expression '%' expression
                | ID { if(!ids.existsVar($1)){
                    std::cerr << "Error: call of undeclared variable with name '" << $1 << "'" << std::endl;
                }
                }
                | NR
                | FLOAT
                | CHAR
                | BOOL
                | STRING
                | VECTOR '[' NR ']' { if(!ids.existsVect($1)){
                    std::cerr << "Error: call of undeclared vector with name '" << $1 << "'" << std::endl;
                }
                }
                | functie_call { if(!ids.existsFunc($1)){
                    std::cerr << "Error: call of undeclared function with name '" << $1 << "'" << std::endl;
                }
                }
                ;

if_statement : IF '(' condition ')' block ELSE list
                | IF '(' condition ')' list
                ;

for_statement : FOR '(' assignment ';' condition ';' assignment ')' list
                ;

while_statement : WHILE '(' condition ')' list
                ;

print_statement : PRINT '(' STRING ')' { printf("%s\n",$3); }

eval_statement : EVAL '(' expression ')' { printf("%s\n",$3); }

functie_call : FUNCTIE '(' list_param ')' { if(!ids.existsFunc($1)) {
                          
                     }
                     else {
                          std::cerr << "Error: function with name '" << $1 << "' already exists." << std::endl;
                     }
                    }
                | FUNCTIE '(' ')' { if(!ids.existsFunc($1)) {
                          
                     }
                     else {
                          std::cerr << "Error: function with name '" << $1 << "' already exists." << std::endl;
                     }
                    }
                    
                ;

class_statement : ID '.' ID ASSIGN expression { if(!ids.existsVar($3)) {
                    
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