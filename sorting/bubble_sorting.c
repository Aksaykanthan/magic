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

int main(){
    clock_t start, end;
    start = clock();
    int len = 1000;
    int* arr = generateRandomArray(len,0,10000);
    // int len = sizeof(arr)/sizeof(arr[0]);
    int temp;
    double time_taken;

    for (int i = 0; i < len-1; i++)
    {
        for (int j=0;j<len-i-1;j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }
    end = clock();

    time_taken = ((double)end - (double)start) / CLOCKS_PER_SEC;
    printf("\nTime taken : %f \n",time_taken);
    return 0;
}