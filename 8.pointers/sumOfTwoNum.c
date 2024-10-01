#include <stdio.h>
int main()
{

  int a, b;
  a = 100;
  b = 200;

  // declaring pointer variable
  int *c = &a;
  int *d = &b;

  int e = *c + *d;

  printf("sum of two numbers is.....%d", e);
}