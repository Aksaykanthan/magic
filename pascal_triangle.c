#include <stdio.h>

int pt(int n, int r)
{
    if (r == 0 || r == n) return 1;
    return pt(n - 1, r - 1) + pt(n - 1, r);
}

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++) printf(" ");
        for (int j = 0; j <= i; j++) printf("%d ", pt(i, j));
        printf("\n");
    }
    return 0;
}
