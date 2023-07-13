// Function taking argument but do not return any value //
// Category 2 //

#include<stdio.h>
void sum(int x,int y);
int x,y,z;
void main()
{
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    sum(x,y);
    getch();
}
void sum(int x,int y)
{
    z=x+y;
    printf("sum=%d",z);
}