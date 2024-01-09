#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
void Eval(int a)
{
    printf("S-a apelat functia Eval cu valoarea %d\n", a);
}
FILE *ffout;
int num_var = 0;   // contor variabile
int num_vect = 0;  // contor vectori;
int num_func = 0;  // contor functii;
int num_class = 0; // contor clase


int nr_consturi=0;
char consturi[100][100];
int TipIntGlobal=0;
int TipFloatGlobal=0;
int TipStringGlobal=0;
int TipBoolGlobal=0;





int inlocuireInt=0;
float inlocuireFloat=0.0;
bool inlocuireBool=false;
char inlocuireString[100];
int adevarat=-1;
int inlocuireAsigVect=0;



int ContorParamNoi=0;
char VectorParamNoi[100][100];
char TipParam[100][100];
int ContorTipParamNoi=0;

char TipAsignareId[100];//tipul variabilei din dreapta unei asignari de tip id<-id
int OkAsignareId=0;


int OkGlobal=0;

int OkTypeOf=0;
char TipGlobal[100];


struct Clasa
{
    char nume[50];
    char componente[100];
}; // structura pentru a reprezenta clasele

struct Function
{
    char nume[50];
    char tip[20];
    int nr_parametri;
    struct Parametru
    {
        char parametri[100];
        char tipParametri[100];
    } Param[100];
}; // structura pentru a reprezenta functiile

struct Variabila
{
    char nume[50];
    char tip[20];
    int int_valoare;
    float float_valoare;
    char char_valoare;
    int valoare_bool;
    char string_valoare[100];
    int init;
}; // structura pentru reprezentarea unei variabile

struct Vector
{
    char nume[50];
    char tip[20];
    int dimensiune;
    int vector_int[100];
    float vector_float[100];
    char vector_char[100];
    int vector_bool[100];
};

struct Variabila variabile[500];
struct Variabila definitie_parametri[30];
struct Variabila varparam[15][5];
struct Clasa clase[30];
struct Function functii[30];
struct Vector vectori[300];

void print_symbol()
{
    printf("Modificam fisierul symbol_table.txt\n");
    ffout = fopen("symbol_table.txt", "w");

    fprintf(ffout, "~~~Symbol Table~~~\n");

    // afisam  toate variabilele din fisier si tipul acestora
    for (int i = 0; i < num_var; i++)
    {

        fprintf(ffout, "var : %s tip %s are valoarea", variabile[i].nume, variabile[i].tip);
        if (strcmp(variabile[i].tip, "int") == 0)
            fprintf(ffout, "= %d\n", variabile[i].int_valoare);

        else if (strcmp(variabile[i].tip, "float") == 0)
            fprintf(ffout, "= %f\n", variabile[i].float_valoare);

        else if (strcmp(variabile[i].tip, "char") == 0)
            fprintf(ffout, "= %c\n", variabile[i].char_valoare);

        else if (strcmp(variabile[i].tip, "bool") == 0)
            fprintf(ffout, "=%d\n", variabile[i].valoare_bool);
        else if (strcmp(variabile[i].tip, "string") == 0)
            fprintf(ffout, "=%s\n", variabile[i].string_valoare);
    }
    // afisam toate clasele din fisier
    for (int i = 0; i < num_class; i++)
        fprintf(ffout, "Clasa %s \n", clase[i].nume);
    // afisam toti vectorii din fisier si tipul acestora
    for (int i = 0; i < num_vect; i++)
        fprintf(ffout, "Vectorul %s este de tipul %s cu size-ul %d\n", vectori[i].nume, vectori[i].tip, vectori[i].dimensiune);
    // afisam toate functiile din fisier
    for (int i = 1; i <= num_func; i++) // pt functia cu numarul i avem numele ei, tipul ei si nr de parametrii pe care il are
    {
        fprintf(ffout, "Functia cu numele %s de tip %s are %d parametri(u) \n", functii[i].nume, functii[i].tip, functii[i - 1].nr_parametri);
        for (int j = 1; j <= functii[i].nr_parametri + 1; j++) // pt primu parametru din functia i afisez tipul parametrului si parametrul in sine
            if (strlen(functii[i - 1].Param[j].tipParametri) != 0)
            {
                fprintf(ffout, "Parametrul %s este de tipul %s\n",functii[i - 1].Param[j].parametri, functii[i - 1].Param[j].tipParametri);
            }
    }
    fclose(ffout);
    

    fclose(ffout);
}



