#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    (a < 10) ? printf("small") : printf("big");
    return 0;
}