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

 // Pyramid Variables:
 struct Pyramid_Var { 
   int i, j, k;
   int num;
 }p;



int main()
{ 
  // Pyramid 1:
  printf("Welcome to Pyramid #1.\n");
  printf("Enter the loop repeat number (rows): ");
  scanf("%d", &p.num);

  for (p.i = 1; p.num >= p.i; p.i++) {
    for (p.j = 1; p.j <= p.i; p.j++) {
      printf("*");
    }
    printf("\n"); 
  }


  // Pyramid 2
  printf("Pyramid #2\n");
  printf("Enter the loop repeat number (rows): ");
  scanf("%d", &p.num);

  for (p.i = 1; p.num >= p.i; p.i++) {
    for (p.j = 1; p.j <= p.i; p.j++) {
      printf("%d",p.j);
    }
    printf("\n");
  }

  // Pyramid 3
  printf("Pyramid #3\n");
  printf("Enter the loop repeat number (rows): ");
  scanf("%d", &p.num);

  for (p.i = 1; p.num >= p.i; p.i++) {
    for (p.j = 1; p.j <= p.i; p.j++) {
      printf("%d", p.i);
    }
    printf("\n");
  }

  // Pyramid 4
  printf("Pyramid #3\n");
  printf("Enter the loop repeat number (rows): ");
  scanf("%d", &p.num);

  for (p.i = 1; p.num >= p.i; p.i++) {
    for (p.j = 1; p.j <= p.i; p.j++) {
      
    printf("*");
    }
}
