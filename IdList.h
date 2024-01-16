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
    variant<int, double, bool, char, string> val; // am pus double in loc de float pt ca asta returneaza atof()

<<<<<<< HEAD
    Value(){};
=======
    Value() {};
>>>>>>> refs/remotes/origin/main

    Value(string type)
    {
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
    bool isConst = false;

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
public:
    vector<Variable> vars;
    vector<Function> funcs;
    vector<UserDefinedType> userdefs;
    vector<Vector> vectors;

    vector<Parameter> tempParams;
    Value tempVal;
<<<<<<< HEAD

    Variable *getVar(const char *name);
    Function *getFunc(const char *name);
    UserDefinedType *getUserdef(const char *name);
    Vector *getVect(const char *name);

=======
>>>>>>> refs/remotes/origin/main
    bool existsVar(const char *name);
    bool existsFunc(const char *name);
    bool existsUserdef(const char *name);
    bool existsVect(const char *name);

    void addVar(Variable &var);
    void addFunc(Function &func);
    int callFunc(const char *name);
    void addUserDef(const UserDefinedType &usrdef);
    void addVect(Vector &vector);

    void printSymbolTable();
    ~IdList();
};

<<<<<<< HEAD
class Node
{
public:
    Value value;
    Node *left;
    Node *right;
    char op; // operatia

    // constructor pt frunze, trebuie sa ii dam direct valoarea operandului
    Node(Value val)
    {
        this->value = val;
        this->left = nullptr;
        this->right = nullptr;
        this->op = 0; // = nu exista operatie
    }

    // contructor pt semn
    Node(char oper, Node *l, Node *r)
    {
        this->value = Value(); // nu are valoare, doar un semn si pointeri catre alte doua noduri
        this->left = l;
        this->right = r;
        this->op = oper;
    }
};

class AST
{
private:
    Node *root;
    Value finalValue;

    Value evaluateNode(Node *node)
    {
        if (!node)
        {
            std::cerr << "Eroare: nu s-a gasit un nod apelat" << std::endl;
        }

        if (!node->left && !node->right)
        {
            return node->value;
        }
        else
        {
            Value lVal = node->left ? evaluateNode(node->left) : Value();
            Value rVal = node->right ? evaluateNode(node->right) : Value(); // pentur Value() -> valoare int = 0
            Value result;
            switch (node->op)
            {
            case '+':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    int sum = std::get<int>(lVal.val) + std::get<int>(rVal.val);
                    result.val = sum;
                    result.type = "int";
                }
                else if (lVal.type == "float" && rVal.type == "float")
                {
                    double sum = std::get<double>(lVal.val) + std::get<double>(rVal.val);
                    result.val = sum;
                    result.type = "float";
                }
                break;
            case '-':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    int sum = std::get<int>(lVal.val) - std::get<int>(rVal.val);
                    result.val = sum;
                    result.type = "int";
                }
                else if (lVal.type == "float" && rVal.type == "float")
                {
                    double sum = std::get<double>(lVal.val) - std::get<double>(rVal.val);
                    result.val = sum;
                    result.type = "float";
                }
                break;
            case '*':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    int sum = std::get<int>(lVal.val) * std::get<int>(rVal.val);
                    result.val = sum;
                    result.type = "int";
                }
                else if (lVal.type == "float" && rVal.type == "float")
                {
                    double sum = std::get<double>(lVal.val) * std::get<double>(rVal.val);
                    result.val = sum;
                    result.type = "float";
                }
                break;
            case '/':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    int sum = std::get<int>(lVal.val) / std::get<int>(rVal.val);
                    result.val = sum;
                    result.type = "int";
                }
                else if (lVal.type == "float" && rVal.type == "float")
                {
                    double sum = std::get<double>(lVal.val) / std::get<double>(rVal.val);
                    result.val = sum;
                    result.type = "float";
                }
                break;
            case '%':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    int sum = std::get<int>(lVal.val) % std::get<int>(rVal.val);
                    result.val = sum;
                    result.type = "int";
                }
                
                // operatia % in C nu este facuta nativ pentru float/double
                // else if (lVal.type == "float" && rVal.type == "float")
                // {
                //     double sum = std::get<double>(lVal.val) % std::get<double>(rVal.val);
                //     result.val = sum;
                //     result.type = "float";
                // }
                break;
            case '>':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    result.val = std::get<int>(lVal.val) > std::get<int>(rVal.val);
                    result.type = "bool";
                }
                else if (lVal.type == "double" && rVal.type == "double")
                {
                    result.val = std::get<double>(lVal.val) > std::get<double>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '<':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    result.val = std::get<int>(lVal.val) < std::get<int>(rVal.val);
                    result.type = "bool";
                }
                else if (lVal.type == "double" && rVal.type == "double")
                {
                    result.val = std::get<double>(lVal.val) < std::get<double>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '>=':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    result.val = std::get<int>(lVal.val) >= std::get<int>(rVal.val);
                    result.type = "bool";
                }
                else if (lVal.type == "double" && rVal.type == "double")
                {
                    result.val = std::get<double>(lVal.val) >= std::get<double>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '<=':
                if (lVal.type == "int" && rVal.type == "int")
                {
                    result.val = std::get<int>(lVal.val) <= std::get<int>(rVal.val);
                    result.type = "bool";
                }
                else if (lVal.type == "double" && rVal.type == "double")
                {
                    result.val = std::get<double>(lVal.val) <= std::get<double>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '&&':
                if (lVal.type == "bool" && rVal.type == "bool")
                {
                    result.val = std::get<bool>(lVal.val) && std::get<bool>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '||':
                if (lVal.type == "bool" && rVal.type == "bool")
                {
                    result.val = std::get<bool>(lVal.val) || std::get<bool>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '==':
                if (lVal.type == "bool" && rVal.type == "bool")
                {
                    result.val = std::get<bool>(lVal.val) == std::get<bool>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '!=':
                if (lVal.type == "bool" && rVal.type == "bool")
                {
                    result.val = std::get<bool>(lVal.val) != std::get<bool>(rVal.val);
                    result.type = "bool";
                }
                break;
            case '!':
                if (lVal.type == "bool")
                {
                    result.val = !std::get<bool>(lVal.val);
                    result.type = "bool";
                }
                break;
            }
            return result;
        }
    }

public:
    AST(Node *rootNode)
    {
        this->root = rootNode;
    }

    Value evaluate()
    {
        if (!root)
        {
            std::cerr << "Eroare: nu s-a gasit radacina arborelui" << std::endl;
        }
        return evaluateNode(root);
    }
};
=======
// class AST
// {
//     vector<Node> expression; // the expression currently being evaluated
//     string type;             // data type of the expression
//     Value finalValue;
// public:
    
// };

// class Node
// {
//     Node lChild, rChild;
//     char symbol;
//     Value val;

//     Node(Vector vector) {

//     }
// };

// ceva functie recurenta kind of care se apeleaza cu alte date
// daca e doar o valoare, se baga in nod,
// daca
>>>>>>> refs/remotes/origin/main
