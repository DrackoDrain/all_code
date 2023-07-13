// function taking no argument with a return type //

#include<stdio.h>
int x,y,z;
int sum();
void main()
{
    z=sum();
}
int sum()
{
    printf("enter the value of x,y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
    return z;
}
