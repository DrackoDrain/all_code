// Function taking argument and returning a value //
// Category 4 //

#include<stdio.h>
int sum(int x, int y);
int x,y,z;
void main()
{
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
    getch();
}
int sum(int x,int y)
{
    z=x+y;
    return(z);
}