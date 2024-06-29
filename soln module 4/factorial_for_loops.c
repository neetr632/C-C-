#include <stdio.h>

#include <math.h>

int main()
{
    int n = 7, factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
printf("the value of factorial %d is %d", n , factorial);
    return 0;
}