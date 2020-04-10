#include <stdio.h>
int main()
{
  int i;
  char paragraph[69][41];
  for (i = 0; i < 68; i++)
  {
    scanf("%s", paragraph[i]);
  }
  for (i = 67; i >= 0; i--)
  {
    printf("%s ", paragraph[i]);
  }
  return 0;
}