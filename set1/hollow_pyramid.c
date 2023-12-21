#include <stdio.h>

int main(){
    int n = 12;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n*2;j++){
            if ((i+j==n)|| (j-i==n) || (i==n)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}