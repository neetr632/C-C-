#include <stdio.h>

// Corrected function name
int sum_one_to_n(int x, int y) {
  if (x > y) {
    return 0;
  } else {
    return x + sum_one_to_n(x + 1, y);
  }
}

int main() {
  int x = 1, y;

  printf("Enter the value of y: ");
  scanf("%d", &y);

  // Calculate and print the sum
  int sum = sum_one_to_n(1, y);
  printf("The sum of the numbers from 1 to %d is %d\n", y, sum);

  return 0;
}
