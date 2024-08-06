// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class implements SymbolTable as described below
// with the addition of init() which ensures both vectors are cleared,
// markUsed() to mark a variable name as being used in an expression,
// two show() functions to display each vector, and reconcile()
// to verify that all variables used in a given expression have been
// initialized 

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "symboltable.h"
#include "customexception.h"

void SymbolTable::insert(string variable, double value) {
    const Symbol& symbol = Symbol(variable, value);
    elements.push_back(symbol);
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
    return -1;
}

void SymbolTable::init(){
    elements.clear();
    usedVariables.clear();
}

void SymbolTable::markUsed(string variable){
    for (int i = 0; i < usedVariables.size(); i++){
        if (variable == usedVariables[i]){ //do not double add
            return;
        }
    }
    usedVariables.push_back(variable);
}

void SymbolTable::showElements(){
    for (int i = 0; i < elements.size(); i++)
        cout << elements[i].variable << " ";

    cout << "\nel size: " << elements.size() << endl;
}

void SymbolTable::showUsed(){
    for (int i = 0; i < usedVariables.size(); i++)
        cout << usedVariables[i] << " ";

    cout << " used size: " << usedVariables.size() << endl;;
}

void SymbolTable::reconcile(){
    if (usedVariables.size() != elements.size()){
        throw CustomException("\nERROR: Uninitialized elements!");
    }
}


//for each element in usedVariables
    //compare it to each element.variable in elements
