/*****************************************************
 * NAME: assignment_10.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to check whether a number is     *
 *           Positive or Negative.                   *
 *                                                   *                          
 * DATE: 01/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of variables:
  float num;

  // User Input:
  printf("Enter a number here to know if its positive or negative: ");
  scanf("%f", &num);

  // Processing of Input and Display of Output:
  if (num > 0) {
    printf("The number, %f, is positive.\n", num);
  }

  else if (num == 0) {
    printf("The number, %f, is neither positive nor negative.\n", num);
  }

  else if (num < 0) {
    printf("The number, %f, is negative.\n", num);
  }

  /*************************************************
   * Why is the else statement below not working?? *
   *************************************************/

  else {
    printf("Sorry, restart the program and enter a number.\n");
  }

  printf("Thank you for using the program.\n");
}  
