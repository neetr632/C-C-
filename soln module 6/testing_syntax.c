#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sumofnumbers(int a, int b);
int main()
{
    int x = 2;
    int y = 2;
    int sum = sumofnumbers(&x, &y);
    printf("the value of the address of x is --> %u\n", &x);                              //%u is use for printing address
    printf("the value of the pointer address of a it-self is --> %p\n", a);               // a stores the address of 'X'
    printf("the value of the variable refrenced ba the pointer which is a --> %d\n", *a); // a stores the address of 'X'

    return 0;
}

void sumofnumbers(int *a, int *b)
{
    int result = *a + *b;
    return result;
}