void print_table()
{
    printf("Modificam fisierul symbol_table_functions.txt\n");
    
}

// functie de declarare clasa
void cl_Declarare_definitie(char nume[]) // cl_decl_def
{
    strcpy(clase[num_class].nume, nume);
    num_class++;
}

int valoare_int(char nume[])
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return variabile[i].int_valoare;
}

int valoare_float(char nume[])
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return variabile[i].float_valoare;
}

int caracter(char nume[])
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return variabile[i].char_valoare;
}

int valoare_bool(char nume[])
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return variabile[i].valoare_bool;
}

void print_to_console_int(int a){
    printf("%d\n",a);
}

void print_to_console_float(float a){
    printf("%f\n",a);
}

void print_to_console_string(char a[]){
    printf("%s\n",a);
}

void print_to_console_bool(int a){
    if(a==1)
        printf("true\n");
    else
        printf("false\n");
}

void print_to_console_char(char a){
    printf("%c\n",a);
}


// functie care verifica daca o clasa a fost declarata
int cl_EsteDeclarata(char nume[]) // cl_isdeclared
{
    for (int i = 0; i < num_class; i++)
        if (strcmp(clase[i].nume, nume) == 0)
            return i;
    return -1;
}

// functie care se ocupa cu declararea unei functii
void f_Declarare_definitie(char nume[], char tip[]) // f_decl_def
{
    num_func++;
    strcpy(functii[num_func].tip, tip);
    strcpy(functii[num_func].nume, nume);
    functii[num_func].nr_parametri = 0;
}

// functie care imi verifica daca functia este declarata
int f_EsteDeclarata(char nume[]) // f_isdeclared
{
    for (int i = 0; i <= num_func; i++)
        if (strcmp(functii[i].nume, nume) == 0) 
            return i;
    return -1;
}

// functie care se ocupa de declararea si definirea unui vector
void v_Declarare_definitie(char nume[], char tip, int dimensiune) // v_decl
{
    vectori[num_vect].dimensiune = dimensiune;
    strcpy(vectori[num_vect].nume, nume);

    if (tip == 'f')
    {
        strcpy(vectori[num_vect].tip, "float");
        for (int i = 0; i < dimensiune; i++)
            vectori[num_vect].vector_float[i] = 0;
    }

    else if (tip == 'i')
    {
        strcpy(vectori[num_vect].tip, "int");
        for (int i = 0; i < dimensiune; i++)
            vectori[num_vect].vector_int[i] = 0;
    }

    else if (tip == 'c')
    {
        strcpy(vectori[num_vect].tip, "char");
        for (int i = 0; i < dimensiune; i++)
            vectori[num_vect].vector_char[i] = 0;
    }

    else if (tip == 'b')
    {
        strcpy(vectori[num_vect].tip, "bool");
        for (int i = 0; i < dimensiune; i++)
            vectori[num_vect].vector_bool[i] = 0;
    }

    num_vect++;
}

// functie care verifica daca un vector este declarat
int v_EsteDeclarata(char nume[]) // v_isdeclared
{
    for (int i = 0; i < num_vect; i++)
        if (strcmp(vectori[i].nume, nume) == 0)
            return i;
    return -1;
}

int vs_decl(char nume[], int dimensiune, char val[])
{
    printf("Initializam vectorul %s, de dimensiune %d cu stringul %s", vectori[num_class].vector_char, dimensiune, val);
    if (strlen(val) >= dimensiune)
        return -1;
    strcpy(vectori[num_vect].vector_char, val);
    strcpy(vectori[num_vect].tip, "char");
    vectori[num_vect].dimensiune = dimensiune;
    num_vect++;
    return 0;
}

// functie care realizeaza atribuirea unui element intr-un vector de int
int vector_int_atribuire(char nume[], char tip, int pozitie, int valoare) // i_v_atrib
{
    int vector = v_EsteDeclarata(nume);
    if (vector == -1)
        return -1;
    vectori[vector].vector_int[pozitie] = valoare;
}

// functie care realizeaza atribuirea unui element intr-un vector de float
int vector_float_atribuire(char nume[], char tip, int pozitie, float valoare) // f_v_atrib
{
    int vector = v_EsteDeclarata(nume);
    if (vector == -1)
        return -1;
    vectori[vector].vector_float[pozitie] = valoare;
}

