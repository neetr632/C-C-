#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x, mul[10];

  // Prompt for and read the input
  printf("Enter the number: ");
  scanf("%d", &x);

  // Calculate the multiplication table
  for (int i = 0; i < 10; i++) {
    mul[i] = x * (i + 1);
  }

  // Print the multiplication table
  for (int i = 0; i < 10; i++) {
    printf("%d x %d = %d\n",x , i + 1, mul[i]);
  }

  return 0;
}
