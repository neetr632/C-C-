#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i = 34;
  int *ptr;
  int **ptr_PTR;

  // Cast the pointers to integers before assigning them to the i and ptr variables.
  i = &ptr;
  ptr = &ptr_PTR;

  printf("The address of i is %p\n", &i);
  printf("The address of ptr is %p\n", &ptr);
  printf("The address of ptr_PTR is %p\n", &ptr_PTR);

  return 0;
}
