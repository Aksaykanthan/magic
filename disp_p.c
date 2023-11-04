
#include <stdio.h>

void disp(int* l){
    for (int i=0;*(l+i)!='\0';i++){
        printf("%d\n", *(l+i));
    }
}

int reverse(int x){
    int n = 0;
    while (x > 0){
        n = (n * 10) + (x % 10);
        x /= 10;
    }
    return n;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9};
    disp(a);
}