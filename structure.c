#include<stdio.h>
#include<string.h>
typedef struct {
  char name[100];
  int roll;
  float cgpa;
} student;

struct Date {
  int day;
  int month;
  int year;
};

typedef struct {
  char name[50];
  struct Date dob;
}employee;



int main()
{
  employee emp1;
  emp1.dob.day = 1;
  emp1.dob.month = 1;
  emp1.dob.year = 1990;
  strcpy(emp1.name, "John Doe");
  printf("Name: %s\n", emp1.name);
  printf("DOB: %d-%d-%d\n", emp1.dob.day, emp1.dob.month, emp1.dob.year);

   student cse[100];
cse[0].roll = 1;
cse[0].cgpa = 9.5;
strcpy(cse[0].name, "John");

student str = {"John", 1, 9.5};
student *ptr = &str;

printf("Name: %s\n", (*ptr).name);
printf("Roll: %d\n", ptr->roll);
printf("CGPA: %.2f\n", ptr->cgpa);

printf("Name: %s\n", cse[1].name);

printf("Name: %s\n", cse[0].name);
printf("Roll: %d\n", cse[0].roll);
printf("CGPA: %.2f\n", cse[0].cgpa);




}

