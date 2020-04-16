#include <stdio.h>
struct person
{
  char name[20];
  char lastname[25];
  int age;
};

void printPerson(struct person);
void readPerson(struct person *);
int main()
{
  struct person gabe;
  readPerson(&gabe);
  printPerson(gabe);
  return 0;
}

void readPerson(struct person *pplptr)
{
  printf("First name?\n");
  scanf("%s", (*pplptr).name);
  printf("Last name?\n");
  scanf("%s", (*pplptr).lastname);
  printf("Age?\n");
  scanf("%d", &(*pplptr).age);
}

void printPerson(struct person ppl)
{
  printf("Hello, my name is: %s %s and I'm %d years old. :)\n", ppl.name, ppl.lastname, ppl.age);
}