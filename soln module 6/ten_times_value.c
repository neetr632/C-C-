#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int ten_times(int *a){
    int result = *a*10;
    printf("the address of a is %d\n",&a);
    printf("the contained address of a is %d\n",a); //the a points to the "x"

    return result;
}
    int main(){
        printf("enter the number you want to increase 10 times %d\n",x);
        int x;
        printf("the value of the increase is %d", ten_times(&x));
        scanf("%d",&x);
    return 0;
}