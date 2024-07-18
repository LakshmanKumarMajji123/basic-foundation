#include <stdio.h>

// globaldecalration
int a, b, temp;

int main()
{

  // func declaration
  void swapOfNum(void);

  // take inputs from the user
  printf("Enter numbers :- ");
  scanf("%d%d", &a, &b);

  swapOfNum();
  printf("\n Value of A is....%d", a);
  printf("\n Value of B is...%d", b);
}

void swapOfNum(void)
{

  temp = a;
  a = b;
  b = temp;

  // printf("a---%d and b----%d", sachin, virat);
}