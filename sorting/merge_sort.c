#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *generateRandomArray(int size, int minValue, int maxValue)
{
    srand(time(NULL));
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
    return arr;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    clock_t start, end;
    start = clock();
    int len = 1000;
    int *arr = generateRandomArray(len, 0, 10000);

    int temp;
    double time_taken;

    mergeSort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    end = clock();

    time_taken = ((double)end - (double)start) / CLOCKS_PER_SEC;
    printf("\nTime taken : %f \n", time_taken);
    return 0;
}
