/******** From Section 2.2.1 ********
 * Author:  Shane Ryan
 * Name: print_square.cpp
 * Purpose: print out the square of
 * some input double.
 ***********************************/

#include <iostream>

using namespace std;


double square(double x) {

    return x*x;

}


void print_square(double in) {

    cout << "The sqaure of " << in << " is " << square(in) << ".\n";    

}


int main() {

    print_square(1.45);

    return 0;

}
