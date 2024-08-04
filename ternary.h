
class Ternary: public SubExpression {
public:
    Ternary(Expression* left, Expression* right, Expression* third): SubExpression(left, right, third) {
    }
    double evaluate()  {
        if (left->evaluate() != 0){
            return right->evaluate();
        } else{
            return third->evaluate();
        }
    }
};