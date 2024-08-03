#include <algorithm>

class Maximum: public SubExpression {
public:
    Maximum(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return std::max(left->evaluate(), right->evaluate());
    }
};