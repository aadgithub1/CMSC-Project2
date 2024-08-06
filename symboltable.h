// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines SymbolTable

// This file contains the class definition of the SymbolTable class. The symbol table is represented
// with a vector (list) of type Symbol which is a pair consisting of a variable and its associated value.
// The body of its functions are defined in symboltable.cpp. 

class SymbolTable {
public:
    SymbolTable() {}
    void insert(string variable, double value);
    double lookUp(string variable) const;
    void init();
    void markUsed(string variable);
    void showElements();
    void showUsed();
    void reconcile();

private:
    struct Symbol {
        Symbol(string variable, double value) {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        double value;
    };
    vector<Symbol> elements;
    vector<string> usedVariables;
};


//create a new vector to hold used variables








