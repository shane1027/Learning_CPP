/******** From Section 2.2.2 ********
 * Author:  Shane Ryan
 * Name: type_tests.cpp
 * Purpose: Explore C++'s handling
 * of mixed type arithmetic.
 ***********************************/

#include <iostream>

using namespace std;

int main() {

    double d = 7.7;
    int i = 3;
    d = d + i;
    i = d*i;

    cout << "d = " << d << "\ni = " << i << "\n";
        // it's nice to not need identifiers like %i and %lf

    return 0;

}
