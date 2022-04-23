#include<stdio.h>
#include "sum.c"
#include "sqr.c"
int main()
{
  int a,b,c,d;
  a=10, b=20;
  c=sum(a,b);
  d=square(a);
  printf("Sum of a & b is %d", c);
  printf("Square of a is %d", d);
  return 0;
}
