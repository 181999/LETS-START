#include<stdio.h>
int input(int *a, int *b)
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
int a,b,s;
input(&a,&b);
s=add(a,b);
output(s);
}

