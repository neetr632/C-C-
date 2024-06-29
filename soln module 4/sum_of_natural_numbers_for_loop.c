#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    // the print statement will only run once
    printf("the value of 10 first natural numbers is %d", sum);
    return 0;
}