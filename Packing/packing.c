#include<stdio.h>
//pragma is a special purpose directive used to turn on or off some features.
//pack is used to specify the alignment of the structure members
#pragma pack(1)
typedef struct 
{
  char a;
  int b;
  char c;
} abc;
int main()
{
  abc a;
  printf("Size of struct: %d\n", sizeof(a));
}