// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines Average, which returns
// the average of it constituent expressions via the inherited evaluate
// function
class Average: public SubExpression {
public:
    Average(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate() {
       return (left->evaluate() + right->evaluate()) / 2;
    }
};