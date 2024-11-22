#include <stdio.h>

typedef struct
{
  char a; // 1 byte
  char b; // 1 byte
  int c;  // 4 bytes
} abc;

typedef struct
{
  char a;
  int c;
  char b;
} abc1;

int main()
{
  // n bit processor means it can read n/8 bytes at a time

  abc a;
  printf("Size of struct: %d\n", sizeof(a));

  abc1 a1;
  printf("Size of struct: %d\n", sizeof(a1));
}
