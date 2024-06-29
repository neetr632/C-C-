#include <stdio.h>

void print_pyramid_recursive(int n) {
  if (n == 0) {
    return;
  }

  // Recursively print the next line, with one more star.
  print_pyramid_recursive(n - 1);

  // Print the current line.
  for (int i = 0; i < n; i++) {
    printf("*");
  }
  printf("\n");
}

int main() {
  int n;
  printf("Enter the number of lines: ");
  scanf("%d", &n);

  print_pyramid_recursive(n);

  return 0;
}
