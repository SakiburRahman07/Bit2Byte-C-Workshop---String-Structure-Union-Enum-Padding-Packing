#include <stdio.h>
int main()
{
  printf("Enter the string : \n");
  char input[100];
  fgets(input, 100, stdin);
  printf("String before conversion : %s\n", input);
  int len = 0;
  while (input[len] != '\0')
  {
    len++;
  }
  len--;
  printf("Length of the string : %d\n", len);

  for (int i = 0; i < len / 2; i++)
  {
    char temp = input[i];
    input[i] = input[len - i - 1];
    input[len - i - 1] = temp;
  }
  printf("String after conversion : %s\n", input);
}