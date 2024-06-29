#include <stdio.h>
#include <math.h>

int force(int mass); 
//declaration of the function 

int main() {
  int m;
  printf("enter the value of the mass in kgs: ");
  scanf("%d", &m);
  printf("the value of the force is %d\n", force(m));
  return 0;
}
//funciton defined
int force(int mass) {
  int result;
  result = mass * 10;
  return result;
}
