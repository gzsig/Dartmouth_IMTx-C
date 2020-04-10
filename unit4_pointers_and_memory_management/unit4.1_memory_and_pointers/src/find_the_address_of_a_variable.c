#include <stdio.h>
void updateInput(int *);
int main()
{
  int a;
  int *aAdr;
  scanf("%d", &a);
  aAdr = &a;
  printf("Input value: %d, memory address: %p\n", *aAdr, aAdr);
  updateInput(aAdr);
  printf("Updated input value: %d, memory address: %p\n", *aAdr, aAdr);
  return 0;
}

void updateInput(int *ptr)
{
  *ptr = 11;
}