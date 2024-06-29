#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of the marks for the student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("the value of the marks for student %d is: %d\n", i + 1, marks[i]);
    }

    return 0;
}