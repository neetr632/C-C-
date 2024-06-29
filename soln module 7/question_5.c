#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverse(int *arr, int n)
{
    // This function takes an array of integers and its size as arguments.
    // It reverses the order of elements within the array.

    int temp; // Declare a temporary variable to hold values during swapping.
    for (int i = 0; i < n / 2; i++)
    {
        // Loop iterates from 0 to half of the array size.

        temp = arr[i];           // Store the value of the current element in the temporary variable.
        arr[i] = arr[n - i - 1]; // Assign the value of the element at the mirror position (n - i - 1) to the current element.
        arr[n - i - 1] = temp;   // Assign the previously stored value from the temporary variable to the mirror position element.
    }
}

int main()
{
    int arr[] = {1, 3, 24, 34, 234, 23, 423, 234,56}; // Define an array of integers.
    reverse(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("the value of the %d element is: %d\n", i, arr[i]);
    }
    return 0;
}
