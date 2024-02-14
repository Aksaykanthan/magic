#include <stdio.h>

int main()
{
    int arr[] = {2, 7, 5, 6, 7, 9, 9, 9, 11, 2, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("deleted %d \n", arr[j]);

                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array without duplicates: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}