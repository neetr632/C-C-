#include <stdio.h>
#include <math.h>
int main()
{
    float celsius;
    printf("enter a value in celcius %f\n", celsius);
    scanf("%f", &celsius);
    float Fahrenheit = celsius * 1.8 + 32;
    printf("%f\n", Fahrenheit);
    return 0;
}

