/**Arithematic operators(+, -, *, /, %)
 * Assignement operators(=, +=, -=, *=)
 * logical operaotors(&&, ||, !)
 * comparison operators(==, !=, >=, <= , <, >) as well as Relational operators
 * Terinary operator( ? :)
 *
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{

  // declaration and intialization
  // int a = 10; //10 assign to a
  // int b = 200;

  // int c = a + b;
  // int d = a - b;
  // int e = a * b;
  // int f = a / b;
  // int g = a % b;

  // printf("\n Addition of A and B is....%d + %d = %d", a, b, c);
  // printf("\n Subtraction of A and B is....%d - %d = %d", a, b, d);
  // printf("\n Multiplication of A and B is....%d * %d = %d", a, b, e);
  // printf("\n Divison of A and B is....%d / %d = %d", a, b, f);
  // printf("\n Modulus of A and B is....%d (%) %d = %d", a, b, g);

  // if your graduation is completed and get the degree then you are eligible for the job

  char status, course_status, interviewer, response, appear, process, profile;
  int final_percentage;

  do
  {
    printf("\n Enter your Graduation Status [Y]es/[N]o:- ");
    fflush(stdin);
    scanf("%c", &status);

    if ((status == 'y') || (status == 'Y'))
    {

      printf("\n Enter course certificate Status [Y]es/[N]o:-  ");
      fflush(stdin);
      scanf("%c", &course_status);

      if ((course_status == 'y') || (course_status == 'Y'))
      {

        printf("\n You are Eligible... please do further process below");

        printf("\n please Enter your final percentage :- ");
        scanf("%d", &final_percentage);

        if ((final_percentage >= 65) || (final_percentage <= 100))
        {
          printf("\n You are Elgible for the Interview...Be Ready");

          printf("\n Interviewer result [S]/[N]:- ");
          fflush(stdin);
          scanf("%c", &interviewer);

          if ((interviewer == 'S') || (interviewer == 's'))
          {

            printf("\n Your profile is suiatable for this postion 'Selected'");

            printf("\n wait for the 'Offer Letter' Thankyou!");
            exit(0);
          }
          else
          {
            printf("\n Not selected");
          }
        }
        else
        {
          printf("\n you profile doesnot meet the percentage criteria..");
        }
      }
      else
      {
        printf("\n Please sumbit your Course certificate It is mandotary for the Selection process...");
      }
    }
    else
    {
      printf("Please Complete your graduation.......ThankYou!");
    }

    printf("\n once your are not selected you are appeared for the 6 months later");

    printf("\n Do you want to Appeared for the Process Again [Y]es/[N]o :- ");
    fflush(stdin);
    scanf("%c", &response);

    if ((response == 'y' || response == 'Y'))
    {
      printf("\n Are you Appered for the Interview process within Six months [Y]es/[N]o:- ");
      fflush(stdin);
      scanf("%c", &appear);

      if ((appear == 'y') || (appear == 'Y'))
      {
        printf("\n Sorry your are not meet the Eligiblilty criteria");
        exit(0);
      }
      else if ((appear == 'n') || (appear == 'N'))
      {
        printf("\n please do the process for click [Y]es/[N]o :- ");
        fflush(stdin);
        scanf("%c", &process);
      }
    }
    else
    {
      printf("Thankyou!");
      exit(0);
    }

  } while (process == 'y' || (process == 'Y'));
}