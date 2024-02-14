#include <stdio.h>
#include <stdlib.h>

void fun(const int *arr, int n, int p, int *farr)
{
    int *larr = (int *)malloc(n * sizeof(int));
    int *rarr = (int *)malloc(n * sizeof(int));
    int x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < p)
        {
            larr[x++] = arr[i];
        }
        else if (arr[i] > p)
        {
            rarr[y++] = arr[i];
        }
    }

    for (int i = 0; i < x; i++)
    {
        farr[i] = larr[i];
    }

    farr[x] = p;

    for (int i = 0; i < y; i++)
    {
        farr[x + 1 + i] = rarr[i];
    }

    free(larr);
    free(rarr);
}
int main()
{
    int arr[] = {12, 5, 24, 8, 29, 2, 41, 20, 17, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r[n];
    int p = 17;

    fun(arr, n, p, r);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", r[i]);
    }

    return 0;
}
