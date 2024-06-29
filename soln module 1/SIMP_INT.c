#include <stdio.h>
#include <math.h>

int main()
{
    int principle, year;
    float rate;
    printf("enter the value of principle %d\n", principle);
    scanf("%d", &principle);
    printf("enter the vlaue of rate %f\n", rate);
    scanf("%f", &rate);
    printf("enter the value of year %d\n", year);
    scanf("%d", &year);

    double simple_interest = principle * rate * year / 100;
    printf("your're simple interest is %f", simple_interest);
    return 0;
}