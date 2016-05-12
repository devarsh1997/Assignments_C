/*****************************************************
 * NAME: assignment_12.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to check if a number is prime    *
 *           or not.                                 *
 *                                                   *                          
 * DATE: 03/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Variable:
  int input_numb;
  int i = 2;

  // User Input:
  printf("Welcome to prime number checker program.\n");
  printf("Enter a number to be checked: ");
  scanf("%d", &input_numb);

  // Input & Output:
  
  /*******************************************************************
   * For Loop components in ():                                      *
   * Initialization/ Declaration, Condition Checking, Counter Modify *
   *******************************************************************/
  
  for(i = 2; i < input_numb || input_numb == 2; i++){
    
    if(input_numb % i == 0) {
      printf("The number, %d, is not prime.\n", input_numb);
      break;
    }

    else if(i == (input_numb - 1)) {
      printf("The number, %d, is prime.\n", input_numb);
      break;
    }
       
  }

  if (input_numb == 0 || input_numb == 1) {
    printf("Restart the program and enter a positive integer greater than 1.\n");
  }

  printf("Processed completely.\n");
} 
