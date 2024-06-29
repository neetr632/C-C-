#include <stdio.h>
#include <math.h>

int main()
{
    int a = 11, b = 2, c = 3, d = 4;
    if (a > b && a > c && a > d)
    {
        printf("a is the greatest of them all");
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is the greatest of them all");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is the greatest of them all");
    }
    else
    {
        printf("d is the greatest of them all");
    }

    return 0;
}