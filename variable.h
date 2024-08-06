// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Variable using the name parameter to
// set the name name attribute and call the markUsed() function
// in the constructor to mark the variable as used when it is
// instantiated

// This file contains the class definition of the Variable class. The variable is represented by its
// name, which the construcor initializes. Because this class is a subclass of Operand which in turn is 
// a subclass of Expression, it must implement the function evaluate, whose body is defined in variable.cpp.

class Variable: public Operand {
public:
    Variable(string name) {
        this->name = name;
        markUsed();
    }
    double evaluate();
    void markUsed();
private:
    string name;
};