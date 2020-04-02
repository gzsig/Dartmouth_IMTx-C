/*
You plan to make a delicious meal and want to take the money 
you need to buy the ingredients. Fortunately you know in advance 
the price per pound of each ingredient as well as the exact 
amount you need. The program should read in the number of 
ingredients (up to a maximum of 10 ingredients), then for 
each ingredient the price per pound. Finally your program 
should read the weight necessary for the recipe (for each 
ingredient in the same order). Your program should calculate 
the total cost of these purchases, then display it with 6 decimal places.
*/

#include <stdio.h>

int main()
{
  int iNumberOfItems, i;
  double dTemp, dFullPrice;
  dFullPrice = 0;
  scanf("%d", &iNumberOfItems);
  double dArrayPrice[iNumberOfItems];
  double dArrayWeight[iNumberOfItems];
  for (i = 0; i < iNumberOfItems; i++)
  {
    scanf("%lf", &dTemp);
    dArrayPrice[i] = dTemp;
  }
  for (i = 0; i < iNumberOfItems; i++)
  {
    scanf("%lf", &dTemp);
    dArrayWeight[i] = dTemp;
  }
  for (i = 0; i < iNumberOfItems; i++)
  {
    dFullPrice += dArrayPrice[i] * dArrayWeight[i];
  }
  printf("%lf\n", dFullPrice);
  return 0;
}