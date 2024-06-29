#include <stdio.h>
#include <math.h>

int main() {
  int n, i;

  printf("Enter a number: ");
  scanf("%d", &n);

  // Check if the number is less than 2.
  if (n < 2) {
    printf("%d is not a prime number.\n", n);
    return 1;
  }

  // Check if the number is divisible by any number from 2 to its square root.
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      printf("%d is not a prime number.\n", n);
      return 1;
    }
  }

  // If the number is not divisible by any number from 2 to its square root, then it is a prime number.
  printf("%d is a prime number.\n", n);
  return 0;
}
