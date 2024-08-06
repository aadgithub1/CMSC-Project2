// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a negation expression
// which negates its only constituent expression

class Negation: public SubExpression {
public:
    Negation(Expression* left): SubExpression(left) {
    }
    double evaluate() {
       return -(left->evaluate());
    }
};