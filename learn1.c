
#include <stdio.h>
#include <stdbool.h>


int main(){
    int num;
    bool is_prime;
    printf("Enter Number : ");
    scanf("%d",&num);
    is_prime = true;

    for (int i=2;i<num/2;i++){
        if (num % i == 0){
            is_prime = false;
            break;
        }
    }

    if (is_prime){
        printf("%d is a prime\n", num);
    } else{
        printf("%d isn't a prime\n", num);
    }

    return 0;
}

