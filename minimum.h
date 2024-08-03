#include <algorithm>

class Minimum: public SubExpression {
public:
    Minimum(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return std::min(left->evaluate(), right->evaluate());
    }
};