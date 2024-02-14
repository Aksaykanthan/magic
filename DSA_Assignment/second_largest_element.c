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
        printf("enter element %d : ", i);
        scanf("%d", address);
    }

    printf("Original Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int largest = arr[0], secondlargest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (secondlargest < arr[i])
        {
            secondlargest = arr[i];
        }
    }

    printf("\nThe second Largest element in the array is %d\n", secondlargest);
    free(arr);

    return 0;
}