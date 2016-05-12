/*****************************************************
 * NAME: assignment_4.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to find the Area of Circle.      *
 *                                                   *                          
 * DATE: 30/04/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

#define pi 3.14159265

int main()
{
  // Variables:
  float radius, area;

  // User Input:
  printf("Welcome to Circle Area Calculator Program.\n");
  printf("Enter Radius of circle in metres: ");
  scanf("%f", &radius);

  // Processing of Input:
  area = pi * radius * radius;

  // Output:
  printf("Area of the Circle = %f sq. m\n", area);
}
