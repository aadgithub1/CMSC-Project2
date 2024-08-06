// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class implements a Variable as described below with the addition
// of the markUsed() function to mark a variable name as used 

// This file contains the body of the function contained in The Variable class. The evaluate function 
// looks up te value of a variable in the symbol table and returns that value.

#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

double Variable::evaluate() {
    return symbolTable.lookUp(name);
}

void Variable::markUsed(){
    return symbolTable.markUsed(name);
}