// functie care realizeaza atribuirea unui element intr-un vector de char-uri
int vector_char_atribuire(char nume[], char tip, int pozitie, char valoare) // c_v_atrib
{
    int vector = v_EsteDeclarata(nume);
    if (vector == -1)
        return -1;
    vectori[vector].vector_char[pozitie] = valoare;
}

// functie care realizeaza atribuirea unui element intr-un vector "bool-uri"
int vector_bool_atribuire(char nume[], char tip, int pozitie, int valoare) // b_v_atrib
{
    int vector = v_EsteDeclarata(nume);
    if (vector == -1)
        return -1;
    vectori[vector].vector_bool[pozitie] = valoare;
}

// functie care realizeaza declararea si initializarea unei variabile
void variabila_int_declare_init(char nume[], int valoare) // int_decl
{
    strcpy(variabile[num_var].tip, "int");
    strcpy(variabile[num_var].nume, nume);
    variabile[num_var].init = 1;
    variabile[num_var].int_valoare = valoare;
    num_var++;
}

// functia care realizeaza doar declararea unei variabile de tip int
void variabila_int_declare_only(char nume[]) // int_decl_noint
{
    strcpy(variabile[num_var].nume, nume);
    strcpy(variabile[num_var].tip, "int");
    variabile[num_var].init = 0;
    num_var++;
}

// functie care verifica daca o variabila este deja declarata
int va_EsteDeclarata(char nume[]) // is_declared
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return i;
    return -1;
}
// functie care ma ajuta la returnarea tipului unei variabile
char *type(char nume[])
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return variabile[i].tip;
}
// functie care ma ajuta la returnarea valorii unei functii
int valoare(char nume[])
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return variabile[i].int_valoare;
}

// functie care verifica daca o variabila a fost initializata
int va_EsteInitializata(char nume[]) // is_init
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            if (variabile[i].init == 0)
                return 0;
    return 1;
}
// functie care ma ajuta la initializarea unei variabile
void va_atribuire(char nume[], int valoare) // int_atrib
{
    int declarat = va_EsteDeclarata(nume);
    variabile[declarat].int_valoare = valoare;
    variabile[declarat].init = 1;
}

// CHAR
// functie care ma ajuta la declararea si initializarea unei variabile de tip char
void variabila_char_declarare_init(char nume[], char valoare) // char_decl
{
    
    strcpy(variabile[num_var].tip, "char");
    strcpy(variabile[num_var].nume, nume);
    variabile[num_var].init = 1;
    variabile[num_var].char_valoare = valoare;
    num_var++;
}

// functie care ma ajuta doar la declararea unei variabile de tip char
void variabila_char_declarare_only(char nume[]) // char_decl_noinit
{
    strcpy(variabile[num_var].tip, "char");
    strcpy(variabile[num_var].nume, nume);
    variabile[num_var].init = 0;
    num_var++;
}
// functie care ma ajuta la verificarea daca o variabila de tip char este declarata
int va_char_EsteDeclarata(char nume[]) // char_is_declared
{
  
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return i;
    return -1;
}
// functie care ma ajuta sa verific daca o variabila este initializata
int va_char_EsteInitializata(char nume[]) // char_is_init
{
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            if (variabile[i].init == 0)
                return 0;
            else
                return 1;
    return 0;
}
// functie care ma ajuta la atribuirea unei valori de tip char
void va_char_atribuire(char nume[], int valoare) // char_atrib
{
    int declarat = va_char_EsteDeclarata(nume);
    variabile[declarat].char_valoare = valoare;
    variabile[declarat].init = 1;
}

// FLOAT

// functie care ma ajuta la declararea si initializarea unei variabile de tip char
void variabila_float_declarare_init(char nume[], int valoare) // float_decl
{
    strcpy(variabile[num_var].tip, "float");
    strcpy(variabile[num_var].nume, nume);
    variabile[num_var].init = 1;
    variabile[num_var].float_valoare = valoare;
    num_var++;
}

// functie care ma ajuta doar la declararea unei variabile de tip float
void variabila_float_declarare_only(char nume[]) // float_decl_noint
{
    strcpy(variabile[num_var].tip, "float");
    strcpy(variabile[num_var].nume, nume);
    variabile[num_var].init = 0;
    num_var++;
}

// functie care ma ajuta la verificarea daca o variabila float este declarata
int va_float_EsteDeclarata(char nume[]) // float_is_declared
{
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return i;
    return -1;
}

