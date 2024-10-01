/**string :- is a group of chraters or sequence of characters
 * like character array
 */

// #include <stdio.h>
// void main()
// { // compiler returns "int" defautly

//   char myName[] = {'l', 'u', 'c', 'k', 'y', '\0'} ; // a group of characters are enclosed by codes and seperated by commas

//   //char myName[] = "lakshman"; //string literal:- complier which identifies the null character defualtly

//   // string traversing: - accessing each and every character in the string from 0th index to null value

//   for (int count = 0; myName[count] != '\0'; count++)
//   {

//     printf("%c", myName[count]);
//   }
// }

// double dimensional character array(array of string)

#include <stdio.h>
int main()
{

  char myName[3][10] = {// rows---> size is optional //col-->[10] means character's range
                        "lakshman",
                        "ram",
                        "teja"};

  int rows;

  for (rows = 0; rows < 3; rows++)
  {
    printf("Enter string-%d :- ", rows + 1);
    gets(myName[rows]);
  }

  for (rows = 0; rows < 3; rows++)
  {
    puts(myName[rows]);
  }
}
