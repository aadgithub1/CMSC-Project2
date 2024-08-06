// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a remainder expression which returns
// the division remainder of it constituent expressions

#include <cmath>

class Remainder: public SubExpression {
public:
    Remainder(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return fmod(left->evaluate(), right->evaluate());
    }
};