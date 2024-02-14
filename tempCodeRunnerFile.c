#include <stdio.h>
#include <math.h>

double f(double x){
    // return pow(x,4) - 12;
    return pow(x,2);
}

double f1(double x,double x0){
    // return  4*pow(x,3);
    return (f(x) - f(x0))/(x-x0);
}

int main(){
    FILE *fptr;
    fptr = fopen("app.txt", "w");

    // double x = 0.0001;
    double x[12] = {3,2.361111};
    double r;

    for (int i = 1; i<=1000;i++){
        x[i+1] = x[i] - f(x[i])/f1(x[i],x[i-1]);
        // x = x - f(x)/f1(x);
        printf("%d -> %lf \n",i,x[i]);
        fprintf(fptr,"%d\t %lf\n", i, x[i]);
    }

    printf("root -> %lf\n",f(x[9]));
    fclose(fptr);

    return 0;
}