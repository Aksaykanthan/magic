#include <stdio.h>

#define N 1000

void main(void)
{
  float i, a, b, sum = 0;

  printf("Upper Limit : ");
  scanf("%f", &a);
  printf("Lower Limit : ");
  scanf("%f", &b);
  if (a > b)
  {
    i = a;
    a = b;
    b = i;
  }

  for (i = a; i < b; i += (b - a) / N)
  {
    y = x * x + 2 * x - 4; //! Define the function
    sum += y * (b - a) / N;
  }

  printf("nnValue of integration is:%.3f", sum);
  return;
}