/**
 * functions :- a reusable block of code
 *
 * u can use anywhere in your program when it needs
 *
 * 1.function declaration
 * 2. function invockation
 * 3. function definition
 *
 *
 */

#include <stdio.h>
int main()
{

  int numbers[2];

  // func declaration
  void AddTwoNum(int[]); // return_type func_name inputs

  for (int i = 0; i < 2; i++)
  {

    printf("Enter number-%d :- ", i + 1);
    scanf("%d", &numbers[i]);
  }

  AddTwoNum(numbers);
}

// func definition

void AddTwoNum(int numbers[])
{

  int sum = 0;
  for (int i = 0; i < 2; i++)
  {

    // printf("\n  %d- %d", i + 1, numbers[i]);

    sum = sum + numbers[i];
  }

  printf("sum of two numbers is....%d", sum);
}
