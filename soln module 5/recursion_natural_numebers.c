#include <stdio.h>

void natural_numbers(int x)
{
    if (x <= 50)
    {

        printf("%d\n", x);
        natural_numbers(x + 1);
        }
}

int main()
{
    int x = 1;

    natural_numbers(x);
    return 0;
}
