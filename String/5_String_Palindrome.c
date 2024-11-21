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

    for (int i = 0; i < len / 2; i++)
    {
        if (input[i] != input[len - i - 1])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
}