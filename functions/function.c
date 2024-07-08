#include <stdio.h>
int a = 10;
int b = 20;
int main()
{
  // func declare

  int charan(int, int);

  // func call
  charan(a, b);
  printf("\n A value is.....%d", a);
  printf("\n A value is.....%d", b);
}

// func definition
int charan(int x, int y)
{

  int temp;
  temp = a;
  a = b;
  b = temp;
}