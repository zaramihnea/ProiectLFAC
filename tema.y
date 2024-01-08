%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
#include "functii.h"
int yylex();
int yyerror();

%}
%token STRNG INT CHARV BOOLV FLOATV PRINT EVAL CLASS CONST ASSIGN OPERATOR LOGICAL_OPERATOR BGIN IF ELSE THEN ENDIF FOR WHILE OVER DO START_CLASA END_CLASA END ID NR FLOAT BOOL CHAR STRING FUNCTIE VECTOR  TYPEOF
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

progr: declaratii main_program {printf("Program corect sintactic!\n");}

declaratii : declaratie ';'
           | declaratii declaratie ';'
           | functie START_CLASA instructiuni END_CLASA
           | declaratii functie START_CLASA instructiuni END_CLASA
           ;

declaratie : variabila 
           | declaratie ',' variabila
           ;


variabila : STRNG ID {
    if(va_string_EsteDeclarata($2)==-1)
        variabila_string_declarare_only($2);
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| CHARV ID {
    if(va_char_EsteDeclarata($2)==-1)
        variabila_char_declarare_only($2);
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| FLOATV ID {
    if(va_float_EsteDeclarata($2)==-1)
        variabila_float_declarare_only($2);
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| INT ID {
    if(va_EsteDeclarata($2)==-1)
        variabila_int_declare_only($2);
    else { 
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| BOOLV ID {
    if(va_bool_EsteDeclarata($2)==-1)
        variabila_bool_declare_only($2);
    else { 
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| STRNG ID ASSIGN STRING {
    if(va_string_EsteDeclarata($2)==-1)
        variabila_string_declarare_only($2);
    else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| CONST STRNG ID ASSIGN STRING { 
    if(va_string_EsteDeclarata($3)==-1) {
        variabila_string_declarare_init($3,$5);
        Facemconst($3);
    } else {
        yyerror();
        printf("Redefiniti variabila");
        YYABORT;
    }
}
| CONST INT ID ASSIGN NR {
    if(va_EsteDeclarata($3)==-1) {
        variabila_int_declare_init($3,$5); 
        Facemconst($3);
    } else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| CONST BOOLV ID ASSIGN BOOL {
    if(va_EsteDeclarata($3)==-1) {
        variabila_bool_declarare_init($3,$5);
        Facemconst($3);
    } else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| CONST FLOATV ID ASSIGN FLOAT {
    if(va_float_EsteDeclarata($3)==-1) {
        variabila_float_declarare_init($3,$5); 
        Facemconst($3); 
    } else {
        yyerror();
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| CONST CHARV ID ASSIGN CHAR {
    if(va_char_EsteDeclarata($3)==-1) {
        variabila_char_declarare_init($3,$5);  
        Facemconst($3); 
    } else {
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| INT ID ASSIGN NR {
    if(va_EsteDeclarata($2)==-1) 
        variabila_int_declare_init($2,$4);
    else { 
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| FLOATV ID ASSIGN FLOAT {
    if(va_float_EsteDeclarata($2)==-1) 
        variabila_float_declarare_init($2,$4);
    else {
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| CHARV ID ASSIGN CHAR {
    if(va_char_EsteDeclarata($2)==-1) 
        variabila_char_declarare_init($2,$4);
    else { 
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| BOOLV ID ASSIGN BOOL {
    if(va_bool_EsteDeclarata($2)==-1) 
        variabila_bool_declarare_init($2,$4);
    else {
        yyerror(); 
        printf("Redefiniti variabila\n");
        YYABORT;
    }
}
| INT VECTOR NR {
  if(v_EsteDeclarata($2) == -1) 
    v_Declarare_definitie($2, 'i', $3);
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
}
| FLOATV VECTOR NR {
  if(v_EsteDeclarata($2) == -1) 
    v_Declarare_definitie($2, 'f', $3);
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
}
| CHARV VECTOR NR {
  if(v_EsteDeclarata($2) == -1) 
    v_Declarare_definitie($2, 'c', $3);
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
}
| BOOLV VECTOR NR {
  if(v_EsteDeclarata($2) == -1) 
    v_Declarare_definitie($2, 'b', $3);
  else {
    yyerror(); 
    printf("Redefiniti structura\n");
    YYABORT;
  }
}
| CHARV FUNCTIE NR ASSIGN STRING {
  if(v_EsteDeclarata($2) == -1) {
    if(vs_decl($2, $3, $5) == -1){
      yyerror();
      printf("Depaseste dimensiune vectorului");
    }
  } else {
    yyerror();
    printf("Redefiniti functia \n");
    YYABORT;
  }
}
| INT FUNCTIE '(' lista_parametri ')' { 
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "int"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
}
| INT FUNCTIE '(' lista_parametri ')' '[' instructiuni ']' { 
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "int"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
}
| CHARV FUNCTIE '(' lista_parametri ')' {
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "char"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  }
}
| CHARV FUNCTIE '(' lista_parametri ')' '[' instructiuni ']' { 
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "char"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
}
| FLOATV FUNCTIE '(' lista_parametri ')' {
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "float"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  }
}
| FLOATV FUNCTIE '(' lista_parametri ')' '[' instructiuni ']' { 
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "float"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
}
| BOOLV FUNCTIE '(' lista_parametri ')' {
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "bool"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  }
}
| BOOLV FUNCTIE '(' lista_parametri ')' '[' instructiuni ']' { 
  if(f_EsteDeclarata($2) == -1) 
    f_Declarare_definitie($2, "bool"); 
  else{
    yyerror(); 
    printf("Redefiniti functia\n"); 
    YYABORT;
  } 
}
| CLASS ID START_CLASA declaratii END_CLASA {
  if(cl_EsteDeclarata($2) == -1) 
    cl_Declarare_definitie($2); 
  else {
    yyerror();
    printf("Redefiniti clasa\n");
    YYABORT;
  }
}
;


functie:
  INT FUNCTIE '(' lista_parametri ')' {
    if(f_EsteDeclarata($2) == -1) 
      f_Declarare_definitie($2, "int");
  }
  | CHARV FUNCTIE '(' lista_parametri ')' {
    if(f_EsteDeclarata($2) == -1) 
      f_Declarare_definitie($2, "char");
  }
  | FLOATV FUNCTIE '(' lista_parametri ')' {
    if(f_EsteDeclarata($2) == -1) 
      f_Declarare_definitie($2, "float");
  }
  | BOOLV FUNCTIE '(' lista_parametri ')' {
    if(f_EsteDeclarata($2) == -1) 
      f_Declarare_definitie($2, "bool");
  }
  ;


lista_parametri: parametru 
               | lista_parametri ',' parametru
               ;

parametru:
  FLOATV ID {
    Parametrii($2, "float");
  }
  | CHARV ID {
    Parametrii($2, "char");
  }
  | INT ID {
    Parametrii($2, "int");
  }
  | BOOLV ID {
    Parametrii($2, "bool");
  }
  ;



main_program : BGIN instructiuni END 
             ;

instructiuni : instructiune ';'
             | instructiuni instructiune ';'
             | operatie 
             | instructiuni operatie 
             ;

instructiune:
  ID ASSIGN right {
    if (va_EsteDeclarata($1) == -1) {
      yyerror(); 
      printf("Variabila nu a fost declarata\n"); 
      YYABORT;
    } else {
      if (EsteConst($1) == 1) {
        yyerror(); 
        printf("Variabila %s este de tip const \n", $1); 
        YYABORT; 
      } else if (FacemNegativ($1) == 0) {
        yyerror(); 
        printf("Asignarea nu a avut loc pentru variabila %s \n", $1);
        YYABORT;
      }
    } 
  }
  | EVAL NR {
    Eval($2);
  }
  | EVAL ID '+' NR {
    if (strcmp((type($2)), "int") == 0) 
      Eval(valoare($2) + $4); 
    else {
      yyerror();
      printf("Variabila nu este de tipul dorit\n");
      YYABORT;
    }
  }
  | PRINT {
    print_symbol();
  }
  | FUNCTIE '(' apeluri ')' {
    if (f_EsteDeclarata($1) == -1) {
      yyerror(); 
      printf("Functia nu a fost declarata\n");
      YYABORT;
    } else {
      if (VerificareFunctie($1) == 1) {
        yyerror();    
        printf("Tipul parametrilor nu corespund \n"); 
        YYABORT; 
      } else if (VerificareFunctie($1) == 2) {
        yyerror();    
        printf("Numarul de parametrii nu corespund \n"); 
        YYABORT; 
      }
    }
  }
  | TYPEOF '(' expresii ')' {
    if (Afisare() == 0) 
      printf("Tipul expresiei este int \n"); 
    else if (Afisare() == 1) 
      printf("Tipul expresiei este float \n");
  }
  ;


expresii : expresii OPERATOR expresie 
         | expresie  {}
        ;

expresie:
  ID {
    if (AdaugVector($1) == 0) {
      yyerror();  
      printf("elementele sunt de tip diferit \n");  
      YYABORT;
    }
  }
  | NR {
    if (AdaugareVector($1) == 0) {
      yyerror(); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  } 
  | FLOAT {
    if (AdaugareeVector($1) == 0) {
      yyerror(); 
      printf("Nu se poate determina tipul expresiei\n");  
      YYABORT;
    }
  }
  | FUNCTIE '(' apeluri ')'
  ;





right:
  right OPERATOR right
  | right LOGICAL_OPERATOR right
  | '(' right LOGICAL_OPERATOR right ')'
  | '(' right OPERATOR right ')'
  | ID {
    if (va_EsteDeclarata($1) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    } else {
      IdprimesteId($1);
    }
  }
  | CHAR
  | FUNCTIE '(' apeluri ')' {
    if (f_EsteDeclarata($1) == -1) {
      yyerror();
      printf("Functia nu a fost declarata\n");
      YYABORT;
    } else {
      inlocuireFunctie($1);
      FunctieInFunctie3();
    }
  }
  | NR {
    inlocuireaInt($1);
  }
  | STRING {
    inlocuireaString($1);
  }
  | FLOAT {
    inlocuireaFloat($1);
  }
  | BOOL {
    inlocuireaBool($1);
  }
  | ID FUNCTIE {
    if (cl_EsteDeclarata($1) == -1) {
      yyerror();
      printf("Clasa nu a fost declarata");
    }
  }
  | VECTOR '(' NR ')' {
    if (v_EsteDeclarata($1) == -1) {
      yyerror();
      printf("Vectorul nu a fost declarat\n");
      YYABORT;
    } else {
      AsignareDeVector($1);
    }
  }
  ;

apeluri:
  NR
  | ID {
    VerificareParametru($1);
    FunctieInFunctie();
  }
  | apeluri ',' NR
  | apeluri ',' ID {
    printf("%s \n", $3);
    VerificareParametru($3);
  }
  | FUNCTIE '(' apeluri ')' {
    if (f_EsteDeclarata($1) == -1) {
      yyerror();
      printf("Functia nu a fost declarata\n");
      YYABORT;
    }
    if (VerificaParametruFIF($1) == 1) {
      yyerror();
      printf("Tipul parametrilor nu corespund \n");
      YYABORT;
    } else if (VerificareFunctie($1) == 2) {
      yyerror();
      printf("Numarul de parametrii nu corespund \n");
      YYABORT;
    }
    FunctieInFunctie2();
  }
  | apeluri ',' FUNCTIE '(' apeluri ')'
  ;


operatie:
  IF ID LOGICAL_OPERATOR right THEN instructiuni continuare_if {
    if (va_EsteDeclarata($2) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  }
  | IF ID OPERATOR right THEN instructiuni continuare_if {
    if (va_EsteDeclarata($2) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  }
  | WHILE ID LOGICAL_OPERATOR right DO instructiuni OVER {
    if (va_EsteDeclarata($2) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  }
  | FOR ID LOGICAL_OPERATOR right ',' ID LOGICAL_OPERATOR right ',' ID OPERATOR OPERATOR DO instructiuni OVER {
    if (va_EsteDeclarata($2) == -1) {
      yyerror();
      printf("Variabila nu a fost declarata\n");
      YYABORT;
    }
  }
  ;



continuare_if : ELSE instructiuni continuare_if
              | ENDIF
              ;
%%

int yyerror(char * s){
printf("_err: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
int ok=0;
yyin=fopen(argv[1],"r");
yyparse();
print_symbol();
print_table();
}
