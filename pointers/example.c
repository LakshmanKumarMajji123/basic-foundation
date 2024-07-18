/** it stores the address of another variable
 * 
 * datatype *variable_name
 */

#include<stdio.h>
int main(){

  int a = 100;

  int *b; //*  which access the value t address location
  b = &a; //ordinary varialbe address is stores in the b

  printf("\n value of a is.....%d", a);
  printf("\n  value at address of variable 'b' is...%d", *b);
  printf("\n Address of a is....%u", b);


  
}