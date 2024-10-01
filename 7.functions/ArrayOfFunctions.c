#include <stdio.h>

int i, sum = 0;
int main()
{

  // array declaration
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // func declaration
  int sumOfNum(int arr[]); // here giving inputs as mulitple values

  printf("sum of all numbers is....%d", sumOfNum(arr)); // actual parameter which gives multiple values to the formal parameters
}

int sumOfNum(int arr[])
{

  for (i = 0; i < 10; i++)
  {

    sum = sum + arr[i];
  }

  return sum;
  //printf("%d", sum);
}