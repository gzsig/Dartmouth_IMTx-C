/*
You are programming a toaster! The toaster does not have a 
lot of memory, so you need to be careful about the data 
types you use (remember that different data types use different 
amounts of memory). To make this easier, you'd like an easy way 
to track how much memory your variables are going to use.

Your job is to write a program that shows, in human-readable 
form (see below for specifics), how much memory a set of 
variables of a certain type will use. Your program should 
read a character that identifies the data type ('i' for int, 
's' for short, 'c' for char, 'd' for double). Next it should 
read an integer that indicates how many variables of the given 
type you wish to store.

Your program should then calculate the amount of memory 
required to store the given variables. Your program needs 
to be written in such a way that it would also perform 
correctly on other computers. In other words, rather than 
hard-coding specific sizes for the different variable types, 
your program needs to use the "sizeof()" function to determine 
how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by 
your variables to the screen. You need to make sure you provide 
this output in a form that is easy to read for humans. The 
following examples illustrate what this means:
*/
#include <stdio.h>
int calcSize(char, int);
void formatPrint(int);
int main()
{
  char type;
  int howMany, totalBytes;
  scanf("%c %d", &type, &howMany);
  totalBytes = calcSize(type, howMany);
  formatPrint(totalBytes);
  return 0;
}

int calcSize(char t, int v)
{
  if (t == 'i')
  {
    return v * sizeof(int);
  }
  else if (t == 's')
  {
    return v * sizeof(short);
  }
  else if (t == 'c')
  {
    return v * sizeof(char);
  }
  else if (t == 'd')
  {
    return v * sizeof(double);
  }
  else
  {
    return 0;
  }
}

void formatPrint(int bytes)
{
  int b, kb, mb;

  if (bytes < 999)
  {
    printf("%d B\n", bytes);
  }
  else if (bytes < 999999)
  {
    b = bytes % 1000;
    kb = bytes / 1000;
    printf("%d KB and %d B", kb, b);
  }
  else
  {
    b = bytes % 1000;
    kb = (bytes / 1000) % 1000;
    mb = bytes / 1000000;
    printf("%d MB and %d KB and %d B\n", mb, kb, b);
  }
}