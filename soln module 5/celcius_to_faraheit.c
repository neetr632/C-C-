#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int change_c_to_f(int cel);

int main()
{
    int cel;
    printf("input temp in celcius %d\n", cel);
    scanf("%d", &cel);
    if (cel < -273.6 || cel > 5336.18)
    {
        printf("Error: the value should be between -273.15 and 5336.18. Please try again.\n");
        exit(1);
    }

    printf("the value in farenheit of temp %d\n", change_c_to_f(cel), " F");
    return 0;
}

int change_c_to_f(int cel)
{
    int result;
    result = cel * 9 / 5 + 32;
    return result;
}

