#include <cmath>

class Exponentiation: public SubExpression {
public:
    Exponentiation(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return pow(left->evaluate(), right->evaluate());
    }
};