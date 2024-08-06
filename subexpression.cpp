// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class implements a Subexpression as described below
// with the addition of two additional constructors which allow
// for additional operands to be utilized and additional include
// statements which allow the evaluation of expressions
// by passing the Operands to the associated expression type
// i.e. Divide

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "remainder.h"
#include "exponentiation.h"
#include "minimum.h"
#include "maximum.h"
#include "average.h"
#include "negation.h"
#include "ternary.h"
#include "quaternary.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* right, Expression* third) {
    this->left = left;
    this->right = right;
    this->third = third;
}

SubExpression::SubExpression(Expression* left, Expression* right, Expression* third, Expression* fourth) {
    this->left = left;
    this->right = right;
    this->third = third;
    this->fourth = fourth;
}

SubExpression::SubExpression(Expression* left) {
    this->left = left;
}

Expression* SubExpression::parse(stringstream& in) {//tt + ss)
    Expression* left;
    Expression* right;
    Expression* third;
    Expression* fourth;
    char operation, paren;
    
    left = Operand::parse(in);
    in >> operation;
    if (operation == '~'){
        in >> paren;
        return new Negation(left);
    }

    right = Operand::parse(in);
    if (operation == '?'){
        in >> ws;
        third = Operand::parse(in);
    } else if (operation == '#'){
        in >> ws;
        third = Operand::parse(in);
        in >> ws;
        fourth = Operand::parse(in);
    }
    in >> paren;
    switch (operation) {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Times(left, right);
        case '/':
            return new Divide(left, right);
        case '%':
            return new Remainder(left, right);
        case '^':
            return new Exponentiation(left, right);
        case '<':
            return new Minimum(left, right);
        case '>':
            return new Maximum(left, right);
        case '&':
            return new Average(left, right);
        case '?':
            return new Ternary(left, right, third);
        case '#':
            return new Quaternary(left, right, third, fourth);

    }
    return 0;
}
