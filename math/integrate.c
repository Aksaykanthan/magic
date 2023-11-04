#include <stdio.h>

int sq(int x){
    return x*x;
}

float integrate(int a,int b){
    float r = 0;
    float h = 0.001;
    float i = a;
    while (i <= b){
        r += sq(a+(i*h)) * h;
        printf("%f %f\n",i,r);
        i += h; 
    }
    printf("Area : %f\n",r);
    return 0;
}

int main(){
    integrate(1,2);
    return 0;
}