/*****************************************************
 * NAME: assignment_18.c                             *  
 *                                                   *
 * AUTHOR: Devarsh Ruparelia                         *
 *                                                   *
 * EMAIL: devarsh.ruparelia@gmail.com                *
 *                                                   *
 * PURPOSE: Using Swtich statement create a calc     *                     
 *          program with the basic functions(+,-,*,/)*                     
 *                                                   *                          
 * DATE: 06/05/2016                                  *
 *                                                   *
 *****************************************************/

#include <stdio.h>

int main()
{
  // Declaration of variables:
  char c;
  int a, b;

  // User input:
  printf("Welcome to the Basic Calculator program.\n");
  printf("Enter two integers below that you want to operate on with one space b/w both:\n");
  scanf("%d %d", &a, &b);
  printf("Enter an operation of your choice from +, -, *, / below:\n");

  /*******************************************
   * Always keep one space before %c so that *
   * scanf get single char input correctly.  *
   *******************************************/
  
  scanf(" %c", &c);

  // Processing and I/O:
  switch(c) {
  case '+':
    printf("add: %d + %d = %d\n", a, b, a + b);
    break;

  case '-':
    printf("subtract: %d - %d = %d\n", a, b, a - b);
    break;

  case '*':
    printf("multiply: %d * %d = %d\n", a, b, a * b);
    break;

  case '/':
    printf("add: %d / %d = %d\n", a, b, a / b);
    break;

  default:
    printf("Restart the program and please input correctly.\n");
    break;

  }

  printf("Thank you for using the program.\n");

}
   
