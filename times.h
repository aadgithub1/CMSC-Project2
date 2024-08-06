
class Multiplication: public SubExpression {
public:
    Multiplication(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() * right->evaluate();
    }
};