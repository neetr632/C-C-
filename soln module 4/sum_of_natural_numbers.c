#include <stdio.h>
#include <math.h>

int main()
{
    int x = 0, y = 10, sum = 0;

    while (x <= y)
    {
        sum += x; // sum = sum + x;
        x++;
    }
    // the print statement will only run once
    printf("the value of 10 first natural numbers is %d", sum);
    return 0;
}