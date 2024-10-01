/** Primarydatatypes:- int, float, char, double
 * DerivedDatatypes:- Array, strings, functions,
 */

#include <stdio.h>
int main()
{

  // Name, age, DOB, Mob_num, degree, College, designation, company, location, salaray
  int age;
  long long dob;
  long long mob_num;
  long long salary;
  char name[120], qualification[12], college[100], designation[70], company[100], location[100];

  printf("......Personal Details.......");

  printf("\n Enter your Name:- ");
  scanf("%[^\n]", &name);

  printf("\n Enter your Age:- ");
  scanf("%d", &age);

  printf("\n Enter your DateOfBirth:- ");
  scanf("%lld", &dob);

  printf("\n Enter your MobileNumber:- ");
  fflush(stdin);
  scanf("%lld", &mob_num);

  printf("\n Enter your Qualification:- ");
  fflush(stdin);
  scanf("%s", &qualification);

  printf("\n Enter your College:-  ");
  fflush(stdin);
  scanf("%[^\n]", &college);

  printf("\n Enter your Desgination:-  ");
  fflush(stdin);
  scanf("%[^\n]", &designation);

  printf("\n Enter your Company:-  ");
  fflush(stdin);
  scanf("%[^\n]", &company);

  printf("\n Enter your Salary:-  ");
  scanf("%lld", &salary);

  printf("\n Enter your Location:-  ");
  fflush(stdin);
  scanf("%[^\n]", &location);

  printf("Name is...%s", name);
  printf("\n Age is...%d", age);
  printf("\n DateOfBirth is...%lld", dob);
  printf("\n MobileNumber is...%lld", mob_num);
  printf("\n Qualification is...%s", qualification);
  printf("\n College is...%s", college);
  printf("\n Designtion is...%s", designation);
  printf("\n Company is...%s", company);
  printf("\n Salary is...%lld", salary);
  printf("\n Location is...%s", location);

  return 0;
}