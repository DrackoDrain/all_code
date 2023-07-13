// function taking no argument with no return type //

#include<stdio.h>
int x,y,z=0;
int sum()
{
    
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
    
}
void main()
{
  sum(x,y);
}