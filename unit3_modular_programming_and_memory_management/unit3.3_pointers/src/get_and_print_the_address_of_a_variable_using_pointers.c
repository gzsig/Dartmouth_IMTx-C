#include <stdio.h>
int main()
{
  int a, b, c;
  int *pointerA, *pointerB, *pointerC;
  a = 11;
  b = 18;
  c = 36;
  pointerA = &a;
  pointerB = &b;
  pointerC = &c;
  printf("pointer of a is: %p, pointer of b is: %p, pointer of c is: %p\n", pointerA, pointerB, pointerC);
  return 0;
}

// example out put: pointer of a is: 0x7ffee443b998, pointer of b is: 0x7ffee443b994, pointer of c is: 0x7ffee443b990