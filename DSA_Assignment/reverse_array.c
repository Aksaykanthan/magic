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

    int s = 0, e = n - 1, temp;
    while (s < e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    printf("\nReversed Array\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}