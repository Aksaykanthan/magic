#include <stdio.h>

int main()
{
    int units;
    printf("Enter the number of units: ");
    scanf("%d", &units);
    int r = 0;

    if (units > 300)
    {
        r += (units - 300) * 2;
        units = 300;
    }
    if (units > 200)
    {
        r += (units - 200) * 1.5;
        units = 200;
    }
    if (units <= 200)
    {
        r += units;
        units = 100;
    }

    printf("The total price is Rs %d\n", r);
    return 0;
}