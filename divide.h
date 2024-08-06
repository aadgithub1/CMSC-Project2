// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Divide object which returns
// the quotient of its two constituent expressions via
// its inherited evaluate function.

class Divide: public SubExpression {
public:
    Divide(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() / right->evaluate();
    }
};