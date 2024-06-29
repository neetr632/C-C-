#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    // Check if ptr1 is greater than or equal to ptr2
    if (ptr1 >= ptr2)
    {
        printf("ptr1 is greater than or equal to ptr2\n");
    }
    else
    {
        printf("ptr1 is less than ptr2\n");
    }

    // Checking if the addresses are equal
    if (ptr1 == ptr2)
    {
        printf("ptr1 and ptr2 point to the same address\n");
    }
    else
    {
        printf("ptr1 and ptr2 point to different addresses\n");
    }
    printf("the value of the ptr 1 is %u\n", ptr1);
    printf("the value of the ptr 2 is %u\n", ptr2);
    return 0;
}
