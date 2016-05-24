 /*****************************************************
 * NAME: assignment_21.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Some sample Pyramid programs using loop  *
 *           constructs.                             *                     
 *                                                   *                        
 * DATE: 24/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Variables:
  int i, j;
  int num;


  // Pyramid 1:
  printf("Welcome to Pyramid #1.\n");
  printf("Enter the loop repeat number (rows): ");
  scanf("%d", &num);

  for (i = 1; num >= i; i++) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n"); 
  }

}
