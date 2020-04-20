#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *right;
};

void printList(struct node *);
struct node *createNode(int);
struct node *push(struct node *, struct node *);
void freeNodes(struct node *);
int main()
{
  struct node *ptStart, *ptEnd, *ptNew;
  int n, i, value;
  printf("How many items?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("value of %d\n", i);
    scanf("%d", &value);
    ptNew = createNode(value);
    if (i == 0)
    {
      ptStart = ptEnd = ptNew;
    }
    else
    {
      ptEnd = push(ptEnd, ptNew);
    }
  }

  printList(ptStart);
  printf("\n\nstart: %d end: %d\n", (*ptStart).value, (*ptEnd).value);
  freeNodes(ptStart);
  return 0;
}

struct node *createNode(int value)
{
  struct node *ptTmp;
  ptTmp = (struct node *)malloc(sizeof(struct node));
  ptTmp->value = value;
  ptTmp->right = NULL;
  return ptTmp;
}

void printList(struct node *ptStart)
{
  struct node *index;
  index = ptStart;
  while (index != NULL)
  {
    printf("%d ", index->value);
    index = index->right;
  }
}

struct node *push(struct node *ptEnd, struct node *ptNew)
{
  ptEnd->right = ptNew;
  return (ptNew);
}

void freeNodes(struct node *ptStart)
{
  struct node *ptTmp = ptStart;
  while (ptTmp != NULL)
  {
    printList(ptTmp);
    printf("\n");
    ptStart = ptTmp;
    ptTmp = ptTmp->right;
    free(ptStart);
  }
}