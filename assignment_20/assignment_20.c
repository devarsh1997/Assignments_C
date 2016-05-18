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
 * DATE: 18/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Variables:
  int i, j, k, l, m;
  int num, remainder;
  int ans, fib_1, fib_2, fib_val;
  int table_var, product, reverse_var = 0;
  int max_so_far = -1; // -1 so it is less than any digit in a given number

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

  // Program G
  printf("Program prints reverse number of the given input number.\n");
  printf("Enter a number below of your choice:");
  scanf("%d", &m);

  /*******************************************
   * Note the use of Mod operator with While * 
   *******************************************/

  while (m != 0) {
    reverse_var = reverse_var * 10;
    reverse_var = reverse_var + m % 10;
    m = m/10;
  }

  printf("Reverse of the input number = %d\n", reverse_var);

  // Program H
  printf("The function of the given program is to find max digit in a given number.\n");

 printf("Enter a positive integer of your choice here:");
 scanf("%d", &num);
 

 while (true) {
   if (num == 0) {
     break;
   }

   else {
     while (num > 0) {
       remainder = num % 10;

       if (remainder > max_so_far) {
	 max_so_far = remainder;
       }

       num = num/10;
 
     }

   }
 }
 printf("Max digit = %d\n", max_so_far);
}