// functie care ma ajuta sa verific daca o variabila de tip float este initializata
int va_float_EsteInitializata(char nume[]) // float_is_init
{
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            if (variabile[i].init == 0)
                return 0;
            else
                return -1;
    return 0;
}

// functie care ma ajuta cu atribuirea unei valori intr-o variabila de tip float
void va_float_atribuire(char nume[], int valoare) // float_atrib
{
    int declarat = va_float_EsteDeclarata(nume);
    variabile[declarat].float_valoare = valoare;
    variabile[declarat].init = 1;
}

// BOOL
// functie care ma ajuta la declararea si initializarea unei variabile de tip bool
void variabila_bool_declarare_init(char nume[], char valoare_bool[]) // bool_decl
{
    strcpy(variabile[num_var].nume, nume);
    strcpy(variabile[num_var].tip, "bool");
    if (strcmp(valoare_bool, "true") == 0)
    {
        variabile[num_var].valoare_bool = 1;
    }
    else if (strcmp(valoare_bool, "false") == 0)
    {
        variabile[num_var].valoare_bool = 0;
    }
    variabile[num_var].init = 1;
    num_var++;
}

// functie care ma ajuta la declararea unei variabile de tip bool
void variabila_bool_declare_only(char nume[]) // bool_decl_noinit
{
    strcpy(variabile[num_var].tip, "bool");
    strcpy(variabile[num_var].nume, nume);
    variabile[num_var].init = 0;
    num_var++;
}

// functie care ma ajuta sa verific daca o variabila de tip bool este declarata
int va_bool_EsteDeclarata(char nume[]) // bool_is_declared
{
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return i;
    return -1;
}

int va_bool_EsteInitializata(char nume[])
{
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            if (variabile[i].init == 0)
                return 0;
            else
                return 1;
    return 0;
}

void va_bool_atribuire(char nume[], int valoare)
{
    
    int declarat = va_bool_EsteDeclarata(nume);
    variabile[declarat].valoare_bool = valoare;
    variabile[declarat].init = 1;
}

// STRING

// functie care ma ajuta la declararea si initializarea unei variabile de tip string
void variabila_string_declarare_init(char nume[], char valoare[])
{
    strcpy(variabile[num_var].nume, nume);
    strcpy(variabile[num_var].tip, "string");
    strcpy(variabile[num_var].string_valoare, valoare);
    variabile[num_var].init = 1;
    num_var++;
}
// functiecare ma ajuta la declararea unei variabile de tip string
void variabila_string_declarare_only(char nume[])
{
   // printf("intru aici\n" );
    strcpy(variabile[num_var].nume, nume);
    strcpy(variabile[num_var].tip, "string");
    variabile[num_var].init = 0;
    //printf(" %s  \n",variabile[num_var].nume );
    num_var++;
   
}

// functie care verifica daca o variabila de tip string este declarata
int va_string_EsteDeclarata(char nume[])
{
   // printf("intru aicif(va_float_EsteDeclarata($\n" );
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            return i;
    return -1;
}

// functie care ma ajuta sa verific daca o variabila este initializata
int va_string_EsteInitializata(char nume[])
{
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, nume) == 0)
            if (variabile[i].init == 0)
                return 0;
            else
                return 1;
    return 0;
}

// functie care ma ajuta la atribuirea unei valori pentru o variabila de tip string
void va_string_atribuire(char nume[], char valoare[])
{
    int declarat = va_string_EsteDeclarata(nume);
    strcpy(variabile[declarat].string_valoare, valoare);
    variabile[declarat].init = 1;
}

// funcite pentru parametrii
int Parametrii(char *valoare, char *tip)
{

    functii[num_func].nr_parametri++;
    strcpy(functii[num_func].Param[functii[num_func].nr_parametri].tipParametri, tip);
    strcpy(functii[num_func].Param[functii[num_func].nr_parametri].parametri, valoare);
}

int Facemconst(char *valoare)
{
   // f("da intru aici cu %s \n",valoare);
    
    nr_consturi++;
    strcpy(consturi[nr_consturi],valoare);
  /*
   for(int i=1;i<=nr_consturi;i++)
        printf("%s ",consturi[i]);
    printf("\n");
    */
}

int EsteConst(char valoare[])
{
    
    for(int i=1;i<=nr_consturi;i++)
 
    if(strcmp(consturi[i],valoare)==0)
        {
            //printf("Variabila %s este de tip const si nu isi poate modifica valoarea\n", valoare);
            return 1;}
        return 0;
         
}

