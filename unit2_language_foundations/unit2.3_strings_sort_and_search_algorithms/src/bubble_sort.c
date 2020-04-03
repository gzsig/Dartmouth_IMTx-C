#include <stdio.h>
int main(void)
{
  //! showArray(list, cursors=[i])
  // Sorting from smallest to largest
  int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
  int n = 10;
  int i, j;
  int swap;

  printf("Unsorted list: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", list[i]);
  }

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (list[j] > list[j + 1])
      {
        swap = list[j];
        list[j] = list[j + 1];
        list[j + 1] = swap;
      }
    }
  }

  printf("\nSorted list: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", list[i]);
  }

  return 0;
}