#include<stdio.h>

#include <math.h>

    int main(){
    int x, y, result;
    printf("enter the number of times you want to get multiple of ? %d\n", x);
    scanf("%d",&x);
    printf("enter the number you want to get table of %d\n", y);
    scanf("%d",&y);
    for (int i = x ; i >= 0; i--)
    {
        printf("10 x table in reverse --> %d\n", y*i);
    }
   
    return 0;
}