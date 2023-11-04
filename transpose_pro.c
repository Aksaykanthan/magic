#include <stdio.h>

int display(int arr[3][3]) {
    int i = sizeof(arr)/sizeof(arr[0]), j =  sizeof(arr[0]);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void transpose(int arr[3][3]){
    int i = sizeof(arr)/sizeof(arr[0]), j =  sizeof(arr[0]);
    int tra[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tra[j][i] = arr[i][j];
        }
    }
    display(tra);
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    display(arr);
    printf("\n");
    transpose(arr);
}