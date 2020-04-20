#include <stdio.h>
#include <stdlib.h>
struct digit
{
  int num;
  struct digit *next;
};
struct digit *readNumber();
struct digit *createDigit(int);
struct digit *append(struct digit *, struct digit *);
void printNumber(struct digit *);
struct digit *searchNumber(struct digit *, int);
struct digit *reverseNumber(struct digit *);
struct digit *reverseNumber(struct digit *);
struct digit *insertAtFront(struct digit *, struct digit *);
struct digit *sortedCopy(struct digit *);
struct digit *insertIntoSorted(struct digit *, struct digit *);
void freeNumber(struct digit *);
int main()
{
  struct digit *start, *ptSearchNum, *backwards, *sorted;
  int searchNum = 5;
  printf("Please enter a number:\n");
  start = readNumber();
  printNumber(start);
  backwards = reverseNumber(start);
  printNumber(backwards);
  sorted = sortedCopy(start);
  printNumber(sorted);
  ptSearchNum = searchNumber(start, searchNum);
  if (ptSearchNum != NULL)
  {
    printf("Found digit %d at location %p\n", searchNum, ptSearchNum);
  }
  else
  {
    printf("The digit %d was not found :(\n", searchNum);
  }

  freeNumber(start);
  freeNumber(backwards);
  freeNumber(sorted);
  return 0;
}

struct digit *createDigit(int dig)
{
  struct digit *ptr;
  ptr = (struct digit *)malloc(sizeof(struct digit));
  ptr->num = dig;
  ptr->next = NULL;
  return ptr;
}

struct digit *append(struct digit *end, struct digit *newDigitptr)
{
  end->next = newDigitptr;
  return newDigitptr;
}

void printNumber(struct digit *start)
{
  struct digit *index = start;
  while (index != NULL)
  {
    printf("%d", index->num);
    index = index->next;
  }
  printf("\n");
}

void freeNumber(struct digit *start)
{
  struct digit *ptTmp = start;
  struct digit *ptToDelete;
  while (ptTmp != NULL)
  {
    ptToDelete = ptTmp->next;
    printf("FREE: %d\n", ptTmp->num);
    free(ptTmp);
    ptTmp = ptToDelete;
  }
}

struct digit *readNumber()
{
  char c;
  int d;
  struct digit *start, *end, *ptNew;
  start = NULL;
  scanf("%c", &c);
  while (c != '\n')
  {
    d = c - 48;
    ptNew = createDigit(d);
    if (start == NULL)
    {
      start = end = ptNew;
    }
    else
    {
      end = append(end, ptNew);
    }
    printf("Start: %d - End: %d\n", start->num, end->num);
    scanf("%c", &c);
  }
  return start;
}

struct digit *searchNumber(struct digit *start, int number)
{
  struct digit *index = start;
  while ((index != NULL) && index->num != number)
  {
    index = index->next;
  }
  return index;
}

struct digit *reverseNumber(struct digit *start)
{
  struct digit *ptr = start;
  struct digit *bstart = NULL;
  struct digit *newDigit;
  if (start != NULL)
  {
    bstart = createDigit((*start).num);
    ptr = ptr->next;
  }
  while (ptr != NULL)
  {
    newDigit = createDigit(ptr->num);
    bstart = insertAtFront(bstart, newDigit);
    ptr = ptr->next;
  }
  return (bstart);
}

struct digit *insertAtFront(struct digit *start, struct digit *newPtr)
{
  newPtr->next = start;
  return newPtr;
}

struct digit *sortedCopy(struct digit *start)
{
  struct digit *ptr = start;
  struct digit *sortedStart = NULL;
  struct digit *newDigit;
  if (start != NULL)
  {
    sortedStart = createDigit(start->num);
    ptr = ptr->next;
  }
  while (ptr != NULL)
  {
    newDigit = createDigit(ptr->num);
    sortedStart = insertIntoSorted(sortedStart, newDigit);
    ptr = ptr->next;
  }
  return sortedStart;
}

struct digit *insertIntoSorted(struct digit *start, struct digit *newDig)
{
  struct digit *ptr = start;
  struct digit *previous = NULL;
  while ((ptr != NULL) && (ptr->num < newDig->num))
  {
    previous = ptr;
    ptr = ptr->next;
  }
  if (previous == NULL)
  {
    start = insertAtFront(start, newDig);
  }
  else
  {
    previous->next = newDig;
    newDig->next = ptr;
  }
  return start;
}