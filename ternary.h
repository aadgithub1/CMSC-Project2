// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Ternary expression which evaluates
// the conditional expression based on the assignment requirements

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