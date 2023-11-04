
#include <stdio.h>

int gcd(int a,int b){
    if (a == 0) return b;
    if (b == 0) return a;
    return gcd(b,a%b);
}

int gcdi(int a, int b){
    int temp;
    while (a && b){
        temp = b;
        b = a % b;
        a = temp;
    }
    if (!a) return b;
    if (!b) return a;

    return 0;
}

int main(){
    int a ,b;
    printf("input a b\n");
    scanf("%d %d",&a,&b);
    int temp;
    while (a && b){
        temp = b;
        b = a % b;
        a = temp;
    }
    if (!a) printf("%d\n", b);
    if (!b) printf("%d\n", a);
    return 0;
}
