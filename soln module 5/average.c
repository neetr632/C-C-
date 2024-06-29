#include <stdio.h>
#include <math.h>
int average(int a, int b, int c)
{
    int x;
    x = (a + b + c) / 3;
    return x;
}

int main()
{
    int a, b, c, result;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = average(a, b, c);
    printf("The value of the average is %d\n", result);
    return 0;
}
