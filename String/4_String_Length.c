#include<stdio.h>
#include<string.h>
int main()
{
  printf("Enter the string : \n");
  char input[100];
  fgets(input, 100, stdin);
  int len = 0;
  while (input[len] != '\0')
  {
    len++;
  }
  len--;
  printf("Length of the string : %d\n", len);

  //using strlen function

  printf("Length of the string : %ld\n", strlen(input));



}