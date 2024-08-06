// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the main function for the project 2 skeleton. It reads an input file named input.txt
// that contains one statement that includes an expression following by a sequence of variable assignments.
// It parses each statement and then evaluates it.
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"
#include "customexception.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& in);

int main() {
	const int SIZE = 256;
	Expression* expression;
    char paren, comma, line[SIZE];
 
	ifstream fin;
	fin = ifstream("input.txt");
	if (!(fin.is_open())) {
		cout << "File did not open" << endl;
		// system("pause");
		return 1;
	}
	while (true) {
		symbolTable.init();
        fin.getline(line, SIZE);
		if (!fin)
			break;
		stringstream in(line, ios_base::in); 
		in >> paren;
		cout << line << " ";
		try {
			expression = SubExpression::parse(in);
			in >> comma;
			parseAssignments(in);
			symbolTable.reconcile();
			double result = expression->evaluate();
			cout << "Value = " << result << endl;
		}
		catch (string message) {
			cout << message << endl;
			break;
		} catch (const CustomException e){
			cout << e.what();
			break;
		}
	}
	// system("pause");
	return 0;
}

void parseAssignments(stringstream& in) {
	char assignop, delimiter;
    string variable;
    double value;
    do {
        variable = parseName(in);
        in >> ws >> assignop >> value >> delimiter;

		if (delimiter == '\0'){
			throw CustomException("\nERROR: Uninitialized variable.");
			exit(EXIT_FAILURE);
		}else if (symbolTable.lookUp(variable) != -1){
			throw CustomException("\nERROR: Double initialized variable.");
			exit(EXIT_FAILURE);
		}		
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
   
//when there are x number of variables
	//I want to ensure there are x number of var inits
	//else throw an error