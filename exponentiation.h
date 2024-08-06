// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines an Exponentiation expression
// which returns the result of raising the first expression, left,
// to the power of the second expression, right, via
// its inherited evaluate function

#include <cmath>

class Exponentiation: public SubExpression {
public:
    Exponentiation(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return pow(left->evaluate(), right->evaluate());
    }
};