void assignsum(char nume[], int b){
    //add b to the value of nume in variable vector
    int i;
    for(i=0;i<=num_var;i++)
        if(strcmp(nume,variabile[i].nume)==0)
            break;
    variabile[i].int_valoare+=b;
}

int FacemNegativ(char valoare[])
{
    
    
    for (int i = 0; i <= num_var; i++)
        if (strcmp(variabile[i].nume, valoare) == 0)
            {
                if(strcmp(variabile[i].tip,"int")==0 && TipIntGlobal==1 )
                   {
                    
                    variabile[i].int_valoare=inlocuireInt;
                    TipIntGlobal=0;
                    return 1;
                    }
                
                if(strcmp(variabile[i].tip,"float")==0 && TipFloatGlobal==1 )
                   {
                    variabile[i].float_valoare=inlocuireFloat;
                    TipFloatGlobal=0;
                    return 1;
                    }
                  
                 if(strcmp(variabile[i].tip,"string")==0 && TipStringGlobal==1 )
                   {
                    strcpy(variabile[i].string_valoare,inlocuireString);
                    TipStringGlobal=0;
                    return 1;
                    }
                 if(strcmp(variabile[i].tip,TipAsignareId)==0 && OkAsignareId==1 ) ////////////////////////////////
                    {
                        if(strcmp(variabile[i].tip,"bool")==0)
                            {
                                variabile[i].valoare_bool=adevarat;
                                adevarat=-1;
                                return 1;
                                }
                        variabile[i].int_valoare=inlocuireInt;
                        inlocuireInt=0;
                        OkAsignareId=0;
                        return 1;
                    }
                
                 
                 if(strcmp(variabile[i].tip,"bool")==0 && TipBoolGlobal==1 )
                   {
                   
                    if(adevarat==1)
                        {
                            variabile[i].valoare_bool=true;
                            return 1;
                        }
                    else if(adevarat==0)
                    {
                        variabile[i].valoare_bool=false;
                        return 1;
                    }
                     TipBoolGlobal=0;
                     adevarat=-1;
                     }
                     if(TipIntGlobal==-1 || TipFloatGlobal==-1 || TipStringGlobal==-1 || TipBoolGlobal==-1 )
                        {
                           ;
                        }
                    if(OkGlobal==3)
                    {
                        return 4;
                    }
                     if(inlocuireAsigVect==1)
                        {
                            ;
                        }

                        else 
                    { 
                        return 0;
                    }
            }  
               
    return 1;   
}

int inlocuireaInt(int val)
{   
   inlocuireInt= val; 
   TipIntGlobal=1;
}
int inlocuireaFloat(float val)
{   

    
   
   inlocuireFloat = val; 
   TipFloatGlobal=1;
  
}

int inlocuireaString(char val[])
{   
   
   strcpy(inlocuireString,val); 
   TipStringGlobal=1;
  
}

int inlocuireaBool(char* val)
{
         
         if(strcmp(val,"true")==0)
            {
              adevarat=1;
            }
            else
            {
              adevarat=0;
            }
         TipBoolGlobal=1;

    
}

int inlocuireFunctie(char nume[])
{
 
 TipIntGlobal=-1;
 TipFloatGlobal=-1;
 TipStringGlobal=-1;



}
int AsignareDeVector(char nume[])
{
   inlocuireAsigVect=1;

}


int VerificareParametru(char NumeParametru[])//am facut functia ca sa vedem daca functiile corespund intre ele
{
    
    ContorParamNoi++;
    ContorTipParamNoi++;
    strcpy(VectorParamNoi[ContorParamNoi],NumeParametru);
   
    for(int i=0;i<=num_var;i++)
        if(strcmp(VectorParamNoi[ContorParamNoi],variabile[i].nume)==0)
        {
        if(strcmp(variabile[i].tip,"int")==0)
            strcpy(TipParam[ContorTipParamNoi],"int");
        if(strcmp(variabile[i].tip,"float")==0)
        { 
            strcpy(TipParam[ContorTipParamNoi],"float");}
        if(strcmp(variabile[i].tip,"string")==0)
            strcpy(TipParam[ContorTipParamNoi],"string");
        if(strcmp(variabile[i].tip,"bool")==0)
            strcpy(TipParam[ContorTipParamNoi],"bool");
        }



}

