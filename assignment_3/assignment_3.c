/*****************************************************
 * NAME: assignment_3.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to make square and cube of       *
 *           a number.                               *
 *                                                   * 
 * DATE: 30/04/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of Variables
  int a;
  int square, cube;

  // Input 
  printf("Enter a number: ");
  scanf("%d",&a);

  // Processing the input
  square = a * a; 
  cube = a * a * a;

  // Output
  printf("Square of the number = %d\n", square);
  printf("Cube of the number = %d\n", cube);
  printf("Processed Successfully.\n");
}
