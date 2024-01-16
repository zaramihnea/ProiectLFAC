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
<<<<<<< HEAD
extern string typeOfId;
=======
>>>>>>> refs/remotes/origin/main
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

%type <string> assignment print_statement condition functie_call class_statement eval_statement STRING list_param param LOGICAL_OPERATOR
%type <value_int> NR expression
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

<<<<<<< HEAD
class : CLASS ID {currentScope = $2;} START_CLASA class_list END_CLASA { if(!ids.existsUserdef($2)) {                        
=======
class : CLASS ID {currentScope = $2;} START_CLASA list END_CLASA { if(!ids.existsUserdef($2)) {
                        
>>>>>>> refs/remotes/origin/main
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

class_list : class_block ';'
            | class_list class_block ';'
            ;

class_block : declaration 
               | class_block declaration
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

               | CONST TYPE ID {
                    if(!ids.existsVar($3)) {
                        Value varVal($2);
                        Variable newVar($3,varVal);
                         newVar.isConst = true;
                        ids.addVar(newVar);
                     }
                     else {
                          std::cerr << "Error: variable with name '" << $3 << "' already exists." << std::endl;
                     }
                    }
               | TYPE VECTOR '[' NR ']' { if(!ids.existsVect($2)) {
                        Vector newVector($2,$1,$4);
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
                          Function newFunc($2,$1);
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

<<<<<<< HEAD
assignment : ID ASSIGN expression
             {                
                    if(!ids.existsVar($1)){
                    std::cerr << "Error: call of undeclared variable with name '" << $1 << "'" << std::endl;
                    }
                    else {
                         Variable* var = ids.getVar($1);
                         var->val.val = $3;
                         std::cout << "Assignment of variable with value '" << std::get<int>(var->val.val) << "'" << std::endl;
=======
assignment : ID ASSIGN expression { if(!ids.existsVar($1)) {
                          
                     }
                    }
            | VECTOR '[' NR ']' ASSIGN expression { if(!ids.existsVect($1)) {
                        
                     }
>>>>>>> refs/remotes/origin/main
                    }
             }
          | ID ASSIGN ID {
               if(!ids.existsVar($1)){
                    std::cerr << "Error: call of undeclared variable with name '" << $1 << "'" << std::endl;
                    }
                    else {
                         Variable* var = ids.getVar($1);
                         Variable* var2 = ids.getVar($3);
                         int sum = std::get<int>(var->val.val) + std::get<int>(var2->val.val);
                         var->val.val = sum;
                    }
          }
          ;

<<<<<<< HEAD
expression : expression '+' expression { $$ = $1 + $3; }
            | expression '-' expression { $$ = $1 - $3; }
            | expression '*' expression { $$ = $1 * $3; }
            | expression '/' expression { $$ = $1 / $3; }
            | expression '%' expression { $$ = $1 % $3; }
            | NR { $$ = $1; }
            | ID {
               if(!ids.existsVar($1)){
                    std::cerr << "Error: call of undeclared variable with name " << $1 << " " << std::endl;
                    }
                    else {
                         std::cout<< "asd";
                         Variable* var = ids.getVar($1);
                         $$ = std::get<int>(var->val.val);
                    }
          }
          ;
=======
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
>>>>>>> refs/remotes/origin/main

if_statement : IF '(' condition ')' block ELSE list
                | IF '(' condition ')' list
                ;

for_statement : FOR '(' assignment ';' condition ';' assignment ')' list
                ;

while_statement : WHILE '(' condition ')' list
                ;

print_statement : PRINT '(' STRING ')' { printf("%s\n",$3); }

eval_statement : EVAL '(' expression ')' { printf("%d\n",$3); }

<<<<<<< HEAD
functie_call : FUNCTIE '(' list_param ')' { if(!ids.existsFunc($1)) {                          
=======
functie_call : FUNCTIE '(' list_param ')' { if(!ids.existsFunc($1)) {
                          
>>>>>>> refs/remotes/origin/main
                     }
                     else {
                          std::cerr << "Error: function with name '" << $1 << "' already exists." << std::endl;
                     }
                    }
<<<<<<< HEAD
                | FUNCTIE '(' ')' { if(!ids.existsFunc($1)) {                          
=======
                | FUNCTIE '(' ')' { if(!ids.existsFunc($1)) {
                          
>>>>>>> refs/remotes/origin/main
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