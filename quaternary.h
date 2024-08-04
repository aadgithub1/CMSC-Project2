
class Quaternary: public SubExpression {
public:
    Quaternary(Expression* left, Expression* right, Expression* third, Expression* fourth): SubExpression(left, right, third, fourth) {
    }
    double evaluate()  {
        if (left->evaluate() < 0){
            return right->evaluate();
        } else if (left->evaluate() == 0){
            return third->evaluate();
        } else if (left->evaluate() > 0){
            return fourth->evaluate();
        } else{
            return -1;
        }
    }
};