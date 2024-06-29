#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void printAdd(int a)
{
    printf("the address of the variable a  is %u", &a);
    return 0;
}
int main()
{
    int i = 4;
    printf("the value of the variable i is %d\n", i);
    printAdd(i); //i ki value i ke pass he rahegi sirf value ki copy function ke pass jayegi
    printf("the address of the variable i is %d\n", &i);
    return 0;
}