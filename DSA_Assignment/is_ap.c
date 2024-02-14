#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int d = arr[1] - arr[0];
    int isap = 1;
    for (int i = 1; i < len - 1; i++)
    {
        if (arr[i + 1] - arr[i] != d)
        {
            isap = 0;
            break;
        }
    }
    if (isap)
    {
        printf("given Arr is a AP\n");
        int sum = (len / 2) * (2 * arr[0] + (len - 1) * d);
        printf("and sum is %d\n", sum);
    }
    else
    {
        printf("given Arr is not a AP\n");
    }
    return 0;
}