/**Array is a variable which stores the mulitple values together of same datatype
 *
 * finite(range) collection of homogenous(similar) data stored in a contageous(continuous) memory location
 */
/**single dimensional array:-
 * read a btech student subjects for all sems 6 * 8 = 48
 */
// #include<stdio.h>
// int main(){

//   int arr[48] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//   for(int i = 0; i < 10; i++){

//     printf("\n %d", arr[i]);
//   }

// }

/**double-dimensional array:- which having rows and columns */

// #include <stdio.h>
// int main()
// {

//   // declaration and intialization
//   int student[][3] = {1, 2, 3, 4, 5, 6};

//   for (int sem = 0; sem < 3; sem++)
//   {
//     printf("\n Enter Sem-%d marks of all subjects", sem + 1);
//     for (int sub = 0; sub < 3; sub++)
//     {

//       printf("\n Enter sub-%d marks :- ", sub + 1);
//       scanf("%d", &student[sem][sub]);
//     }
//     printf("\n");
//   }

//   for (int sem = 0; sem < 3; sem++)
//   {
//     for (int sub = 0; sub < 3; sub++)
//     {

//       printf("\t %d", student[sem][sub]);
//     }

//     printf("\n");
//   }
// }

/**three-dimensional array:- read the 2 students marks of every subjects all sems */

#include <stdio.h>
int main()
{
  // declaration and intialization

  int students[2][3][3];

  for (int student = 0; student < 2; student++)
  {

    printf("\n Read student-%d all sem marks:- ", student + 1);
    for (int sem = 0; sem < 3; sem++)
    {
      printf("\n Enter sem-%d all subjects", sem + 1);

      for (int sub = 0; sub < 3; sub++)
      {
        printf("\n Enter sub-%d marks:- ", sub + 1);
        scanf("%d", &students[student][sem][sub]);
      }
      printf("\n");
    }
  }

  for (int student = 0; student < 2; student++)
  {

    for (int sem = 0; sem < 3; sem++)
    {

      for (int sub = 0; sub < 3; sub++)
      {
        printf("\t %d", students[student][sem][sub]);
      }
      printf("\n");
    }
  }
}