#include <stdio.h>
#include <math.h>

int main() {
  int n, m;
  int factorial = 1;

  printf("Enter the value for factorial: ");
  scanf("%d", &m);

  n = 1;
  while (n <= m) {
    factorial *= n;
    n++;
  }

  printf("The value of factorial %d is %d\n", m, factorial);

  return 0;
}
