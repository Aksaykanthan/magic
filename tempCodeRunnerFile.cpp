#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

// Function to find the minimum element in the subtree
int findMin(int arr[], int size, int index) {
    if (index >= size || arr[index] == -1)
        return INT_MAX; // Return a large value for null nodes

    int leftMin = findMin(arr, size, 2 * index + 1);
    int rightMin = findMin(arr, size, 2 * index + 2);

    return arr[index] < leftMin ? (arr[index] < rightMin ? arr[index] : rightMin) : leftMin;
}

// Function to find the maximum element in the subtree
int findMax(int arr[], int size, int index) {
    if (index >= size || arr[index] == -1)
        return INT_MIN; // Return a small value for null nodes

    int leftMax = findMax(arr, size, 2 * index + 1);
    int rightMax = findMax(arr, size, 2 * index + 2);

    return arr[index] > leftMax ? (arr[index] > rightMax ? arr[index] : rightMax) : leftMax;
}

int main() {
    int arr[] = {8, 3, 10, 1, 6, 11, 14, -1, -1, 4, 7, 13, -1, -1, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, n, 0);
    int max = findMax(arr, n, 0);

    printf("Min element in the subtree: %d\n", min);
    printf("Max element in the subtree: %d\n", max);

    return 0;
}
