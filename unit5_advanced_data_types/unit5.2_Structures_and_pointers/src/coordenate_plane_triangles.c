#include <stdio.h>
#include <math.h>

struct point
{
  int x;
  int y;
};

void createTriangle(struct point *);
void printTriangle(struct point *);
void validateTriangle(struct point *);
double calcDistance(struct point, struct point);
void printPoint(struct point);
int main()
{

  struct point triangle[3];
  createTriangle(triangle);
  validateTriangle(triangle);
  printTriangle(triangle);
  return 0;
}

void createTriangle(struct point *tri)
{
  int i = 0;
  while (i < 3)
  {
    printf("what is the x value of point %d?\n", i);
    scanf("%d", &(*(tri + i)).x);
    printf("what is the y value of point %d?\n", i);
    scanf("%d", &(*(tri + i)).y);
    i++;
  }
}

void validateTriangle(struct point *tri)
{
  double sideA, sideB, sideC;
  sideA = calcDistance(tri[0], tri[1]);
  sideB = calcDistance(tri[1], tri[2]);
  sideC = calcDistance(tri[2], tri[0]);

  printf("a: %.2lf\nb: %.2lf\nc: %.2lf\n", sideA, sideB, sideC);
  if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
  {
    printf("valid\n");
  }
  else
  {
    printf("not valid\n");
  }
}

double calcDistance(struct point ptA, struct point ptB)
{
  int xs, ys;
  xs = ptB.x - ptA.x;
  ys = ptB.y - ptA.y;
  return sqrt(pow(xs, 2) + pow(ys, 2));
}

void printTriangle(struct point *tri)
{
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("point %d: ", i);
    printPoint(*(tri + i));
  }
}

void printPoint(struct point pt)
{
  printf("(%d, %d)\n", pt.x, pt.y);
}