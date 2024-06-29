#include <stdio.h>
#include <math.h>

int main()
{
    int total, english, maths, science;

    printf("enter your english marks %d\n", english);
    scanf("%d", &english);
    printf("enter your english marks %d\n", science);
    scanf("%d", &science);
    printf("enter your english marks %d\n", maths);
    scanf("%d", &maths);

    total = (english + english + science) / 3;
    printf("this the total marks average for three subjects %d\n", total);
    if (total < 40 || science < 33 || maths < 33 || english < 33) // '||' is an OR symbol in the line which is checking all conditions
    {
        printf("the student has failed\n");
    }
    else
    {
        printf("the student has passed all exams with minimum marks required\n");
    }
    return 0;
}