#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f() {
    {
        goto label; // used the label before the initialization of the label
        // label:; // label is set after its usage (moved below)
    }
label:; // label is set after its usage
    printf("inside f()\n");
}

void g() {
    // trying to access the label in another block of function which is wrong and results in an error.
    // goto label; // Uncommenting this line would result in a compilation error
}

int main() {
    f(); // Call function f() directly
    return 0;
}


/** 
 * Mistakes I made in the code: 
 * 1. I was calling the f() in the main scope with "void" resulting in the non-printing of the print statement.
 * 2. Placed the label:; in the same block as the goto label; causing an endless loop that won't let the program execute further. 
 */ 
