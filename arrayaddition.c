#include<stdio.h>
int input(int a[], int* x)
{
        int n,i;
        printf("Enter the no of elements \n");
        scanf("%d",x);
        n=*x;
        printf("Enter the array elements \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}
int add(int a[],int n)
{

        int sum,i;
        sum=0;
        for(i=0;i<n;i++)
        {
                sum=sum+a[i];
        }
        return sum;
}
int output(int p)
{
        printf("Sum = %d \n",p);

}
int main()
{
        int a[10],n,p;
        input(a,&n);
        p=add(a,n);
        output(p);
}
