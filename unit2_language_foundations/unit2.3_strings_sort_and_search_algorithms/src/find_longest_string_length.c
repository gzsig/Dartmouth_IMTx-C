/*
Your job is to find the length of the longest word in a text
with no punctuation or special characters of any kind - only
contains words. To do so, please write a C-program that takes
as a input first the number of words in a text, followed by
all of the words in the text. The output of your program
should be the length of the longest word in the text.

To simplify your program, you can assume that the longest
word will not exceed 100 characters.
*/

#include <stdio.h>

int main()
{
  int i = 0, j = 0, n = 0, max = 0;
  char word[101];
  for (i = 0; i < 101; i++)
  {
    word[i] = ' ';
  }
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%s", word);
    while (word[j] != '\0')
    {
      j++;
    }
    if (j > max)
    {
      max = j;
    }
  }
  printf("%d\n", max);
  return 0;
}