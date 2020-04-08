#include <stdio.h>
void swap(int *, int *);
int main()
{
  int a = 11;
  int b = 36;
  printf("Before the swap func() is called, a is: %d and b is: %d\n", a, b);
  swap(&a, &b);
  printf("After the swap func() is called, a is: %d and b is: %d\n", a, b);
  return 0;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}