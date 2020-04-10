#include <stdio.h>
void printArray(int **);
void clearArray(int **);
int main()
{
  int arrA[3] = {2, 5, 9};
  int arrB[3] = {11, 13, 17};
  int arrC[3] = {19, 23, 29};

  int *arrPai[3] = {arrA, arrB, arrC};
  printArray(arrPai);
  clearArray(arrPai);
  printArray(arrPai);
  return 0;
}

void printArray(int **arrayBi)
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", *(*(arrayBi + i) + j));
    }
    printf("\n");
  }
}

void clearArray(int **arrayBi)
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      *(*(arrayBi + i) + j) = 0;
    }
  }
}