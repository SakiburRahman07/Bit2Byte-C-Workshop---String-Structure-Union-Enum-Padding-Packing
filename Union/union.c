#include <stdio.h>
#include <string.h>
union abc
{
  int a;
  char b;
} var;

typedef struct
{
  int a;
  char b;
} demo;

int main()
{
  demo d = {10, 'A'};
  printf("Address of a: %p\n", &d.a);
  printf("Address of b: %p\n", &d.b);

  // address of union
  printf("Address of a: %p\n", &var.a);
  printf("Address of b: %p\n", &var.b);

  var.a = 65;
  printf("Value of a: %d\n", var.a);
  printf("Value of b: %c\n", var.b);

  printf("Size of union: %d\n", sizeof(var));
}