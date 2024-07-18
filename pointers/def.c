#include<stdio.h>
int main(){

  int a = 100;

  //declaring pointer variable
  int *b = &a;

  //b = &a;


  //printf("value of a is....%d and address of a is....%u", a, &a);

  printf("access the value at address of a is.....%d", *b);
}