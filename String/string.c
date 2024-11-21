#include<stdio.h>
#include<string.h>
int main()
{
    //string character array
    char str[100] =  {'H', 'e', 'l', 'l', 'o', '\0'};

    char str1[100] = "Hello";

    //string declaration 

    //char str2[]; error
    char str3[30];
    char str4[] = "Hello";

    //print string 
    printf("String: %s\n", str);

    //input and output
    char str5[100];
    char str6[100];
    // scanf("%s", str5);
    // printf("String: %s\n", str5);

    // fgets(str6, 100, stdin);
    // printf("String: %s\n", str6);

    //string length
    printf("Length of str: %ld\n", strlen(str));

    char old[100] = "old";
    char new[100] = "new";

    strcpy(old, new);
    printf("Old: %s\n", old);

    //strcat

    char s1[100] = "Hello";
    char s2[100] = "World";
    strcat(s1, s2);
    printf("String: %s\n", s1);

    //strcmp
    char s3[100] = "B";
    char s4[100] = "A";

    int res = strcmp(s3, s4);
    printf("Result: %d\n", res);


    //strstr

    char s5[100] = "Hello World";
    char s6[100] = "World";
    char *pos = strstr(s5, s6);
    if(pos){
        printf("%ld", pos - s5);
    } else {
        printf("Not found\n");
    }


}