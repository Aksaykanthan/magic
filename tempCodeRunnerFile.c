#include <stdio.h>

int main() {
    int n = 4; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", n - i > n - j ? n - i : n - j);
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%d ", n - i > n - j ? n - i : n - j);
        }
        printf("\n");
    }

    return 0;
