/*****************************************************
 * NAME: assignment_17.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Using Swtich statement write a weekday   *
 *           displaying program.                     *
 *                                                   *                          
 * DATE: 06/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of variables:
  int day; 
 

  // User input:
  printf("Enter a number from 1 to 7 to display the day:");
  scanf("%d", &day);

  // Processing and I/O:
  switch(day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;

  }

  printf("Thank you for using the program.\n");

}
    
    
