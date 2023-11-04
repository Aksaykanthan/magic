#include <stdio.h>?

int fib(int num){
    if (num == 0 ) return 0;
    if (num == 1 ) return 1;
    return fib(num-2) + fib(num-1);
}


int main(){
    int x = 10;
    for (int i = 0;i<x;i++){
        printf("%d ",fib(i));
    }
}