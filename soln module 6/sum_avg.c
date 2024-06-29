#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sumANDavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)  / 2;
}
int main()
{
    int x, y, sum;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sumANDavg(x, y, &sum, &avg);
    printf("The sum is %d\n", sum);
    printf("The average is %f\n", avg);

    return 0;
}
