#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo(); //declaration of the function foo

int main()
{
    int x = 10; //local variable
    printf("the value of the L.V inside the main function is %d\n", x); //local variable
    printf("the value fo the G.V x inside the main function is: %d\n", x); //global variable
    if (x == 10) {
        printf("the G.V was overshadowed by the L.V\n");
    }
    else if (x == 20) {
        printf("G.V successfully printed\n");
    }
    else{
        printf("something went wrong here\n");
    }
    
    foo(); //calling the foo function
    return 0;
}

int x = 20;  //global variable
int foo() {
    printf("the value G.V inside the local scope of function is: %d", x);
    return 0;
}

/**
 * the mistakes i've made in the code is ->
 * missed the return 0;  statement at the end of the main and foo functions, which causes an error because it doesn't declare it.
 * missed the fucntion declaration which is a neccessary part of the code , so it should be written as "int foo(); before the main() body
 * missed calling the fucntion which is done in the main() body function.
 * using :: for acessing global variable caused an error in the console
*/