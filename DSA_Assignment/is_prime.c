#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int isprime = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is a not prime number\n", num);
    }

    return 0;
}