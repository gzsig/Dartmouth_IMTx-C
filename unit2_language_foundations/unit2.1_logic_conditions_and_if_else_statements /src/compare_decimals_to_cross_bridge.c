/*
You arrive in front of a bridge that you must cross to 
reach a village before dark. Crossing the bridge is not 
free - the bridgekeeper asks you to roll two dice to 
determine the cost. You decide to write a program to 
verify that he is charging the right price.

Your program should read two integers, between 1 and 6, 
representing the values of each die. If the sum is greater 
than or equal to 10, then you must pay a special fee (36 coins). 
Otherwise, you pay twice the sum of the values of the two dice. 
Your program must then display the text "Special tax" or "Regular 
tax" followed by the amount you have to pay on the next line.
*/

#include <stdio.h>
int main()
{
  int iDice1, iDice2, iPay;
  scanf("%d %d", &iDice1, &iDice2);
  if ((iDice1 + iDice2) >= 10)
  {
    iPay = 36;
    printf("Special tax\n%d\n", iPay);
  }
  else
  {
    iPay = (iDice1 + iDice2) * 2;
    printf("Regular tax\n%d\n", iPay);
  }
  return 0;
}