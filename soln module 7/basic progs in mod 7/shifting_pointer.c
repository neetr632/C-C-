#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int marks[4];
  int *ptr;
  ptr = &marks[0];

  // Print the initial address of ptr
  printf("Initial address of ptr: %p\n", ptr);

  // Collect student marks
  for (int i = 0; i < 4; i++) {
    printf("Enter marks for student %d: ", i + 1);
    scanf("%d", ptr);
    ptr++;
  }

  // Check the address of ptr after the loop
  printf("Address of ptr after the loop: %p\n", ptr);

  // Check the value stored at the address pointed to by ptr
  int value = *ptr;
  printf("Value stored at the address: %d\n", value);

  // Display the stored marks
  for (int i = 0; i < 4; i++) {
    printf("Marks for student %d: %d\n", i + 1, marks[i]);
  }

  return 0;
}
