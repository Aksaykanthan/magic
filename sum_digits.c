
#include <stdio.h>

int main(){
    int sum = 0;
    long num;
    num = 8218503633;

    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    printf("%d\n",sum);
    return 0;
}