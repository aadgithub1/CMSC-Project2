// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the function parseName. That function consumes all alphanumeric 
// characters until the next whitespace and returns the name that those characters form.

#include <cctype>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& in) {
    char alnum;
    string name = "";

    in >> ws;
    // if (!isalnum(in.peek())){    MAKE SURE CHAR 1 IS ALPHA
    //     //throw errow
    //     return "ERROR";
    // }
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