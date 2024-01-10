#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct IdInfo {
    string type;
    string name;
};

struct FuncInfo {
    string type;
    string name;
    int nrParam;
    struct Parametru {
        string parametri;
        string type;
    } Param [100];
};

struct VectorInfo {
    string type;
    string name;
    int dimensiune;
    float vector_float[100];
    char vector_char[100];
    int vector_bool[100];
};

class IdList {
    vector<IdInfo> vars;
   
    public:
    bool existsVar(const char* s);
    void addVar(const char* type, const char* name);
    void printVars();
    ~IdList();
};

class FuncList {
    vector<FuncInfo> funcs;

    public:
    bool existsFunc(const char* s);
    void addFunc(const char* type, const char* name, int nr);
    void Parametri(const char* type, const char* name);
    void printFuncs();
    ~FuncList();
};

class VectorList {
    vector<VectorInfo> vects;

    public:
    bool existsVect(const char* s);
    void addVect(const char type, const char* name, int dimensiune);
    void printVects();
    ~VectorList();
};
