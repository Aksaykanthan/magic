#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    FILE *fptr;
    fptr = fopen("ques2b2.txt", "w");

    for (x = 0; x <= 10; x += 0.1) {
        y = 5*x+20 ;
        fprintf(fptr,"%lf\t %lf\n", x, y);
    }
    fclose(fptr);
    return 0;   
}

