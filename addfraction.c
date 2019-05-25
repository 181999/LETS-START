#include<stdio.h>
struct fract
{
        int n,d;
};
int input(struct fract* a,struct fract* b,struct fract* c,struct fract* d)
{
        printf("Enter the first fraction \n");
        scanf("%d/%d",&a->n,&b->d);
        printf("Enter the second fraction \n");
        scanf("%d/%d",&c->n,&d->d);
}
int add(struct fract a,struct fract b,struct fract c,struct fract d,int* num,int* den)
{
        if(b.d==d.d)
        {
                *num=a.n+c.n;
                *den=b.d;
        }
        else
        {
                *num=(a.n*d.d)+(c.n*b.d);
                *den=(b.d*d.d);
        }
}
int output(int num,int den)
{
        printf("\nAnswer =  %d/%d",num,den);
}
int main()
{
        struct fract a,b,c,d;
        int num,den;
        input(&a,&b,&c,&d);
        add(a,b,c,d,&num,&den);
        output(num,den);
}
