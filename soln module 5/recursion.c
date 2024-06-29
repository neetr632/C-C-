#include <stdio.h>
#include <math.h>
int factorial(int x);

int main()
{
    int a = 5;
    printf("the value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x)
{
    printf("calling factorial(%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}