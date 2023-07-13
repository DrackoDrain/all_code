// function taking no argument with no retyrn type //

#include<stdio.h>
int x,y,z;
void sum();
void main()
{
    sum();
}
void sum()
{
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
    
}