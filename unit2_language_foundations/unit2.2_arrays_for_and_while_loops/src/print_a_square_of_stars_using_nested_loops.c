// Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

#include <stdio.h>

int main()
{
  int iN, i, j;
  scanf("%d", &iN);
  for (i = 0; i < iN; i++)
  {
    printf("*");
    for (j = 0; j < iN - 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}