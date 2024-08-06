// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Maximum expression
// which returns the result of the standard max function
// using each constituent expression's value via their evaluate
// functions

#include <algorithm>

class Maximum: public SubExpression {
public:
    Maximum(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return std::max(left->evaluate(), right->evaluate());
    }
};