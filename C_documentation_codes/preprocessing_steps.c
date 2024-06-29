#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a = 5 + 10;
    printf("the value of the a is: %d", a); //i missed a semicolon after the print statement. so i added it here to fix that error.
    return 0;
}

// during the preprocessing the int a = 5 \
//      + 10;  will be converted to "int a=5+15" ,
// because during preprocessing it will get summed up into one line to make the code readable.