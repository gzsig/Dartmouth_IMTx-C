#include <stdio.h>
int main()
{
  char a[5];
  char b[5];
  char c[5];
  char *sentence[] = {a, b, c};
  int i, n;
  n = sizeof(sentence) / sizeof(*(sentence));
  for (i = 0; i < n; i++)
  {
    printf("what word would you like to store in %p?\n", sentence + i);
    scanf("%s", *(sentence + i));
  }
  for (i = 0; i < n; i++)
  {
    printf("the word at %p is %s\n", sentence + i, *(sentence + i));
  }
}