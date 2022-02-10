/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2; //diclare variables
  float ave;

  printf("Enter the mark1 :");
  scanf("%f",&mark1);

  printf("Enter the mark2 :");
  scanf("%f",&mark2);
  
  ave =(mark1+mark2)/ 2;//Calculate

  printf("The average mark is : %.2f", ave); //display
  return 0;
}

