#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point
{
  int x;
  int y;
};

void readPoint(struct point *);
void printPolygon(struct point *, int);
double calcDistance(struct point, struct point);
void printPoint(struct point);
int main()
{
  struct point *polygon;
  int sides, i;
  printf("how many sides does the polygon have?\n");
  scanf("%d", &sides);
  polygon = (struct point *)malloc(sides * sizeof(struct point));
  for (i = 0; i < sides; i++)
  {
    printf("what are the values of x and y of point %d?\nformat: x y\n", i + 1);
    readPoint(&polygon[i]);
  }
  printPolygon(polygon, sides);
  free(polygon);
  return 0;
}

void readPoint(struct point *pt)
{
  scanf("%d %d", &pt->x, &pt->y);
}

void printPolygon(struct point *polygon, int sides)
{
  int i;
  double dist;
  for (i = 0; i < sides; i++)
  {
    if (i == sides - 1)
    {
      dist = calcDistance(*(polygon + i), *polygon);
    }
    else
    {
      dist = calcDistance(*(polygon + i), *(polygon + i + 1));
    }
    printf("point %d: ", i + 1);
    printPoint(*(polygon + i));
    printf("distance to next point is: %.2lf\n", dist);
  }
}

void printPoint(struct point pt)
{
  printf("(%d, %d)\n", pt.x, pt.y);
}

double calcDistance(struct point ptA, struct point ptB)
{
  int xs, ys;
  xs = ptB.x - ptA.x;
  ys = ptB.y - ptA.y;
  return sqrt(pow(xs, 2) + pow(ys, 2));
}