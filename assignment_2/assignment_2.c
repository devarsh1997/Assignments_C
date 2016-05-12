/*****************************************************
 * NAME: assignment_2.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: program to make addition, Subtraction,   *
 *          Multiplication and Division              *
 *          of Two Numbers.                          *
 *                                                   * 
 * DATE: 29/04/2016                                  *
 *                                                   *
 *****************************************************/


#include <stdio.h>

int main()
{
  // Declaration of Variables
  int a, b;
  int add, subtract, multiply;
  float divide;

  // Requesting user input of two numbers
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number:");
  scanf("%d", &b);

  // Processing the input
  add = a + b;
  subtract = a - b;
  multiply = a * b;
  divide =(float) a / b;

  // Displaying the output
  printf("Sum = %d\n", add);
  printf("Difference = %d\n", subtract);
  printf("Product = %d\n", multiply);
  printf("Division = %e\n", divide);
  printf("Processed Successfully\n");
}
