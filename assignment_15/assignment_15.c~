/*****************************************************
 * NAME: assignment_15.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Program to to find the Min number from   *
 *           the input set using nested if.          *
 *                                                   *                          
 * DATE: 04/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>


int main()
{
  // Variables:
  int a1, a2, a3;

  // User input:
  printf("Enter three positive integers below with one space b/w each:\n");
  scanf("%d %d %d", &a1, &a2, &a3);

  // Processing and I/O:
  if (a1 == a2 == a3) {
    printf("%d is the min from the given set.\n", a1);
  }

  else if (a1 == a2) {
    if (a1 < a3) {
      printf("%d is the min from the given set.\n", a1);
    }

    else {
      printf("%d is the min from the given set.\n", a3);
    }
  }

  else if (a1 == a3) {
    if (a1 < a2) {
      printf("%d is the min number from the given set.\n", a1);
    }

    else {
      printf("%d is the min number from the given set.\n", a2);
    }
  }  

  else if (a2 == a3) {
    if (a2 < a1) {
      printf("%d is the min number from the given set.\n", a2);
    }

    else {
      printf("%d is the min number from the given set.\n", a1);
    }  
    
  }


  else if (a1 < a2) {
    if (a1 < a3) {
      printf("%d is the min from the given set.\n", a1);
    }

    else if (a3 < a1) {
      printf("%d is the min from the given set.\n", a3);
    }

  }

  else {
    if (a2 < a3) {
      printf("%d is the min from the given set.\n", a1);
    }

    else if (a3 < a2) {
      printf("%d is the min from the given set.\n", a3);
    }
  }    
}
