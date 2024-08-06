// Aaron Webb
// Expression Evaluation Program
// Aug 06, 2024
// This class implements parse by implementing its
// only member function - parseName - to return the
// full name of a variable, edited to verify the first
// character is alphanumeric and to allow underscores 

// This file contains the body of the function parseName. That function consumes all alphanumeric 
// characters until the next whitespace and returns the name that those characters form.

#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in) {
    char alnum;
    string name = "";

    in >> ws;
    if (!isalnum(in.peek())){
        cout << "\nERROR: First variable character must be alphanumeric.";
        exit(EXIT_FAILURE);
    }
    while (isalnum(in.peek()) || in.peek() == 95) {
        in >> alnum;
        name += alnum;
    }
    return name;
}


//right now parseName will loop and add characters to the
//variable name so long as they are alphanumeric.

//i want to add chars if they are either alphanumeric OR
//underscores