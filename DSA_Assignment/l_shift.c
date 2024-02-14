#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Number of elements : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int *address = arr + i;
        printf("element %d : ", i);
        scanf("%d", address);
    }

    printf("Original Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int k;
    printf("\nEnter Number of elements to be shifted : ");
    scanf("%d", &k);

    for (int x = 0; x < k; x++)
    {
        for (int i = 1; i < n; i++)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }

    printf("Shifted Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}