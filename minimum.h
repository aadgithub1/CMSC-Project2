// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Minimum expression
// which uses the standard min function to evaluate
// which expression has the least value

#include <algorithm>

class Minimum: public SubExpression {
public:
    Minimum(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return std::min(left->evaluate(), right->evaluate());
    }
};