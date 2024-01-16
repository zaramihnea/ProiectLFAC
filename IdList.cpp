#include "IdList.h"

using namespace std;

IdList ids;
//class AST exprAST;
string currentScope;
string typeOfID;

// void IdList::Eval(const char *name){
// Variable* var = getVar(name);
// Function* func = getFunc(name);
// UserDefinedType* utype = getUserdef(name);
// Vector* vect = getVect(name);
// }

// void IdList::TypeOf(const char *name) {
//     Variable* var = getVar(name);
//     Function* func = getFunc(name);
//     Vector* vect = getVect(name);

//     if (var != nullptr) {
//         std::cout << "Variable type: " << var->val.type << std::endl;
//     } else if (func != nullptr) {
//         std::cout << "Function return type: " << func->returnType << std::endl;
//     } else if (vect != nullptr) {
//         std::cout << "Vector type: " << vect->type << std::endl;
//     } else {
//         std::cout << "No variable, function, or vector with the name" << name << "' found." << std::endl;
//     }
// }

bool IdList::existsVar(const char *name)
{
    for (const auto &var : vars)
        if (var.name == name)
            return true;
    return false;
}

bool IdList::existsFunc(const char *name)
{
    for (const auto &func : funcs)
        if (func.name == name)
            return true;
    return false;
}

bool IdList::existsUserdef(const char *name)
{
    for (const auto &usrdef : userdefs)
        if (usrdef.name == name)
            return true;
    return false;
}

bool IdList::existsVect(const char *name)
{
    for (const auto &vector : vectors)
        if (vector.name == name)
            return true;
    return false;
}

Variable* IdList::getVar(const char *name) {
    for (auto &var : vars) {
        if (var.name == name) {
            return &var;
        }
    }
    return nullptr; 
}

Function* IdList::getFunc(const char *name) {
    for (auto &func : funcs) {
        if (func.name == name) {
            return &func;
        }
    }
    return nullptr; 
}

UserDefinedType* IdList::getUserdef(const char *name) {
    for (auto &usrdef : userdefs) {
        if (usrdef.name == name) {
            return &usrdef;
        }
    }
    return nullptr; 
}

Vector* IdList::getVect(const char *name) {
    for (auto &vector : vectors) {
        if (vector.name == name) {
            return &vector;
        }
    }
    return nullptr; 
}

void IdList::addVar(Variable &var)
{
    var.scope = currentScope;
    vars.push_back(var);
}

void IdList::addFunc(Function &func)
{
    func.scope = currentScope;
    funcs.push_back(func);
}

int IdList::callFunc(const char *name) {
    Function *function = getFunc(name);
    if (function != nullptr) {
        if (function->returnType == "int" || function->returnType == "float") {
            return 0;
        }
    }
    std::cerr << "Error: function with name '" << name << "' is not correct type." << std::endl;
    return 0;
}

void IdList::addUserDef(const UserDefinedType &usrdef)
{
    userdefs.push_back(usrdef);
}

void IdList::addVect(Vector &vector)
{
    vector.scope = currentScope;
    vectors.push_back(vector);
}

void IdList::printSymbolTable() {
    ofstream file("symbol_table.txt");
    
    if (!file.is_open()) {
        cerr << "Error opening symbol_table.txt for writing" << endl;
        return;
    }
    
    file << "Symbol Table:\n";
    file << "Variables and Constants:\n";
    for (const auto& var : vars) {
        file << "Name: " << var.name << ", Type: " << var.val.type<< ", Is Const: " << var.isConst << ", Scope: " << var.scope << ", Value: ";
        std::visit([&file](auto&& arg) { file << arg; }, var.val.val);
        file << "\n";
    }
    
    file << "\nFunctions:\n";
    for (const auto& func : funcs) {
        file << "Name: " << func.name << ", Return Type: " << func.returnType << ", Scope: " << func.scope << ", Parameters: ";
        for (const auto& param : func.params) {
            file << param.name << ":" << param.type << " ";
        }
        file << "\n";
    }
    file << "\nUser Defined Types:\n";
    for (const auto& usrdef : userdefs) {
        file << "Name: " << usrdef.name;
        file << "\n";
    }
    
    file.close();
}


IdList::~IdList()
{
    vars.clear();
}
