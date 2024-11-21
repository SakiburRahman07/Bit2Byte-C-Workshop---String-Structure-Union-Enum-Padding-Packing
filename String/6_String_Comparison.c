#include <stdio.h>
#include <string.h>
int main()
{
      printf("Enter 1st string:\n");
    char s1[100];
    fgets(s1, 100, stdin);

    printf("Enter 2nd string:\n");
    char s2[100];
    fgets(s2, 100, stdin);

    int len1 = 0;
    while (s1[len1] != '\0') {
        if (s1[len1] == '\n') { // Remove newline character if present
            s1[len1] = '\0';
            break;
        }
        len1++;
    }

    int len2 = 0;
    while (s2[len2] != '\0') {
        if (s2[len2] == '\n') { // Remove newline character if present
            s2[len2] = '\0';
            break;
        }
        len2++;
    }

    int min_len = len1 < len2 ? len1 : len2;
    int flag = 0;

    for (int i = 0; i < min_len; i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] > s2[i]) {
                printf("First string is greater\n");
            } else {
                printf("Second string is greater\n");
            }
            flag = 1;
            break;
        }
    }

    // If no difference was found in the loop

    if (flag == 0) {
        if (len1 == len2) {
            printf("Both strings are equal\n");
        } else if (len1 > len2) {
            printf("First string is greater\n");
        } else {
            printf("Second string is greater\n");
        }
    }

    // using strcmp function
    int res = strcmp(s1, s2);
    printf("Result: %d\n", res);
    if (res == 0)
    {
      printf("Equal\n");
    }
    else if (res > 0)
    {
      printf("First string is greater\n");
    }
    else
    {
      printf("Second string is greater\n");
    }
  }