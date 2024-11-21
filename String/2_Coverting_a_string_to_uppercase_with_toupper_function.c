#include <stdio.h>
#include <ctype.h>
int main()
{
  printf("Enter the string : \n");
  char input[100];
  fgets(input, 100, stdin);
  printf("String before conversion : %s\n", input);

  for (int i = 0; input[i] != '\0'; i++)
  {
    input[i]=toupper(input[i]);
  }

  printf("String after conversion : %s\n", input);
}