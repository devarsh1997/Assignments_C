/*****************************************************
 * NAME: assignment_8.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to to show swap of two Numbers   *
 *           without using third variable.           *
 *                                                   *                          
 * DATE: 02/05/2016                                  *
 *                                                   *
 *****************************************************/

/*****************************************************
 * Chart:                                            *
 *       SR NO. |   a   |    b                       *
 *         0    |   10  |    20                      *
 *         1    |   30  |    20                      *
 *         2    |   30  |    10                      *
 *         3    |   20  |    10                      *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of variables:
  int a = 10, b= 20;

  // Processing of variables:
  a = a + b;          
  b = a - b;   
  a = a - b;

  /*****************************************
   * WOW! What a way to solve the problem. *
   *****************************************/

  // Display of output:
  printf("a = %d, b = %d\n", a, b);
}
