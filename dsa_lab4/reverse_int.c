#include<stdio.h>

int main(){
    int n;
    int reverse_n = 0;
    printf("Enter a  Number : ");
    scanf("%d",&n);
    while(n > 0){
        reverse_n = reverse_n  * 10 + n % 10;
        n = n/10;
    }
    printf("The reversed number is %d",reverse_n);
    return 0;
}