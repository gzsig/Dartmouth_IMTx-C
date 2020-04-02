/*
You want to determine the number of cities in a given region
 that have a population strictly greater than 10,000. To do 
 this, you write a program that first reads the number of 
 cities in a region as an integer, and then the populations 
 for each city one by one (also integers).
*/

#include <stdio.h>
int main()
{
  int iCities, iCitySize, iLargeCities, i;
  iLargeCities = 0;
  scanf("%d", &iCities);
  for (i = 0; i < iCities; i++)
  {
    scanf("%d", &iCitySize);
    if (iCitySize > 10000)
    {
      iLargeCities++;
    }
  }
  printf("%d\n", iLargeCities);
  return 0;
}