#include <stdio.h>
void resetArray(int *);
void printArray(int *);
int main()
{
  int arr[] = {7, 11, 18, 36};
  printArray(arr);
  resetArray(arr);
  printArray(arr);
  return 0;
}

void resetArray(int *arrPtr)
{
  int i;
  for (i = 0; i < 4; i++)
  {
    *(arrPtr + i) = 0;
  }
}

void printArray(int *arrPtr)
{
  int i;
  for (i = 0; i < 4; i++)
  {
    printf("%d ", *(arrPtr + i));
  }
  printf("\n");
}