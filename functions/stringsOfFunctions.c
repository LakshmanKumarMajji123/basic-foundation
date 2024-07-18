#include <stdio.h>

int i, count = 0;
int main()
{

  // charcterarray declaration
  char myName[] = "Majji Lakshman Kumar";

  // func declaration
  void name(char myName[]); // take multiple inputs

  name(myName); // which pass mulitiple characters to the formal parameters
}

void name(char myName[])
{ // which recieves multiple charactes from the actual parameters

  for (i = 0; myName[i] != '\0'; i++)
  {

    if (myName[i] == ' ') // if control reaches space then increment the count
    {

      count = count + 1;
    }

    printf("%c", myName[i]);
  }

  printf("\n Total number of spaces in string is....%d", count);
}