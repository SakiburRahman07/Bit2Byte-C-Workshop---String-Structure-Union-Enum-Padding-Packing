#include <stdio.h>
#include <string.h>
// macro

#define bit2byte 7

enum color
{
  RED,
  GREEN,
  BLUE
};
int main()
{
  // declare enum locally
  enum weather
  {
    sunny,
    rainy,
    cloudy
  };
  enum color c;
  c = RED;
  printf("Value of c: %d\n", c);

  //why we use enum
  // 1 -> enums can be declared in the local scope
  // 2 -> enum names are automatically initialized by the compiler 

  printf("value of bit2byte: %d\n", bit2byte);

  enum weather w;
  w = rainy;
  printf("Value of w: %d\n", w);

  // two or more names can have the same value
  enum point {x = 0, y = 0, z = 0};
  enum point p;
  p = y;
  printf("Value of p: %d\n", p);
  printf("Value of x: %d\n", x);
  printf("Value of y: %d\n", y);
  printf("Value of z: %d\n", z);

  //we can assign vlaues in any order. All unassigned values are incremented by 1
  enum month {jan = 5, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
  enum month m;
  m = feb;
  printf("Value of m: %d\n", m);
  printf("Value of jan: %d\n", jan);	
  printf("Value of feb: %d\n", feb);
  printf("Value of mar: %d\n", mar);
  printf("Value of apr: %d\n", apr);
  printf("Value of may: %d\n", may);
  printf("Value of jun: %d\n", jun);
  printf("Value of jul: %d\n", jul);
  printf("Value of aug: %d\n", aug);
  printf("Value of sep: %d\n", sep);
  printf("Value of oct: %d\n", oct);
  printf("Value of nov: %d\n", nov);
  printf("Value of dec: %d\n", dec);


  //only integer value are allowed

  enum day {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

  enum day d;
  d = mon;
  printf("Value of d: %d\n", d);

  //all enum constant must be unique in their scope

  enum week {sun1 = 1, mon1 = 2, tue1 = 3, wed1 = 4, thu1 = 5, fri1 = 6, sat1 = 7};




}