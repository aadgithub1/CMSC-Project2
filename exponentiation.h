class Exponentiation: public SubExpression {
public:
    Exponentiation(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
       return left->evaluate() * right->evaluate();
    }
};