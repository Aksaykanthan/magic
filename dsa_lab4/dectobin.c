#include <stdio.h>
#include <math.h>

int main()
{
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    int bin = 0;
    int i = 0;

    while (dec > 0)
    {
        int remainder = dec % 2;
        bin = bin + remainder * pow(10, i);
        dec = dec / 2;
        i++;
    }

    printf("The Binary value is : %d\n", bin);

    return 0;
}