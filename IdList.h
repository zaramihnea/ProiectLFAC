#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <array>
#include <variant>

using namespace std;

class Value
{
public:
    string type;
    variant<int, double, bool, char, string> val; // we put double instead of float because that is what atof() returns

    Value();

    Value(string type){
        this->type = type;
    }

    Value(char *value, string type)
    {

        if (type == "int")
        {
            this->val = atoi(value);
        }
        else if (type == "float")
        {
            this->val = atof(value);
        }
        else if (type == "bool")
        {
            if (string(value) == "true")
                this->val = true;
            else
                this->val = false;
        }
        else if (type == "char")
        {
            this->val = value[0];
        }
        else if (type == "string")
        {
            this->val = value;
        }

        this->type = type;
    }
};

class Variable
{
public:
    string name;
    Value val;
    string scope;

    Variable(const string &name, const Value &val)
    {
        this->name = name;
        this->val = val;
    }
};

class Parameter
{
public:
    string name;
    string type;
    bool isConst = false;

    Parameter(const string &name, const string &type)
    {
        this->name = name;
        this->type = type;
    }
};
class Function
{
public:
    string name;
    string returnType;
    string scope;
    vector<Parameter> params;

    Function(const string &name, const string &returnType)
    {
        this->name = name;
        this->returnType = returnType;
    }
};

class Vector
{
public:
    string name;
    string type;
    string scope;
    int size;
    Vector(const string &name, const string &type, int size)
    {
        this->name = name;
        this->type = type;
        this->size = size;
    }
};

class UserDefinedType
{
public:
    string name;

    UserDefinedType(const string &name)
    {
        this->name = name;
    }
};

class IdList
{
    vector<Variable> vars;
    vector<Function> funcs;
    vector<UserDefinedType> userdefs;
    vector<Vector> vectors;
    vector<Parameter> tempParams;
public:
    bool existsVar(const char *name);
    bool existsFunc(const char *name);
    bool existsUserdef(const char *name);
    bool existsVect(const char *name);

    void addVar(Variable &var);
    void addFunc(Function &func);
    variant<int, double, bool, char, string> callFunc(const char *name);
    void addUserDef(const UserDefinedType &usrdef);
    void addVect(Vector &vector);

    void printSymbolTable();
    ~IdList();
};