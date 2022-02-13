/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float avg, sum;
  int mark , i;

  for(i = 0; i < 2; i++)
  {
  printf("Enter the mark of subject %d: ", i + 1);
  scanf("%d", &mark);
  sum += mark;
  }
  avg = sum / 2.0;

  printf("Average of the two marks : %.2f", avg);

  return 0;
}