int VerificaParametruFIF(char NumeFunctie[])
{   
   
    int j;
    
        for(j=0;j<=num_func;j++)
           { if(strcmp(NumeFunctie,functii[j].nume)==0)
                {
                break;}
           }
       
    if(ContorParamNoi==functii[j-1].nr_parametri)// in cazul in care avem accelasi nr de parametrii gen
       {
        for(int i=1;i<=functii[j-1].nr_parametri;i++)// tre sa compar tipul de parametrii
           {
             if(strcmp(TipParam[i],functii[j-1].Param[i].tipParametri)==0)
                { 
                 if(i==functii[j-1].nr_parametri)
                        return 0;//in cazul in care toti parametrii sunt valabili
                }
                   else// in cazul in care tipul parametrilor nu corespud
                        return 1;
    
           }
       }
       else 
            return 2;//cazul in care numarul de parametrii nu corespund
}

int VerificareFunctie(char NumeFunctie[])
{
    

    int j;
    
        for(j=0;j<=num_func;j++)
           { if(strcmp(NumeFunctie,functii[j].nume)==0)
                {
                break;}
           }
       
    if(ContorParamNoi==functii[j-1].nr_parametri)// in cazul in care avem accelasi nr de parametrii gen
       {
        for(int i=1;i<=functii[j-1].nr_parametri;i++)// tre sa compar tipul de parametrii
           {
             if(strcmp(TipParam[i],functii[j-1].Param[i].tipParametri)==0)
                { 
                 if(i==functii[j-1].nr_parametri)
                        return 0;//in cazul in care toti parametrii sunt valabili
                }
                   else// in cazul in care tipul parametrilor nu corespud
                        return 1;
    
           }
       }
       else 
            return 2;//cazul in care numarul de parametrii nu corespund
}

int operation(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;

    case '/':
        return a / b;
    }
    return 0;
}

int IdprimesteId(char AlDoilea[])
{
    int i;
    for( i=0;i<=num_var;i++)
        if(strcmp(AlDoilea,variabile[i].nume)==0)
                {strcpy(TipAsignareId,variabile[i].tip);
                OkAsignareId=1;
                break;}
        
        if(strcmp(variabile[i].tip,"int")==0)
              inlocuireInt=variabile[i].int_valoare;
        if(strcmp(variabile[i].tip,"float")==0)
              inlocuireFloat=variabile[i].float_valoare;
        if(strcmp(variabile[i].tip,"bool")==0)
              {
                if(variabile[i].valoare_bool==1)
                    adevarat=1;
                    else
                    adevarat=0;
              }
                
        if(strcmp(variabile[i].tip,"string")==0)
              strcpy(inlocuireString,variabile[i].string_valoare);


}

void FunctieInFunctie()
{

    OkGlobal=1;

}
void FunctieInFunctie2()
{
    if(OkGlobal==1)
        OkGlobal=2;

}
void FunctieInFunctie3()
{
    if(OkGlobal==2)
        OkGlobal=3;

}

int AdaugVector(char nume[])
{
  
    if (OkTypeOf==0)
     {for(int i=0;i<=num_var;i++)
           if(strcmp(nume,variabile[i].nume)==0)
                 {strcpy(TipGlobal,variabile[i].tip);
                    OkTypeOf=1;}
     } 
     else
        for(int i=0;i<=num_var;i++)
           if(strcmp(nume,variabile[i].nume)==0)
                {
                    if(strcmp(variabile[i].tip,TipGlobal)!=0)
                        {   OkTypeOf=0;
                            return 0;}
                }
    
}

int AdaugareVector(int x)
{
    if(OkTypeOf==0)
        {
            printf("%d\n",x); 
            strcpy(TipGlobal,"int");
            OkTypeOf=1;
        }
     else 
        if (OkTypeOf==1 && strcmp(TipGlobal,"float")==0)
            {printf("%d\n",x);   
            OkTypeOf=0;
            return 0;
            }
            


}

int AdaugareeVector(float x)
{
    if(OkTypeOf==0)
        {
            printf("%f\n",x); 
            strcpy(TipGlobal,"float");
            OkTypeOf=1;
        }
     else 
        if (OkTypeOf==1 && strcmp(TipGlobal,"int")==0)
            {
                printf("%f\n",x); 
                OkTypeOf=0;
                return 0;
            }
}

int Afisare()
{
        OkTypeOf=0;
    if (strcmp(TipGlobal,"int")==0)
        {
            return 0;
        }
        else 
    if (strcmp(TipGlobal,"float")==0)
        {
            return 1;
        }
       return 2;

}