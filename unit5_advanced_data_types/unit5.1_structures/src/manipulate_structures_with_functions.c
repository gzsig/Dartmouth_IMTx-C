/*
In this problem you will continue developing the
data feature which you started implementing in the 
previous problem. You will implement a "tomorrow" 
feature in the C programming language via a function 
called "advanceDay()". The function advanceDay() should 
take as input a date (stored in a struct date) and return 
the date of the following day. You do not have to take into 
account leap years (although you may if you wish to). That is, it 
is okay for your function to always return March 1 as the day 
following February 28, no matter the year.

You are provided with a familiar date structure definition, a main 
function as well as the function prototypes for the readDate(), 
printDate(), and advanceDate() functions. Do not modify any of 
the given code. Simply add your function definitions underneath 
the main() function. For the readDate() and printDate() functions 
you may simply copy and paste the code you developed in the previous task.
*/

#include <stdio.h>

struct date
{
  int year;
  int month;
  int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void)
{
  struct date today, tomorrow;
  readDate(&today);
  printDate(today);
  tomorrow = advanceDay(today);
  printDate(tomorrow);
  return 0;
}

/* add your function definitions here */

void printDate(struct date printDate)
{
  printf("%02d/%02d/%04d\n", printDate.month, printDate.day, printDate.year);
}

void readDate(struct date *newDate)
{
  scanf("%d %d %d", &newDate->year, &newDate->month, &newDate->day);
}

struct date advanceDay(struct date today)
{
  struct date tomorrow;
  if (today.month == 12 && today.day == 31)
  {
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  }
  else if ((today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10) && today.day == 31)
  {
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }
  else if (today.day == 30)
  {
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }
  else
  {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }
  return tomorrow;
}