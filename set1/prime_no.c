#include <stdio.h>


int count_prime(int n){
    int is_prime;
    for (int i=1;i<n;i++){
        is_prime = 1;
        for (int j=3;j<i/2;j++){
        // printf("%d->%d\n",i,j);
            if (i%j==0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime) printf("%d ",i);
    }
    printf("\n");
    return 0;
}

int main(){
    count_prime(100);
}