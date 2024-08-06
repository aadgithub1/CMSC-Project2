// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines Subexpression as described below with
// the addition of constructors with additional parameters
// to facilitate conditional expression evaluation

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evalauate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp. 

class SubExpression: public Expression {
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* third);
    SubExpression(Expression* left, Expression* right, Expression* third, Expression* fourth);
    SubExpression(Expression* left);
    static Expression* parse(stringstream& in);
protected: 
    Expression* left;
    Expression* right;
    Expression* third;
    Expression* fourth;
};