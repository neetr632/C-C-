#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printArray(int *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of the element is %d and %d\n", i + 1, *(ptr + i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 3, 423, 4343, 22};
    printArray(arr, 7);
    return 0;
}

// chaned way of intializing the program "ptr[]"


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void printArray(int ptr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of the element is %d and %d\n", i + 1, ptr[i]);
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 3, 423, 4343, 22};
//     printArray(arr, 7);
//     return 0;
// }