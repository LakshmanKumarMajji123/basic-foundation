/**function:- means resuable block of code. u can use it anywhere in ur program where it needs
 *
 * 1. function declaration(function prototype)
 * 2. function invokation(func call)
 * 3. function definition
 *
 * by passing parameters at the time of func call are called "Actual parameters"
 * by receving parameters in the function definition part called "formal parameters"
 *
 * u can declare any variable before the Main func() is called "global declaration"
 *
 * call by value :- we can't change the actual variable values in the function
 * call be reference :- we can change the actula variable varlues in the funcion
 */

#include <stdio.h>

int main()
{

  // declaration
  int a, b, c;
  // intialization
  a = b = c = 0;

  // func declaration
  void addTwoNum(int, int); // return type func_name parameters

  printf("Enter your numbers :- ");
  scanf("%d%d", &a, &b);

  addTwoNum(a, b); // actual parameters
}

// func definition
void addTwoNum(int num1, int num2)
{ // formal parameters

  int num3;

  num3 = num1 + num2;

  // return num3;

  printf("sum of %d and %d = %d", num1, num2, num3);
}