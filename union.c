#include<stdio.h>
#include<string.h>
union abc{
  int a;
  char b;
} var;

int main()
{
  var.a=65;
  printf("Value of a: %d\n", var.a);
  printf("Value of b: %c\n", var.b);
}