
#include <stdio.h>
#include <math.h>

double gravity(float m1,float m2,float r){
    long float G = 6.67 / 1e11;
    printf("%ld \n",G);
    return (G*m1*m2)/pow(r,2);
}

int main(){
    float m1,m2,r;
    m1 = 1;
    m2 = 1;
    r = 2;
    double f = gravity(m1,m2,r);
    // printf("The force of attraction between the two bodies is %d",f);
}
