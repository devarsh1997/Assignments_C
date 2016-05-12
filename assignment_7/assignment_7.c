/*****************************************************
 * NAME: assignment_7.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to convert temperature from      *
 *           degree centigrade to fahrenheit.        *
 *                                                   *                          
 * DATE: 01/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of variables:
  float centigrade, fahrenheit;

  // User Input:
  printf("Welcome to Temperature Converter program.\n");
  printf("Enter the temperature in centigrade:");
  scanf("%f", &centigrade);


  // Processing of Input:
  fahrenheit = 32 +((9.0/5) * centigrade);

  // Display of Input:
  printf("Temperature in fahrenheit: %f\n", fahrenheit);
  printf("Processed completely.\n");
}
