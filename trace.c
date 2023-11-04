
#include <stdio.h>

int main(){
    int a[3][3] = {{1,0,0},{0,1,0},{0,0,9}};
    int len = 3;
    int is_dia = 1;
    for (int i=0;i<len;i++) for (int j=0;j<len;j++)if (i!=j)if (a[i][j]) is_dia=0;}
    printf("%d\n",is_dia);

    return 0;
}
