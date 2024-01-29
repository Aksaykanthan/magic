// #include <stdio.h>

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < 2 * n - 1; i++) {
//         for (int j = 0; j < 2 * n - 1; j++) {
//             printf("%d ", n - 1 - ((i < 2 * n - 2 - i ? i : 2 * n - 2 - i) < (j < 2 * n - 2 - j ? j : 2 * n - 2 - j) ? (i < 2 * n - 2 - i ? i : 2 * n - 2 - i) : (j < 2 * n - 2 - j ? j : 2 * n - 2 - j)));
//         }
//         printf("\n");
//     }

//     return 0;
// // }
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int n = 5;

//     for (int i = 0; i < 2 * n - 1; i++) {
//         for (int j = 0; j < 2 * n - 1; j++) {
//             printf("%d ", n - abs(min(i, 2 * n - 2 - i) - min(j, 2 * n - 2 - j)));
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n = 4; // You can change this value to adjust the size of the pattern

//     // Print the upper half of the pattern
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", n - i > n - j ? n - i : n - j);
//         }
//         printf("\n");
//     }

//     // Print the lower half of the pattern
//     for (int i = n - 2; i >= 0; i--) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", n - i > n - j ? n - i : n - j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (n - i > n - j)
            {
                if (i > n)
                {
                    printf("%d ", 2 * n - i);
                }
                else
                {
                    printf("%d ", n - i);
                }
            }else if (n-i == n-j)
            {
                printf("%d ", 2 * n - i);
            }
            
            else
            {
                if (j > n)
                {
                    printf("%d ", 2 * n - j);
                }
                else
                {
                    printf("%d ", n - j);
                }
            }
            // printf("(%d,%d)",i,j);
        }
        printf("\n");

        // for (int i = n - 2; i >= 0; i--) {
        //     for (int j = 0; j < n; j++) {
        //         printf("%d ", n - i > n - j ? n - i : n - j);
        //     }
        //     printf("\n");
        // }

    }
    return 0;
}