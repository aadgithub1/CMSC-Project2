
class Ternary: public SubExpression {
public:
    Ternary(Expression* left, Expression* right, Expression* third): SubExpression(left, right, third) {
    }
    double evaluate()  {
       return left->evaluate();//this should be 0, eat ws
    }
};