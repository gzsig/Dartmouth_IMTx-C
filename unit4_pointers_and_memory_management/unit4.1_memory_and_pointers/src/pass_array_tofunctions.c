#include <stdio.h>
void printArray(int *, int);
void bubbleSort(int *, int);
int main()
{
  int n, type, size;
  int arrayOfInts[] = {1, 44, 3, 7, 9, 3, 2, 9, 10};
  n = sizeof(arrayOfInts);
  type = sizeof(arrayOfInts[0]);
  size = n / type;
  printArray(arrayOfInts, size);
  bubbleSort(arrayOfInts, size);
  printArray(arrayOfInts, size);
}

void printArray(int *ints, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("reading: %p => value: %d\n", ints + i, *(ints + i));
  }
}

void bubbleSort(int *array, int size)
{
  printf("sorting...\n");
  int i, j, temp;
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - i - 1; j++)
    {
      if (*(array + j) > *(array + j + 1))
      {
        temp = *(array + j);
        *(array + j) = *(array + j + 1);
        *(array + j + 1) = temp;
      }
    }
  }
}