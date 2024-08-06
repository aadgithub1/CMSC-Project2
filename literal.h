// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class defines a Literal as described below,
// edited to accept floating point values rather than just
// integer values

// This file contains the definition of the Literal class, whose representation consists of the value
// of the literal. Because both of its functions are one line functions, they are implemented as inline 
// functions. The constructor saves the value of the literal. Because this class is a subclass of Operand
// which in turn is a subclass of Expression, it must implement the function evaluate, which returns the
// value that corresponds to the literal.

class Literal: public Operand {
public:
    Literal(double value) {
        this->value = value;
    }
    double evaluate() {
        return value;
    }
private:
    double value;
};

//i want to make this accept 'unsigned floating point tokens'