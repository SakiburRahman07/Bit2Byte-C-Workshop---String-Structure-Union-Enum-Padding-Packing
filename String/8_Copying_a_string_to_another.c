#include<stdio.h>
#include<string.h>
int main()
{
  printf("Enter the 1st string: ");
  char str1[100], str2[100];
  gets(str1);

  printf("Enter the 2nd string: ");
  gets(str2);

  int len1=0;
  int len2=0;
  while(str1[len1] != '\0'){
    if(str1[len1] == '\n'){
      str1[len1] = '\0';
      break;
    }
    len1++;
  }
  while(str2[len2] != '\0'){
    if(str2[len2] == '\n'){
      str2[len2] = '\0';
      break;
    }
    len2++;
  }

    

    for(int i=0; i<len2; i++)
    {
      str1[i]=str2[i];
    }
    str1[len2]='\0';

    printf("The copied string is: %s", str1);

}