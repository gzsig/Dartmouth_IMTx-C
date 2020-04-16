#include <stdio.h>

struct person
{
  char name[20];
  char lastname[25];
  int age;
};

int main()
{
  struct person gabe = {"Gabriel", "Zsigmond", 21};
  printf("Hello, my name is: %s %s and I'm %d years old. :)\n", gabe.name, gabe.lastname, gabe.age);
  return 0;
}