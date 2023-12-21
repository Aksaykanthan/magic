#include <stdio.h>

int main(){
    int k;
    printf("Enter No of Rows : ");
    scanf("%d",&k);
    int n = 1;
    for (int i=0;i<=k;i++){
        for (int j=0;j<=i;j++){
            printf("%d ",n++);
        }
        printf("\n");
    }
}