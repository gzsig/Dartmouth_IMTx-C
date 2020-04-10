/*
You are participating in a game in which players collect points 
for various solved puzzles. In the end, the player with the 
highest score wins. You would like to know how far behind the 
highest-scoring person everyone else is in order to know whether 
you still have a chance at winning. 

Please write a C program that uses a function "behind()" 
(which you also have to write) in order to help with this 
task. Your program should first read, from the user input, 
the number of players participating in the game. There are
never more than 10 players in the game. Next, your program 
should read the current scores of each player and store them 
in an array. Then you should call the function behind(), to 
which you pass as a first argument, the array holding the
player's scores, and as a second argument the number of
players in the game. The function behind should replace 
the scores stored in the array with the number of points 
by which each individual player is behind the top-scoring player.

To help you out, the main function of the program has already
been written, so your job is simply to write the function 
behind(), whose protype is also given to you.
*/

#include <stdio.h>
void behind(int *, int);
void printArray(int *, int);
int main()
{
  int score, n, i;
  scanf("%d", &n);
  int scores[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &score);
    scores[i] = score;
  }
  behind(scores, n);
  printArray(scores, n);
  return 0;
}

void behind(int *array, int n)
{
  int i, max;
  max = *array;
  for (i = 0; i < n; i++)
  {
    if (max < *(array + i))
    {
      max = *(array + i);
    }
  }
  for (i = 0; i < n; i++)
  {
    *(array + i) = max - *(array + i);
  }
}

void printArray(int *arr, int n)
{
  int i = 0;
  while (i < n)
  {
    printf("%d\n", arr[i]);
    i++;
  }
}