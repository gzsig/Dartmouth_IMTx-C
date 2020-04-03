/*
You are conducting a linguistic study and are interested in 
finding words that contain the letter 't' or 'T' in the first 
half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' 
or a 'T', your program should output a 1. If the first half 
does not contain the letter 't' or 'T', but the second half 
does, then your program should output a 2. Otherwise, if there 
is no 't' or 'T' in the word at all, your program's output 
should be -1. You may assume that the word entered does not 
have more than 50 letters.
*/

#include <stdio.h>

int main()
{
  char word[51];
  int iWordLength = 0, iTIndex = -1;
  scanf("%s", word);

  while (word[iWordLength] != '\0')
  {
    if (word[iWordLength] == 't' || word[iWordLength] == 'T')
    {
      iTIndex = iWordLength;
    }
    iWordLength++;
  }
  if (iTIndex == -1)
  {
    printf("-1\n");
  }
  else if (iTIndex <= iWordLength / 2 + 1)
  {
    printf("1\n");
  }
  else
  {
    printf("2\n");
  }
  return 0;
}