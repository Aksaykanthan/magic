#include <stdio.h>

float y(float x){
    return x*x + 2;
}

int main()
{
    int N  = 1000;
    float i, a, b, y, sum = 0;
    a = 2, b = 4;
    if (a > b)
    {
        i = a;
        a = b;
        b = i;
    }
    float h = (b - a) / N;

    for (i = a; i < b; i += h)
    {
        y = i*i + 2;
        sum += y * h;
        
        // sum += y(i) * h;
    }

    printf("\nValue of integration is : %.3f \n\n", sum);
    return 0;
}