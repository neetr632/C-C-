#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void printTable(int *multable, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dX%d = %d\n", num, i + 1, multable[i]);
    }
    printf("**********************************************\n\n");
}

int main()
{
    int multable[3][10];
    printTable(multable[0], 2, 10);
    printTable(multable[1], 7, 10);
    printTable(multable[2], 9, 10);
    return 0;
}