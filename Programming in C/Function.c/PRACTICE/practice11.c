// function taking argument with no return type //


#include<stdio.h>
int x,y,z;
void sum(int x,int y);
void main()
{
    sum(x,y);
}
void sum(int x,int y)
{
    printf("enter the two number");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum =%d",z);
}