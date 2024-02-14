#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int p = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= p)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrangeArray(int arr[], int size, int pivot) {
    int low = 0;
    int high = size - 1;
    int i = 0;

    while (i <= high) {
        if (arr[i] < pivot) {
            swap(&arr[i], &arr[low]);
            i++;
            low++;
        } else if (arr[i] > pivot) {
            swap(&arr[i], &arr[high]);
            high--;
        } else {
            i++;
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot;

    printf("Enter the element based on which the array is to be rearranged: ");
    scanf("%d", &pivot);

    rearrangeArray(arr, size, pivot);

    printf("The rearranged array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

    printArray(arr,10);
    return i + 1;
}

void fun(int arr[], int low, int high)
{
    if (low < high)
    {

        int partitionIndex = partition(arr, low, high);
        fun(arr, low, partitionIndex - 1);
        fun(arr, partitionIndex + 1, high);
    }
}



int main()
{
    int arr[] = {8, 6, 5, 10, 18, 22, 14, 3, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    fun(arr, 0, size - 1);

    printf("Output array: ");
    printArray(arr, size);
    return 0;
}
