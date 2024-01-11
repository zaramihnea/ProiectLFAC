#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

class Value
{
public:
    string type;
    int intVal;
    float floatVal;
    bool boolVal;
    char charVal;
    string stringVal;
    bool isIntSet, isFloatSet, isBoolSet, isCharSet, isStringSet, isConst = false;

    Value() : isIntSet(false), isFloatSet(false), isBoolSet(false), isCharSet(false), isStringSet(false) {}

    Value(string type) : type(type), isIntSet(false), isFloatSet(false), isBoolSet(false), isCharSet(false), isStringSet(false) {}

    Value(char *value, string type)
    {

        if (type == "int")
        {
            this->intVal = atoi(value);
            isIntSet = true;
        }
        else if (type == "float")
        {
            this->floatVal = atof(value);
            isFloatSet = true;
        }
        else if (type == "bool")
        {
            boolVal = (string(value) == "true");
            isBoolSet = true;
        }
        else if (type == "char")
        {
            this->charVal = value[0];
            isCharSet = true;
        }
        else if (type == "string")
        {
            this->stringVal = value;
            isStringSet = true;
        }

        this->type = type;
    }
};

class Variable
{
public:
    std::string name;
    Value val;
    string scope;

    Variable(const std::string &name, const Value &val)
        : name(name), val(val) {}
};

class Parameter
{
public:
    string name;
    string type;
    bool isConst = false;
    Parameter(const string &name, const string &type)
        : name(name), type(type) {}
};

class Function
{
public:
    string name;
    string returnType;
    string scope;
    vector<Parameter> params;
    Function(const string &name, const string &returnType, const string &scope)
        : name(name), returnType(returnType), scope(scope) {}
};

class Array
{
public:
    string name;
    string type;
    int size;
    Array(const string &name, const string &type, int size)
        : name(name), type(type), size(size) {}
};


class UserDefinedType
{
public:
    string name;
    UserDefinedType(const string &name)
        : name(name) {}
};

class IdList
{
    vector<Variable> vars;
    vector<Function> funcs;
    vector<UserDefinedType> usrdefs;
    vector<Array> arrays;
public:
    bool exists(const char *name)
    {
        for (const auto &var : vars)
            if (var.name == name)
                return true;

        for (const auto &func : funcs)
            if (func.name == name)
                return true;

        for (const auto &usrdef : usrdefs)
            if (usrdef.name == name)
                return true;

        for (const auto &array : arrays)
            if (array.name == name)
                return true;

        return false;
    }
    void addVar(const Variable &var)
    {
        vars.push_back(var);
    }

    void addFunc(const Function &func)
    {
        funcs.push_back(func);
    }

    void addUsrDef(const UserDefinedType &usrdef)
    {
        usrdefs.push_back(usrdef);
    }
};

