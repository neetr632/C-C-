#include<stdio.h>
#include <stdlib.h>
#include <math.h>
    int main(){
    int a = 10;
    int *ptr1;
    int *ptr2;
    ptr1 = &a; //stores the address of the variable "a"
    printf("the address that is stored by the ptr1 is of variable 'A': %p\n", ptr1);
    ptr2 = ptr1; //stores the address of the ptr1 which has the value of var a.
    printf("the address that is stored by the ptr2 is of ptr1 which in turn holds the value fo the address of variable 'A': %p\n", ptr2);
    printf("the value stored at the address Ptr1 is: %d\n", *ptr1);
    return 0;
}