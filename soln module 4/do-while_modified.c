#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    i = 0;
    printf("enter the value of n \n", n);
    scanf("%d", &n);
    do
    {
        printf("the value is %d\n", i);
        i++;
    } while (i <= n);
    return 0;
}