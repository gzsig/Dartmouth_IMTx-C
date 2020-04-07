/*
Please write a C-program that uses a recursive function called 
"sumOfDigits()" to compute the sum of the digits of a number. 
To do so, your main function should first read an integer number 
as input and then call sumOfDigits(), which should in turn call 
itself until there are no digits left to sum, at which point the 
final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6
*/

#include <stdio.h>
int sumOfDigits(int);
int main()
{
  int numberInput, sumOfInputDigits;
  scanf("%d", &numberInput);
  sumOfInputDigits = sumOfDigits(numberInput);
  printf("%d\n", sumOfInputDigits);
}

int sumOfDigits(int v)
{
  if (v >= 10)
  {
    return (v % 10 + sumOfDigits(v / 10));
  }
  else
  {
    return v;
  }
}
