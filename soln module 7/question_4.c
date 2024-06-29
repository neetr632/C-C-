#include <stdio.h> // Include standard input/output library
#include <stdlib.h> // Include standard library for dynamic memory allocation (not used in this example)
#include <math.h> // Include math library for mathematical functions (not used in this example)

int main() {
  // Declare an array named "arr" of type "int" with 10 elements
  int arr[10] = {1, 34, 5, 45, 3, 23, 234, 46, 65, 2};
  // Initialize the array with 10 integer values

  // Declare a pointer variable named "ptr" of type "int"
  int *ptr = &arr[9];
  // Initialize the pointer to point to the last element of the array "arr" using the address-of operator "&"

  // Start a loop that iterates 10 times (0 to 9)
  for (int i = 0; i < 10; i++) {
    // Print the value of the element pointed to by the "ptr"
    printf("%d\n", *ptr);

    // Decrement the pointer to move it to the previous element in the array
    ptr--;
  }

  // Print a message indicating the completion of printing the reversed array
  printf("here is your reversed string");

  return 0; // Return 0 to indicate successful program execution
}
