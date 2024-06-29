#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("input the value %d\n", a);
    scanf("%d", &a);
    do
    {
        printf("the current value of 'a' is %d\n", ++a);
        a++;
    } while (a <= 100);

    return 0;
}