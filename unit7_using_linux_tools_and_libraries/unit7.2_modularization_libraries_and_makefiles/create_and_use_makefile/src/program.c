// program.c

#include <stdio.h>
#include "weatherstats.h"

int main(void) {
	double temperatures[7] = {6.9, 12.3, 9.0, 5.3, 19.8, 1.8, 0.3};
	double average = averageTemp(temperatures, 7);
  double max = maxTemp(temperatures, 7);
  double min = minTemp(temperatures, 7);
	printf("Average 7-day temp: %.2lf\n", average);
  printf("Highest tmp: %.2lf\n", max);
  printf("Lowest tmp: %.2lf\n", min);
	return 0;
}
