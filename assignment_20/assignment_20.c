/*****************************************************
 * NAME: assignment_20.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Some sample programs using loop          *
 *           constructs.                             *                     
 *                                                   *                        
 * DATE: 08/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Variables:
  int i, j, k, l, ans, fib_1, fib_2, fib_val;
  int table_var, product;


  // Program A
  for(i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }

  // Program B
  for(i = 51; (50 < i) && (i <= 60); i++) {
    printf("%d\n", i);
  }

  // Program C
  j = 100;
  while(j > 80) {
      printf("%d\n", j);
      j--;
  }

  // Program D
  printf("Welcome to factorial finder program.\n");
  printf("Enter a positive integer here of your choice:");
  scanf("%d", &k);

  ans = 1;

  for(i = 1; i <= k; i++) {
   ans = ans * i;
  }

  printf("%d\n", ans);

  // Program E
  
  /*****************************
   * Note the logic of program *
   *****************************/
  
  printf("This program prints Fibonacci Series up to user input value.\n");
  printf("Enter a number here of your choice:");
  scanf("%d", &l);

  fib_1 = 0;
  fib_2 = 1;

  for(i = 0; i <= l; i++) {

    if(i <= 1)
      fib_val = i;
    else {
      fib_val = fib_1 + fib_2;
      fib_1 = fib_2;
      fib_2 = fib_val;
    }
    printf("%d\n", fib_val); 
  }

  // Program F
  printf("This program prints the multiplication table of a number till 12.\n");
  printf("Enter a number of your choice:");
  scanf("%d",&table_var);

  for(i = 1; i <= 12; i++) {
    product = table_var * i;
    printf("%d * %d = %d\n", i, table_var, product);
  }

}
