#include <stdio.h>
#include <math.h>

int main()
{
    int thenumbertocheck, usernumber, result;
    thenumbertocheck = 97;
    printf("input your number to check the divisibility of the inputted number", usernumber);
    scanf("%d", &usernumber);
    result = thenumbertocheck / usernumber ;
    printf("the result value is %d", result);
    return 0;
}
