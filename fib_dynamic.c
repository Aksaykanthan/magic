#include <stdio.h>

int fib(int num,int* sheet){
    if (sheet[num] == -1) {
        sheet[num] = fib(num-2,sheet) + fib(num-1,sheet);
    }
    if (num == 0 ) return 0;
    if (num == 1 ) return 1;

    return sheet[num];
}

int main(){
    int x = 10000;
    int sheet[x];
    for (int i=0;i<x;i++) sheet[i] = -1;

    for (int i = 0;i<x;i++){
        printf("%d ",fib(i,sheet));
    }
}