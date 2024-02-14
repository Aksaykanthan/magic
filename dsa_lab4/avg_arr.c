#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    double t = 0;
    double avg[n];

    for (int i = 0; i < n; i++)
    {
        t = t + arr[i];
        avg[i] = t / (i + 1);
        printf("%.2f ", avg[i]);
    }
}