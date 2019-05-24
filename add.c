#include<stdio.h>
int input(int* a, int* b)
{
printf("Enter 2 num \n");
scanf("%d%d",a,b);
}
int add(int x, int y)
{
int s;
s=x+y;
  return s;
}
int output(int m)
{
printf("ans is = %d",m);
}
int main()
{
int c,d,a;
input(&c,&d);
a=add(c,d);
output(a);
}
