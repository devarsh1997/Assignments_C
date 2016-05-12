/*****************************************************
 * NAME: assignment_5.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to find the Area of a triangle.  *
 *                                                   *                          
 * DATE: 01/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
  // Declaration of Variables:
  float side1, side2, side3; 
  float sperimeter;
  double area;
  
  // User Input:
  printf("Welcome to the Triangle Area Calculator Program!\n");
  printf("Enter the values of sides below with one space between each:\n");
  scanf("%f %f %f", &side1, &side2, &side3);

  // Processing the Input:
  sperimeter = (side1 + side2 + side3)/2;
  area = (double)sqrt(sperimeter * (sperimeter - side1) * (sperimeter - side2) * (sperimeter - side3));

  // Output:
  printf("Area of the Triangle = %f\n", area);
  printf("Processed completely.\n");
}  
