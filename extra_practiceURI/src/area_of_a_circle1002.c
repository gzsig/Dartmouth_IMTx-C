#include <stdio.h>
#include <math.h>
int main()
{
  double pi = 3.14159, r = 0, A = 0;
  scanf("%lf", &r);
  A = pi * pow(r, 2);
  printf("A=%.4lf\n", A);
  return 0;
}