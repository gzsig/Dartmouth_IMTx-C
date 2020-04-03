/*
You are still conducting linguistic research! This time, you'd 
like to write a program to find out how many letters occur multiple 
times in a given word. Your program should read a word from the 
input and then sort the letters of the word alphabetically (by their ASCII codes). 
Next, your program should iterate through the letters of the word and compare 
each letter with the one following it. If these equal each other, you increase 
a counter by 1, making sure to then skip ahead far enough so that letters that 
occur more than twice are not counted again. You may assume that the word you 
read from the input has no more than 50 letters, and that the word is all lowercase.
*/

#include <stdio.h>
int main()
{
  char word[51], temp[1];
  int i = 0, j = 0, n = 0, repCount = 0;
  scanf("%s", word);

  while (word[n] != '\0')
  {
    n++;
  }
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (word[j] > word[j + 1])
      {
        temp[0] = word[j];
        word[j] = word[j + 1];
        word[j + 1] = temp[0];
      }
    }
  }

  for (i = 0; i < n - 1; i++)
  {
    if (i >= 1 && word[i] == word[i - 1])
    {
      continue;
    }
    if (word[i] == word[i + 1])
    {
      repCount++;
    }
  }
  printf("%d\n", repCount);
  return 0;
}