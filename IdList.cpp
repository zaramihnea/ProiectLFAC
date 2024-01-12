#include "IdList.h"

using namespace std;

class IdList ids;
static string currentScope = "global";

void Eval(string id){

}
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

variant<int, double, bool, char, string> IdList::callFunc(const char *name){

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
        file << "Name: " << var.name << ", Type: " << var.val.type << ", Scope: " << var.scope << ", Value: ";
        std::visit([&file](auto&& arg) { file << arg; }, var.val.val); // required for outputing a variant without knowing its value type
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
    
    file.close();
}


IdList::~IdList()
{
    vars.clear();
}
