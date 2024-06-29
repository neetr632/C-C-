#include <stdio.h>
#include <math.h>

int main()
{
    // use double for more value precisison
    double height = 243.34;
    double radius = 24123.0;
    double pie = 3.14159265359;
    double volume = 4.0 / 3.0 * pie *radius*radius*radius;
    printf("%f\n", volume);
    double area = pie*radius*radius*height;
    printf("%f\n",area);
    return 0;
}
