#include <stdio.h>

struct pet
{
  char name[10];
  double age;
};

int main()
{
  struct pet dups;
  printf("The size of pet is: %zu\n", sizeof(struct pet));
  printf("The size of pet.name is: %zu\n", sizeof(dups.name));
  printf("The size of pet.age is: %zu\n", sizeof(dups.age));

  return 0;
}