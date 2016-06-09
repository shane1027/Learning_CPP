/******** From Section 2.2.2 ********
 * Author:  Shane Ryan
 * Name: type_tests.c
 * Purpose: Explore C's handling
 * of mixed type arithmetic.
 ***********************************/

#include <stdio.h>

int main() {

    double d = 7.7;
    int i = 3;
    d = d + i;
    i = d*i;

    printf("d = %lf\n", d);     // seems clunky compared to cout
    printf("i = %i\n", i);
    
    return 0;

}
