#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumofnumbers(int *a, int *b)
{
    int result = *a + *b;
    return result;
}
int main()
{
    int x = 12342343;
    int y = 21312125;
    int sum = sumofnumbers(&x, &y);
    printf("The sum of %d and %d is %d\n", x, y, sum);

    return 0;
}
