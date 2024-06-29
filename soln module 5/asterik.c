#include <stdio.h>

void print_pattern(int n) {
  for (int i = 1; i <= n; i += 2) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Enter the number of lines: ");
  scanf("%d", &n);

  print_pattern(n);

  return 0;
}
