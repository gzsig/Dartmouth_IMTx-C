#include <stdio.h>
int main(void)
{
  int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
  int n = 10;
  int item;
  int iInitial, iFinal, mid, found;

  printf("Which number are you looking for? ");
  scanf("%d", &item);
  iInitial = 0;
  iFinal = n - 1;
  found = 0;

  while (!found && iInitial <= iFinal)
  {
    mid = (iInitial + iFinal) / 2;
    if (item == list[mid])
    {
      found = 1;
      printf("found %d at position %d\n", list[mid], mid);
    }
    else if (item < list[mid])
    {
      iFinal = mid - 1;
    }
    else
    {
      iInitial = mid + 1;
    }
  }
  if (found == 0)
  {
    printf("The number %d in not in the list :(\n", item);
  }

  return 0;
}