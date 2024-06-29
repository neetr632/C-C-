#include <stdio.h>  // Include standard input/output library
#include <stdlib.h> // Include standard library for dynamic memory allocation
#include <math.h>   // Include math library for mathematical functions (not used in this example)

int main()
{ // Define the main function
    // Declare an array named "ten_nums" of type "int" with 10 elements
    int ten_nums[10] = {1, 34, 5, 45, 3, 23, 234, 46, 65, 2};
    // Initialize the array with 10 integer values

    // Declare a pointer variable named "ptr" of type "int"
    int *ptr = ten_nums;
    ptr = ptr + 2;
    if (ptr == &ten_nums[2])
    {
        printf("the ptr points to the same lcoation in the same memory\n");
    }
    else
    {
        printf("these do not print to the same location in memory\n");
    }
    return 0; // Return 0 to indicate successful program execution
}
