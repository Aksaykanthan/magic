
#include <stdio.h>

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int c[3][3];
    for (int i = 0;i<3;i++){
        for (int j=0;j<3;j++){
            int m = 0;
            for (int k=0;k<3;k++){
                m += a[i][k]*b[k][j];
            }
            c[i][j] = m;
            printf("%d ", m);
        }
        printf("\n");
    }
}