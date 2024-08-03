// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

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

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left) {
    this->left = left;
}

Expression* SubExpression::parse(stringstream& in) {//a + 4)
    Expression* left;
    Expression* right;
    char operation, paren;
    
    left = Operand::parse(in);
    in >> operation;
    //if operation is the negation symbol
        //don't wait for a second operand, return new negated operator
    if (operation == '~'){
        in >> paren;
        return new Negation(left);
    }
    right = Operand::parse(in);
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
    }
    return 0;
}
