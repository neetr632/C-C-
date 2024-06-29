#include <stdio.h>
int sum(int a, int b);
#include <math.h>

int main()
{
    int result;
    result = sum(2, 123);
    printf("the value of result is %d", result);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}