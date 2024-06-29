#include <stdio.h>
#include <math.h>

int main() {
  int n;
  printf("enter the value of n %d\n", n);
  scanf("%d", &n);
  {
    for (int i = n; i; i--) {
      printf("for loop has run %d\n", i);
      if (i==45)
      {
        break; //break the flow of code
      }
    }
    return 0;
  }
}