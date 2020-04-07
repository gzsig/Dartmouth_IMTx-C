/*
Write a C-program that converts metric measurements to imperial
system values. Measurements are provided to your program in meters, 
grams or degrees Celsius and must be converted to feet, pounds and 
degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 meter = 3.2808 feet;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to 
be made. Each of the following lines contains a value to be converted 
as well as its unit: m, g or c (for meters, grams or degrees Celsius). 
There will be a space between the number and the unit. You should 
print your output value for each input line immediately after 
calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a 
space and their unit: ft, lbs or f (for feet, pounds or degrees 
Fahrenheit). Each conversion result should be printed on its own 
line, and you should store and display all decimal values as doubles.

You may use functions to complete this exercise, but that is not 
required. However, you will need to use a comparison operation with 
characters, for example:

char letter = 'a';

if(letter == 'a') {...}
*/

#include <stdio.h>
void convert(double, char);
int main()
{
  int i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    char mesureType;
    double valueToConvert;
    scanf("%lf %c", &valueToConvert, &mesureType);
    convert(valueToConvert, mesureType);
  }
}

void convert(double v, char t)
{
  if (t == 'm')
  {
    printf("%lf ft\n", v * 3.2808);
  }
  else if (t == 'g')
  {
    printf("%lf lbs\n", v * 0.002205);
  }
  else if (t == 'c')
  {
    printf("%lf f\n", 32 + 1.8 * v);
  }
}