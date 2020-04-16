#include <stdio.h>
struct person
{
  char name[20];
  char lastname[25];
  int age;
};

void printPerson(struct person ppl);
int main()
{
  struct person gabe;
  printf("First name?\n");
  scanf("%s", gabe.name);
  printf("Last name?\n");
  scanf("%s", gabe.lastname);
  printf("Age?\n");
  scanf("%d", &gabe.age);
  printPerson(gabe);
  return 0;
}

void printPerson(struct person ppl)
{
  printf("Hello, my name is: %s %s and I'm %d years old. :)\n", ppl.name, ppl.lastname, ppl.age);
}