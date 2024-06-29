#include <stdio.h>
#include <math.h>
void display_1();
void display_2();
void display_3();

int main()
{

    display_1();

    return 0;
}
void display_1()
{
    printf("good morning\n");
    display_2();
}
void display_2()
{
    printf("good evening\n");
    display_3();
}
void display_3()
{
    printf("good night\n");
}