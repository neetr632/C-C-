#include<stdio.h>
#include <stdlib.h>
#include <math.h>
    int main(){
    float f = 23.34;
    float *ftr = &f;
    printf("the value fo the ptr is %u\n", ftr);
    ftr = ftr + 1;
    printf("the value fo the ptr is %u\n", ftr);
    ftr = ftr - 5;
    printf("the value fo the ptr is %u\n", ftr);
    return 0;
}