// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Minus expression which returns
// the difference of the constituent expressions 

// This file contains the class definition of the Minus class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions, 
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by returning the difference of the values of the two subexpressions.

class Minus: public SubExpression {
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate() {
       return left->evaluate() - right->evaluate();
    }
};