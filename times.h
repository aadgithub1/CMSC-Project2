// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Times object which returns
// the product of its two constituent expressions via
// its inherited evaluate function.

class Times: public SubExpression {
public:
    Times(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() * right->evaluate();
    }
};