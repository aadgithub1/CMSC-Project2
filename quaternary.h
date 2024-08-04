
class Quaternary: public SubExpression {
public:
    Quaternary(Expression* left, Expression* right, Expression* third, Expression* fourth): SubExpression(left, right, third, fourth) {
    }
    double evaluate()  {
        return fourth->evaluate();
    }
};