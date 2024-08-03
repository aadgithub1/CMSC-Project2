#include <algorithm>

class Average: public SubExpression {
public:
    Average(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return (left->evaluate() + right->evaluate()) / 2;
    }
};