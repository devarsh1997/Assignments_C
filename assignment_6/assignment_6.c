/*****************************************************
 * NAME: assignment_6.c                              *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to find the simple interest.     *
 *                                                   *                          
 * DATE: 01/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
 // Declaration of variables:
 float  principal, time, rate;
 float interest;

 // User Input:
 printf("Welcome to Simple Interest Calculator program.\n");
 printf("Enter the principal amount:");
 scanf("%f", &principal);
 printf("Enter the rate of interest (in per cent):");
 scanf("%f", &rate);
 printf("Enter the time of amount deposited in years:");
 scanf("%f", &time);

 // Processing the input:
 interest = (rate * time * principal) / 100;

 // Output
 printf("Simple interest = %f\n", interest);
 printf("Processed completely.\n");
}
