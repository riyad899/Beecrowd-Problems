#include <stdio.h>

int main() {
  char name1 [30];
  char name2 [30];
  char name3 [30];
  char school[30];
  char college[30];
 int age;
 char number [12];
  float GPA;
  printf("Enter your name:");
 scanf ("%[^\n]",name1);
printf("Enter fathers name:");
 scanf ("%[^\n]",name2);
 printf("Enter fathers name:");
 scanf ("%[^\n]",name3);
 printf("Enter age:");
 scanf("%d", &age);
 printf("Enter phone number:");
   scanf("%s",&number);
printf("Enter School name:");
  scanf(" %[^\n]", school);
 printf("Enter SSC GPA:");
  scanf("%f", &GPA);
printf("Enter college name:");
 scanf(" %[^\n]", college);
 printf("Enter HSC GPA:");
   scanf("%f",&GPA);

  printf("your age is: %d \n", age);
  printf("you name is: %s \n",name1);
  printf("you father's name is: %s \n",name2);
  printf("you father's name is: %s \n",name3);
  printf("your phone is: %s \n",number);
  printf("your school name is: %s \n",school);
  printf("your SSC GPA is: %f \n",GPA);
  printf("your college name is: %s \n",college);
  printf("your HSC GPA is: %f \n",GPA);
return 0;
}