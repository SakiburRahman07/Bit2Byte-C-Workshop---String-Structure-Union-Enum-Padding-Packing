#include <stdio.h>

int main()
{
  printf("Enter the string : \n");
  char input[100];
  fgets(input, 100, stdin);
  printf("String before conversion : %s\n", input);

  for (int i = 0; input[i] != '\0'; i++)
  {
    if (input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
    {
      input[i] -= 32;
    }
  }

  printf("String after conversion : %s\n", input);
}