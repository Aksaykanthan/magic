
#include<stdio.h>
int main(){
    int a[] = {8, 4, 9, 3, 7, 5, 1, 1, 2};
    int len = sizeof(a)/sizeof(a[0]);
    for(int j = 0; j < len-1; j++){
        if(a[j] > a[j+1]){
            int k = a[j+1];
            a[j+1] = a[j];
            a[j] = k;
            j = -1;

        }
    }
    printf("the array is \n");
    for(int i = 0; i < len; i++){
        printf("%d\t",a[i]);
    }    
}