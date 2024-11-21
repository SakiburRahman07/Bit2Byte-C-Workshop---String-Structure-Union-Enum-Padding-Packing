#include<stdio.h>
#include<string.h>
int main()
{
  printf("Enter the first string: \n");
  char s1[100];
  fgets(s1, 100, stdin);
  printf("Enter the second string: \n");
  char s2[100];
  fgets(s2, 100, stdin);
  int len1 = 0;
  while(s1[len1] != '\0'){
    if(s1[len1] == '\n'){
      s1[len1] = '\0';
      break;
    }
    len1++;
  }
  int len2 = 0;
  while(s2[len2] != '\0'){
    if(s2[len2] == '\n'){
      s2[len2] = '\0';
      break;
    }
    len2++;
  }

  for(int i = len1, j=0 ; i< len1 + len2; i++,j++){
    if(s2[j] == '\0'){
      break;
    }
    s1[i] = s2[j];
  }

  s1[len1 + len2] = '\0';

  printf("Concatenated string: %s\n", s1);

  char s3[100] = "Bit2";
  char s4[100] = "Bytes";

  //using strcat function
  strcat(s3, s4);
  printf("Concatenated string using strcat : %s\n", s3);

}