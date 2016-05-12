/*****************************************************
 * NAME: assignment_14.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to to find the Max number from   *
 *          the given three number using ternary     *
 *          operator.                                *
 *                                                   *                          
 * DATE: 04/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>


int main()
{
  // Variables:
  int b1, b2, b3;

  // User Input:
  printf("Enter three distinct positive integers below with one space b/w each:\n");
  scanf("%d %d %d", &b1, &b2, &b3);

  // Processing & I/O:
  (b1 > b2 && b1 > b3) ? printf("%d is the MAX number from input set.\n", b1): printf("%d is NOT max number from input set.\n", b1);
  (b2 > b3 && b2 > b1) ? printf("%d is the MAX number from input set.\n", b2): printf("%d is NOT max number from input set.\n", b2);
  (b3 > b1 && b3 > b2) ? printf("%d is the MAX number from input set.\n", b3): printf("%d is NOT max number from input set.\n", b3);

  printf("Thank you for using the program.\n");
}

  
