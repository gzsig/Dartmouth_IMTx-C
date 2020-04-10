#include <stdio.h>
void sum(int, int, int *);
int main()
{
  int a, b, res;
  printf("Please input the value of a\n");
  scanf("%d", &a);
  printf("Please input the value of b\n");
  scanf("%d", &b);
  sum(a, b, &res);
  printf("%d + %d = %d\n", a, b, res);
  return 0;
}

void sum(int x, int y, int *w)
{
  printf("Adding both numbers and saved to: %p\n", w);
  *w = x + y;
}